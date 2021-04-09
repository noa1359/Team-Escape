using System;
using UnityEngine;

namespace ES3Types
{
	[UnityEngine.Scripting.Preserve]
	[ES3PropertiesAttribute("originalCharacterInt", "battleCharacter")]
	public class ES3UserType_BattleCharacters : ES3ObjectType
	{
		public static ES3Type Instance = null;

		public ES3UserType_BattleCharacters() : base(typeof(BattleCharacters)){ Instance = this; priority = 1; }


		protected override void WriteObject(object obj, ES3Writer writer)
		{
			var instance = (BattleCharacters)obj;
			
			writer.WriteProperty("originalCharacterInt", instance.originalCharacterInt, ES3Type_int.Instance);
			writer.WriteProperty("battleCharacter", instance.battleCharacter);
		}

		protected override void ReadObject<T>(ES3Reader reader, object obj)
		{
			var instance = (BattleCharacters)obj;
			foreach(string propertyName in reader.Properties)
			{
				switch(propertyName)
				{
					
					case "originalCharacterInt":
						instance.originalCharacterInt = reader.Read<System.Int32>(ES3Type_int.Instance);
						break;
					case "battleCharacter":
						instance.battleCharacter = reader.Read<Character>();
						break;
					default:
						reader.Skip();
						break;
				}
			}
		}

		protected override object ReadObject<T>(ES3Reader reader)
		{
			var instance = new BattleCharacters(0, null);
			ReadObject<T>(reader, instance);
			return instance;
		}
	}


	public class ES3UserType_BattleCharactersArray : ES3ArrayType
	{
		public static ES3Type Instance;

		public ES3UserType_BattleCharactersArray() : base(typeof(BattleCharacters[]), ES3UserType_BattleCharacters.Instance)
		{
			Instance = this;
		}
	}
}