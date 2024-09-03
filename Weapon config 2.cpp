////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.45
//https://mikero.bytex.digital/Downloads
//'now' is Tue Sep 03 10:21:44 2024 : 'file' last modified on Tue Oct 12 09:16:32 2021
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ACM_HrafWeapons
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CUP_Weapons_WeaponsCore"};
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
	class CUP_arifle_M16A4_Base;
	class CUP_arifle_M16A4_GL;
	class CUP_arifle_M16A4_Grip;
	class CUP_srifle_m110_kac_black;
	class ACM_Mo16A: CUP_arifle_M16A4_Base
	{
		author = "Anthrax";
		scope = 2;
		displayName = "M/O-16";
		class Library
		{
			libTextDesc = "M/O-16";
		};
		class ItemInfo
		{
			priority = 1;
			RMBhint = "M/O-16";
			onHoverText = "M/O-16";
		};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ACM_Hrafnseyri_Main\rifle_m16_wood_co.paa"};
		hiddenSelectionsMaterials[] = {"\ACM_Hrafnseyri_Main\rifle_m16_wood.rvmat"};
	};
	class ACM_Mo16A_GL: CUP_arifle_M16A4_GL
	{
		author = "Anthrax";
		scope = 2;
		displayName = "M/O-16 GL";
		class Library
		{
			libTextDesc = "M/O-16 GL";
		};
		class ItemInfo
		{
			priority = 1;
			RMBhint = "M/O-16 GL";
			onHoverText = "M/O-16 GL";
		};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ACM_Hrafnseyri_Main\rifle_m16_wood_co.paa"};
		hiddenSelectionsMaterials[] = {"\ACM_Hrafnseyri_Main\rifle_m16_wood.rvmat"};
	};
	class ACM_Mo16A_Grip: CUP_arifle_M16A4_Grip
	{
		author = "Anthrax";
		scope = 2;
		displayName = "M/O-16 (Grip)";
		class Library
		{
			libTextDesc = "M/O-16 (Grip)";
		};
		class ItemInfo
		{
			priority = 1;
			RMBhint = "M/O-16 (Grip)";
			onHoverText = "M/O-16 (Grip)";
		};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ACM_Hrafnseyri_Main\rifle_m16_wood_co.paa"};
		hiddenSelectionsMaterials[] = {"\ACM_Hrafnseyri_Main\rifle_m16_wood.rvmat"};
	};
	class ACM_Mo18L_SPR: CUP_srifle_m110_kac_black
	{
		author = "Anthrax";
		scope = 2;
		displayName = "M/O-18";
		class Library
		{
			libTextDesc = "M/O-18";
		};
		class ItemInfo
		{
			priority = 1;
			RMBhint = "M/O-18";
			onHoverText = "M/O-18";
		};
		hiddenSelectionsTextures[] = {"\ACM_Hrafnseyri_Main\acm_m110_wood.paa","\ACM_Hrafnseyri_Main\acm_m110_wood.paa","cup\weapons\cup_weapons_weaponsdata\data\ris_cover\rail_cover_co.paa"};
	};
};
class CfgVehicles
{
	class Weapon_Base_F;
	class ACM_Mo16A_GH: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "M/O-16";
		author = "Anthrax";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class ACM_Mo16A
			{
				weapon = "ACM_Mo16A";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class CUP_30Rnd_556x45_Stanag
			{
				magazine = "CUP_30Rnd_556x45_Stanag";
				count = 1;
			};
		};
	};
	class ACM_Mo16A_GL_GH: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "M/O-16 GL";
		author = "Anthrax";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class ACM_Mo16A_GL
			{
				weapon = "ACM_Mo16A_GL";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class CUP_30Rnd_556x45_Stanag
			{
				magazine = "CUP_30Rnd_556x45_Stanag";
				count = 1;
			};
		};
	};
	class ACM_Mo16A_Grip_GH: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "M/O-16 (Grip)";
		author = "Anthrax";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class ACM_Mo16A_Grip
			{
				weapon = "ACM_Mo16A_Grip";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class CUP_30Rnd_556x45_Stanag
			{
				magazine = "CUP_30Rnd_556x45_Stanag";
				count = 1;
			};
		};
	};
	class ACM_Mo18L_SPR_GH: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "M/O-18";
		author = "Anthrax";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_SniperRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class ACM_Mo18L_SPR
			{
				weapon = "ACM_Mo18L_SPR";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class CUP_20Rnd_762x51_B_M110
			{
				magazine = "CUP_20Rnd_762x51_B_M110";
				count = 1;
			};
		};
	};
};
class cfgMods
{
	author = "Anthrax";
	timepacked = "1634073391";
};
