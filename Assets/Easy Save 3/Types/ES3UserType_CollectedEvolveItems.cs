using System;
using UnityEngine;

namespace ES3Types
{
	[UnityEngine.Scripting.Preserve]
	[ES3PropertiesAttribute("itemType", "itemAmount")]
	public class ES3UserType_CollectedEvolveItems : ES3ObjectType
	{
		public static ES3Type Instance = null;

		public ES3UserType_CollectedEvolveItems() : base(typeof(CollectedEvolveItems)){ Instance = this; priority = 1; }


		protected override void WriteObject(object obj, ES3Writer writer)
		{
			var instance = (CollectedEvolveItems)obj;
			
			writer.WritePropertyByRef("itemType", instance.itemType);
			writer.WriteProperty("itemAmount", instance.itemAmount, ES3Type_int.Instance);
		}

		protected override void ReadObject<T>(ES3Reader reader, object obj)
		{
			var instance = (CollectedEvolveItems)obj;
			foreach(string propertyName in reader.Properties)
			{
				switch(propertyName)
				{
					
					case "itemType":
						instance.itemType = reader.Read<EvolveItem>();
						break;
					case "itemAmount":
						instance.itemAmount = reader.Read<System.Int32>(ES3Type_int.Instance);
						break;
					default:
						reader.Skip();
						break;
				}
			}
		}

		protected override object ReadObject<T>(ES3Reader reader)
		{
			var instance = new CollectedEvolveItems(null, 0);
			ReadObject<T>(reader, instance);
			return instance;
		}
	}


	public class ES3UserType_CollectedEvolveItemsArray : ES3ArrayType
	{
		public static ES3Type Instance;

		public ES3UserType_CollectedEvolveItemsArray() : base(typeof(CollectedEvolveItems[]), ES3UserType_CollectedEvolveItems.Instance)
		{
			Instance = this;
		}
	}
}