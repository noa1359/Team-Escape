#if UNITY_EDITOR
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Net.Mail;
using UnityEditor;
using UnityEngine.ResourceManagement.AsyncOperations;
using UnityEngine.ResourceManagement.ResourceLocations;
using UnityEngine.ResourceManagement.Util;

namespace UnityEngine.ResourceManagement.ResourceProviders
{
    /// <summary>
    /// Provides assets loaded via the AssetDatabase API.  This provider is only available in the editor and is used for fast iteration or to simulate asset bundles when in play mode.
    /// </summary>
    [DisplayName("Assets from AssetDatabase Provider")]
    public class AssetDatabaseProvider : ResourceProviderBase
    {
        float m_LoadDelay = .1f;

        /// <summary>
        /// Default constructor.
        /// </summary>
        public AssetDatabaseProvider() {}

        /// <summary>
        /// Constructor that allows for a sepcified delay for all requests.
        /// </summary>
        /// <param name="delay">Time in seconds for each delay call.</param>
        public AssetDatabaseProvider(float delay = .25f)
        {
            m_LoadDelay = delay;
        }

        internal static Object[] LoadAssetsWithSubAssets(string assetPath)
        {
            var subObjects = AssetDatabase.LoadAllAssetRepresentationsAtPath(assetPath);
            var allObjects = new Object[subObjects.Length + 1];
            allObjects[0] = AssetDatabase.LoadMainAssetAtPath(assetPath);
            for (int i = 0; i < subObjects.Length; i++)
                allObjects[i + 1] = subObjects[i];
            return allObjects;
        }

        class InternalOp
        {
            ProvideHandle m_ProvideHandle;
            bool m_Loaded;
            public void Start(ProvideHandle provideHandle, float loadDelay)
            {
                m_Loaded = false;
                m_ProvideHandle = provideHandle;
                m_ProvideHandle.SetWaitForCompletionCallback(WaitForCompletionHandler);
                if (loadDelay < 0)
                    LoadImmediate();
                else
                    DelayedActionManager.AddAction((Action)LoadImmediate, loadDelay);
            }

            private bool WaitForCompletionHandler()
            {
                LoadImmediate();
                return true;
            }

            void LoadImmediate()
            {
                if (m_Loaded)
                    return;
                m_Loaded = true;
                string assetPath = m_ProvideHandle.ResourceManager.TransformInternalId(m_ProvideHandle.Location);
                object result = null;
                if (m_ProvideHandle.Type.IsArray)
                {
                    result = ResourceManagerConfig.CreateArrayResult(m_ProvideHandle.Type, LoadAssetsWithSubAssets(assetPath));
                }
                else if (m_ProvideHandle.Type.IsGenericType && typeof(IList<>) == m_ProvideHandle.Type.GetGenericTypeDefinition())
                {
                    result = ResourceManagerConfig.CreateListResult(m_ProvideHandle.Type, LoadAssetsWithSubAssets(assetPath));
                }
                else
                {
                    if (ResourceManagerConfig.ExtractKeyAndSubKey(assetPath, out string mainPath, out string subKey))
                    {
                        var objs = AssetDatabase.LoadAllAssetRepresentationsAtPath(mainPath);
                        foreach (var o in objs)
                        {
                            if (o.name == subKey)
                            {
                                if (m_ProvideHandle.Type.IsAssignableFrom(o.GetType()))
                                {
                                    result = o;
                                    break;
                                }
                            }
                        }
                    }
                    else
                    {
                        var obj = AssetDatabase.LoadAssetAtPath(assetPath, m_ProvideHandle.Location.ResourceType);
                        result = obj != null && m_ProvideHandle.Type.IsAssignableFrom(obj.GetType()) ? obj : null;
                    }
                }
                m_ProvideHandle.Complete(result, result != null, result == null ? new Exception($"Unable to load asset of type {m_ProvideHandle.Type} from location {m_ProvideHandle.Location}.") : null);
            }
        }

        /// <inheritdoc/>
        public override bool CanProvide(Type t, IResourceLocation location)
        {
            return base.CanProvide(t, location);
        }

        public override void Provide(ProvideHandle provideHandle)
        {
            new InternalOp().Start(provideHandle, m_LoadDelay);
        }
    }
}
#endif
