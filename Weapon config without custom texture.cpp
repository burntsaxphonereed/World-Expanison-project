////////////////////////////////////////////////////////////////////
//DeRap: misc\config.bin
//Produced from mikero's Dos Tools Dll version 9.45
//https://mikero.bytex.digital/Downloads
//'now' is Tue Sep 03 09:29:16 2024 : 'file' last modified on Tue Aug 20 07:59:17 2024
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class AC_Blk_Supplies
	{
		requiredAddons[] = {"ac_blk_equipment","ac_blk_units"};
		requiredVersion = 0.1;
		units[] = {"AC_BLK_Flag_Belka","AC_BLK_Banner_Belka","AC_Box_BLK_Wps_F","AC_Box_BLK_WpsSpecial_F","AC_Box_BLK_Ammo_F","AC_Box_BLK_Equip_F","AC_Box_BLK_Grenades_F","AC_Box_BLK_AmmoOrd_F","AC_Box_BLK_Support_F","AC_Box_BLK_AmmoVeh_F","AC_BLK_supplyCrate_F"};
		weapons[] = {"AC_BLK_weapon_arifle_AUG_36","AC_BLK_weapon_arifle_AUG_762","AC_BLK_weapon_arifle_AMP_5"};
	};
};
class CfgVehicles
{
	class FlagCarrier;
	class FlagCarrier_Asym;
	class Banner_01_base_F;
	class AC_BLK_Flag_Belka: FlagCarrier
	{
		author = "(S)Zumek";
		class SimpleObject
		{
			eden = "false";
			animate[] = {{"flag",0}};
			hide[] = {};
			verticalOffset = 3.977;
			verticalOffsetWorld = 0;
			init = "''";
		};
		scope = 2;
		scopeCurator = 2;
		displayName = "Flag (Belka)";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\AC_Belka\misc\flag_belka_co.paa'";
		};
	};
	class AC_BLK_Banner_Belka: Banner_01_base_F
	{
		author = "(S)Zumek";
		class SimpleObject
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.469;
			verticalOffsetWorld = 0;
			init = "''";
		};
		scope = 2;
		scopeCurator = 2;
		displayName = "Banner (Belka)";
		hiddenSelectionsTextures[] = {"\AC_Belka\misc\flag_belka_co.paa"};
	};
	class Box_IND_Wps_F;
	class AC_Box_BLK_Wps_F: Box_IND_Wps_F
	{
		author = "(S)Zumek";
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.189;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\Box_EAF_Wps_F.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "Basic Weapons [Belka]";
		hiddenSelectionsTextures[] = {"A3\Weapons_F\Ammoboxes\data\AmmoBox_signs_CA.paa","\a3\Supplies_F_Enoch\Ammoboxes\Data\AmmoBox_EAF_CO.paa"};
		hiddenSelectionsMaterials[] = {"a3\data_f\default_alpha.rvmat","a3\Supplies_F_Enoch\Ammoboxes\Data\AmmoBox_EAF.rvmat"};
		class TransportMagazines
		{
			class _xx_CUP_30Rnd_556x45_G36
			{
				magazine = "CUP_30Rnd_556x45_G36";
				count = 30;
			};
			class _xx_CUP_20Rnd_762x51_G3
			{
				magazine = "CUP_20Rnd_762x51_G3";
				count = 5;
			};
			class _xx_CUP_120Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M
			{
				magazine = "CUP_120Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M";
				count = 2;
			};
			class _xx_CUP_17Rnd_9x19_glock17
			{
				magazine = "CUP_17Rnd_9x19_glock17";
				count = 4;
			};
		};
		class TransportWeapons
		{
			class _xx_CUP_arifle_G36A
			{
				weapon = "CUP_arifle_G36A";
				count = 6;
			};
			class _xx_CUP_arifle_AG36
			{
				weapon = "CUP_arifle_AG36";
				count = 2;
			};
			class _xx_CUP_arifle_G3A3_modern_ris_black
			{
				weapon = "CUP_arifle_G3A3_modern_ris_black";
				count = 1;
			};
			class _xx_CUP_lmg_MG3
			{
				weapon = "CUP_lmg_MG3";
				count = 1;
			};
			class _xx_CUP_hgun_Glock17_blk
			{
				weapon = "CUP_hgun_Glock17_blk";
				count = 2;
			};
		};
		class TransportItems{};
	};
	class Box_IND_WpsLaunch_F;
	class AC_Box_BLK_WpsLaunch_F: Box_IND_WpsLaunch_F
	{
		author = "(S)Zumek";
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.15;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\Box_EAF_WpsLaunch_F.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "Launchers [Belka]";
		hiddenSelectionsTextures[] = {"A3\Weapons_F\Ammoboxes\data\AmmoBox_signs_CA.paa","\a3\Supplies_F_Enoch\Ammoboxes\Data\AmmoBox_EAF_CO.paa"};
		hiddenSelectionsMaterials[] = {"a3\data_f\default_alpha.rvmat","a3\Supplies_F_Enoch\Ammoboxes\Data\AmmoBox_EAF.rvmat"};
		class TransportMagazines
		{
			class _xx_Titan_AT
			{
				magazine = "Titan_AT";
				count = 3;
			};
			class _xx_Titan_AP
			{
				magazine = "Titan_AP";
				count = 3;
			};
			class _xx_Titan_AA
			{
				magazine = "Titan_AA";
				count = 3;
			};
			class xx_CUP_Dragon_EP1_M
			{
				magazine = "CUP_Dragon_EP1_M";
				count = 2;
			};
		};
		class TransportWeapons
		{
			class _xx_CUP_launch_PzF3
			{
				weapon = "CUP_launch_PzF3";
				count = 4;
			};
			class _xx_CUP_launch_M47
			{
				weapon = "CUP_launch_M47";
				count = 1;
			};
			class _xx_launch_I_Titan_short_F
			{
				weapon = "launch_I_Titan_short_F";
				count = 1;
			};
			class _xx_launch_B_Titan_olive_F
			{
				weapon = "launch_B_Titan_olive_F";
				count = 1;
			};
		};
		class TransportItems{};
		class TransportBackpacks
		{
			class _xx_CUP_B_GER_Pack_Flecktarn
			{
				backpack = "CUP_B_GER_Pack_Flecktarn";
				count = 4;
			};
		};
	};
	class Box_IND_Ammo_F;
	class AC_Box_BLK_Ammo_F: Box_IND_Ammo_F
	{
		author = "(S)Zumek";
		class SimpleObject
		{
			eden = 1;
			animate[] = {{"ammo_hide",0},{"ammoord_hide",1},{"grenades_hide",1},{"support_hide",1}};
			hide[] = {};
			verticalOffset = 0.284;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\Box_EAF_Ammo_F.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "Basic Ammo [Belka]";
		hiddenSelectionsTextures[] = {"A3\Weapons_F\Ammoboxes\data\AmmoBox_signs_CA.paa","A3\Supplies_F_Enoch\Ammoboxes\data\AmmoBox_EAF_CO.paa"};
		hiddenSelectionsMaterials[] = {"a3\data_f\default_alpha.rvmat","a3\Supplies_F_Enoch\Ammoboxes\Data\AmmoBox_EAF.rvmat"};
		class TransportMagazines
		{
			class _xx_CUP_17Rnd_9x19_glock17
			{
				magazine = "CUP_17Rnd_9x19_glock17";
				count = 12;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 6;
			};
			class _xx_CUP_30Rnd_556x45_G36
			{
				magazine = "CUP_30Rnd_556x45_G36";
				count = 26;
			};
			class _xx_CUP_30Rnd_TE1_Red_Tracer_556x45_G36
			{
				magazine = "CUP_30Rnd_TE1_Red_Tracer_556x45_G36";
				count = 4;
			};
			class _xx_CUP_20Rnd_762x51_G3
			{
				magazine = "CUP_20Rnd_762x51_G3";
				count = 6;
			};
			class _xx_CUP_120Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M
			{
				magazine = "CUP_120Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M";
				count = 3;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 6;
			};
			class _xx_MiniGrenade
			{
				magazine = "MiniGrenade";
				count = 6;
			};
		};
		class TransportWeapons{};
		class TransportItems{};
	};
	class Box_AAF_Equip_F;
	class AC_Box_BLK_Equip_F: Box_AAF_Equip_F
	{
		author = "(S)Zumek";
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.382;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\Box_EAF_Equip_F.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "Equipment Box [Belka]";
		hiddenSelectionsTextures[] = {"\A3\Supplies_F_Exp\Ammoboxes\Data\equipment_box_blufor_co.paa","\A3\Supplies_F_Exp\Ammoboxes\Data\equipment_box_blufor_co.paa"};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems
		{
			class _xx_CUP_H_Ger_Boonie2_Flecktarn
			{
				name = "CUP_H_Ger_Boonie2_Flecktarn";
				count = 4;
			};
			class _xx_BLK_H_MilCap_flecktarn
			{
				name = "BLK_H_MilCap_flecktarn";
				count = 2;
			};
			class _xx_CUP_V_B_GER_PVest_Fleck_RFL
			{
				name = "CUP_V_B_GER_PVest_Fleck_RFL";
				count = 2;
			};
			class _xx_CUP_V_B_GER_PVest_Fleck_MG
			{
				name = "CUP_V_B_GER_PVest_Fleck_MG";
				count = 2;
			};
			class _xx_CUP_V_B_GER_PVest_Fleck_TL
			{
				name = "CUP_V_B_GER_PVest_Fleck_TL";
				count = 2;
			};
			class _xx_CUP_V_B_GER_PVest_Fleck_Med
			{
				name = "CUP_V_B_GER_PVest_Fleck_Med";
				count = 2;
			};
			class _xx_CUP_V_B_GER_PVest_Fleck_Gren
			{
				name = "CUP_V_B_GER_PVest_Fleck_Gren";
				count = 2;
			};
			class _xx_CUP_V_B_GER_Carrier_Vest_3
			{
				name = "CUP_V_B_GER_Carrier_Vest_3";
				count = 2;
			};
			class _xx_H_Tank_black_F
			{
				name = "H_Tank_black_F";
				count = 2;
			};
			class _xx_H_PilotHelmetHeli_B
			{
				name = "H_PilotHelmetHeli_B";
				count = 2;
			};
			class _xx_H_PilotHelmetFighter_O
			{
				name = "H_PilotHelmetFighter_O";
				count = 2;
			};
			class _xx_BLK_H_ACH_Flecktarn
			{
				name = "BLK_H_ACH_Flecktarn";
				count = 2;
			};
			class _xx_BLK_H_ACH_Headset_Flecktarn
			{
				name = "BLK_H_ACH_Headset_Flecktarn";
				count = 2;
			};
			class _xx_BLK_H_ACH_ESS_Flecktarn
			{
				name = "BLK_H_ACH_ESS_Flecktarn";
				count = 2;
			};
			class _xx_BLK_H_ACH_ESS_Headset_Flecktarn
			{
				name = "BLK_H_ACH_ESS_Headset_Flecktarn";
				count = 2;
			};
			class _xx_BLK_H_ACH_ESS_COVERED_Flecktarn
			{
				name = "BLK_H_ACH_ESS_COVERED_Flecktarn";
				count = 2;
			};
			class _xx_BLK_H_ACH_ESS_COVERED_Headset_Flecktarn
			{
				name = "BLK_H_ACH_ESS_COVERED_Headset_Flecktarn";
				count = 2;
			};
			class _xx_H_Shemag_olive
			{
				name = "H_Shemag_olive";
				count = 2;
			};
		};
	};
	class Box_IND_Grenades_F;
	class AC_Box_BLK_Grenades_F: Box_IND_Grenades_F
	{
		author = "(S)Zumek";
		class SimpleObject
		{
			eden = 1;
			animate[] = {{"ammo_hide",1},{"ammoord_hide",1},{"grenades_hide",0},{"support_hide",1}};
			hide[] = {};
			verticalOffset = 0.284;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\Box_EAF_Grenades_F.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "Grenades [Belka]";
		hiddenSelectionsTextures[] = {"A3\Weapons_F\Ammoboxes\data\AmmoBox_signs_CA.paa","A3\Supplies_F_Enoch\Ammoboxes\data\AmmoBox_EAF_CO.paa"};
		hiddenSelectionsMaterials[] = {"a3\data_f\default_alpha.rvmat","a3\Supplies_F_Enoch\Ammoboxes\Data\AmmoBox_EAF.rvmat"};
		class TransportMagazines
		{
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 6;
			};
			class _xx_UGL_FlareGreen_F
			{
				magazine = "UGL_FlareGreen_F";
				count = 2;
			};
			class _xx_UGL_FlareWhite_F
			{
				magazine = "UGL_FlareWhite_F";
				count = 2;
			};
			class _xx_O_IR_Grenade
			{
				magazine = "O_IR_Grenade";
				count = 8;
			};
			class _xx_MiniGrenade
			{
				magazine = "MiniGrenade";
				count = 12;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 12;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 2;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 2;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 2;
			};
			class _xx_SmokeShellPurple
			{
				magazine = "SmokeShellPurple";
				count = 2;
			};
			class _xx_SmokeShellRed
			{
				magazine = "SmokeShellRed";
				count = 2;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 2;
			};
			class _xx_SmokeShellYellow
			{
				magazine = "SmokeShellYellow";
				count = 2;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine = "1Rnd_SmokeBlue_Grenade_shell";
				count = 2;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 2;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
				count = 2;
			};
			class _xx_1Rnd_SmokeRed_Grenade_shell
			{
				magazine = "1Rnd_SmokeRed_Grenade_shell";
				count = 2;
			};
			class _xx_1Rnd_SmokePurple_Grenade_shell
			{
				magazine = "1Rnd_SmokePurple_Grenade_shell";
				count = 2;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 2;
			};
			class _xx_1Rnd_SmokeYellow_Grenade_shell
			{
				magazine = "1Rnd_SmokeYellow_Grenade_shell";
				count = 2;
			};
		};
		class TransportWeapons{};
		class TransportItems{};
	};
	class Box_IND_AmmoOrd_F;
	class AC_Box_BLK_AmmoOrd_F: Box_IND_AmmoOrd_F
	{
		author = "(S)Zumek";
		class SimpleObject
		{
			eden = 1;
			animate[] = {{"ammo_hide",1},{"ammoord_hide",0},{"grenades_hide",1},{"support_hide",1}};
			hide[] = {};
			verticalOffset = 0.284;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\Box_EAF_AmmoOrd_F.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "Explosives [Belka]";
		hiddenSelectionsTextures[] = {"A3\Weapons_F\Ammoboxes\data\AmmoBox_signs_CA.paa","A3\Supplies_F_Enoch\Ammoboxes\data\AmmoBox_EAF_CO.paa"};
		hiddenSelectionsMaterials[] = {"a3\data_f\default_alpha.rvmat","a3\Supplies_F_Enoch\Ammoboxes\Data\AmmoBox_EAF.rvmat"};
		class TransportMagazines
		{
			class _xx_APERSBoundingMine_Range_Mag
			{
				magazine = "APERSBoundingMine_Range_Mag";
				count = 5;
			};
			class _xx_APERSMine_Range_Mag
			{
				magazine = "APERSMine_Range_Mag";
				count = 5;
			};
			class _xx_APERSTripMine_Wire_Mag
			{
				magazine = "APERSTripMine_Wire_Mag";
				count = 5;
			};
			class _xx_ATMine_Range_Mag
			{
				magazine = "ATMine_Range_Mag";
				count = 5;
			};
			class _xx_ClaymoreDirectionalMine_Remote_Mag
			{
				magazine = "ClaymoreDirectionalMine_Remote_Mag";
				count = 5;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine = "DemoCharge_Remote_Mag";
				count = 5;
			};
			class _xx_SatchelCharge_Remote_Mag
			{
				magazine = "SatchelCharge_Remote_Mag";
				count = 5;
			};
			class _xx_SLAMDirectionalMine_Wire_Mag
			{
				magazine = "SLAMDirectionalMine_Wire_Mag";
				count = 5;
			};
		};
		class TransportWeapons{};
		class TransportItems{};
	};
	class Box_IND_Support_F;
	class AC_Box_BLK_Support_F: Box_IND_Support_F
	{
		author = "(S)Zumek";
		class SimpleObject
		{
			eden = 1;
			animate[] = {{"ammo_hide",1},{"ammoord_hide",1},{"grenades_hide",1},{"support_hide",0}};
			hide[] = {};
			verticalOffset = 0.284;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\Box_EAF_Support_F.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "Support [Belka]";
		hiddenSelectionsTextures[] = {"A3\Weapons_F\Ammoboxes\data\AmmoBox_signs_CA.paa","A3\Supplies_F_Enoch\Ammoboxes\data\AmmoBox_EAF_CO.paa"};
		hiddenSelectionsMaterials[] = {"a3\data_f\default_alpha.rvmat","a3\Supplies_F_Enoch\Ammoboxes\Data\AmmoBox_EAF.rvmat"};
		class TransportMagazines
		{
			class _xx_Laserbatteries
			{
				magazine = "Laserbatteries";
				count = 5;
			};
		};
		class TransportWeapons{};
		class TransportItems
		{
			class _xx_Binocular
			{
				name = "Binocular";
				count = 2;
			};
			class _xx_bipod_01_F_blk
			{
				name = "bipod_01_F_blk";
				count = 6;
			};
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
			class _xx_acc_flashlight
			{
				name = "acc_flashlight";
				count = 5;
			};
			class _xx_ItemGPS
			{
				name = "ItemGPS";
				count = 5;
			};
			class _xx_acc_pointer_IR
			{
				name = "acc_pointer_IR";
				count = 5;
			};
			class _xx_Laserdesignator_03
			{
				name = "Laserdesignator_03";
				count = 1;
			};
			class _xx_Medikit
			{
				name = "Medikit";
				count = 1;
			};
			class _xx_MineDetector
			{
				name = "MineDetector";
				count = 2;
			};
			class _xx_NVGoggles_OPFOR
			{
				name = "NVGoggles_OPFOR";
				count = 4;
			};
			class _xx_Rangefinder
			{
				name = "Rangefinder";
				count = 2;
			};
			class _xx_CUP_muzzle_snds_G36_black
			{
				name = "CUP_muzzle_snds_G36_black";
				count = 8;
			};
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
		};
	};
	class Box_IND_AmmoVeh_F;
	class AC_Box_BLK_AmmoVeh_F: Box_IND_AmmoVeh_F
	{
		author = "(S)Zumek";
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.79;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\Box_EAF_AmmoVeh_F.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "Vehicle Ammo [Belka]";
		hiddenSelectionsTextures[] = {"A3\Weapons_F\Ammoboxes\data\AmmoBox_signs_CA.paa","A3\Supplies_F_Enoch\Ammoboxes\data\AmmoVeh_EAF_CO.paa"};
	};
	class I_supplyCrate_F;
	class AC_BLK_supplyCrate_F: I_supplyCrate_F
	{
		author = "(S)Zumek";
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.892;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\I_EAF_supplyCrate_F.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "Supply Crate [Belka]";
		class TransportMagazines
		{
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 4;
			};
			class _xx_CUP_30Rnd_556x45_G36
			{
				magazine = "CUP_30Rnd_556x45_G36";
				count = 26;
			};
			class _xx_CUP_30Rnd_TE1_Red_Tracer_556x45_G36
			{
				magazine = "CUP_30Rnd_TE1_Red_Tracer_556x45_G36";
				count = 4;
			};
			class _xx_CUP_20Rnd_762x51_G3
			{
				magazine = "CUP_20Rnd_762x51_G3";
				count = 6;
			};
			class _xx_CUP_120Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M
			{
				magazine = "CUP_120Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M";
				count = 3;
			};
			class _xx_Chemlight_red
			{
				magazine = "Chemlight_red";
				count = 6;
			};
			class _xx_Laserbatteries
			{
				magazine = "Laserbatteries";
				count = 2;
			};
			class _xx_UGL_FlareGreen_F
			{
				magazine = "UGL_FlareGreen_F";
				count = 2;
			};
			class _xx_UGL_FlareWhite_F
			{
				magazine = "UGL_FlareWhite_F";
				count = 2;
			};
			class _xx_MiniGrenade
			{
				magazine = "MiniGrenade";
				count = 6;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 6;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 2;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 2;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 2;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 2;
			};
		};
		class TransportWeapons
		{
			class _xx__CUP_arifle_G36A
			{
				weapon = "CUP_arifle_G36A";
				count = 6;
			};
			class _xx_CUP_arifle_AG36
			{
				weapon = "CUP_arifle_AG36";
				count = 2;
			};
			class _xx_CUP_launch_PzF3
			{
				weapon = "CUP_launch_PzF3";
				count = 2;
			};
		};
		class TransportItems
		{
			class _xx_bipod_01_F_blk
			{
				name = "bipod_01_F_blk";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
			class _xx_acc_flashlight
			{
				name = "acc_flashlight";
				count = 5;
			};
			class _xx_Laserdesignator_03
			{
				name = "Laserdesignator_03";
				count = 1;
			};
		};
		class TransportBackpacks
		{
			class _xx_CUP_B_GER_Pack_Flecktarn
			{
				backpack = "CUP_B_GER_Pack_Flecktarn";
				count = 2;
			};
		};
	};
};
class CfgUnitInsignia
{
	class Belka_flag_patch
	{
		displayName = "Belka";
		author = "(S)Zumek";
		texture = "\AC_Belka\misc\patches\AC_BLK_Belkan_Flag_Patch_co.paa";
		textureVehicle = "";
	};
	class Belka_Army_patch
	{
		displayName = "Belkan Army";
		author = "(S)Zumek";
		texture = "\AC_Belka\misc\patches\AC_BLK_Belkan_Army_Patch_co.paa";
		textureVehicle = "";
	};
	class Belka_Airforce_patch
	{
		displayName = "Belkan Air Force";
		author = "(S)Zumek";
		texture = "\AC_Belka\misc\patches\AC_BLK_Belkan_Airforce_Patch_co.paa";
		textureVehicle = "";
	};
	class Belka_Airforce_crest
	{
		displayName = "Belkan Air Force (Crest)";
		author = "(S)Zumek";
		texture = "\AC_Belka\misc\patches\AC_BLK_Belkan_Airforce_crest_co.paa";
		textureVehicle = "";
	};
	class Belka_BDR_patch
	{
		displayName = "BDR (Fanon)";
		author = "(S)Zumek";
		texture = "\AC_Belka\misc\patches\AC_BLK_Belkanische_Demokratische_Republik_fanon_co.paa";
		textureVehicle = "";
	};
	class Belka_Gault_SQ
	{
		displayName = "Gault Squadron";
		author = "(S)Zumek";
		texture = "\AC_Belka\misc\patches\AC_BLK_GaultSQ_patch_co.paa";
		textureVehicle = "";
	};
	class Belka_Gelb_SQ
	{
		displayName = "Gelb Squadron";
		author = "(S)Zumek";
		texture = "\AC_Belka\misc\patches\AC_BLK_GelbSQ_patch_co.paa";
		textureVehicle = "";
	};
	class Belka_Grun_SQ
	{
		displayName = "Grun Squadron";
		author = "(S)Zumek";
		texture = "\AC_Belka\misc\patches\AC_BLK_GrunSQ_patch_co.paa";
		textureVehicle = "";
	};
	class Belka_Indigo_SQ
	{
		displayName = "Indigo Squadron";
		author = "(S)Zumek";
		texture = "\AC_Belka\misc\patches\AC_BLK_IndigoSQ_patch_co.paa";
		textureVehicle = "";
	};
	class Belka_Rot_SQ
	{
		displayName = "Rot Squadron";
		author = "(S)Zumek";
		texture = "\AC_Belka\misc\patches\AC_BLK_RotSQ_patch_co.paa";
		textureVehicle = "";
	};
	class Belka_SBMF
	{
		displayName = "South Belka Munitions Factory";
		author = "(S)Zumek";
		texture = "\AC_Belka\misc\patches\AC_BLK_SBMF_logo_co.paa";
		textureVehicle = "";
	};
	class Belka_Schnee_SQ
	{
		displayName = "Schnee Squadron";
		author = "(S)Zumek";
		texture = "\AC_Belka\misc\patches\AC_BLK_SchneeSQ_patch_co.paa";
		textureVehicle = "";
	};
	class Belka_Schwarze_SQ
	{
		displayName = "Schwarze Squadron";
		author = "(S)Zumek";
		texture = "\AC_Belka\misc\patches\AC_BLK_SchwarzeSQ_patch_co.paa";
		textureVehicle = "";
	};
	class Belka_Silber_SQ
	{
		displayName = "Silber Squadron";
		author = "(S)Zumek";
		texture = "\AC_Belka\misc\patches\AC_BLK_SilberSQ_patch_co.paa";
		textureVehicle = "";
	};
};
class CfgMarkers
{
	class flag_NATO;
	class AC_BLK_Marker_flag: flag_NATO
	{
		name = "Belka";
		icon = "\AC_Belka\misc\AC_flag_blk_icon_co.paa";
		texture = "\AC_Belka\misc\AC_flag_blk_icon_co.paa";
		size = 32;
		scope = 2;
		scopeCurator = 2;
		shadow = 0;
		color[] = {1,1,1,1};
		markerClass = "Flags";
	};
	class AC_BLK_Marker_Air_Force: flag_NATO
	{
		name = "Belkan Air Force";
		icon = "\AC_Belka\misc\AC_flag_blk_airforce_icon_co.paa";
		texture = "\AC_Belka\misc\AC_flag_blk_airforce_icon_co.paa";
		size = 32;
		scope = 2;
		scopeCurator = 2;
		shadow = 0;
		color[] = {1,1,1,1};
		markerClass = "Flags";
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons
{
	class Turrets;
	class mainturret;
	class CUP_arifle_AUG_A1;
	class AC_BLK_weapon_arifle_AUG_36: CUP_arifle_AUG_A1
	{
		author = "(S)Zumek";
		scope = 2;
		displayName = "AUG-36A1";
		magazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36_camo","CUP_30Rnd_556x45_G36_wdl","CUP_30Rnd_556x45_G36_hex","CUP_30Rnd_TE1_Red_Tracer_556x45_G36","CUP_30Rnd_TE1_Green_Tracer_556x45_G36","CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36","CUP_30Rnd_TE1_Red_Tracer_556x45_G36_camo","CUP_30Rnd_TE1_Green_Tracer_556x45_G36_camo","CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36_camo","CUP_30Rnd_TE1_Red_Tracer_556x45_G36_wdl","CUP_30Rnd_TE1_Green_Tracer_556x45_G36_wdl","CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36_wdl","CUP_30Rnd_TE1_Red_Tracer_556x45_G36_hex","CUP_30Rnd_TE1_Green_Tracer_556x45_G36_hex","CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36_hex","CUP_30Rnd_556x45_AUG","CUP_30Rnd_TE1_Yellow_Tracer_556x45_AUG","CUP_30Rnd_TE1_Red_Tracer_556x45_AUG","CUP_30Rnd_TE1_Green_Tracer_556x45_AUG"};
		magazineWell[] = {"CBA_556x45_G36"};
		class ItemInfo
		{
			priority = 1;
			RMBhint = "AUG-36A1";
			onHoverText = "AUG-36A1";
		};
	};
	class AC_BLK_weapon_arifle_AUG_762: CUP_arifle_AUG_A1
	{
		author = "(S)Zumek";
		scope = 2;
		displayName = "AUG-762";
		magazines[] = {"CUP_20Rnd_762x51_G3","CUP_20Rnd_TE1_Red_Tracer_762x51_G3","CUP_20Rnd_TE1_Green_Tracer_762x51_G3","CUP_20Rnd_TE1_Yellow_Tracer_762x51_G3"};
		magazineWell[] = {"CBA_762x51_G3"};
		class ItemInfo
		{
			priority = 1;
			RMBhint = "AUG-762";
			onHoverText = "AUG-762";
		};
		recoil = "Recoil_CUP_G3";
		jsrs_soundeffect = "JSRS2_Distance_Effects_Fal";
		initSpeed = -0.98796;
		ACE_barrelTwist = 304.8;
		ACE_barrelLength = 449.58;
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"DMR03_Shot_SoundSet","CUP_lmg1_Tail_SoundSet","DMR03_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"DMR03_silencerShot_SoundSet","CUP_rifle1_SD_Tail_SoundSet","DMR03_silencerInteriorTail_SoundSet"};
			};
			reloadTime = 0.097;
			dispersion = 0.000436332;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.05;
			aiRateOfFireDistance = 600;
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"DMR03_Shot_SoundSet","CUP_lmg1_Tail_SoundSet","DMR03_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"DMR03_silencerShot_SoundSet","CUP_rifle1_SD_Tail_SoundSet","DMR03_silencerInteriorTail_SoundSet"};
			};
			soundBurst = 0;
			reloadTime = 0.097;
			dispersion = 0.000436332;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 30;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
		};
	};
	class AC_BLK_weapon_arifle_AMP_5: CUP_arifle_AUG_A1
	{
		author = "(S)Zumek";
		scope = 2;
		displayName = "AMP-5";
		magazines[] = {"CUP_30Rnd_Subsonic_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_Green_Tracer_9x19_MP5","CUP_30Rnd_Red_Tracer_9x19_MP5","CUP_30Rnd_Yellow_Tracer_9x19_MP5"};
		magazineWell[] = {"CBA_9x19_MP5"};
		class ItemInfo
		{
			priority = 1;
			RMBhint = "AMP-5";
			onHoverText = "AMP-5";
		};
		recoil = "recoil_smg_05";
		reloadTime = 0.075;
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_01",0.501187,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_02",0.501187,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
				soundSetShot[] = {"CUP_MP7_Closure_SoundSet","CUP_MP7_Shot_SoundSet","CUP_pistol1_Tail_SoundSet"};
				begin1[] = {"CUP\Weapons\CUP_Weapons_Mp5\data\sfx\MP5_s1",1,1,900};
				begin2[] = {"CUP\Weapons\CUP_Weapons_Mp5\data\sfx\MP5_s2",1,1,900};
				begin3[] = {"CUP\Weapons\CUP_Weapons_Mp5\data\sfx\MP5_s3",1,1,900};
				begin4[] = {"CUP\Weapons\CUP_Weapons_Mp5\data\sfx\MP5_s4",1,1,900};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_interior",1.58489,1,900};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_trees",1,1,900};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_forest",1,1,900};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_meadows",1,1,900};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_houses",1,1,900};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = {"Rogue9_silencerShot_SoundSet","Rogue9_silencerTail_SoundSet","Rogue9_silencerInteriorTail_SoundSet"};
			};
			reloadTime = 0.075;
			dispersion = 0.003;
			minRange = 2;
			minRangeProbab = 0.25;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.05;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_01",0.501187,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_02",0.501187,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
				soundSetShot[] = {"CUP_MP7_Closure_SoundSet","CUP_MP7_Shot_SoundSet","CUP_pistol1_Tail_SoundSet"};
				begin1[] = {"CUP\Weapons\CUP_Weapons_Mp5\data\sfx\MP5_s1",1,1,900};
				begin2[] = {"CUP\Weapons\CUP_Weapons_Mp5\data\sfx\MP5_s2",1,1,900};
				begin3[] = {"CUP\Weapons\CUP_Weapons_Mp5\data\sfx\MP5_s3",1,1,900};
				begin4[] = {"CUP\Weapons\CUP_Weapons_Mp5\data\sfx\MP5_s4",1,1,900};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_interior",1.58489,1,900};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_trees",1,1,900};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_forest",1,1,900};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_meadows",1,1,900};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_houses",1,1,900};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = {"Rogue9_silencerShot_SoundSet","Rogue9_silencerTail_SoundSet","Rogue9_silencerInteriorTail_SoundSet"};
			};
			reloadTime = 0.075;
			minRange = 0;
			minRangeProbab = 0.2;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 40;
			maxRangeProbab = 0.05;
		};
	};
};
