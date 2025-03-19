////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.45
//https://mikero.bytex.digital/Downloads
//'now' is Tue Mar 18 23:54:44 2025 : 'file' last modified on Mon Mar 17 08:10:57 2025
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Flex_CUP_LOM_Equipment
	{
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"A3_Characters_F","A3_Weapons_F","CUP_Creatures_People_Military_DummyInfantrySet","CUP_Creatures_People_Core","CUP_Creatures_Military_USArmy"};
	};
};
class CfgUnitInsignia
{
	class Flex_CUP_SLOM_12_Patch
	{
		author = "Flex7103";
		displayName = "212th Lions of Kelakam";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
		texture = "\Flex_CUP_LOM_Equipment\Data\Ui\SLDF_12_Patch_ca.paa";
	};
	class Flex_CUP_UN_Roundel_Patch
	{
		author = "Flex7103";
		displayName = "United Nations";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
		texture = "\Flex_CUP_LOM_Equipment\Data\Ui\POR_Insignia_UN_co.paa";
	};
};
class CfgVehicles
{
	class CUP_B_USArmy_Soldier_BDUv2_desert;
	class Flex_CUP_SLOM_BDU_Wood_Light: CUP_B_USArmy_Soldier_BDUv2_desert
	{
		author = "Flex7103";
		scope = 1;
		side = 2;
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\CUP_u_BDUv2.p3d";
		uniformClass = "Flex_CUP_SLOM_BDU_Wood_Light";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Flag","insignia"};
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\SLDF_BDUv2_Wood_CO.paa","\Flex_CUP_LOM_Equipment\Data\SLDF_BDUv2_Wood_CO.paa","\Flex_CUP_LOM_Equipment\Data\SLDF_BDUv2_Wood_CO.paa","\Flex_CUP_LOM_Equipment\Data\SLDF_BDUv2_Wood_CO.paa","\Flex_CUP_LOM_Equipment\Data\flag_SLombakka.paa"};
	};
	class Flex_CUP_NLOM_BDU_Wood_Light: CUP_B_USArmy_Soldier_BDUv2_desert
	{
		author = "Flex7103";
		scope = 1;
		side = 0;
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\CUP_u_BDUv2.p3d";
		uniformClass = "Flex_CUP_NLOM_BDU_Wood_Light";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Flag","insignia"};
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\NLAF_BDUv2_Wood_CO.paa","\Flex_CUP_LOM_Equipment\Data\NLAF_BDUv2_Wood_CO.paa","\Flex_CUP_LOM_Equipment\Data\NLAF_BDUv2_Wood_CO.paa","\Flex_CUP_LOM_Equipment\Data\NLAF_BDUv2_Wood_CO.paa",""};
	};
	class CUP_B_USArmy_Soldier_BDUv2_roll2_desert;
	class Flex_CUP_SLOM_BDU_Wood_Light_Rolled: CUP_B_USArmy_Soldier_BDUv2_roll2_desert
	{
		author = "Flex7103";
		scope = 1;
		side = 2;
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\CUP_u_BDUv2_roll2.p3d";
		uniformClass = "Flex_CUP_SLOM_BDU_Wood_Light_Rolled";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Flag","insignia"};
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\SLDF_BDUv2_Wood_CO.paa","\Flex_CUP_LOM_Equipment\Data\SLDF_BDUv2_Wood_CO.paa","\Flex_CUP_LOM_Equipment\Data\SLDF_BDUv2_Wood_CO.paa","\Flex_CUP_LOM_Equipment\Data\SLDF_BDUv2_Wood_CO.paa","\Flex_CUP_LOM_Equipment\Data\flag_SLombakka.paa"};
	};
	class Flex_CUP_NLOM_BDU_Wood_Light_Rolled: CUP_B_USArmy_Soldier_BDUv2_roll2_desert
	{
		author = "Flex7103";
		scope = 1;
		side = 0;
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\CUP_u_BDUv2_roll2.p3d";
		uniformClass = "Flex_CUP_NLOM_BDU_Wood_Light_Rolled";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Flag","insignia"};
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\NLAF_BDUv2_Wood_CO.paa","\Flex_CUP_LOM_Equipment\Data\NLAF_BDUv2_Wood_CO.paa","\Flex_CUP_LOM_Equipment\Data\NLAF_BDUv2_Wood_CO.paa","\Flex_CUP_LOM_Equipment\Data\NLAF_BDUv2_Wood_CO.paa",""};
	};
	class Flex_CUP_NLOM_BDU_Militia_Light_Rolled: CUP_B_USArmy_Soldier_BDUv2_roll2_desert
	{
		author = "Flex7103";
		scope = 1;
		side = 0;
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\CUP_u_BDUv2_roll2.p3d";
		uniformClass = "Flex_CUP_NLOM_BDU_Militia_Light_Rolled";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Flag","insignia"};
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\NLAF_BDUv2_Militia_CO.paa","\Flex_CUP_LOM_Equipment\Data\NLAF_BDUv2_Militia_CO.paa","\Flex_CUP_LOM_Equipment\Data\NLAF_BDUv2_Militia_CO.paa","\Flex_CUP_LOM_Equipment\Data\NLAF_BDUv2_Militia_CO.paa",""};
	};
	class Flex_CUP_NLOM_BDU_Militia_Alt_Light_Rolled: CUP_B_USArmy_Soldier_BDUv2_roll2_desert
	{
		author = "Flex7103";
		scope = 1;
		side = 0;
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\CUP_u_BDUv2_roll2.p3d";
		uniformClass = "Flex_CUP_NLOM_BDU_Militia_Alt_Light_Rolled";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Flag","insignia"};
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\NLAF_BDUv2_Militia_alt_CO.paa","\Flex_CUP_LOM_Equipment\Data\NLAF_BDUv2_Militia_alt_CO.paa","\Flex_CUP_LOM_Equipment\Data\NLAF_BDUv2_Militia_alt_CO.paa","\Flex_CUP_LOM_Equipment\Data\NLAF_BDUv2_Militia_alt_CO.paa",""};
	};
	class CUP_B_USArmy_Soldier_BDUv2_gloves_desert;
	class Flex_CUP_SLOM_BDU_Wood_Light_Gloves: CUP_B_USArmy_Soldier_BDUv2_gloves_desert
	{
		author = "Flex7103";
		scope = 1;
		side = 2;
		uniformClass = "Flex_CUP_SLOM_BDU_Wood_Light_Rolled_Gloves";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5","Flag","insignia"};
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\SLDF_BDUv2_Wood_CO.paa","\Flex_CUP_LOM_Equipment\Data\SLDF_BDUv2_Wood_CO.paa","\Flex_CUP_LOM_Equipment\Data\SLDF_BDUv2_Wood_CO.paa","\Flex_CUP_LOM_Equipment\Data\SLDF_BDUv2_Wood_CO.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USMC\data\fs_oakley_glove_coyote_brown_co.paa","\Flex_CUP_LOM_Equipment\Data\flag_SLombakka.paa"};
	};
	class Flex_CUP_SLOM_BDU_Wood_Light_Rolled_Gloves: CUP_B_USArmy_Soldier_BDUv2_gloves_desert
	{
		author = "Flex7103";
		scope = 1;
		side = 2;
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\CUP_u_BDUv2_roll2_gloves.p3d";
		uniformClass = "Flex_CUP_SLOM_BDU_Wood_Light_Rolled_Gloves";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5","Flag","insignia"};
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\SLDF_BDUv2_Wood_CO.paa","\Flex_CUP_LOM_Equipment\Data\SLDF_BDUv2_Wood_CO.paa","\Flex_CUP_LOM_Equipment\Data\SLDF_BDUv2_Wood_CO.paa","\Flex_CUP_LOM_Equipment\Data\SLDF_BDUv2_Wood_CO.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USMC\data\fs_oakley_glove_coyote_brown_co.paa","\Flex_CUP_LOM_Equipment\Data\flag_SLombakka.paa"};
	};
	class Flex_CUP_NLOM_BDU_Wood_Light_Rolled_Gloves: CUP_B_USArmy_Soldier_BDUv2_gloves_desert
	{
		author = "Flex7103";
		scope = 1;
		side = 0;
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\CUP_u_BDUv2_roll2_gloves.p3d";
		uniformClass = "Flex_CUP_NLOM_BDU_Wood_Light_Rolled_Gloves";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5","Flag","insignia"};
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\NLAF_BDUv2_Wood_CO.paa","\Flex_CUP_LOM_Equipment\Data\NLAF_BDUv2_Wood_CO.paa","\Flex_CUP_LOM_Equipment\Data\NLAF_BDUv2_Wood_CO.paa","\Flex_CUP_LOM_Equipment\Data\NLAF_BDUv2_Wood_CO.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USMC\data\fs_oakley_glove_coyote_brown_co.paa",""};
	};
	class CUP_O_RUS_Soldier_02;
	class Flex_CUP_BOC_Combat_Uniform: CUP_O_RUS_Soldier_02
	{
		author = "Flex7103";
		scope = 1;
		scopeCurator = 0;
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\CUP_RUS_Soldier1.p3d";
		uniformClass = "Flex_CUP_BOC_Combat_Uniform";
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\BOC_Combat_Uniform_co.paa"};
	};
	class Flex_CUP_BOC_I_Combat_Uniform: Flex_CUP_BOC_Combat_Uniform
	{
		scope = 1;
		side = 2;
		uniformClass = "Flex_CUP_BOC_I_Combat_Uniform";
	};
	class CUP_O_RUS_Soldier_04;
	class Flex_CUP_BOC_Combat_Uniform_Rolled: CUP_O_RUS_Soldier_04
	{
		author = "Flex7103";
		scope = 1;
		scopeCurator = 0;
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\CUP_RUS_Soldier2.p3d";
		uniformClass = "Flex_CUP_BOC_Combat_Uniform_Rolled";
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\BOC_Combat_Uniform_co.paa"};
	};
	class Flex_CUP_BOC_I_Combat_Uniform_Rolled: Flex_CUP_BOC_Combat_Uniform_Rolled
	{
		scope = 1;
		side = 2;
		uniformClass = "Flex_CUP_BOC_I_Combat_Uniform_Rolled";
	};
	class CUP_O_SLA_Pilot;
	class CUP_I_SLA_Pilot: CUP_O_SLA_Pilot
	{
		scope = 1;
		side = 2;
		uniformClass = "CUP_U_I_sla_overalls_Pilot";
	};
	class CUP_B_USNavy_LHD_Crew_Base;
	class Flex_CUP_SLOM_Pullover_Uniform: CUP_B_USNavy_LHD_Crew_Base
	{
		author = "Flex7103";
		scope = 1;
		side = 2;
		displayName = "SLDF Pullover";
		uniformClass = "Flex_CUP_SLOM_Pullover_Uniform";
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\LOM_Pullover_TAN_co.paa","\Flex_CUP_LOM_Equipment\Data\SLDF_BDUv2_Wood_CO.paa"};
	};
	class Flex_CUP_NLOM_Pullover_Uniform: CUP_B_USNavy_LHD_Crew_Base
	{
		author = "Flex7103";
		scope = 1;
		side = 0;
		displayName = "NLAF Pullover";
		uniformClass = "Flex_CUP_NLOM_Pullover_Uniform";
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\LOM_Pullover_OD_co.paa","\Flex_CUP_LOM_Equipment\Data\NLAF_BDUv2_Wood_CO.paa"};
	};
	class CUP_CRYE_G3C_MC_V3;
	class Flex_CUP_POR_G3_UN: CUP_CRYE_G3C_MC_V3
	{
		author = "Flex7103";
		scope = 1;
		side = 2;
		displayName = "POR G3 Combat Uniform (UN)";
		hiddenSelections[] = {"Camo","Camo1","Camo2","Camo4","insignia","clan","FlagLeft","FlagRight"};
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\POR_Combat_Uniform_UN_co.paa","\Flex_CUP_LOM_Equipment\Data\POR_Combat_Uniform_UN_co.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_USMC\data\g3\fer_co.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_USMC\data\g3\Mechanix_tan_co.paa"};
		uniformClass = "Flex_CUP_POR_G3_UN";
	};
	class Flex_CUP_LUF_I_Soldier_Deserter: Flex_CUP_NLOM_BDU_Militia_Alt_Light_Rolled
	{
		scope = 1;
		side = 2;
		uniformClass = "Flex_CUP_LUF_I_Soldier_Deserter";
	};
	class Flex_CUP_LUF_B_Soldier_Deserter: Flex_CUP_NLOM_BDU_Militia_Alt_Light_Rolled
	{
		scope = 1;
		side = 1;
		uniformClass = "Flex_CUP_LUF_B_Soldier_Deserter";
	};
	class CUP_Creatures_Military_CHDKZ_Soldier_07;
	class Flex_CUP_LUF_I_Soldier_03: CUP_Creatures_Military_CHDKZ_Soldier_07
	{
		scope = 1;
		side = 2;
		uniformClass = "Flex_CUP_LUF_I_Soldier_03";
	};
	class Flex_CUP_LUF_B_Soldier_03: CUP_Creatures_Military_CHDKZ_Soldier_07
	{
		scope = 1;
		side = 1;
		uniformClass = "Flex_CUP_LUF_B_Soldier_03";
	};
	class CUP_Creatures_Military_CHDKZ_Soldier_08;
	class Flex_CUP_LUF_I_Soldier_07: CUP_Creatures_Military_CHDKZ_Soldier_08
	{
		scope = 1;
		side = 2;
		uniformClass = "Flex_CUP_LUF_I_Soldier_07";
	};
	class Flex_CUP_LUF_B_Soldier_07: CUP_Creatures_Military_CHDKZ_Soldier_08
	{
		scope = 1;
		side = 1;
		uniformClass = "Flex_CUP_LUF_B_Soldier_07";
	};
	class CUP_O_SLA_Soldier_05;
	class Flex_CUP_LUF_I_Soldier_08: CUP_O_SLA_Soldier_05
	{
		scope = 1;
		side = 2;
		uniformClass = "Flex_CUP_LUF_I_Soldier_08";
	};
	class Flex_CUP_LUF_B_Soldier_08: CUP_O_SLA_Soldier_05
	{
		scope = 1;
		side = 1;
		uniformClass = "Flex_CUP_LUF_B_Soldier_08";
	};
	class I_C_Soldier_Bandit_1_F;
	class Flex_CUP_LUF_O_Soldier_Base: I_C_Soldier_Bandit_1_F
	{
		scope = 1;
		side = 0;
		uniformClass = "Flex_CUP_LUF_O_Soldier_Base";
	};
	class Flex_CUP_LUF_B_Soldier_Base: I_C_Soldier_Bandit_1_F
	{
		scope = 1;
		side = 1;
		uniformClass = "Flex_CUP_LUF_B_Soldier_Base";
	};
	class CUP_I_GUE_Soldier_19;
	class Flex_CUP_LUF_O_Soldier_Base_01: CUP_I_GUE_Soldier_19
	{
		scope = 1;
		side = 0;
		uniformClass = "Flex_CUP_LUF_O_Soldier_Base_01";
	};
	class Flex_CUP_LUF_B_Soldier_Base_01: CUP_I_GUE_Soldier_19
	{
		scope = 1;
		side = 1;
		uniformClass = "Flex_CUP_LUF_B_Soldier_Base_01";
	};
	class I_C_Soldier_Bandit_5_F;
	class Flex_CUP_LUF_O_Soldier_Base_02: I_C_Soldier_Bandit_5_F
	{
		scope = 1;
		side = 0;
		uniformClass = "Flex_CUP_LUF_O_Soldier_Base_02";
	};
	class Flex_CUP_LUF_B_Soldier_Base_02: I_C_Soldier_Bandit_5_F
	{
		scope = 1;
		side = 1;
		uniformClass = "Flex_CUP_LUF_B_Soldier_Base_02";
	};
	class I_C_Soldier_Bandit_2_F;
	class Flex_CUP_LUF_O_Soldier_Base_04: I_C_Soldier_Bandit_2_F
	{
		scope = 1;
		side = 0;
		uniformClass = "Flex_CUP_LUF_O_Soldier_Base_04";
	};
	class Flex_CUP_LUF_B_Soldier_Base_04: I_C_Soldier_Bandit_2_F
	{
		scope = 1;
		side = 1;
		uniformClass = "Flex_CUP_LUF_B_Soldier_Base_04";
	};
	class I_G_Soldier_LAT_F;
	class Flex_CUP_LUF_O_Soldier_Base_05: I_G_Soldier_LAT_F
	{
		scope = 1;
		side = 0;
		uniformClass = "Flex_CUP_LUF_O_Soldier_Base_05";
	};
	class Flex_CUP_LUF_B_Soldier_Base_05: I_G_Soldier_LAT_F
	{
		scope = 1;
		side = 1;
		uniformClass = "Flex_CUP_LUF_B_Soldier_Base_05";
	};
	class I_C_Soldier_Bandit_3_F;
	class Flex_CUP_LUF_O_Soldier_Base_06: I_C_Soldier_Bandit_3_F
	{
		scope = 1;
		side = 0;
		uniformClass = "Flex_CUP_LUF_O_Soldier_Base_06";
	};
	class Flex_CUP_LUF_B_Soldier_Base_06: I_C_Soldier_Bandit_3_F
	{
		scope = 1;
		side = 1;
		uniformClass = "Flex_CUP_LUF_B_Soldier_Base_06";
	};
	class I_C_Soldier_Para_5_F;
	class Flex_CUP_LUF_O_Soldier_Base_09: I_C_Soldier_Para_5_F
	{
		scope = 1;
		side = 0;
		uniformClass = "Flex_CUP_LUF_O_Soldier_Base_09";
	};
	class Flex_CUP_LUF_B_Soldier_Base_09: I_C_Soldier_Para_5_F
	{
		scope = 1;
		side = 1;
		uniformClass = "Flex_CUP_LUF_B_Soldier_Base_09";
	};
	class I_C_Soldier_Bandit_4_F;
	class Flex_CUP_LUF_O_Soldier_Base_10: I_C_Soldier_Bandit_4_F
	{
		scope = 1;
		side = 0;
		uniformClass = "Flex_CUP_LUF_O_Soldier_Base_10";
	};
	class Flex_CUP_LUF_B_Soldier_Base_10: I_C_Soldier_Bandit_4_F
	{
		scope = 1;
		side = 1;
		uniformClass = "Flex_CUP_LUF_B_Soldier_Base_10";
	};
	class B_UAV_01_backpack_F;
	class Flex_CUP_SLOM_pack_UAV: B_UAV_01_backpack_F
	{
		author = "Flex7103";
		scope = 2;
		scopeArsenal = 2;
		hiddenSelectionsTextures[] = {"\A3\Supplies_F_Orange\Bags\Data\UAV_06_backpack_CSAT_co.paa"};
	};
	class CUP_B_Predator_Radio_MTP;
	class Flex_CUP_POR_Radio_Backpack: CUP_B_Predator_Radio_MTP
	{
		scope = 2;
		scopeArsenal = 2;
		author = "Flex7103";
		displayName = "POR Radio Bag";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\Backpacks\POR_Predator_co.paa"};
	};
};
class cfgWeapons
{
	class UniformItem;
	class Uniform_Base;
	class ItemCore;
	class HeadgearItem;
	class Flex_CUP_SLOM_BDU_Wood_Light: ItemCore
	{
		author = "Flex7103";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		allowedSlots[] = {901};
		displayName = "SLDF Combat Uniform";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\ui\gear_u_b_bdu_woodland_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\SLDF_BDUv2_Wood_CO.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Flex_CUP_SLOM_BDU_Wood_Light";
			containerClass = "Supply40";
			mass = 20;
		};
	};
	class Flex_CUP_NLOM_BDU_Wood_Light: ItemCore
	{
		author = "Flex7103";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		allowedSlots[] = {901};
		displayName = "NLAF Combat Uniform (Wood)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\ui\gear_u_b_bdu_woodland_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\NLAF_BDUv2_Wood_CO.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Flex_CUP_NLOM_BDU_Wood_Light";
			containerClass = "Supply40";
			mass = 20;
		};
	};
	class Flex_CUP_SLOM_BDU_Wood_Light_Rolled: ItemCore
	{
		author = "Flex7103";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		allowedSlots[] = {901};
		displayName = "SLDF Combat Uniform (Rolled)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\ui\gear_u_b_bdu_woodland_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\SLDF_BDUv2_Wood_CO.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Flex_CUP_SLOM_BDU_Wood_Light_Rolled";
			containerClass = "Supply40";
			mass = 20;
		};
	};
	class Flex_CUP_NLOM_BDU_Wood_Light_Rolled: ItemCore
	{
		author = "Flex7103";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		allowedSlots[] = {901};
		displayName = "NLAF Combat Uniform (Wood/Rolled)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\ui\gear_u_b_bdu_woodland_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\NLAF_BDUv2_Wood_CO.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Flex_CUP_NLOM_BDU_Wood_Light_Rolled";
			containerClass = "Supply40";
			mass = 20;
		};
	};
	class Flex_CUP_NLOM_BDU_Militia_Light_Rolled: ItemCore
	{
		author = "Flex7103";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		allowedSlots[] = {901};
		displayName = "NLAF Combat Uniform (Militia)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\ui\gear_u_b_bdu_woodland_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\NLAF_BDUv2_Militia_CO.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Flex_CUP_NLOM_BDU_Militia_Light_Rolled";
			containerClass = "Supply40";
			mass = 20;
		};
	};
	class Flex_CUP_NLOM_BDU_Militia_Alt_Light_Rolled: ItemCore
	{
		author = "Flex7103";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		allowedSlots[] = {901};
		displayName = "NLAF Combat Uniform (Militia/Alt)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\ui\gear_u_b_bdu_woodland_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\NLAF_BDUv2_Militia_alt_CO.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Flex_CUP_NLOM_BDU_Militia_Alt_Light_Rolled";
			containerClass = "Supply40";
			mass = 20;
		};
	};
	class Flex_CUP_SLOM_BDU_Wood_Light_Gloves: ItemCore
	{
		author = "Flex7103";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		allowedSlots[] = {901};
		displayName = "SLDF Combat Uniform (Gloves)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\ui\gear_u_b_bdu_woodland_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\SLDF_BDUv2_Wood_CO.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Flex_CUP_SLOM_BDU_Wood_Light_Gloves";
			containerClass = "Supply40";
			mass = 20;
		};
	};
	class Flex_CUP_SLOM_BDU_Wood_Light_Rolled_Gloves: ItemCore
	{
		author = "Flex7103";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		allowedSlots[] = {901};
		displayName = "SLDF Combat Uniform (Rolled/Gloves)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\ui\gear_u_b_bdu_woodland_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\SLDF_BDUv2_Wood_CO.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Flex_CUP_SLOM_BDU_Wood_Light_Rolled_Gloves";
			containerClass = "Supply40";
			mass = 20;
		};
	};
	class Flex_CUP_NLOM_BDU_Wood_Light_Rolled_Gloves: ItemCore
	{
		author = "Flex7103";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		allowedSlots[] = {901};
		displayName = "NLAF Combat Uniform (Wood/Rolled/Gloves)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\ui\gear_u_b_bdu_woodland_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\NLAF_BDUv2_Wood_CO.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Flex_CUP_NLOM_BDU_Wood_Light_Rolled_Gloves";
			containerClass = "Supply40";
			mass = 20;
		};
	};
	class Flex_CUP_BOC_Combat_Uniform: ItemCore
	{
		author = "Flex7103";
		scope = 2;
		allowedSlots[] = {901};
		displayName = "BOC Combat Uniform";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\ui\icon_U_O_RUS_EMR_1_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\BOC_Combat_Uniform_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Flex_CUP_BOC_Combat_Uniform";
			containerClass = "Supply60";
			mass = 20;
		};
	};
	class Flex_CUP_BOC_I_Combat_Uniform: ItemCore
	{
		author = "Flex7103";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		allowedSlots[] = {901};
		displayName = "BOC Uniform";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\ui\gear_u_b_bdu_woodland_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\BOC_Combat_Uniform_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Flex_CUP_BOC_I_Combat_Uniform";
			containerClass = "Supply40";
			mass = 20;
		};
	};
	class Flex_CUP_BOC_Combat_Uniform_Rolled: ItemCore
	{
		author = "Flex7103";
		scope = 2;
		allowedSlots[] = {901};
		displayName = "BOC Combat Uniform (Rolled)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\ui\icon_U_O_RUS_EMR_2_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\BOC_Combat_Uniform_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Flex_CUP_BOC_Combat_Uniform_Rolled";
			containerClass = "Supply60";
			mass = 20;
		};
	};
	class Flex_CUP_BOC_I_Combat_Uniform_Rolled: ItemCore
	{
		author = "Flex7103";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		allowedSlots[] = {901};
		displayName = "BOC Uniform (Rolled)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\ui\gear_u_b_bdu_woodland_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\BOC_Combat_Uniform_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Flex_CUP_BOC_I_Combat_Uniform_Rolled";
			containerClass = "Supply40";
			mass = 20;
		};
	};
	class CUP_U_I_sla_overalls_Pilot: ItemCore
	{
		author = "Flex7103";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		allowedSlots[] = {901};
		displayName = "BOC Pilot Uniform";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\ui\gear_u_b_bdu_woodland_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\BOC_Combat_Uniform_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "CUP_I_SLA_Pilot";
			containerClass = "Supply40";
			mass = 20;
		};
	};
	class Flex_CUP_SLOM_Pullover_Uniform: ItemCore
	{
		author = "Flex7103";
		scope = 2;
		allowedSlots[] = {901};
		displayName = "SLDF Pullover";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USMC\data\ui\icon_u_b_lhdcrew_White_ca.paa";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\SLDF_BDUv2_Wood_CO.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Flex_CUP_SLOM_Pullover_Uniform";
			containerClass = "Supply40";
			mass = 20;
		};
	};
	class Flex_CUP_NLOM_Pullover_Uniform: ItemCore
	{
		author = "Flex7103";
		scope = 2;
		allowedSlots[] = {901};
		displayName = "NLAF Pullover";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USMC\data\ui\icon_u_b_lhdcrew_White_ca.paa";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\NLAF_BDUv2_Wood_CO.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Flex_CUP_NLOM_Pullover_Uniform";
			containerClass = "Supply40";
			mass = 20;
		};
	};
	class Flex_CUP_POR_G3_UN: ItemCore
	{
		author = "Flex7103";
		scope = 2;
		allowedSlots[] = {901};
		displayName = "POR G3 Combat Uniform (UN)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\ACU\data\ui\icon_CUP_U_B_USArmy_ACU_UCP_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\POR_Combat_Uniform_UN_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Flex_CUP_POR_G3_UN";
			containerClass = "Supply40";
			mass = 20;
		};
	};
	class Flex_CUP_LUF_I_Soldier_Deserter: ItemCore
	{
		author = "Flex7103";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		allowedSlots[] = {901};
		displayName = "LUF Uniform";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\ui\gear_u_b_bdu_woodland_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\SLDF_BDUv2_Wood_CO.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Flex_CUP_LUF_I_Soldier_Deserter";
			containerClass = "Supply40";
			mass = 20;
		};
	};
	class Flex_CUP_LUF_B_Soldier_Deserter: ItemCore
	{
		author = "Flex7103";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		allowedSlots[] = {901};
		displayName = "LUF Uniform";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\ui\gear_u_b_bdu_woodland_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\SLDF_BDUv2_Wood_CO.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Flex_CUP_LUF_B_Soldier_Deserter";
			containerClass = "Supply40";
			mass = 20;
		};
	};
	class Flex_CUP_LUF_I_Soldier_03: ItemCore
	{
		author = "Flex7103";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		allowedSlots[] = {901};
		displayName = "LUF Uniform";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\ui\gear_u_b_bdu_woodland_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\SLDF_BDUv2_Wood_CO.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Flex_CUP_LUF_I_Soldier_03";
			containerClass = "Supply40";
			mass = 20;
		};
	};
	class Flex_CUP_LUF_B_Soldier_03: ItemCore
	{
		author = "Flex7103";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		allowedSlots[] = {901};
		displayName = "LUF Uniform";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\ui\gear_u_b_bdu_woodland_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\SLDF_BDUv2_Wood_CO.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Flex_CUP_LUF_B_Soldier_03";
			containerClass = "Supply40";
			mass = 20;
		};
	};
	class Flex_CUP_LUF_I_Soldier_07: ItemCore
	{
		author = "Flex7103";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		allowedSlots[] = {901};
		displayName = "LUF Uniform";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\ui\gear_u_b_bdu_woodland_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\SLDF_BDUv2_Wood_CO.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Flex_CUP_LUF_I_Soldier_07";
			containerClass = "Supply40";
			mass = 20;
		};
	};
	class Flex_CUP_LUF_B_Soldier_07: ItemCore
	{
		author = "Flex7103";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		allowedSlots[] = {901};
		displayName = "LUF Uniform";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\ui\gear_u_b_bdu_woodland_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\SLDF_BDUv2_Wood_CO.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Flex_CUP_LUF_B_Soldier_07";
			containerClass = "Supply40";
			mass = 20;
		};
	};
	class Flex_CUP_LUF_I_Soldier_08: ItemCore
	{
		author = "Flex7103";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		allowedSlots[] = {901};
		displayName = "LUF Uniform";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\ui\gear_u_b_bdu_woodland_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\SLDF_BDUv2_Wood_CO.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Flex_CUP_LUF_I_Soldier_08";
			containerClass = "Supply40";
			mass = 20;
		};
	};
	class Flex_CUP_LUF_B_Soldier_08: ItemCore
	{
		author = "Flex7103";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		allowedSlots[] = {901};
		displayName = "LUF Uniform";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\ui\gear_u_b_bdu_woodland_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\SLDF_BDUv2_Wood_CO.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Flex_CUP_LUF_B_Soldier_08";
			containerClass = "Supply40";
			mass = 20;
		};
	};
	class Flex_CUP_LUF_O_Soldier_Base: ItemCore
	{
		author = "Flex7103";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		allowedSlots[] = {901};
		displayName = "LUF Uniform";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\ui\gear_u_b_bdu_woodland_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\SLDF_BDUv2_Wood_CO.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Flex_CUP_LUF_O_Soldier_Base";
			containerClass = "Supply40";
			mass = 20;
		};
	};
	class Flex_CUP_LUF_B_Soldier_Base: ItemCore
	{
		author = "Flex7103";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		allowedSlots[] = {901};
		displayName = "LUF Uniform";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\ui\gear_u_b_bdu_woodland_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\SLDF_BDUv2_Wood_CO.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Flex_CUP_LUF_B_Soldier_Base";
			containerClass = "Supply40";
			mass = 20;
		};
	};
	class Flex_CUP_LUF_O_Soldier_Base_01: ItemCore
	{
		author = "Flex7103";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		allowedSlots[] = {901};
		displayName = "LUF Uniform";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\ui\gear_u_b_bdu_woodland_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\SLDF_BDUv2_Wood_CO.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Flex_CUP_LUF_O_Soldier_Base_01";
			containerClass = "Supply40";
			mass = 20;
		};
	};
	class Flex_CUP_LUF_B_Soldier_Base_01: ItemCore
	{
		author = "Flex7103";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		allowedSlots[] = {901};
		displayName = "LUF Uniform";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\ui\gear_u_b_bdu_woodland_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\SLDF_BDUv2_Wood_CO.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Flex_CUP_LUF_B_Soldier_Base_01";
			containerClass = "Supply40";
			mass = 20;
		};
	};
	class Flex_CUP_LUF_O_Soldier_Base_02: ItemCore
	{
		author = "Flex7103";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		allowedSlots[] = {901};
		displayName = "LUF Uniform";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\ui\gear_u_b_bdu_woodland_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\SLDF_BDUv2_Wood_CO.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Flex_CUP_LUF_O_Soldier_Base_02";
			containerClass = "Supply40";
			mass = 20;
		};
	};
	class Flex_CUP_LUF_B_Soldier_Base_02: ItemCore
	{
		author = "Flex7103";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		allowedSlots[] = {901};
		displayName = "LUF Uniform";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\ui\gear_u_b_bdu_woodland_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\SLDF_BDUv2_Wood_CO.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Flex_CUP_LUF_B_Soldier_Base_02";
			containerClass = "Supply40";
			mass = 20;
		};
	};
	class Flex_CUP_LUF_O_Soldier_Base_04: ItemCore
	{
		author = "Flex7103";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		allowedSlots[] = {901};
		displayName = "LUF Uniform";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\ui\gear_u_b_bdu_woodland_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\SLDF_BDUv2_Wood_CO.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Flex_CUP_LUF_O_Soldier_Base_04";
			containerClass = "Supply40";
			mass = 20;
		};
	};
	class Flex_CUP_LUF_B_Soldier_Base_04: ItemCore
	{
		author = "Flex7103";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		allowedSlots[] = {901};
		displayName = "LUF Uniform";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\ui\gear_u_b_bdu_woodland_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\SLDF_BDUv2_Wood_CO.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Flex_CUP_LUF_B_Soldier_Base_04";
			containerClass = "Supply40";
			mass = 20;
		};
	};
	class Flex_CUP_LUF_O_Soldier_Base_05: ItemCore
	{
		author = "Flex7103";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		allowedSlots[] = {901};
		displayName = "LUF Uniform";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\ui\gear_u_b_bdu_woodland_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\SLDF_BDUv2_Wood_CO.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Flex_CUP_LUF_O_Soldier_Base_05";
			containerClass = "Supply40";
			mass = 20;
		};
	};
	class Flex_CUP_LUF_B_Soldier_Base_05: ItemCore
	{
		author = "Flex7103";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		allowedSlots[] = {901};
		displayName = "LUF Uniform";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\ui\gear_u_b_bdu_woodland_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\SLDF_BDUv2_Wood_CO.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Flex_CUP_LUF_B_Soldier_Base_05";
			containerClass = "Supply40";
			mass = 20;
		};
	};
	class Flex_CUP_LUF_O_Soldier_Base_06: ItemCore
	{
		author = "Flex7103";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		allowedSlots[] = {901};
		displayName = "LUF Uniform";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\ui\gear_u_b_bdu_woodland_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\SLDF_BDUv2_Wood_CO.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Flex_CUP_LUF_O_Soldier_Base_06";
			containerClass = "Supply40";
			mass = 20;
		};
	};
	class Flex_CUP_LUF_B_Soldier_Base_06: ItemCore
	{
		author = "Flex7103";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		allowedSlots[] = {901};
		displayName = "LUF Uniform";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\ui\gear_u_b_bdu_woodland_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\SLDF_BDUv2_Wood_CO.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Flex_CUP_LUF_B_Soldier_Base_06";
			containerClass = "Supply40";
			mass = 20;
		};
	};
	class Flex_CUP_LUF_O_Soldier_Base_09: ItemCore
	{
		author = "Flex7103";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		allowedSlots[] = {901};
		displayName = "LUF Uniform";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\ui\gear_u_b_bdu_woodland_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\SLDF_BDUv2_Wood_CO.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Flex_CUP_LUF_O_Soldier_Base_09";
			containerClass = "Supply40";
			mass = 20;
		};
	};
	class Flex_CUP_LUF_B_Soldier_Base_09: ItemCore
	{
		author = "Flex7103";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		allowedSlots[] = {901};
		displayName = "LUF Uniform";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\ui\gear_u_b_bdu_woodland_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\SLDF_BDUv2_Wood_CO.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Flex_CUP_LUF_B_Soldier_Base_09";
			containerClass = "Supply40";
			mass = 20;
		};
	};
	class Flex_CUP_LUF_O_Soldier_Base_10: ItemCore
	{
		author = "Flex7103";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		allowedSlots[] = {901};
		displayName = "LUF Uniform";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\ui\gear_u_b_bdu_woodland_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\SLDF_BDUv2_Wood_CO.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Flex_CUP_LUF_O_Soldier_Base_10";
			containerClass = "Supply40";
			mass = 20;
		};
	};
	class Flex_CUP_LUF_B_Soldier_Base_10: ItemCore
	{
		author = "Flex7103";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		allowedSlots[] = {901};
		displayName = "LUF Uniform";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\ui\gear_u_b_bdu_woodland_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\SLDF_BDUv2_Wood_CO.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Flex_CUP_LUF_B_Soldier_Base_10";
			containerClass = "Supply40";
			mass = 20;
		};
	};
	class H_Booniehat_khk;
	class Flex_CUP_SLOM_Boonie_Wood: H_Booniehat_khk
	{
		author = "Flex7103";
		displayName = "SLDF Boonie (Wood)";
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\Headgear\SLDF_booniehat_Wood_co.paa"};
	};
	class Flex_CUP_POR_Boonie: H_Booniehat_khk
	{
		author = "Flex7103";
		displayName = "POR Boonie";
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\Headgear\POR_booniehat_co.paa"};
	};
	class CUP_H_US_patrol_cap_UCP;
	class Flex_CUP_BOC_Patrol_cap: CUP_H_US_patrol_cap_UCP
	{
		scope = 2;
		displayName = "BOC Patrol Cap";
		author = "Flex7103";
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\Headgear\BOC_Patrol_cap_Wood_CO.paa"};
	};
	class H_Beret_02;
	class Flex_CUP_SLOM_Army_Beret: H_Beret_02
	{
		author = "Flex7103";
		displayName = "SLDF Beret (Army)";
		picture = "\A3\characters_f_EPB\BLUFOR\Data\UI\icon_H_beret02_ca.paa";
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\Headgear\SLDF_H_Beret_co.paa"};
	};
	class Flex_CUP_UN_Beret: H_Beret_02
	{
		author = "Flex7103";
		displayName = "UN Beret";
		picture = "\A3\characters_f_EPB\BLUFOR\Data\UI\icon_H_beret02_ca.paa";
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\Headgear\POR_Beret_UN_co.paa"};
	};
	class CUP_H_BAF_DPM_Mk6_EMPTY;
	class Flex_CUP_SLOM_Mk6_Wood: CUP_H_BAF_DPM_Mk6_EMPTY
	{
		author = "Flex7103";
		scope = 2;
		displayName = "SLDF MK6 Helmet";
		hiddenSelections[] = {"camo","camo3"};
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\Headgear\SDLF_equip_Wood_co.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_headgear\data\equip_d_co.paa"};
	};
	class CUP_H_BAF_DPM_Mk6_EMPTY_PRR;
	class Flex_CUP_SLOM_Mk6_PRR_Wood: CUP_H_BAF_DPM_Mk6_EMPTY_PRR
	{
		author = "Flex7103";
		scope = 2;
		displayName = "SLDF MK6 Helmet (Comm)";
		hiddenSelections[] = {"camo","camo3"};
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\Headgear\SDLF_equip_Wood_co.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_headgear\data\equip_d_co.paa"};
	};
	class CUP_H_OpsCore_Black;
	class Flex_CUP_POR_Opscore_UN: CUP_H_OpsCore_Black
	{
		author = "Flex7103";
		scope = 2;
		displayName = "POR Opscore (UN/Headset)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\Headgear\POR_Opscore_Covered_UN_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa","\Flex_CUP_LOM_Equipment\Data\Headgear\UN_flag_co.paa"};
	};
	class CUP_H_OpsCore_Covered_MCAM_NoHS;
	class Flex_CUP_POR_Opscore_UN_No_Headset: CUP_H_OpsCore_Covered_MCAM_NoHS
	{
		author = "Flex7103";
		scope = 2;
		displayName = "POR Opscore (UN)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_all.p3d";
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\Headgear\POR_Opscore_Covered_UN_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa","\Flex_CUP_LOM_Equipment\Data\Headgear\UN_flag_co.paa"};
	};
	class CUP_H_OpsCore_Covered_MCAM_US_SF;
	class Flex_CUP_POR_Opscore_UN_SF: CUP_H_OpsCore_Covered_MCAM_US_SF
	{
		author = "Flex7103";
		scope = 2;
		displayName = "POR Opscore (UN/Full)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\Headgear\POR_Opscore_Covered_UN_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa","\Flex_CUP_LOM_Equipment\Data\Headgear\UN_flag_co.paa"};
	};
	class CUP_V_I_RACS_Carrier_Vest_2;
	class Flex_CUP_LOM_Carrier_Vest_2: CUP_V_I_RACS_Carrier_Vest_2
	{
		author = "Flex7103";
		scope = 2;
		displayName = "Carrier Vest (Tan)";
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\Vest\NLAF_tex1_co.paa","\Flex_CUP_LOM_Equipment\Data\Vest\NLAF_tex2_co.paa"};
	};
	class Flex_CUP_LOM_Carrier_Vest_2_od: CUP_V_I_RACS_Carrier_Vest_2
	{
		author = "Flex7103";
		scope = 2;
		displayName = "Carrier Vest (Olive)";
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\Vest\NLAF_tex1_od_co.paa","\Flex_CUP_LOM_Equipment\Data\Vest\NLAF_tex2_od_co.paa"};
	};
	class CUP_V_I_RACS_Carrier_Vest;
	class Flex_CUP_LOM_Carrier_Vest: CUP_V_I_RACS_Carrier_Vest
	{
		author = "Flex7103";
		scope = 2;
		displayName = "Carrier Vest (Tan/Holster)";
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\Vest\NLAF_tex1_co.paa","\Flex_CUP_LOM_Equipment\Data\Vest\NLAF_tex2_co.paa"};
	};
	class Flex_CUP_LOM_Carrier_Vest_od: CUP_V_I_RACS_Carrier_Vest
	{
		author = "Flex7103";
		scope = 2;
		displayName = "Carrier Vest (Olive/Holster)";
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\Vest\NLAF_tex1_od_co.paa","\Flex_CUP_LOM_Equipment\Data\Vest\NLAF_tex2_od_co.paa"};
	};
	class CUP_V_B_GER_PVest_Fleck_RFL;
	class CUP_V_B_GER_PVest_Trop_MG;
	class CUP_V_B_GER_PVest_Fleck_Med;
	class CUP_V_B_GER_PVest_Fleck_Gren;
	class CUP_V_B_GER_PVest_Fleck_TL;
	class Flex_CUP_LOM_Vest_RFL: CUP_V_B_GER_PVest_Fleck_RFL
	{
		author = "Flex7103";
		scope = 2;
		displayName = "Vest (Rifleman)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\ui\icon_v_carrier_vest_ca.paa";
		hiddenSelections[] = {"camo1","camo2","camo3","camo4","_pistol","_pistol_cartridge_pouches","_pistol_holster"};
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\Vest\LOM_bullet_vest_co.paa","\Flex_CUP_LOM_Equipment\Data\Vest\LOM_b_cartridge_pouch_co.paa","\Flex_CUP_LOM_Equipment\Data\Vest\LOM_b_backpack_co.paa","\Flex_CUP_LOM_Equipment\Data\Vest\LOM_b_first_aid_co.paa"};
	};
	class Flex_CUP_LOM_Vest_Med: CUP_V_B_GER_PVest_Fleck_Med
	{
		author = "Flex7103";
		scope = 2;
		displayName = "Vest (Medic)";
		hiddenSelections[] = {"camo1","camo2","camo3","_cartridge_pouches"};
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\Vest\LOM_b_first_aid_co.paa","\Flex_CUP_LOM_Equipment\Data\Vest\LOM_bullet_vest_co.paa","\Flex_CUP_LOM_Equipment\Data\Vest\LOM_b_backpack_co.paa","\Flex_CUP_LOM_Equipment\Data\Vest\LOM_b_cartridge_pouch_co.paa"};
	};
	class Flex_CUP_LOM_Vest_TL: CUP_V_B_GER_PVest_Fleck_TL
	{
		author = "Flex7103";
		scope = 2;
		displayName = "Vest (TL)";
		hiddenSelections[] = {"camo1","camo2","camo3","camo4"};
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\Vest\LOM_bullet_vest_co.paa","\Flex_CUP_LOM_Equipment\Data\Vest\LOM_b_cartridge_pouch_co.paa","\Flex_CUP_LOM_Equipment\Data\Vest\LOM_b_backpack_co.paa","\Flex_CUP_LOM_Equipment\Data\Vest\LOM_b_first_aid_co.paa"};
	};
	class Flex_CUP_LOM__Vest_MG: CUP_V_B_GER_PVest_Trop_MG
	{
		author = "Flex7103";
		scope = 2;
		displayName = "Vest (MG)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\ui\icon_v_carrier_vest_ca.paa";
		hiddenSelections[] = {"camo1","camo2","camo3","_PouchGrenade","_PouchMG"};
		hiddenSelectionsTextures[] = {"\Flex_CUP_LOM_Equipment\Data\Vest\LOM_b_first_aid_co.paa","\Flex_CUP_LOM_Equipment\Data\Vest\LOM_bullet_vest_co.paa","\Flex_CUP_LOM_Equipment\Data\Vest\LOM_b_backpack_co.paa","\Flex_CUP_LOM_Equipment\Data\Vest\LOM_b_cartridge_pouch_co.paa","\Flex_CUP_LOM_Equipment\Data\Vest\LOM_b_cartridge_pouch_co.paa"};
	};
};
class cfgMods
{
	author = "Flex7103";
	timepacked = "1742217057";
};
