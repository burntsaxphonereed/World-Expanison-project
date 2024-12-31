////////////////////////////////////////////////////////////////////
//DeRap: Opfor_Faction\config.bin
//Produced from mikero's Dos Tools Dll version 9.45
//https://mikero.bytex.digital/Downloads
//'now' is Tue Dec 31 11:00:28 2024 : 'file' last modified on Mon Dec 23 19:06:01 2024
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Flex_CUP_FIA_O_Faction
	{
		units[] = {"Flex_CUP_FIA_O_rifleman","Flex_CUP_FIA_O_teamleader","Flex_CUP_FIA_O_grenadier","Flex_CUP_FIA_O_machinegunner","Flex_CUP_FIA_O_demolition","Flex_CUP_FIA_O_medic","Flex_CUP_FIA_O_rifleman_at","Flex_CUP_FIA_O_deserter","Flex_CUP_FIA_O_crew","Flex_CUP_FIA_O_sniper","Flex_CUP_FIA_O_officer","Flex_CUP_FIA_O_rifleman_lat","Flex_CUP_FIA_O_survivor","Flex_CUP_FIA_O_marksman","Flex_CUP_FIA_O_rifleman_uav","Flex_CUP_FIA_O_assistant","Flex_CUP_FIA_O_pilot","Flex_CUP_FIA_O_Stavrou","Flex_CUP_FIA_O_Miller","Flex_CUP_FIA_O_HMG_high","Flex_CUP_FIA_O_HMG_low","Flex_CUP_FIA_O_SPG9","Flex_CUP_FIA_O_Metis","Flex_CUP_FIA_O_MK19_TriPod","Flex_CUP_FIA_O_L16A2","Flex_CUP_FIA_O_ZU23","Flex_CUP_FIA_O_SearchLight","Flex_CUP_FIA_O_UAV_01","Flex_CUP_FIA_O_CESSNA","Flex_CUP_FIA_O_CESSNA_ARMED","Flex_CUP_FIA_O_Boat","Flex_CUP_FIA_O_Boat_2","Flex_CUP_FIA_O_TT650","Flex_CUP_FIA_O_Quad","Flex_CUP_FIA_O_truck_transport","Flex_CUP_FIA_O_truck_fuel","Flex_CUP_FIA_O_van_cargo","Flex_CUP_FIA_O_Hilux_unarmed","Flex_CUP_FIA_O_Hilux_M2","Flex_CUP_FIA_O_Hilux_metis","Flex_CUP_FIA_O_Hilux_SPG9","Flex_CUP_FIA_O_Hilux_UB32","Flex_CUP_FIA_O_Hilux_podnos","Flex_CUP_FIA_O_Hilux_zu23","Flex_CUP_FIA_O_Hilux_armored_unarmed","Flex_CUP_FIA_O_Hilux_armored_M2","Flex_CUP_FIA_O_Hilux_armored_BTR60","Flex_CUP_FIA_O_Hilux_armored_zu23","Flex_CUP_FIA_O_BTR80A","Flex_CUP_FIA_O_M113A3","Flex_CUP_FIA_O_M113A3_HQ"};
		weapons[] = {"Flex_CUP_FIA_O_srifle_LeeEnfield","Flex_CUP_FIA_O_arifle_DSA_SA58"};
		requiredAddons[] = {"A3_Characters_F","A3_Characters_F_Beta","A3_Weapons_F","CUP_Creatures_People_Military_DummyInfantrySet","CUP_Creatures_People_Core","Flex_CUP_ACW_Equipment"};
	};
};
class cfgFactionClasses
{
	class Flex_CUP_FIA_O
	{
		icon = "\a3\Data_f\cfgFactionClasses_IND_G_ca.paa";
		flag = "\a3\Data_f\Flags\flag_FIA_co.paa";
		displayName = "[ACW] Freedom and Independence Army";
		side = 0;
		priority = 1;
	};
};
class cfgEditorSubcategories
{
	class Flex_CUP_FIA_O_inf
	{
		displayName = "$STR_Men";
	};
};
class EventHandlers;
class CfgVehicles
{
	class O_G_Soldier_AR_F;
	class O_G_Soldier_LAT_F;
	class CUP_O_PMC_Soldier;
	class CUP_O_PMC_Soldier_02;
	class CUP_O_PMC_Soldier_03;
	class CUP_O_USArmy_Soldier_BDUv2_dirty_DPM;
	class CUP_O_USMC_Soldier_MCCUU_roll_2;
	class CUP_O_GUE_Soldier_03;
	class Flex_CUP_FIA_BDU_Digital_Rolled;
	class CUP_O_GUE_Soldier_18;
	class O_G_resistanceLeader_F;
	class Flex_CUP_FIA_O_Base_TL: O_G_Soldier_AR_F
	{
		side = 0;
		scope = 1;
		scopeCurator = 0;
		faction = "Flex_CUP_FIA_O";
		editorSubcategory = "EdSubcat_Personnel_Paramilitary";
		author = "Flex7103";
		genericNames = "GreekMen";
		identityTypes[] = {"LanguageGRE_F","Head_Greek","Orange_AAF","Orange_FIA","Orange_Civilian","Orange_Officer"};
	};
	class Flex_CUP_FIA_O_Base: CUP_O_PMC_Soldier
	{
		side = 0;
		scope = 1;
		scopeCurator = 0;
		faction = "Flex_CUP_FIA_O";
		editorSubcategory = "EdSubcat_Personnel_Paramilitary";
		author = "Flex7103";
		genericNames = "GreekMen";
		headgearProbability = 100;
		identityTypes[] = {"LanguageGRE_F","Head_Greek","Orange_AAF","Orange_FIA","Orange_Civilian","Orange_Officer"};
		class EventHandlers: EventHandlers
		{
			class CUP_Units
			{
				init = "if (local (_this select 0)) then { [(_this select 0)] call CUP_fnc_unitRandomizeSkin;};";
			};
		};
		class CUP_SkinRandomization
		{
			randomizeHeadgear = 1;
			randomizeFacewear = 1;
			headgearList[] = {"CUP_H_PMC_Beanie_Khaki",0.5,"H_Booniehat_khk",0.3,"CUP_H_FR_BandanaWdl",0.5,"CUP_H_FR_BandanaGreen",0.5,"CUP_H_PMC_Beanie_Black",0.5,"CUP_H_USA_Cap_M81",0.5};
			facewearList[] = {"",0.5,"CUP_G_Scarf_Face_Tan",0.4,"CUP_G_Scarf_Face_Red",0.4,"CUP_G_Scarf_Face_Blk",0.4,"CUP_Beard_Black",0.2};
		};
	};
	class Flex_CUP_FIA_O_Base_DPM: CUP_O_USArmy_Soldier_BDUv2_dirty_DPM
	{
		side = 0;
		scope = 1;
		scopeCurator = 0;
		faction = "Flex_CUP_FIA_O";
		editorSubcategory = "EdSubcat_Personnel_Paramilitary";
		author = "Flex7103";
		genericNames = "GreekMen";
		headgearProbability = 100;
		identityTypes[] = {"LanguageGRE_F","Head_Greek","Orange_AAF","Orange_FIA","Orange_Civilian","Orange_Officer"};
		class EventHandlers: EventHandlers
		{
			class CUP_Units
			{
				init = "if (local (_this select 0)) then { [(_this select 0)] call CUP_fnc_unitRandomizeSkin;};";
			};
		};
		class CUP_SkinRandomization
		{
			randomizeHeadgear = 1;
			randomizeFacewear = 0;
			headgearList[] = {"H_Booniehat_khk",0.5,"CUP_H_Ger_M92",0.3,"CUP_H_PMC_Beanie_Black",0.4,"CUP_H_USA_Cap_MCAM",0.5,"CUP_H_PMC_Cap_Back_Tan",0.5,"CUP_H_PMC_Cap_Tan",0.4};
			facewearList[] = {"",1};
		};
	};
	class Flex_CUP_FIA_O_Base_01: CUP_O_PMC_Soldier_02
	{
		side = 0;
		scope = 1;
		scopeCurator = 0;
		faction = "Flex_CUP_FIA_O";
		editorSubcategory = "EdSubcat_Personnel_Paramilitary";
		author = "Flex7103";
		genericNames = "GreekMen";
		headgearProbability = 100;
		identityTypes[] = {"LanguageGRE_F","Head_Greek","Orange_AAF","Orange_FIA","Orange_Civilian","Orange_Officer"};
		class EventHandlers: EventHandlers
		{
			class CUP_Units
			{
				init = "if (local (_this select 0)) then { [(_this select 0)] call CUP_fnc_unitRandomizeSkin;};";
			};
		};
		class CUP_SkinRandomization
		{
			randomizeHeadgear = 1;
			randomizeFacewear = 1;
			headgearList[] = {"CUP_H_Ger_M92",1,"CUP_H_USArmy_Helmet_M1_plain_M81",0.5,"CUP_H_Ger_M92_RGR",0.5,"CUP_H_PMC_Beanie_Black",0.3};
			facewearList[] = {"",0.3,"CUP_G_Scarf_Face_Tan",0.5,"CUP_G_Scarf_Face_Red",0.5,"CUP_G_Scarf_Face_Blk",0.3};
		};
	};
	class Flex_CUP_FIA_O_Base_BDU: CUP_O_USMC_Soldier_MCCUU_roll_2
	{
		side = 0;
		scope = 1;
		scopeCurator = 0;
		faction = "Flex_CUP_FIA_O";
		editorSubcategory = "EdSubcat_Personnel_Paramilitary";
		author = "Flex7103";
		genericNames = "GreekMen";
		headgearProbability = 100;
		identityTypes[] = {"LanguageGRE_F","Head_Greek","Orange_AAF","Orange_FIA","Orange_Civilian","Orange_Officer"};
		class EventHandlers: EventHandlers
		{
			class CUP_Units
			{
				init = "if (local (_this select 0)) then { [(_this select 0)] call CUP_fnc_unitRandomizeSkin;};";
			};
		};
		class CUP_SkinRandomization
		{
			randomizeHeadgear = 1;
			randomizeFacewear = 1;
			headgearList[] = {"CUP_H_Ger_M92",0.5,"CUP_H_Ger_M92_RGR",0.5,"CUP_H_USArmy_Helmet_M1_plain_M81",0.5,"CUP_H_FR_BandanaGreen",0.4};
			facewearList[] = {"",0.3,"CUP_G_Scarf_Face_Tan",0.5,"CUP_G_Scarf_Face_Red",0.5,"CUP_G_Scarf_Face_Blk",0.3};
		};
	};
	class Flex_CUP_FIA_O_Base_Massif: O_G_Soldier_LAT_F
	{
		side = 0;
		scope = 1;
		scopeCurator = 0;
		faction = "Flex_CUP_FIA_O";
		editorSubcategory = "EdSubcat_Personnel_Paramilitary";
		author = "Flex7103";
		genericNames = "GreekMen";
		identityTypes[] = {"LanguageGRE_F","Head_Greek","Orange_AAF","Orange_FIA","Orange_Civilian","Orange_Officer"};
	};
	class Flex_CUP_FIA_O_Base_02: CUP_O_PMC_Soldier_03
	{
		side = 0;
		scope = 1;
		scopeCurator = 0;
		faction = "Flex_CUP_FIA_O";
		editorSubcategory = "EdSubcat_Personnel_Paramilitary";
		author = "Flex7103";
		genericNames = "GreekMen";
		headgearProbability = 100;
		identityTypes[] = {"LanguageGRE_F","Head_Greek","Orange_AAF","Orange_FIA","Orange_Civilian","Orange_Officer"};
		class EventHandlers: EventHandlers
		{
			class CUP_Units
			{
				init = "if (local (_this select 0)) then { [(_this select 0)] call CUP_fnc_unitRandomizeSkin;};";
			};
		};
		class CUP_SkinRandomization
		{
			randomizeHeadgear = 1;
			randomizeFacewear = 0;
			headgearList[] = {"H_ShemagOpen_khk",0.5,"H_Shemag_olive",0.5,"H_ShemagOpen_tan",0.5,"CUP_H_FR_BandanaGreen",0.4,"H_Cap_blk",0.4,"CUP_H_Ger_M92",0.3};
			facewearList[] = {"",1};
		};
	};
	class Flex_CUP_FIA_O_Base_03: CUP_O_GUE_Soldier_03
	{
		side = 0;
		scope = 1;
		scopeCurator = 0;
		faction = "Flex_CUP_FIA_O";
		editorSubcategory = "EdSubcat_Personnel_Paramilitary";
		author = "Flex7103";
		genericNames = "GreekMen";
		identityTypes[] = {"LanguageGRE_F","Head_Greek","Orange_AAF","Orange_FIA","Orange_Civilian","Orange_Officer"};
		class EventHandlers: EventHandlers
		{
			class CUP_Units
			{
				init = "if (local (_this select 0)) then { [(_this select 0)] call CUP_fnc_unitRandomizeSkin;};";
			};
		};
		class CUP_SkinRandomization
		{
			randomizeHeadgear = 0;
			randomizeFacewear = 1;
			headgearList[] = {};
			facewearList[] = {"G_Balaclava_oli",0.5,"G_Balaclava_blk",0.5,"CUP_G_Scarf_Face_Tan",0.2,"CUP_G_Scarf_Face_Red",0.2,"CUP_G_Scarf_Face_Blk",0.2};
		};
	};
	class Flex_CUP_FIA_O_Base_04: Flex_CUP_FIA_BDU_Digital_Rolled
	{
		side = 0;
		scope = 1;
		scopeCurator = 0;
		faction = "Flex_CUP_FIA_O";
		editorSubcategory = "EdSubcat_Personnel_Paramilitary";
		author = "Flex7103";
		genericNames = "GreekMen";
		headgearProbability = 100;
		identityTypes[] = {"LanguageGRE_F","Head_Greek","Orange_AAF","Orange_FIA","Orange_Civilian","Orange_Officer"};
		class EventHandlers: EventHandlers
		{
			class CUP_Units
			{
				init = "if (local (_this select 0)) then { [(_this select 0)] call CUP_fnc_unitRandomizeSkin;};";
			};
		};
		class CUP_SkinRandomization
		{
			randomizeHeadgear = 1;
			randomizeFacewear = 0;
			headgearList[] = {"CUP_H_USA_Cap_M81",0.6,"H_Booniehat_khk",0.5,"CUP_H_FR_BandanaWdl",0.5,"CUP_H_Ger_M92",0.5,"H_Cap_blk",0.5,"CUP_H_PMC_Cap_Back_Tan",0.5};
			facewearList[] = {};
		};
	};
	class Flex_CUP_FIA_O_Base_05: CUP_O_GUE_Soldier_18
	{
		side = 0;
		scope = 1;
		scopeCurator = 0;
		faction = "Flex_CUP_FIA_O";
		editorSubcategory = "EdSubcat_Personnel_Paramilitary";
		author = "Flex7103";
		genericNames = "GreekMen";
		identityTypes[] = {"LanguageGRE_F","Head_Greek","Orange_AAF","Orange_FIA","Orange_Civilian","Orange_Officer"};
	};
	class Flex_CUP_FIA_O_Base_06: O_G_resistanceLeader_F
	{
		side = 0;
		scope = 1;
		scopeCurator = 0;
		faction = "Flex_CUP_FIA_O";
		editorSubcategory = "EdSubcat_Personnel_Paramilitary";
		author = "Flex7103";
		genericNames = "GreekMen";
		identityTypes[] = {"LanguageGRE_F","Head_Greek","Orange_AAF","Orange_FIA","Orange_Civilian","Orange_Officer"};
	};
	class Flex_CUP_FIA_O_rifleman: Flex_CUP_FIA_O_Base
	{
		side = 0;
		scope = 2;
		scopeCurator = 2;
		author = "Flex7103";
		uniformClass = "CUP_O_B_PMC_Unit_5";
		displayName = "$STR_A3_I_C_Soldier_Para_1_F0";
		role = "Rifleman";
		icon = "iconMan";
		weapons[] = {"CUP_arifle_Galil_SAR_black","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_Galil_SAR_black","Throw","Put"};
		linkedItems[] = {"CUP_H_PMC_Beanie_Khaki","CUP_V_OI_TKI_Jacket4_01","CUP_G_Scarf_Face_Tan","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_H_PMC_Beanie_Khaki","CUP_V_OI_TKI_Jacket4_01","CUP_G_Scarf_Face_Tan","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Galil_Mag","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Galil_Mag","CUP_HandGrenade_M67"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		class CUP_SkinRandomization: CUP_SkinRandomization
		{
			class camo1
			{
				textures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_PMC\data\pmc_shirt_plaid_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_PMC\data\pmc_shirt_plaid_2_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_PMC\data\pmc_shirt_black_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_PMC\data\pmc_shirt_winered_co.paa"};
			};
			class camo2
			{
				textures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_PMC\data\jeans_2_blue_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_PMC\data\jeans_2_black_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_PMC\data\jeans_2_khaki_co.paa"};
			};
			randomizeHeadgear = 1;
		};
	};
	class Flex_CUP_FIA_O_teamleader: Flex_CUP_FIA_O_Base_TL
	{
		scope = 2;
		scopeCurator = 2;
		author = "Flex7103";
		uniformClass = "U_OG_Guerilla2_1";
		displayName = "$STR_A3_I_C_Soldier_Para_2_F0";
		role = "Rifleman";
		icon = "iconManLeader";
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
		};
		weapons[] = {"Flex_CUP_FIA_O_arifle_DSA_SA58","Throw","Put"};
		respawnWeapons[] = {"Flex_CUP_FIA_O_arifle_DSA_SA58","Throw","Put"};
		linkedItems[] = {"CUP_H_PMC_Cap_Back_Tan","CUP_V_I_Guerilla_Jacket","G_Sport_Blackred","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_H_PMC_Cap_Back_Tan","CUP_V_I_Guerilla_Jacket","G_Sport_Blackred","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","SmokeShell","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","SmokeShell","CUP_HandGrenade_M67"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		headgearProbability = 100;
		allowedHeadgear[] = {"CUP_H_PMC_Cap_Back_Tan","CUP_H_FR_Cap_Headset_Green","CUP_H_PMC_Cap_Back_Grey","H_Cap_blk","H_Booniehat_tan","CUP_H_Ger_M92"};
		headgearList[] = {"CUP_H_PMC_Cap_Back_Tan",1,"CUP_H_FR_Cap_Headset_Green",1,"CUP_H_PMC_Cap_Back_Grey",1,"H_Cap_blk",1,"H_Booniehat_tan",1,"CUP_H_Ger_M92",1};
	};
	class Flex_CUP_FIA_O_grenadier: Flex_CUP_FIA_O_Base_DPM
	{
		scope = 2;
		scopeCurator = 2;
		author = "Flex7103";
		uniformClass = "CUP_U_O_BDUv2_dirty_DPM";
		displayName = "$STR_A3_I_C_Soldier_Para_6_F0";
		role = "Grenadier";
		cost = 200000;
		weapons[] = {"CUP_arifle_M16A4_GL","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_M16A4_GL","Throw","Put"};
		linkedItems[] = {"H_Booniehat_khk","CUP_V_OI_TKI_Jacket4_03","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"H_Booniehat_khk","CUP_V_OI_TKI_Jacket4_03","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_HandGrenade_M67","CUP_HandGrenade_M67","SmokeShell"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_HandGrenade_M67","CUP_HandGrenade_M67","SmokeShell"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
	};
	class Flex_CUP_FIA_O_machinegunner: Flex_CUP_FIA_O_Base_01
	{
		scope = 2;
		scopeCurator = 2;
		author = "Flex7103";
		uniformClass = "CUP_O_B_PMC_Unit_2";
		displayName = "$STR_A3_I_C_Soldier_Para_4_F0";
		role = "MachineGunner";
		icon = "iconManMG";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_MG_s"};
				speechPlural[] = {"veh_infantry_MG_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_MG_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_MG_p";
		nameSound = "veh_infantry_MG_s";
		backpack = "Flex_CUP_FIA_O_pack_MG";
		weapons[] = {"CUP_lmg_MG3","Throw","Put"};
		respawnWeapons[] = {"CUP_lmg_MG3","Throw","Put"};
		linkedItems[] = {"CUP_H_Ger_M92","CUP_V_O_SLA_M23_1_OD","CUP_G_Scarf_Face_Red","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_H_Ger_M92","CUP_V_O_SLA_M23_1_OD","CUP_G_Scarf_Face_Red","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"CUP_120Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_120Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_120Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","SmokeShell","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_120Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_120Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_120Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","SmokeShell","CUP_HandGrenade_M67"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		class CUP_SkinRandomization: CUP_SkinRandomization
		{
			class camo1
			{
				textures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_PMC\data\pmc_shirt_plaid_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_PMC\data\pmc_shirt_plaid_2_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_PMC\data\pmc_shirt_black_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_PMC\data\pmc_shirt_winered_co.paa"};
			};
			class camo2
			{
				textures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_PMC\data\jeans_2_blue_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_PMC\data\jeans_2_black_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_PMC\data\jeans_2_khaki_co.paa"};
			};
			randomizeHeadgear = 0;
		};
	};
	class Flex_CUP_FIA_O_demolition: Flex_CUP_FIA_O_Base_03
	{
		scope = 2;
		scopeCurator = 2;
		author = "Flex7103";
		uniformClass = "CUP_U_O_GUE_Woodland1";
		displayName = "$STR_A3_I_C_Soldier_Para_8_F0";
		role = "Sapper";
		icon = "iconManExplosive";
		backpack = "Flex_CUP_FIA_O_exp_pack";
		weapons[] = {"CUP_arifle_X95_Grippod","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_X95_Grippod","Throw","Put"};
		linkedItems[] = {"CUP_V_O_SLA_M23_1_OD","G_Balaclava_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_V_O_SLA_M23_1_OD","G_Balaclava_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"CUP_30Rnd_556x45_X95","CUP_30Rnd_556x45_X95","CUP_30Rnd_556x45_X95","CUP_30Rnd_556x45_X95","CUP_30Rnd_556x45_X95","CUP_30Rnd_556x45_X95","CUP_30Rnd_556x45_X95","CUP_30Rnd_556x45_X95","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_X95","CUP_30Rnd_556x45_X95","CUP_30Rnd_556x45_X95","CUP_30Rnd_556x45_X95","CUP_30Rnd_556x45_X95","CUP_30Rnd_556x45_X95","CUP_30Rnd_556x45_X95","CUP_30Rnd_556x45_X95","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
	};
	class Flex_CUP_FIA_O_medic: Flex_CUP_FIA_O_Base_TL
	{
		scope = 2;
		scopeCurator = 2;
		author = "Flex7103";
		uniformClass = "U_OG_Guerilla2_3";
		displayName = "$STR_A3_I_C_Soldier_Para_3_F0";
		backpack = "Flex_CUP_FIA_O_FieldPack_medic";
		role = "CombatLifeSaver";
		icon = "iconManMedic";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_medic_s"};
				speechPlural[] = {"veh_infantry_medic_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_medic_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_medic_p";
		nameSound = "veh_infantry_medic_s";
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
		};
		weapons[] = {"CUP_arifle_G3A3_modern_ris","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_G3A3_modern_ris","Throw","Put"};
		linkedItems[] = {"H_Shemag_olive","CUP_V_IDF_Vest","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"H_Shemag_olive","CUP_V_IDF_Vest","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","CUP_HandGrenade_M67","SmokeShell"};
		respawnMagazines[] = {"CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","CUP_HandGrenade_M67","SmokeShell"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};
		headgearProbability = 100;
		allowedHeadgear[] = {"H_Shemag_olive","CUP_H_FR_Headband_Headset"};
		headgearList[] = {"H_Shemag_olive",0.5,"CUP_H_FR_Headband_Headset",0.5};
	};
	class Flex_CUP_FIA_O_rifleman_at: Flex_CUP_FIA_O_Base_BDU
	{
		scope = 2;
		scopeCurator = 2;
		author = "Flex7103";
		uniformClass = "CUP_U_O_USMC_MCCUU_roll_2";
		displayName = "$STR_A3_I_C_Soldier_Para_5_F0";
		backpack = "Flex_CUP_FIA_O_RPG_pack";
		role = "MissileSpecialist";
		icon = "iconManAT";
		cost = 130000;
		threat[] = {0.8,0.8,0.3};
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_AT_s"};
				speechPlural[] = {"veh_infantry_AT_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_AT_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_AT_p";
		nameSound = "veh_infantry_AT_s";
		weapons[] = {"CUP_arifle_G3A3_modern_ris","CUP_launch_RPG7V","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_G3A3_modern_ris","CUP_launch_RPG7V","Throw","Put"};
		linkedItems[] = {"CUP_H_Ger_M92","CUP_V_OI_TKI_Jacket4_01","CUP_G_Scarf_Face_Red","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_H_Ger_M92","CUP_V_OI_TKI_Jacket4_01","CUP_G_Scarf_Face_Red","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"CUP_PG7V_M","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_PG7V_M","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","CUP_HandGrenade_M67"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
	};
	class Flex_CUP_FIA_O_deserter: Flex_CUP_FIA_O_Base_04
	{
		scope = 2;
		scopeCurator = 2;
		author = "Flex7103";
		uniformClass = "Flex_CUP_FIA_BDU_Digital_Rolled";
		displayName = "$STR_A3_I_C_Soldier_Para_7_F0";
		role = "Rifleman";
		icon = "iconMan";
		weapons[] = {"CUP_arifle_M16A4_Base","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_M16A4_Base","Throw","Put"};
		linkedItems[] = {"CUP_V_OI_TKI_Jacket4_01","CUP_H_USA_Cap_M81","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_V_OI_TKI_Jacket4_01","CUP_H_USA_Cap_M81","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
	};
	class Flex_CUP_FIA_O_crew: Flex_CUP_FIA_O_Base_05
	{
		scope = 2;
		scopeCurator = 2;
		author = "Flex7103";
		uniformClass = "CUP_U_O_GUE_WorkU_02";
		displayName = "$STR_B_crew_F0";
		role = "Crewman";
		icon = "iconMan";
		weapons[] = {"CUP_smg_UZI","Binocular","Throw","Put"};
		respawnWeapons[] = {"CUP_smg_UZI","Binocular","Throw","Put"};
		linkedItems[] = {"CUP_H_RUS_TSH_4_Brown","CUP_V_OI_TKI_Jacket1_03","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_H_RUS_TSH_4_Brown","CUP_V_OI_TKI_Jacket1_03","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"CUP_32Rnd_9x19_UZI_M","CUP_32Rnd_9x19_UZI_M","CUP_32Rnd_9x19_UZI_M","CUP_32Rnd_9x19_UZI_M","SmokeShell"};
		respawnMagazines[] = {"CUP_32Rnd_9x19_UZI_M","CUP_32Rnd_9x19_UZI_M","CUP_32Rnd_9x19_UZI_M","CUP_32Rnd_9x19_UZI_M","SmokeShell"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
	};
	class Flex_CUP_FIA_O_sniper: Flex_CUP_FIA_O_Base_Massif
	{
		scope = 2;
		scopeCurator = 2;
		author = "Flex7103";
		uniformClass = "U_OG_Guerrilla_6_1";
		displayName = "$STR_B_sniper_F0";
		role = "Marksman";
		camouflage = 0.6;
		icon = "iconMan";
		backpack = "";
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
		};
		weapons[] = {"Flex_CUP_FIA_O_srifle_LeeEnfield","Binocular","Throw","Put"};
		respawnWeapons[] = {"Flex_CUP_FIA_O_srifle_LeeEnfield","Binocular","Throw","Put"};
		linkedItems[] = {"H_ShemagOpen_tan","CUP_V_I_Guerilla_Jacket","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"H_ShemagOpen_tan","CUP_V_I_Guerilla_Jacket","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M"};
		respawnMagazines[] = {"CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		headgearProbability = 100;
		allowedHeadgear[] = {"H_ShemagOpen_khk","H_Shemag_olive","H_ShemagOpen_tan","CUP_H_FR_Headband_Headset","CUP_H_FR_BandanaWdl"};
		headgearList[] = {"H_ShemagOpen_khk",0.5,"H_Shemag_olive",0.5,"H_ShemagOpen_tan",0.5,"CUP_H_FR_Headband_Headset",0.3,"CUP_H_FR_BandanaWdl",0.3};
	};
	class Flex_CUP_FIA_O_officer: Flex_CUP_FIA_O_Base_06
	{
		scope = 2;
		scopeCurator = 2;
		author = "Flex7103";
		uniformClass = "U_O_G_resistanceLeader_F";
		displayName = "$STR_B_officer_F0";
		icon = "iconManOfficer";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_officer_s"};
				speechPlural[] = {"veh_infantry_officer_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_officer_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_officer_p";
		nameSound = "veh_infantry_officer_s";
		weapons[] = {"CUP_arifle_Galil_SAR_black","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_Galil_SAR_black","Throw","Put"};
		linkedItems[] = {"H_Beret_blk","CUP_V_OI_TKI_Jacket4_03","G_Aviator","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"H_Beret_blk","CUP_V_OI_TKI_Jacket4_03","G_Aviator","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Galil_Mag","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Galil_Mag","CUP_HandGrenade_M67"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
	};
	class Flex_CUP_FIA_O_rifleman_lat: Flex_CUP_FIA_O_Base_02
	{
		scope = 2;
		scopeCurator = 2;
		author = "Flex7103";
		uniformClass = "CUP_O_B_PMC_Unit_3";
		displayName = "$STR_A3_CfgVehicles_B_soldier_LAT2_F0";
		role = "MissileSpecialist";
		icon = "iconManAT";
		cost = 130000;
		weapons[] = {"CUP_arifle_Galil_SAR_black","CUP_launch_M72A6_Special","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_Galil_SAR_black","CUP_launch_M72A6_Special","Throw","Put"};
		linkedItems[] = {"H_ShemagOpen_khk","CUP_V_OI_TKI_Jacket1_05","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"H_ShemagOpen_khk","CUP_V_OI_TKI_Jacket1_05","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Galil_Mag","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Galil_Mag","CUP_HandGrenade_M67"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		class CUP_SkinRandomization: CUP_SkinRandomization
		{
			class camo1
			{
				textures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_PMC\data\pmc_shirt_plaid_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_PMC\data\pmc_shirt_plaid_2_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_PMC\data\pmc_shirt_black_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_PMC\data\pmc_shirt_winered_co.paa"};
			};
			class camo2
			{
				textures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_PMC\data\jeans_2_blue_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_PMC\data\jeans_2_black_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_PMC\data\jeans_2_khaki_co.paa"};
			};
			randomizeHeadgear = 1;
		};
	};
	class Flex_CUP_FIA_O_survivor: Flex_CUP_FIA_O_Base_TL
	{
		scope = 2;
		scopeCurator = 2;
		uniformClass = "U_OG_Guerilla2_1";
		author = "Flex7103";
		displayName = "$STR_A3_CfgVehicles_b_survivor_f_displayName";
		role = "Unarmed";
		threat[] = {0.1,0.1,0.1};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		linkedItems[] = {"CUP_V_OI_TKI_Jacket1_06"};
		respawnLinkedItems[] = {"CUP_V_OI_TKI_Jacket1_06"};
		magazines[] = {};
		respawnMagazines[] = {};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		class EventHandlers: EventHandlers
		{
			class CUP_Units
			{
				init = "if (local (_this select 0)) then { [(_this select 0)] call CUP_fnc_unitRandomizeSkin;};";
			};
		};
		class CUP_SkinRandomization
		{
			randomizeHeadgear = 1;
			randomizeFacewear = 1;
			headgearList[] = {"CUP_H_PMC_Beanie_Khaki",0.5,"H_Booniehat_khk",0.3,"CUP_H_FR_BandanaWdl",0.5,"CUP_H_FR_BandanaGreen",0.5,"CUP_H_PMC_Beanie_Black",0.5,"CUP_H_USA_Cap_M81",0.5};
			facewearList[] = {"",0.5,"CUP_G_Scarf_Face_Tan",0.4,"CUP_G_Scarf_Face_Red",0.4,"CUP_G_Scarf_Face_Blk",0.4,"CUP_Beard_Black",0.2};
		};
	};
	class Flex_CUP_FIA_O_marksman: Flex_CUP_FIA_O_Base_DPM
	{
		scope = 2;
		scopeCurator = 2;
		author = "Flex7103";
		uniformClass = "CUP_U_O_BDUv2_dirty_DPM";
		displayName = "$STR_A3_I_C_Soldier_Bandit_5_F0";
		role = "Marksman";
		icon = "iconMan";
		weapons[] = {"CUP_srifle_M14","Throw","Put"};
		respawnWeapons[] = {"CUP_srifle_M14","Throw","Put"};
		linkedItems[] = {"H_Cap_blk","CUP_V_OI_TKI_Jacket4_05","CUP_G_Scarf_Face_Red","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"H_Cap_blk","CUP_V_OI_TKI_Jacket4_05","CUP_G_Scarf_Face_Red","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR","CUP_HandGrenade_M67","SmokeShell"};
		respawnMagazines[] = {"CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR","CUP_HandGrenade_M67","SmokeShell"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
	};
	class Flex_CUP_FIA_O_rifleman_uav: Flex_CUP_FIA_O_Base
	{
		scope = 2;
		scopeCurator = 2;
		author = "Flex7103";
		uniformClass = "CUP_U_O_GUE_Woodland1";
		displayName = "$STR_A3_B_SOLDIER_UAV_F0";
		icon = "iconMan";
		backpack = "O_UAV_01_backpack_F";
		weapons[] = {"CUP_arifle_G3A3_modern_ris","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_G3A3_modern_ris","Throw","Put"};
		linkedItems[] = {"H_Cap_blk","CUP_V_IDF_Vest","CUP_G_Scarf_Face_Red","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_UavTerminal"};
		respawnLinkedItems[] = {"H_Cap_blk","CUP_V_IDF_Vest","CUP_G_Scarf_Face_Red","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_UavTerminal"};
		magazines[] = {"CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","CUP_HandGrenade_M67"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
	};
	class Flex_CUP_FIA_O_assistant: Flex_CUP_FIA_O_Base_02
	{
		scope = 2;
		scopeCurator = 2;
		author = "Flex7103";
		uniformClass = "CUP_O_B_PMC_Unit_3";
		displayName = "$STR_B_Soldier_A_F0";
		role = "Assistant";
		icon = "iconMan";
		backpack = "Flex_CUP_FIA_O_pack_ammo";
		weapons[] = {"CUP_arifle_Galil_SAR_black","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_Galil_SAR_black","Throw","Put"};
		linkedItems[] = {"H_ShemagOpen_khk","CUP_V_OI_TKI_Jacket4_03","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"H_ShemagOpen_khk","CUP_V_OI_TKI_Jacket4_03","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Galil_Mag","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Galil_Mag","CUP_HandGrenade_M67"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		class CUP_SkinRandomization: CUP_SkinRandomization
		{
			class camo1
			{
				textures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_PMC\data\pmc_shirt_plaid_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_PMC\data\pmc_shirt_plaid_2_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_PMC\data\pmc_shirt_black_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_PMC\data\pmc_shirt_winered_co.paa"};
			};
			class camo2
			{
				textures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_PMC\data\jeans_2_blue_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_PMC\data\jeans_2_black_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_PMC\data\jeans_2_khaki_co.paa"};
			};
			randomizeHeadgear = 1;
		};
	};
	class Flex_CUP_FIA_O_pilot: Flex_CUP_FIA_O_Base
	{
		scope = 2;
		scopeCurator = 2;
		author = "Flex7103";
		uniformClass = "CUP_U_O_Pilot_01";
		displayName = "$STR_B_Pilot_F0";
		role = "Crewman";
		icon = "iconMan";
		weapons[] = {"CUP_smg_UZI","CUP_hgun_FlareGun","Throw","Put"};
		respawnWeapons[] = {"CUP_smg_UZI","CUP_hgun_FlareGun","Throw","Put"};
		linkedItems[] = {"H_Cap_headphones","CUP_V_OI_TKI_Jacket6_01","G_Aviator","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"H_Cap_headphones","CUP_V_OI_TKI_Jacket6_01","G_Aviator","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"CUP_FlareRed_265_M","CUP_FlareRed_265_M","CUP_FlareRed_265_M","CUP_FlareRed_265_M","CUP_StarClusterRed_265_M","CUP_32Rnd_9x19_UZI_M","CUP_32Rnd_9x19_UZI_M","CUP_32Rnd_9x19_UZI_M","CUP_32Rnd_9x19_UZI_M","CUP_32Rnd_9x19_UZI_M","CUP_32Rnd_9x19_UZI_M","SmokeShell"};
		respawnMagazines[] = {"CUP_FlareRed_265_M","CUP_FlareRed_265_M","CUP_FlareRed_265_M","CUP_FlareRed_265_M","CUP_StarClusterRed_265_M","CUP_32Rnd_9x19_UZI_M","CUP_32Rnd_9x19_UZI_M","CUP_32Rnd_9x19_UZI_M","CUP_32Rnd_9x19_UZI_M","CUP_32Rnd_9x19_UZI_M","CUP_32Rnd_9x19_UZI_M","SmokeShell"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		class CUP_SkinRandomization
		{
			randomizeHeadgear = 0;
			randomizeFacewear = 0;
		};
	};
	class Flex_CUP_FIA_O_Stavrou: Flex_CUP_FIA_O_Base_03
	{
		scope = 2;
		scopeCurator = 2;
		author = "Flex7103";
		uniformClass = "CUP_U_O_GUE_Woodland1";
		editorSubcategory = "EdSubcat_Personnel_Story";
		displayName = "Stavrou";
		icon = "iconMan";
		identityTypes[] = {"LanguageGRE_F","IG_Leader"};
		weapons[] = {"Flex_CUP_FIA_O_arifle_X95_Grippod","Throw","Put"};
		respawnWeapons[] = {"Flex_CUP_FIA_O_arifle_X95_Grippod","Throw","Put"};
		linkedItems[] = {"CUP_V_IDF_Vest","CUP_G_Scarf_Face_Grn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_V_IDF_Vest","CUP_G_Scarf_Face_Grn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"CUP_30Rnd_556x45_X95","CUP_30Rnd_556x45_X95","CUP_30Rnd_556x45_X95","CUP_30Rnd_556x45_X95","CUP_30Rnd_556x45_X95","CUP_30Rnd_556x45_X95","CUP_30Rnd_556x45_X95","CUP_30Rnd_556x45_X95","SmokeShell","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_X95","CUP_30Rnd_556x45_X95","CUP_30Rnd_556x45_X95","CUP_30Rnd_556x45_X95","CUP_30Rnd_556x45_X95","CUP_30Rnd_556x45_X95","CUP_30Rnd_556x45_X95","CUP_30Rnd_556x45_X95","SmokeShell","CUP_HandGrenade_M67"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		class CUP_SkinRandomization
		{
			randomizeHeadgear = 0;
			randomizeFacewear = 0;
			headgearList[] = {};
			facewearList[] = {};
		};
	};
	class Flex_CUP_FIA_O_Miller: Flex_CUP_FIA_O_Base_03
	{
		scope = 2;
		scopeCurator = 2;
		author = "Flex7103";
		uniformClass = "CUP_U_O_GUE_Woodland1";
		editorSubcategory = "EdSubcat_Personnel_Story";
		displayName = "Miller";
		icon = "iconMan";
		identityTypes[] = {"LanguageENGB_F","Miller"};
		weapons[] = {"Flex_CUP_FIA_O_arifle_X95_Grippod","Throw","Put"};
		respawnWeapons[] = {"Flex_CUP_FIA_O_arifle_X95_Grippod","Throw","Put"};
		linkedItems[] = {"CUP_H_FR_Headband_Headset","CUP_V_OI_TKI_Jacket4_01","CUP_G_Oakleys_Drk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_H_FR_Headband_Headset","CUP_V_OI_TKI_Jacket4_01","CUP_G_Oakleys_Drk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"CUP_30Rnd_556x45_X95","CUP_30Rnd_556x45_X95","CUP_30Rnd_556x45_X95","CUP_30Rnd_556x45_X95","CUP_30Rnd_556x45_X95","CUP_30Rnd_556x45_X95","CUP_30Rnd_556x45_X95","CUP_30Rnd_556x45_X95","SmokeShell","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_X95","CUP_30Rnd_556x45_X95","CUP_30Rnd_556x45_X95","CUP_30Rnd_556x45_X95","CUP_30Rnd_556x45_X95","CUP_30Rnd_556x45_X95","CUP_30Rnd_556x45_X95","CUP_30Rnd_556x45_X95","SmokeShell","CUP_HandGrenade_M67"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		class CUP_SkinRandomization
		{
			randomizeHeadgear = 0;
			randomizeFacewear = 0;
			headgearList[] = {};
			facewearList[] = {};
		};
	};
	class B_TacticalPack_blk;
	class Flex_CUP_FIA_O_pack_MG: B_TacticalPack_blk
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_CUP_100Rnd_TE4_LRT4_762x54_PK_Green_M
			{
				count = 2;
				magazine = "CUP_120Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M";
			};
		};
		class TransportItems{};
		class TransportWeapons{};
	};
	class Flex_CUP_FIA_O_RPG_pack: B_TacticalPack_blk
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_CUP_PG7V_M
			{
				count = 3;
				magazine = "CUP_PG7V_M";
			};
		};
		class TransportItems{};
		class TransportWeapons{};
	};
	class B_FieldPack_oli;
	class Flex_CUP_FIA_O_FieldPack_medic: B_FieldPack_oli
	{
		scope = 1;
		class TransportMagazines{};
		class TransportItems
		{
			class _xx_Medikit
			{
				count = 1;
				name = "Medikit";
			};
		};
		class TransportWeapons{};
	};
	class CUP_B_RUS_Backpack;
	class Flex_CUP_FIA_O_exp_pack: CUP_B_RUS_Backpack
	{
		scope = 1;
		class TransportMagazines
		{
			class Flex_CUP_FIA_O_PipeBomb_M
			{
				magazine = "CUP_PipeBomb_M";
				count = 3;
			};
		};
		class TransportItems
		{
			class _xx_ToolKit
			{
				count = 1;
				name = "ToolKit";
			};
		};
		class TransportWeapons{};
	};
	class B_Kitbag_cbr;
	class Flex_CUP_FIA_O_pack_ammo: B_Kitbag_cbr
	{
		scope = 1;
		scopeArsenal = 0;
		class TransportMagazines
		{
			class _xx_CUP_35Rnd_556x45_Galil_Mag
			{
				count = 8;
				magazine = "CUP_35Rnd_556x45_Galil_Mag";
			};
			class _xx_CUP_20Rnd_762x51_FNFAL_M
			{
				count = 5;
				magazine = "CUP_20Rnd_762x51_FNFAL_M";
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				count = 8;
				magazine = "1Rnd_HE_Grenade_shell";
			};
			class _xx_CUP_20Rnd_762x51_G3
			{
				count = 5;
				magazine = "CUP_20Rnd_762x51_G3";
			};
			class _xx_CUP_HandGrenade_M67
			{
				count = 3;
				magazine = "CUP_HandGrenade_M67";
			};
			class _xx_SmokeShell
			{
				count = 2;
				magazine = "SmokeShell";
			};
		};
		class TransportItems{};
		class TransportWeapons{};
	};
	class HMG_02_high_base_F;
	class Flex_CUP_FIA_O_HMG_high: HMG_02_high_base_F
	{
		author = "Flex7103";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "Flex_CUP_FIA_O";
		crew = "Flex_CUP_FIA_O_rifleman";
		typicalCargo[] = {"Flex_CUP_FIA_O_rifleman"};
	};
	class HMG_02_base_F;
	class Flex_CUP_FIA_O_HMG_low: HMG_02_base_F
	{
		author = "Flex7103";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "Flex_CUP_FIA_O";
		crew = "Flex_CUP_FIA_O_rifleman";
		typicalCargo[] = {"Flex_CUP_FIA_O_rifleman"};
	};
	class CUP_O_SPG9_ChDKZ;
	class Flex_CUP_FIA_O_SPG9: CUP_O_SPG9_ChDKZ
	{
		author = "Flex7103";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "Flex_CUP_FIA_O";
		crew = "Flex_CUP_FIA_O_rifleman";
		typicalCargo[] = {"Flex_CUP_FIA_O_rifleman"};
	};
	class CUP_O_Metis_RU;
	class Flex_CUP_FIA_O_Metis: CUP_O_Metis_RU
	{
		author = "Flex7103";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "Flex_CUP_FIA_O";
		crew = "Flex_CUP_FIA_O_rifleman";
		typicalCargo[] = {"Flex_CUP_FIA_O_rifleman"};
	};
	class CUP_B_MK19_TriPod_US;
	class Flex_CUP_FIA_O_MK19_TriPod: CUP_B_MK19_TriPod_US
	{
		author = "Flex7103";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "Flex_CUP_FIA_O";
		crew = "Flex_CUP_FIA_O_rifleman";
		typicalCargo[] = {"Flex_CUP_FIA_O_rifleman"};
	};
	class CUP_B_L16A2_BAF_WDL;
	class Flex_CUP_FIA_O_L16A2: CUP_B_L16A2_BAF_WDL
	{
		author = "Flex7103";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "Flex_CUP_FIA_O";
		crew = "Flex_CUP_FIA_O_rifleman";
		typicalCargo[] = {"Flex_CUP_FIA_O_rifleman"};
	};
	class CUP_O_ZU23_RU;
	class Flex_CUP_FIA_O_ZU23: CUP_O_ZU23_RU
	{
		author = "Flex7103";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "Flex_CUP_FIA_O";
		crew = "Flex_CUP_FIA_O_rifleman";
		typicalCargo[] = {"Flex_CUP_FIA_O_rifleman"};
	};
	class CUP_B_SearchLight_static_AFU;
	class Flex_CUP_FIA_O_SearchLight: CUP_B_SearchLight_static_AFU
	{
		author = "Flex7103";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "Flex_CUP_FIA_O";
		crew = "Flex_CUP_FIA_O_rifleman";
		typicalCargo[] = {"Flex_CUP_FIA_O_rifleman"};
	};
	class I_UAV_01_F;
	class Flex_CUP_FIA_O_UAV_01: I_UAV_01_F
	{
		faction = "Flex_CUP_FIA_O";
		side = 0;
	};
	class CUP_C_CESSNA_CIV;
	class Flex_CUP_FIA_O_CESSNA: CUP_C_CESSNA_CIV
	{
		author = "Flex7103";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "Flex_CUP_FIA_O";
		crew = "Flex_CUP_FIA_O_pilot";
		typicalCargo[] = {"Flex_CUP_FIA_O_pilot","Flex_CUP_FIA_O_pilot"};
		textureList[] = {"civ_06",1};
	};
	class CUP_B_CESSNA_T41_ARMED_USA;
	class Flex_CUP_FIA_O_CESSNA_ARMED: CUP_B_CESSNA_T41_ARMED_USA
	{
		author = "Flex7103";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "Flex_CUP_FIA_O";
		displayName = "Cessna 172 Skyhawk (Armed)";
		crew = "Flex_CUP_FIA_O_pilot";
		typicalCargo[] = {"Flex_CUP_FIA_O_pilot","Flex_CUP_FIA_O_pilot"};
		textureList[] = {"civ_06",1};
	};
	class B_Boat_Transport_01_F;
	class Flex_CUP_FIA_O_Boat: B_Boat_Transport_01_F
	{
		author = "Flex7103";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "Flex_CUP_FIA_O";
		crew = "Flex_CUP_FIA_O_rifleman";
		typicalCargo[] = {"Flex_CUP_FIA_O_rifleman"};
	};
	class I_C_Boat_Transport_02_F;
	class Flex_CUP_FIA_O_Boat_2: I_C_Boat_Transport_02_F
	{
		author = "Flex7103";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "Flex_CUP_FIA_O";
		crew = "Flex_CUP_FIA_O_rifleman";
		typicalCargo[] = {"Flex_CUP_FIA_O_rifleman"};
	};
	class CUP_O_TT650_TKA;
	class Flex_CUP_FIA_O_TT650: CUP_O_TT650_TKA
	{
		author = "Flex7103";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "Flex_CUP_FIA_O";
		editorSubcategory = "EdSubcat_Cars";
		crew = "Flex_CUP_FIA_O_rifleman";
		typicalCargo[] = {"Flex_CUP_FIA_O_rifleman"};
	};
	class B_G_Quadbike_01_F;
	class Flex_CUP_FIA_O_Quad: B_G_Quadbike_01_F
	{
		author = "Flex7103";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "Flex_CUP_FIA_O";
		crew = "Flex_CUP_FIA_O_rifleman";
		typicalCargo[] = {"Flex_CUP_FIA_O_rifleman"};
	};
	class B_G_Van_01_transport_F;
	class Flex_CUP_FIA_O_truck_transport: B_G_Van_01_transport_F
	{
		author = "Flex7103";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "Flex_CUP_FIA_O";
		crew = "Flex_CUP_FIA_O_rifleman";
		typicalCargo[] = {"Flex_CUP_FIA_O_rifleman"};
	};
	class B_G_Van_01_fuel_F;
	class Flex_CUP_FIA_O_truck_fuel: B_G_Van_01_fuel_F
	{
		author = "Flex7103";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "Flex_CUP_FIA_O";
		crew = "Flex_CUP_FIA_O_rifleman";
		typicalCargo[] = {"Flex_CUP_FIA_O_rifleman"};
	};
	class B_G_Van_02_vehicle_F;
	class Flex_CUP_FIA_O_van_cargo: B_G_Van_02_vehicle_F
	{
		author = "Flex7103";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "Flex_CUP_FIA_O";
		crew = "Flex_CUP_FIA_O_rifleman";
		typicalCargo[] = {"Flex_CUP_FIA_O_rifleman"};
	};
	class Flex_CUP_FIA_Hilux_unarmed;
	class Flex_CUP_FIA_O_Hilux_unarmed: Flex_CUP_FIA_Hilux_unarmed
	{
		author = "Flex7103";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "Flex_CUP_FIA_O";
		crew = "Flex_CUP_FIA_O_rifleman";
		typicalCargo[] = {"Flex_CUP_FIA_O_rifleman"};
	};
	class Flex_CUP_FIA_Hilux_M2;
	class Flex_CUP_FIA_O_Hilux_M2: Flex_CUP_FIA_Hilux_M2
	{
		author = "Flex7103";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "Flex_CUP_FIA_O";
		crew = "Flex_CUP_FIA_O_rifleman";
		typicalCargo[] = {"Flex_CUP_FIA_O_rifleman","Flex_CUP_FIA_O_rifleman"};
	};
	class Flex_CUP_FIA_Hilux_metis;
	class Flex_CUP_FIA_O_Hilux_metis: Flex_CUP_FIA_Hilux_metis
	{
		author = "Flex7103";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "Flex_CUP_FIA_O";
		crew = "Flex_CUP_FIA_O_rifleman";
		typicalCargo[] = {"Flex_CUP_FIA_O_rifleman","Flex_CUP_FIA_O_rifleman"};
	};
	class Flex_CUP_FIA_Hilux_SPG9;
	class Flex_CUP_FIA_O_Hilux_SPG9: Flex_CUP_FIA_Hilux_SPG9
	{
		author = "Flex7103";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "Flex_CUP_FIA_O";
		crew = "Flex_CUP_FIA_O_rifleman";
		typicalCargo[] = {"Flex_CUP_FIA_O_rifleman","Flex_CUP_FIA_O_rifleman"};
	};
	class Flex_CUP_FIA_Hilux_UB32;
	class Flex_CUP_FIA_O_Hilux_UB32: Flex_CUP_FIA_Hilux_UB32
	{
		author = "Flex7103";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "Flex_CUP_FIA_O";
		crew = "Flex_CUP_FIA_O_rifleman";
		typicalCargo[] = {"Flex_CUP_FIA_O_rifleman","Flex_CUP_FIA_O_rifleman"};
	};
	class Flex_CUP_FIA_Hilux_podnos;
	class Flex_CUP_FIA_O_Hilux_podnos: Flex_CUP_FIA_Hilux_podnos
	{
		author = "Flex7103";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "Flex_CUP_FIA_O";
		crew = "Flex_CUP_FIA_O_rifleman";
		typicalCargo[] = {"Flex_CUP_FIA_O_rifleman","Flex_CUP_FIA_O_rifleman"};
	};
	class Flex_CUP_FIA_Hilux_zu23;
	class Flex_CUP_FIA_O_Hilux_zu23: Flex_CUP_FIA_Hilux_zu23
	{
		author = "Flex7103";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "Flex_CUP_FIA_O";
		crew = "Flex_CUP_FIA_O_rifleman";
		typicalCargo[] = {"Flex_CUP_FIA_O_rifleman","Flex_CUP_FIA_O_rifleman"};
	};
	class Flex_CUP_FIA_Hilux_armored_unarmed;
	class Flex_CUP_FIA_O_Hilux_armored_unarmed: Flex_CUP_FIA_Hilux_armored_unarmed
	{
		author = "Flex7103";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "Flex_CUP_FIA_O";
		crew = "Flex_CUP_FIA_O_rifleman";
		typicalCargo[] = {"Flex_CUP_FIA_O_rifleman"};
	};
	class Flex_CUP_FIA_Hilux_armored_M2;
	class Flex_CUP_FIA_O_Hilux_armored_M2: Flex_CUP_FIA_Hilux_armored_M2
	{
		author = "Flex7103";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "Flex_CUP_FIA_O";
		crew = "Flex_CUP_FIA_O_rifleman";
		typicalCargo[] = {"Flex_CUP_FIA_O_rifleman","Flex_CUP_FIA_O_rifleman"};
	};
	class Flex_CUP_FIA_Hilux_armored_BTR60;
	class Flex_CUP_FIA_O_Hilux_armored_BTR60: Flex_CUP_FIA_Hilux_armored_BTR60
	{
		author = "Flex7103";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "Flex_CUP_FIA_O";
		crew = "Flex_CUP_FIA_O_crew";
		typicalCargo[] = {"Flex_CUP_FIA_O_crew","Flex_CUP_FIA_O_crew"};
	};
	class Flex_CUP_FIA_Hilux_armored_zu23;
	class Flex_CUP_FIA_O_Hilux_armored_zu23: Flex_CUP_FIA_Hilux_armored_zu23
	{
		author = "Flex7103";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "Flex_CUP_FIA_O";
		crew = "Flex_CUP_FIA_O_rifleman";
		typicalCargo[] = {"Flex_CUP_FIA_O_rifleman","Flex_CUP_FIA_O_rifleman"};
	};
	class Flex_CUP_FIA_BTR80A;
	class Flex_CUP_FIA_O_BTR80A: Flex_CUP_FIA_BTR80A
	{
		author = "Flex7103";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "Flex_CUP_FIA_O";
		editorSubcategory = "EdSubcat_APCs";
		crew = "Flex_CUP_FIA_O_crew";
		typicalCargo[] = {"Flex_CUP_FIA_O_crew","Flex_CUP_FIA_O_crew"};
	};
	class Flex_CUP_FIA_M113A3;
	class Flex_CUP_FIA_O_M113A3: Flex_CUP_FIA_M113A3
	{
		author = "Flex7103";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "Flex_CUP_FIA_O";
		editorSubcategory = "EdSubcat_APCs";
		crew = "Flex_CUP_FIA_O_crew";
		typicalCargo[] = {"Flex_CUP_FIA_O_crew","Flex_CUP_FIA_O_crew"};
	};
	class Flex_CUP_FIA_M113A3_HQ;
	class Flex_CUP_FIA_O_M113A3_HQ: Flex_CUP_FIA_M113A3_HQ
	{
		author = "Flex7103";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "Flex_CUP_FIA_O";
		editorSubcategory = "EdSubcat_APCs";
		crew = "Flex_CUP_FIA_O_crew";
		typicalCargo[] = {"Flex_CUP_FIA_O_crew","Flex_CUP_FIA_O_crew"};
	};
};
class cfgWeapons
{
	class CUP_srifle_LeeEnfield_rail;
	class Flex_CUP_FIA_O_srifle_LeeEnfield: CUP_srifle_LeeEnfield_rail
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_KHS_old";
			};
			class LinkedItemsUnder
			{
				slot = "CUP_PicatinnyUnderMountEndfield";
				item = "bipod_03_F_blk";
			};
		};
	};
	class CUP_arifle_DSA_SA58_OSW_VFG;
	class Flex_CUP_FIA_O_arifle_DSA_SA58: CUP_arifle_DSA_SA58_OSW_VFG
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "CUP_optic_Eotech553_Black";
			};
		};
	};
	class CUP_arifle_X95_Grippod;
	class Flex_CUP_FIA_O_arifle_X95_Grippod: CUP_arifle_X95_Grippod
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "CUP_optic_HoloBlack";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "CUP_muzzle_snds_M16";
			};
		};
	};
};
class cfgGroups
{
	class East
	{
		class Flex_CUP_FIA_O_groups
		{
			name = "[ACW] Freedom and Independence Army";
			class Infantry
			{
				name = "$STR_A3_CfgGroups_West_BLU_F_Infantry0";
				class Flex_CUP_FIA_O_InfSquad
				{
					name = "$STR_A3_CfgGroups_Indep_IND_C_F_Infantry_ParaCombatGroup0";
					side = 0;
					faction = "Flex_CUP_FIA_O";
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "Flex_CUP_FIA_O_teamleader";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "Flex_CUP_FIA_O_machinegunner";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "Flex_CUP_FIA_O_rifleman_at";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "Flex_CUP_FIA_O_marksman";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "Flex_CUP_FIA_O_deserter";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "Flex_CUP_FIA_O_grenadier";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "Flex_CUP_FIA_O_rifleman";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "Flex_CUP_FIA_O_medic";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class Flex_CUP_FIA_O_InfTeam
				{
					name = "$STR_A3_CfgGroups_Indep_IND_C_F_Infantry_ParaFireTeam0";
					side = 0;
					faction = "Flex_CUP_FIA_O";
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "Flex_CUP_FIA_O_teamleader";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "Flex_CUP_FIA_O_machinegunner";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "Flex_CUP_FIA_O_rifleman";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "Flex_CUP_FIA_O_medic";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class Flex_CUP_FIA_O_InfTeam_AT
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AT0";
					side = 0;
					faction = "Flex_CUP_FIA_O";
					icon = "\a3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "Flex_CUP_FIA_O_teamleader";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "Flex_CUP_FIA_O_rifleman_at";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "Flex_CUP_FIA_O_rifleman_lat";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "Flex_CUP_FIA_O_rifleman";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class Flex_CUP_FIA_O_ShockTeam
				{
					name = "$STR_A3_CfgGroups_Indep_IND_C_F_Infantry_ParaShockTeam0";
					side = 0;
					faction = "Flex_CUP_FIA_O";
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "Flex_CUP_FIA_O_grenadier";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "Flex_CUP_FIA_O_rifleman_at";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "Flex_CUP_FIA_O_deserter";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "Flex_CUP_FIA_O_demolition";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class Flex_CUP_FIA_O_InfSentry
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0";
					side = 0;
					faction = "Flex_CUP_FIA_O";
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "Flex_CUP_FIA_O_grenadier";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "Flex_CUP_FIA_O_rifleman";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
			};
			class Motorized
			{
				name = "$STR_A3_CfgGroups_West_BLU_F_Motorized0";
				class Flex_CUP_FIA_O_motorized_infantry_truck
				{
					faction = "Flex_CUP_FIA_O";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name = "$STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInfSquad0";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "Flex_CUP_FIA_O_truck_transport";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "Flex_CUP_FIA_O_teamleader";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "Flex_CUP_FIA_O_machinegunner";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "Flex_CUP_FIA_O_rifleman_at";
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "Flex_CUP_FIA_O_deserter";
					};
					class Unit5
					{
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "Flex_CUP_FIA_O_rifleman";
					};
					class Unit6
					{
						position[] = {-15,-15,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "Flex_CUP_FIA_O_grenadier";
					};
					class Unit7
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "Flex_CUP_FIA_O_medic";
					};
					class Unit8
					{
						side = 0;
						vehicle = "Flex_CUP_FIA_O_marksman";
						rank = "PRIVATE";
						position[] = {-20,-20,0};
					};
				};
				class Flex_CUP_FIA_O_MotInf_Team
				{
					name = "$STR_A3_cfggroups_Indep_Guerilla_Motorized_MTP_IRG_MotInfTeam0";
					side = 0;
					faction = "Flex_CUP_FIA_O";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "Flex_CUP_FIA_O_Hilux_unarmed";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "Flex_CUP_FIA_O_teamleader";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "Flex_CUP_FIA_O_machinegunner";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "Flex_CUP_FIA_O_grenadier";
						rank = "CORPORAL";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "Flex_CUP_FIA_O_rifleman_lat";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "Flex_CUP_FIA_O_rifleman";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
				};
				class Flex_CUP_FIA_O_Technicals
				{
					name = "$STR_A3_cfggroups_Indep_Guerilla_Motorized_MTP_IRG_Technicals0";
					side = 0;
					faction = "Flex_CUP_FIA_O";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "Flex_CUP_FIA_O_Hilux_M2";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "Flex_CUP_FIA_O_Hilux_SPG9";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "Flex_CUP_FIA_O_Hilux_M2";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
				};
				class Flex_CUP_FIA_O_MotInf_MortTeam
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_MortTeam0";
					side = 0;
					faction = "Flex_CUP_FIA_O";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "Flex_CUP_FIA_O_Hilux_podnos";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "Flex_CUP_FIA_O_Hilux_podnos";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
				};
			};
			class Support
			{
				name = "$STR_A3_CfgGroups_West_BLU_F_Support0";
				class Flex_CUP_FIA_O_SmallTeam_UAV
				{
					name = "$STR_A3_cfggroups_uavteam_smallUAV";
					side = 0;
					faction = "Flex_CUP_FIA_O";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "Flex_CUP_FIA_O_rifleman_uav";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "Flex_CUP_FIA_O_demolition";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
				};
			};
			class Mechanized
			{
				name = "$STR_A3_CfgGroups_West_BLU_F_Mechanized0";
				class Flex_CUP_FIA_O_mechanized_infantry_btr80
				{
					faction = "Flex_CUP_FIA_O";
					icon = "\a3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					name = "Mechanized Infantry (BTR-80)";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "Flex_CUP_FIA_O_BTR80A";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "Flex_CUP_FIA_O_teamleader";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "Flex_CUP_FIA_O_machinegunner";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "Flex_CUP_FIA_O_rifleman_at";
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "Flex_CUP_FIA_O_deserter";
					};
					class Unit5
					{
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "Flex_CUP_FIA_O_rifleman";
					};
					class Unit6
					{
						position[] = {-15,-15,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "Flex_CUP_FIA_O_grenadier";
					};
					class Unit7
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "Flex_CUP_FIA_O_medic";
					};
					class Unit8
					{
						side = 0;
						vehicle = "Flex_CUP_FIA_O_marksman";
						rank = "PRIVATE";
						position[] = {-20,-20,0};
					};
				};
				class Flex_CUP_FIA_O_mechanized_infantry_m113a3
				{
					faction = "Flex_CUP_FIA_O";
					icon = "\a3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					name = "Mechanized Infantry (M113)";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "Flex_CUP_FIA_O_M113A3";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "Flex_CUP_FIA_O_teamleader";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "Flex_CUP_FIA_O_machinegunner";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "Flex_CUP_FIA_O_rifleman_at";
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "Flex_CUP_FIA_O_deserter";
					};
					class Unit5
					{
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "Flex_CUP_FIA_O_rifleman";
					};
					class Unit6
					{
						position[] = {-15,-15,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "Flex_CUP_FIA_O_grenadier";
					};
					class Unit7
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "Flex_CUP_FIA_O_medic";
					};
					class Unit8
					{
						side = 0;
						vehicle = "Flex_CUP_FIA_O_marksman";
						rank = "PRIVATE";
						position[] = {-20,-20,0};
					};
				};
			};
			class Armored
			{
				name = "$STR_A3_CfgGroups_West_BLU_F_Armored0";
				class Flex_CUP_FIA_O_Armored_Technicals
				{
					faction = "Flex_CUP_FIA_O";
					icon = "\a3\ui_f\data\map\markers\nato\b_armor.paa";
					name = "$STR_A3_cfggroups_Indep_Guerilla_Motorized_MTP_IRG_Technicals0";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "Flex_CUP_FIA_O_Hilux_armored_BTR60";
					};
					class Unit1
					{
						position[] = {10,-10,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "Flex_CUP_FIA_O_Hilux_armored_M2";
					};
				};
			};
		};
	};
};
class cfgMods
{
	author = "Flex7103";
	timepacked = "1735002361";
};
