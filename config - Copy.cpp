////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.45
//https://mikero.bytex.digital/Downloads
//'now' is Sun Sep 01 17:16:51 2024 : 'file' last modified on Thu Jan 27 07:48:58 2022
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ACM_Nag_Weapons
	{
		units[] = {};
		weapons[] = {"ACM_RDI_76_Railed","ACM_RDI_76_TopRail","ACM_RDI_76_TopRail_G","ACM_RDI_76_Railed_GL","ACM_RDI_653_Rail"};
		requiredVersion = 0.1;
		requiredAddons[] = {"CUP_Weapons_WeaponsCore","CUP_Weapons_Sounds","CUP_Weapons_East_Attachments","CUP_Weapons_Ammunition","CUP_Weapons_WeaponsData","A3_Weapons_F_Exp_Rifles_AK12"};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class MuzzleSlot;
class UnderBarrelSlot;
class WeaponSlotsInfo;
class GunParticles;
class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class UGL_F;
	class CUP_arifle_AK109_railed;
	class CUP_arifle_AK109_top_rail;
	class CUP_arifle_AK109_GL_top_rail;
	class CUP_arifle_AK109_GL_railed;
	class arifle_AK12_F;
	class arifle_RPK12_F;
	class arifle_AK12_GL_F;
	class CUP_arifle_RPK74M_railed;
	class arifle_AK12U_F;
	class ACM_RDI_76_Railed: CUP_arifle_AK109_railed
	{
		author = "Anthrax";
		scope = 2;
		displayName = "RDI-762 (Xarhtco)";
		class Library
		{
			libTextDesc = "RDI-762 (Xarhtco)";
		};
		magazines[] = {"CUP_30Rnd_762x51_FNFAL_M"};
		magazineWell[] = {"CBA_762x51_FAL"};
		class ItemInfo
		{
			priority = 1;
			RMBhint = "RDI-762 (Xarhtco)";
			onHoverText = "RDI-762 (Xarhtco)";
		};
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","CamoRail","CamoRailHG"};
		hiddenSelectionsTextures[] = {"\acm_nagansk\acm_rid_body_co.paa","\acm_nagansk\acm_rid_stock_co.paa","CUP\Weapons\CUP_Weapons_AK\Data\ak74m_magazine_co.paa","CUP\Weapons\CUP_Weapons_AK\Data\ak107_body_co.paa","CUP\Weapons\CUP_Weapons_AK\Data\ak74m_grip_rail_co.paa","CUP\Weapons\CUP_Weapons_AK\Data\fortisshift_foregrip_co.paa"};
		handAnim[] = {"OFP2_ManSkeleton","\CUP\Weapons\CUP_Weapons_AK\Data\Anim\AK_hg.rtm"};
	};
	class ACM_RDI_76_TopRail: CUP_arifle_AK109_top_rail
	{
		author = "Anthrax";
		scope = 2;
		displayName = "RDI-762";
		class Library
		{
			libTextDesc = "RDI-762";
		};
		magazines[] = {"CUP_30Rnd_762x51_FNFAL_M"};
		magazineWell[] = {"CBA_762x51_FAL"};
		class ItemInfo
		{
			priority = 1;
			RMBhint = "RDI-762";
			onHoverText = "RDI-762";
		};
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = {"\acm_nagansk\acm_rid_body_co.paa","\acm_nagansk\acm_rid_stock_co.paa","CUP\Weapons\CUP_Weapons_AK\Data\ak74m_magazine_co.paa","CUP\Weapons\CUP_Weapons_AK\Data\ak107_body_co.paa"};
	};
	class ACM_RDI_76_TopRail_GL: CUP_arifle_AK109_GL_top_rail
	{
		author = "Anthrax";
		scope = 2;
		displayName = "RDI-762 (GL)";
		class Library
		{
			libTextDesc = "RDI-762 (GL)";
		};
		magazines[] = {"CUP_30Rnd_762x51_FNFAL_M"};
		magazineWell[] = {"CBA_762x51_FAL"};
		class ItemInfo
		{
			priority = 1;
			RMBhint = "RDI-762 (GL)";
			onHoverText = "RDI-762 (GL)";
		};
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","CamoGL1","CamoGL2"};
		hiddenSelectionsTextures[] = {"\acm_nagansk\acm_rid_body_co.paa","\acm_nagansk\acm_rid_stock_co.paa","CUP\Weapons\CUP_Weapons_AK\Data\ak74m_magazine_co.paa","CUP\Weapons\CUP_Weapons_AK\Data\ak107_body_co.paa","CUP\Weapons\CUP_Weapons_AK\Data\ak74m_camo_woodland\gp25_body_co.paa","CUP\Weapons\CUP_Weapons_AK\Data\ak74m_camo_woodland\gp25_sight_co.paa"};
	};
	class ACM_RDI_76_Railed_GL: CUP_arifle_AK109_GL_railed
	{
		author = "Anthrax";
		scope = 2;
		displayName = "RDI-762 (GL, Xarhtco)";
		class Library
		{
			libTextDesc = "RDI-762 (GL, Xarhtco)";
		};
		magazines[] = {"CUP_30Rnd_762x51_FNFAL_M"};
		magazineWell[] = {"CBA_762x51_FAL"};
		class ItemInfo
		{
			priority = 1;
			RMBhint = "RDI-762 (GL, Xarhtco)";
			onHoverText = "RDI-762 (GL, Xarhtco)";
		};
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","CamoRail","CamoGL1","CamoGL2"};
		hiddenSelectionsTextures[] = {"\acm_nagansk\acm_rid_body_co.paa","\acm_nagansk\acm_rid_stock_co.paa","CUP\Weapons\CUP_Weapons_AK\Data\ak74m_magazine_co.paa","CUP\Weapons\CUP_Weapons_AK\Data\ak107_body_co.paa","CUP\Weapons\CUP_Weapons_AK\Data\ak74m_grip_rail_co.paa","CUP\Weapons\CUP_Weapons_AK\Data\ak74m_camo_woodland\gp25_body_co.paa","CUP\Weapons\CUP_Weapons_AK\Data\ak74m_camo_woodland\gp25_sight_co.paa"};
	};
	class ACM_RDI_584_Rail: arifle_AK12_F
	{
		author = "Anthrax";
		scope = 2;
		displayName = "RDI-584";
		baseWeapon = "ACM_RDI_584_Rail";
		class Library
		{
			libTextDesc = "The RDI-584 is an improved 5.8x42 variant of the RDI-762, featuring a host of impressive features that makes the weapon a popular platform for special forces, and later, the general army of the future. Including an integrated picatinny mount, managable rate of fire, and a lighter intermediate round.";
		};
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_Tracer_F"};
		magazineWell[] = {"CTAR_580x42","CTAR_580x42_Large","CBA_580x42_TYPE95","CBA_580x42_TYPE95_XL"};
		class ItemInfo
		{
			priority = 1;
			RMBhint = "RDI-584";
			onHoverText = "RDI-584";
		};
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\acm_nagansk\acm_ak12_body_co.paa","\acm_nagansk\acm_ak12_stock_co.paa"};
	};
	class ACM_PKI_584_Rail: arifle_RPK12_F
	{
		author = "Anthrax";
		scope = 2;
		displayName = "PKI-584";
		baseWeapon = "ACM_PKI_584_Rail";
		class Library
		{
			libTextDesc = "e";
		};
		magazines[] = {"100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_Tracer_F"};
		magazineWell[] = {"CTAR_580x42","CTAR_580x42_Large","CBA_580x42_TYPE95","CBA_580x42_TYPE95_XL"};
		class ItemInfo
		{
			priority = 1;
			RMBhint = "PKI-584";
			onHoverText = "PKI-584";
		};
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\acm_nagansk\acm_ak12_body_co.paa","\acm_nagansk\acm_ak12_stock_co.paa"};
	};
	class ACM_RDI_584_GL: arifle_AK12_GL_F
	{
		author = "Anthrax";
		scope = 2;
		displayName = "RDI-584 GL";
		baseWeapon = "ACM_RDI_584_GL";
		class Library
		{
			libTextDesc = "e";
		};
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_Tracer_F"};
		magazineWell[] = {"CTAR_580x42","CTAR_580x42_Large","CBA_580x42_TYPE95","CBA_580x42_TYPE95_XL"};
		class ItemInfo
		{
			priority = 1;
			RMBhint = "RDI-584 GL";
			onHoverText = "RDI-584 GL";
		};
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\acm_nagansk\acm_ak12_body_co.paa","\acm_nagansk\acm_ak12_stock_co.paa"};
	};
	class ACM_RDI_584_C: arifle_AK12U_F
	{
		author = "Anthrax";
		scope = 2;
		displayName = "RDI-584C";
		baseWeapon = "ACM_RDI_584_C";
		class Library
		{
			libTextDesc = "e";
		};
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_Tracer_F"};
		magazineWell[] = {"CTAR_580x42","CTAR_580x42_Large","CBA_580x42_TYPE95","CBA_580x42_TYPE95_XL"};
		class ItemInfo
		{
			priority = 1;
			RMBhint = "RDI-584C";
			onHoverText = "RDI-584C";
		};
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\acm_nagansk\acm_ak12_body_co.paa","\acm_nagansk\acm_ak12_stock_co.paa"};
	};
	class launch_Titan_short_base;
	class ACM_Launch_: launch_Titan_short_base
	{
		author = "Anthrax";
		_generalMacro = "launch_I_Titan_short_F";
		scope = 2;
		displayName = "Tantalum Multiple Missile Launch System";
		picture = "\A3\Weapons_F_Beta\Launchers\Titan\Data\UI\icon_launch_I_Titan_short_F_ca.paa";
		hiddenSelectionsTextures[] = {"A3\Weapons_F_Beta\Launchers\Titan\Data\Launcher_INDP_CO.paa","A3\Weapons_F_Beta\Launchers\Titan\Data\TubeM_INDP_CO.paa"};
		magazines[] = {"Titan_AT","Titan_AP","Titan_AA"};
		magazineWell[] = {"Titan_Short","Titan_Long"};
	};
	class CUP_arifle_AKS74U_railed;
	class ACM_RDI_76M: CUP_arifle_AKS74U_railed
	{
		author = "Anthrax";
		scope = 2;
		displayName = "RDI-762M (Xarhtco)";
		class Library
		{
			libTextDesc = "RDI-762M (Xarhtco)";
		};
		magazines[] = {"CUP_30Rnd_762x51_FNFAL_M"};
		magazineWell[] = {"CBA_762x51_FAL"};
		class ItemInfo
		{
			priority = 1;
			RMBhint = "RDI-762M (Xarhtco)";
			onHoverText = "RDI-762M (Xarhtco)";
		};
		hiddenSelections[] = {"CamoBody","CamoRail","CamoExtraAssets","CamoVFG"};
		hiddenSelectionsTextures[] = {"\acm_nagansk\acm_rid_m_body_co.paa","\acm_nagansk\acm_rid_minirails_co.paa","CUP\Weapons\CUP_Weapons_AK\Data\tacticool_black_co.paa","cup\weapons\cup_weapons_weaponsdata\data\tacticool_assets\scar_acc_black_co.paa"};
	};
};
class CfgVehicles
{
	class Weapon_Base_F;
	class ACM_RDI_76_Railed_GH: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "RDI-762 (Xarhtco)";
		author = "Anthrax";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class ACM_RDI_76_Railed
			{
				weapon = "ACM_RDI_76_Railed";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class CUP_30Rnd_762x51_FNFAL_M
			{
				magazine = "CUP_30Rnd_762x51_FNFAL_M";
				count = 1;
			};
		};
	};
	class ACM_RDI_76_TopRail_GH: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "RDI-762";
		author = "Anthrax";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class ACM_RDI_76_TopRail
			{
				weapon = "ACM_RDI_76_TopRail";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class CUP_30Rnd_762x51_FNFAL_M
			{
				magazine = "CUP_30Rnd_762x51_FNFAL_M";
				count = 1;
			};
		};
	};
	class ACM_RDI_76_TopRail_GL_GH: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "RDI-762 (GL)";
		author = "Anthrax";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class ACM_RDI_76_TopRail_GL
			{
				weapon = "ACM_RDI_76_TopRail_GL";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class CUP_30Rnd_762x51_FNFAL_M
			{
				magazine = "CUP_30Rnd_762x51_FNFAL_M";
				count = 1;
			};
		};
	};
	class ACM_RDI_76_Railed_GL_GH: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "RDI-762 (GL, Xarhtco)";
		author = "Anthrax";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class ACM_RDI_76_Railed_GL
			{
				weapon = "ACM_RDI_76_Railed_GL";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class CUP_30Rnd_762x51_FNFAL_M
			{
				magazine = "CUP_30Rnd_762x51_FNFAL_M";
				count = 1;
			};
		};
	};
	class ACM_RDI_584_Rail_GH: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "RDI-584";
		author = "Anthrax";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class ACM_RDI_584_Rail
			{
				weapon = "ACM_RDI_584_Rail";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 30Rnd_580x42_Mag_F
			{
				magazine = "30Rnd_580x42_Mag_F";
				count = 1;
			};
		};
	};
	class ACM_PKI_584_Rail_GH: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "PKI-584";
		author = "Anthrax";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class ACM_PKI_584_Rail
			{
				weapon = "ACM_PKI_584_Rail";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 100Rnd_580x42_Mag_F
			{
				magazine = "100Rnd_580x42_Mag_F";
				count = 1;
			};
		};
	};
	class ACM_RDI_584_GL_GH: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "RDI-584 GL";
		author = "Anthrax";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class ACM_RDI_584_GL
			{
				weapon = "ACM_RDI_584_GL";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 30Rnd_580x42_Mag_F
			{
				magazine = "30Rnd_580x42_Mag_F";
				count = 1;
			};
		};
	};
	class ACM_RDI_584_C_GH: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "RDI-584C";
		author = "Anthrax";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class ACM_RDI_584_C
			{
				weapon = "ACM_RDI_584_C";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 30Rnd_580x42_Mag_F
			{
				magazine = "30Rnd_580x42_Mag_F";
				count = 1;
			};
		};
	};
	class ACM_RDI_76M_GH: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "RDI-762M (Xarhtco)";
		author = "Anthrax";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class ACM_RDI_76M
			{
				weapon = "ACM_RDI_76M";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class CUP_30Rnd_762x51_FNFAL_M
			{
				magazine = "CUP_30Rnd_762x51_FNFAL_M";
				count = 1;
			};
		};
	};
};
class cfgMods
{
	author = "Anthrax";
	timepacked = "1643316537";
};
