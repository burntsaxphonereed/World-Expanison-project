////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.45
//https://mikero.bytex.digital/Downloads
//'now' is Sat Nov 30 07:00:04 2024 : 'file' last modified on Tue May 07 06:19:47 2024
////////////////////////////////////////////////////////////////////

#define _ARMA_

//(13 Enums)
enum {
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	stabilizedinaxisx = 1,
	stabilizedinaxesxyz = 4,
	stabilizedinaxisy = 2,
	stabilizedinaxesboth = 3,
	destructno = 0,
	stabilizedinaxesnone = 0,
	destructman = 5,
	destructbuilding = 1
};

class CfgPatches
{
	class A3_Weapons_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		name = "Arma 3 Alpha - Weapons and Accessories";
		url = "https://www.arma3.com";
		requiredAddons[] = {"A3_Anims_F_Config_Sdr","A3_Data_F","A3_Ui_F"};
		requiredVersion = 0.1;
		units[] = {"Bomb","ContainerSupply","FxCartridge","FxCartridge_127","FxCartridge_556","FxCartridge_65","FxCartridge_65_caseless","FxCartridge_762","FxCartridge_9mm","FxCartridge_slug","FxCartridge_Small","FxExploArmor1","FxExploArmor2","FxExploArmor3","FxExploArmor4","FxExploGround1","FxExploGround2","Headgear_H_Bandanna_blu","Headgear_H_Bandanna_camo","Headgear_H_Bandanna_cbr","Headgear_H_Bandanna_gry","Headgear_H_Bandanna_khk","Headgear_H_Bandanna_khk_hs","Headgear_H_Bandanna_mcamo","Headgear_H_Bandanna_sand","Headgear_H_Bandanna_sgg","Headgear_H_Bandanna_surfer","Headgear_H_Bandanna_surfer_blk","Headgear_H_Bandanna_surfer_grn","Headgear_H_Beret_02","Headgear_H_Beret_blk","Headgear_H_Beret_Colonel","Headgear_H_Booniehat_dgtl","Headgear_H_Booniehat_khk","Headgear_H_Booniehat_khk_hs","Headgear_H_Booniehat_mcamo","Headgear_H_Booniehat_oli","Headgear_H_Booniehat_tan","Headgear_H_Cap_blk","Headgear_H_Cap_blk_CMMG","Headgear_H_Cap_blk_ION","Headgear_H_Cap_blk_Raven","Headgear_H_Cap_blu","Headgear_H_Cap_brn_SPECOPS","Headgear_H_Cap_grn","Headgear_H_Cap_grn_BI","Headgear_H_Cap_headphones","Headgear_H_Cap_khaki_specops_UK","Headgear_H_Cap_oli","Headgear_H_Cap_oli_hs","Headgear_H_Cap_police","Headgear_H_Cap_press","Headgear_H_Cap_red","Headgear_H_Cap_surfer","Headgear_H_Cap_tan","Headgear_H_Cap_tan_specops_US","Headgear_H_Cap_usblack","Headgear_H_CrewHelmetHeli_B","Headgear_H_CrewHelmetHeli_I","Headgear_H_CrewHelmetHeli_O","Headgear_H_Hat_blue","Headgear_H_Hat_brown","Headgear_H_Hat_camo","Headgear_H_Hat_checker","Headgear_H_Hat_grey","Headgear_H_Hat_tan","Headgear_H_HelmetB","Headgear_H_HelmetB_black","Headgear_H_HelmetB_camo","Headgear_H_HelmetB_desert","Headgear_H_HelmetB_grass","Headgear_H_HelmetB_light","Headgear_H_HelmetB_light_black","Headgear_H_HelmetB_light_desert","Headgear_H_HelmetB_light_grass","Headgear_H_HelmetB_light_sand","Headgear_H_HelmetB_light_snakeskin","Headgear_H_HelmetB_sand","Headgear_H_HelmetB_snakeskin","Headgear_H_HelmetCrew_B","Headgear_H_HelmetCrew_I","Headgear_H_HelmetCrew_O","Headgear_H_HelmetIA","Headgear_H_HelmetLeaderO_ocamo","Headgear_H_HelmetLeaderO_oucamo","Headgear_H_HelmetO_ocamo","Headgear_H_HelmetO_oucamo","Headgear_H_HelmetSpecB","Headgear_H_HelmetSpecB_blk","Headgear_H_HelmetSpecB_paint1","Headgear_H_HelmetSpecB_paint2","Headgear_H_HelmetSpecB_sand","Headgear_H_HelmetSpecB_snakeskin","Headgear_H_HelmetSpecO_blk","Headgear_H_HelmetSpecO_ocamo","Headgear_H_MilCap_blue","Headgear_H_MilCap_dgtl","Headgear_H_MilCap_gry","Headgear_H_MilCap_mcamo","Headgear_H_MilCap_ocamo","Headgear_H_PilotHelmetFighter_B","Headgear_H_PilotHelmetFighter_I","Headgear_H_PilotHelmetFighter_O","Headgear_H_PilotHelmetHeli_B","Headgear_H_PilotHelmetHeli_I","Headgear_H_PilotHelmetHeli_O","Headgear_H_Shemag_olive","Headgear_H_Shemag_olive_hs","Headgear_H_ShemagOpen_khk","Headgear_H_ShemagOpen_tan","Headgear_H_StrawHat","Headgear_H_StrawHat_dark","Headgear_H_Watchcap_blk","Headgear_H_Watchcap_camo","Headgear_H_Watchcap_cbr","Headgear_H_Watchcap_khk","Item_acc_flashlight","Item_acc_flashlight_pistol","Item_acc_pointer_IR","Item_B_UavTerminal","Item_Binocular","Item_FirstAidKit","Item_I_UavTerminal","Item_ItemCompass","Item_ItemGPS","Item_ItemMap","Item_ItemRadio","Item_ItemWatch","Item_Laserdesignator","Item_Medikit","Item_MineDetector","Item_muzzle_snds_acp","Item_muzzle_snds_B","Item_muzzle_snds_H","Item_muzzle_snds_H_MG","Item_muzzle_snds_L","Item_muzzle_snds_M","Item_NVGoggles","Item_NVGoggles_INDEP","Item_NVGoggles_OPFOR","Item_O_UavTerminal","Item_optic_Aco","Item_optic_ACO_grn","Item_optic_ACO_grn_smg","Item_optic_Aco_smg","Item_optic_Arco","Item_optic_DMS","Item_optic_Hamr","Item_optic_Holosight","Item_optic_Holosight_smg","Item_optic_LRPS","Item_optic_MRCO","Item_optic_MRD","Item_optic_Nightstalker","Item_optic_NVS","Item_optic_SOS","Item_optic_tws","Item_optic_tws_mg","Item_optic_Yorris","Item_Rangefinder","Item_ToolKit","Item_U_AntigonaBody","Item_U_AttisBody","Item_U_B_CombatUniform_mcam","Item_U_B_CombatUniform_mcam_tshirt","Item_U_B_CombatUniform_mcam_vest","Item_U_B_CombatUniform_mcam_worn","Item_U_B_CombatUniform_sgg","Item_U_B_CombatUniform_sgg_tshirt","Item_U_B_CombatUniform_sgg_vest","Item_U_B_CombatUniform_wdl","Item_U_B_CombatUniform_wdl_tshirt","Item_U_B_CombatUniform_wdl_vest","Item_U_B_CTRG_1","Item_U_B_CTRG_2","Item_U_B_CTRG_3","Item_U_B_GhillieSuit","Item_U_B_HeliPilotCoveralls","Item_U_B_PilotCoveralls","Item_U_B_Protagonist_VR","Item_U_B_SpecopsUniform_sgg","Item_U_B_survival_uniform","Item_U_B_Wetsuit","Item_U_BasicBody","Item_U_BG_Guerilla1_1","Item_U_BG_Guerilla2_1","Item_U_BG_Guerilla2_2","Item_U_BG_Guerilla2_3","Item_U_BG_Guerilla3_1","Item_U_BG_Guerilla3_2","Item_U_BG_leader","Item_U_C_Commoner1_1","Item_U_C_Commoner1_2","Item_U_C_Commoner1_3","Item_U_C_Commoner2_1","Item_U_C_Commoner2_2","Item_U_C_Commoner2_3","Item_U_C_Commoner_shorts","Item_U_C_Farmer","Item_U_C_Fisherman","Item_U_C_FishermanOveralls","Item_U_C_HunterBody_brn","Item_U_C_HunterBody_grn","Item_U_C_Poloshirt_blue","Item_U_C_Poloshirt_burgundy","Item_U_C_Poloshirt_redwhite","Item_U_C_Poloshirt_salmon","Item_U_C_Poloshirt_stripped","Item_U_C_Poloshirt_tricolour","Item_U_C_Poor_1","Item_U_C_Poor_2","Item_U_C_Poor_shorts_1","Item_U_C_Poor_shorts_2","Item_U_C_PriestBody","Item_U_C_Scavenger_1","Item_U_C_Scavenger_2","Item_U_C_ShirtSurfer_shorts","Item_U_C_TeeSurfer_shorts_1","Item_U_C_TeeSurfer_shorts_2","Item_U_C_WorkerCoveralls","Item_U_C_WorkerOveralls","Item_U_Competitor","Item_U_I_CombatUniform","Item_U_I_CombatUniform_shortsleeve","Item_U_I_CombatUniform_tshirt","Item_U_I_G_resistanceLeader_F","Item_U_I_G_Story_Protagonist_F","Item_U_I_GhillieSuit","Item_U_I_HeliPilotCoveralls","Item_U_I_OfficerUniform","Item_U_I_pilotCoveralls","Item_U_I_Protagonist_VR","Item_U_I_Wetsuit","Item_U_IG_Guerilla1_1","Item_U_IG_Guerilla2_1","Item_U_IG_Guerilla2_2","Item_U_IG_Guerilla2_3","Item_U_IG_Guerilla3_1","Item_U_IG_Guerilla3_2","Item_U_IG_leader","Item_U_KerryBody","Item_U_MillerBody","Item_U_NikosBody","Item_U_O_CombatUniform_ocamo","Item_U_O_CombatUniform_oucamo","Item_U_O_GhillieSuit","Item_U_O_OfficerUniform_ocamo","Item_U_O_PilotCoveralls","Item_U_O_Protagonist_VR","Item_U_O_SpecopsUniform_blk","Item_U_O_SpecopsUniform_ocamo","Item_U_O_Wetsuit","Item_U_OG_Guerilla1_1","Item_U_OG_Guerilla2_1","Item_U_OG_Guerilla2_2","Item_U_OG_Guerilla2_3","Item_U_OG_Guerilla3_1","Item_U_OG_Guerilla3_2","Item_U_OG_leader","Item_U_OI_Scientist","Item_U_OrestesBody","Item_U_Rangemaster","LaserTargetC","LaserTargetCBase","LaserTargetE","LaserTargetEBase","LaserTargetW","LaserTargetWBase","NVG_TargetC","NVG_TargetE","NVG_TargetG","NVG_TargetW","placed_B_IR_grenade","placed_chemlight_blue","placed_chemlight_green","placed_chemlight_red","placed_chemlight_yellow","placed_I_IR_grenade","placed_O_IR_grenade","test_EmptyObjectForBubbles","test_EmptyObjectForFireBig","test_EmptyObjectForSmoke","Vest_V_BandollierB_blk","Vest_V_BandollierB_cbr","Vest_V_BandollierB_khk","Vest_V_BandollierB_oli","Vest_V_BandollierB_rgr","Vest_V_Chestrig_blk","Vest_V_Chestrig_khk","Vest_V_Chestrig_oli","Vest_V_Chestrig_rgr","Vest_V_HarnessO_brn","Vest_V_HarnessO_gry","Vest_V_HarnessOGL_brn","Vest_V_HarnessOGL_gry","Vest_V_I_G_resistanceLeader_F","Vest_V_PlateCarrier1_blk","Vest_V_PlateCarrier1_rgr","Vest_V_PlateCarrier2_blk","Vest_V_PlateCarrier2_rgr","Vest_V_PlateCarrier_Kerry","Vest_V_PlateCarrierH_CTRG","Vest_V_PlateCarrierIA1_dgtl","Vest_V_PlateCarrierIA2_dgtl","Vest_V_PlateCarrierL_CTRG","Vest_V_Rangemaster_belt","Vest_V_RebreatherB","Vest_V_RebreatherIA","Vest_V_RebreatherIR","Vest_V_TacVest_blk","Vest_V_TacVest_blk_POLICE","Vest_V_TacVest_brn","Vest_V_TacVest_camo","Vest_V_TacVest_khk","Vest_V_TacVest_oli","Vest_V_TacVestIR_blk","Weapon_arifle_Katiba_C_F","Weapon_arifle_Katiba_F","Weapon_arifle_Katiba_GL_F","Weapon_arifle_Mk20_F","Weapon_arifle_Mk20_GL_F","Weapon_arifle_Mk20_GL_plain_F","Weapon_arifle_Mk20_plain_F","Weapon_arifle_Mk20C_F","Weapon_arifle_Mk20C_plain_F","Weapon_arifle_MX_Black_F","Weapon_arifle_MX_F","Weapon_arifle_MX_GL_Black_F","Weapon_arifle_MX_GL_F","Weapon_arifle_MX_SW_Black_F","Weapon_arifle_MX_SW_F","Weapon_arifle_MXC_Black_F","Weapon_arifle_MXC_F","Weapon_arifle_MXM_Black_F","Weapon_arifle_MXM_F","Weapon_arifle_SDAR_F","Weapon_arifle_TRG20_F","Weapon_arifle_TRG21_F","Weapon_arifle_TRG21_GL_F","Weapon_Empty","Weapon_hgun_ACPC2_F","Weapon_hgun_P07_F","Weapon_hgun_PDW2000_F","Weapon_hgun_Pistol_heavy_01_F","Weapon_hgun_Pistol_heavy_02_F","Weapon_hgun_Rook40_F","Weapon_launch_B_Titan_F","Weapon_launch_I_Titan_F","Weapon_launch_I_Titan_short_F","Weapon_launch_launch_B_Titan_short_F","Weapon_launch_NLAW_F","Weapon_launch_O_Titan_F","Weapon_launch_O_Titan_short_F","Weapon_launch_RPG32_F","Weapon_LMG_Mk200_F","Weapon_LMG_Zafir_F","Weapon_SMG_01_F","Weapon_SMG_02_F","Weapon_srifle_DMR_01_F","Weapon_srifle_EBR_F","Weapon_srifle_GM6_F","Weapon_srifle_LRR_F","WeaponHolder_Single_F","WeaponHolder_Single_limited_item_F","WeaponHolder_Single_limited_magazine_F","WeaponHolder_Single_limited_weapon_F"};
		weapons[] = {"autocannon_30mm","autocannon_30mm_CTWS","autocannon_35mm","autocannon_40mm_CTWS","autocannon_Base_F","BikeHorn","Binocular","Bomb_03_Plane_CAS_02_F","Bomb_04_Plane_CAS_01_F","cannon_105mm","cannon_120mm","cannon_120mm_long","cannon_125mm","Cannon_30mm_Plane_CAS_02_F","CarHorn","CMFlareLauncher","CMFlareLauncher_Singles","CMFlareLauncher_Triples","FakeHorn","FlareLauncher","gatling_20mm","gatling_25mm","gatling_30mm","Gatling_30mm_Plane_CAS_01_F","GBU12BombLauncher","GMG_20mm","GMG_40mm","HandGunBase","HMG_01","HMG_127","HMG_127_APC","HMG_127_MBT","HMG_127_UGV","HMG_M2","HMG_M2_Mounted","HMG_NSVT","HMG_static","Integrated_NVG_F","Integrated_NVG_TI_0_F","Integrated_NVG_TI_1_F","ItemCompass","ItemGPS","ItemMap","ItemRadio","ItemWatch","Laserdesignator","Laserdesignator_mounted","Laserdesignator_pilotCamera","Laserdesignator_vehicle","LMG_65mm_body","LMG_coax","LMG_coax_ext","LMG_M200","LMG_M200_body","LMG_Minigun","LMG_Minigun2","LMG_Minigun_heli","LMG_Minigun_Transport","LMG_Minigun_Transport2","LMG_RCWS","M134_minigun","M2","MineDetector","MiniCarHorn","Missile_AA_03_Plane_CAS_02_F","Missile_AA_04_Plane_CAS_01_F","Missile_AGM_01_Plane_CAS_02_F","Missile_AGM_02_Plane_CAS_01_F","MissileLauncher","missiles_ASRAAM","missiles_DAGR","missiles_DAR","missiles_SCALPEL","missiles_titan","missiles_titan_AA","missiles_titan_static","missiles_Zephyr","Mk82BombLauncher","mortar_155mm_AMOS","mortar_82mm","NVGoggles","NVGoggles_INDEP","NVGoggles_OPFOR","Put","Rangefinder","Rifle","Rocket_03_AP_Plane_CAS_02_F","Rocket_03_HE_Plane_CAS_02_F","Rocket_04_AP_Plane_CAS_01_F","Rocket_04_HE_Plane_CAS_01_F","RocketPods","rockets_230mm_GAT","rockets_Skyfire","SEARCHLIGHT","SmokeLauncher","SportCarHorn","Throw","TruckHorn","TruckHorn2","TruckHorn3","Twin_Cannon_20mm","weapon_LGBLauncherBase","weapon_VLSBase"};
	};
};
class CfgCameraShake
{
	defaultCaliberCoefWeaponFire = 0.0;
};
class Mode_SemiAuto
{
	sounds[] = {"StandardSound","SilencedSound"};
	displayName = "$STR_DN_MODE_SEMIAUTO";
	textureType = "semi";
	recoil = "recoil_single_primary_3outof10";
	recoilProne = "recoil_single_primary_prone_3outof10";
	aiDispersionCoefY = 1.7;
	aiDispersionCoefX = 1.4;
	soundBurst = 0;
	requiredOpticType = -1;
	aiRateOfFire = 2.0;
	aiRateOfFireDispersion = 1;
	aiRateOfFireDistance = 500;
};
class Mode_Burst: Mode_SemiAuto
{
	displayName = "$STR_DN_MODE_BURST";
	textureType = "burst";
	recoil = "recoil_auto_primary_3outof10";
	recoilProne = "recoil_auto_primary_prone_3outof10";
	aiDispersionCoefY = 2.4;
	aiDispersionCoefX = 1.9;
	soundBurst = 0;
};
class Mode_FullAuto: Mode_SemiAuto
{
	displayName = "$STR_DN_MODE_FULLAUTO";
	textureType = "fullAuto";
	recoil = "recoil_auto_primary_3outof10";
	recoilProne = "recoil_auto_primary_prone_3outof10";
	aiDispersionCoefY = 3.0;
	aiDispersionCoefX = 2.0;
	soundBurst = 0;
};
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class CfgAmmo
{
	class Default;
	class BulletCore;
	class BulletBase: BulletCore
	{
		visibleFire = 3;
		audibleFire = 40;
		visibleFireTime = 2;
		dangerRadiusBulletClose = 4;
		dangerRadiusHit = -1;
		suppressionRadiusBulletClose = 2;
		suppressionRadiusHit = 4;
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		model = "\A3\Weapons_f\ammo\shell";
		caliber = 1;
		cartridge = "FxCartridge_556";
		cost = 1;
		timeToLive = 6;
		deflecting = 15;
		tracerStartTime = -1;
		muzzleEffect = "";
		waterEffectOffset = 0.8;
		effectFly = "AmmoClassic";
		aiAmmoUsageFlags = "64 + 128 + 256";
		soundImpactDefault1[] = {"A3\Sounds_F\weapons\Grenades\Grenade_Roll",2.5118864,1,200};
		impactGroundSoft[] = {"soundImpactDefault1",1};
		impactGroundHard[] = {"soundImpactDefault1",1};
		impactMan[] = {"soundImpactDefault1",1};
		impactIron[] = {"soundImpactDefault1",1};
		impactArmor[] = {"soundImpactDefault1",1};
		impactBuilding[] = {"soundImpactDefault1",1};
		impactFoliage[] = {"soundImpactDefault1",1};
		impactWood[] = {"soundImpactDefault1",1};
		impactGlass[] = {"soundImpactDefault1",1};
		impactGlassArmored[] = {"soundImpactDefault1",1};
		impactConcrete[] = {"soundImpactDefault1",1};
		impactTyre[] = {"soundImpactDefault1",1};
		impactRubber[] = {"soundImpactDefault1",1};
		impactPlastic[] = {"soundImpactDefault1",1};
		impactDefault[] = {"soundImpactDefault1",1};
		impactMetal[] = {"soundImpactDefault1",1};
		impactMetalplate[] = {"soundImpactDefault1",1};
		impactWater[] = {"soundImpactDefault1",1};
		soundDefault1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_01",2.818383,1,100};
		soundDefault2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_02",2.818383,1,100};
		soundDefault3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_03",2.818383,1,100};
		soundDefault4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_04",2.818383,1,100};
		soundDefault5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_05",2.818383,1,100};
		soundDefault6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_06",2.818383,1,100};
		soundDefault7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_07",2.818383,1,100};
		soundDefault8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_08",2.818383,1,100};
		soundGroundSoft1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_01",2.818383,1,100};
		soundGroundSoft2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_02",2.818383,1,100};
		soundGroundSoft3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_03",2.818383,1,100};
		soundGroundSoft4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_04",2.818383,1,100};
		soundGroundSoft5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_05",2.818383,1,100};
		soundGroundSoft6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_06",2.818383,1,100};
		soundGroundSoft7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_07",2.818383,1,100};
		soundGroundSoft8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_08",2.818383,1,100};
		soundGroundHard1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_01",1.9952624,1,100};
		soundGroundHard2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_02",1.9952624,1,100};
		soundGroundHard3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_03",1.9952624,1,100};
		soundGroundHard4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_04",1.9952624,1,100};
		soundGroundHard5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_05",1.9952624,1,100};
		soundGroundHard6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_06",1.9952624,1,100};
		soundGroundHard7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_07",1.9952624,1,100};
		soundGroundHard8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_08",1.9952624,1,100};
		soundGlass1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_01",1.7782794,1,100};
		soundGlass2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_02",1.7782794,1,100};
		soundGlass3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_03",1.7782794,1,100};
		soundGlass4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_04",1.7782794,1,100};
		soundGlass5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_05",1.7782794,1,100};
		soundGlass6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_06",1.7782794,1,100};
		soundGlass7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_07",1.7782794,1,100};
		soundGlass8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_08",1.7782794,1,100};
		soundGlassArmored1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_01",2.2387211,1,100};
		soundGlassArmored2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_02",2.2387211,1,100};
		soundGlassArmored3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_03",2.2387211,1,100};
		soundGlassArmored4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_04",2.2387211,1,100};
		soundGlassArmored5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_05",2.2387211,1,100};
		soundGlassArmored6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_06",2.2387211,1,100};
		soundGlassArmored7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_07",2.2387211,1,100};
		soundGlassArmored8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_08",2.2387211,1,100};
		soundMetal1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_01",2.2387211,1,100};
		soundMetal2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_02",2.2387211,1,100};
		soundMetal3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_03",2.2387211,1,100};
		soundMetal4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_04",2.2387211,1,100};
		soundMetal5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_05",2.2387211,1,100};
		soundMetal6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_06",2.2387211,1,100};
		soundMetal7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_07",2.2387211,1,100};
		soundMetal8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_08",2.2387211,1,100};
		soundVehiclePlate1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_01",2.2387211,1,100};
		soundVehiclePlate2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_02",2.2387211,1,100};
		soundVehiclePlate3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_03",2.2387211,1,100};
		soundVehiclePlate4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_04",2.2387211,1,100};
		soundVehiclePlate5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_05",2.2387211,1,100};
		soundVehiclePlate6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_06",2.2387211,1,100};
		soundVehiclePlate7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_07",2.2387211,1,100};
		soundVehiclePlate8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_08",2.2387211,1,100};
		soundWood1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\wood_01",2.818383,1,100};
		soundWood2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\wood_02",2.818383,1,100};
		soundWood3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\wood_03",2.818383,1,100};
		soundWood4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\wood_04",2.818383,1,100};
		soundWood5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\wood_05",2.818383,1,100};
		soundWood6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\wood_06",2.818383,1,100};
		soundWood7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\wood_07",2.818383,1,100};
		soundWood8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\wood_08",2.818383,1,100};
		soundHitBody1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_01",2.2387211,1,100};
		soundHitBody2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_02",2.2387211,1,100};
		soundHitBody3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_03",2.2387211,1,100};
		soundHitBody4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_04",2.2387211,1,100};
		soundHitBody5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_05",2.2387211,1,100};
		soundHitBody6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_06",2.2387211,1,100};
		soundHitBody7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_07",2.2387211,1,100};
		soundHitBody8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_08",2.2387211,1,100};
		soundHitBuilding1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_01",2.2387211,1,100};
		soundHitBuilding2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_02",2.2387211,1,100};
		soundHitBuilding3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_03",2.2387211,1,100};
		soundHitBuilding4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_04",2.2387211,1,100};
		soundHitBuilding5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_05",2.2387211,1,100};
		soundHitBuilding6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_06",2.2387211,1,100};
		soundHitBuilding7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_07",2.2387211,1,100};
		soundHitBuilding8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_08",2.2387211,1,100};
		soundHitFoliage1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_01",1.0,1,100};
		soundHitFoliage2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_02",1.0,1,100};
		soundHitFoliage3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_03",1.0,1,100};
		soundHitFoliage4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_04",1.0,1,100};
		soundHitFoliage5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_05",1.0,1,100};
		soundHitFoliage6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_06",1.0,1,100};
		soundHitFoliage7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_07",1.0,1,100};
		soundHitFoliage8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_08",1.0,1,100};
		soundPlastic1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_01",1.4125376,1,100};
		soundPlastic2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_02",1.4125376,1,100};
		soundPlastic3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_03",1.4125376,1,100};
		soundPlastic4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_04",1.4125376,1,100};
		soundPlastic5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_05",1.4125376,1,100};
		soundPlastic6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_06",1.4125376,1,100};
		soundPlastic7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_07",1.4125376,1,100};
		soundPlastic8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_08",1.4125376,1,100};
		soundConcrete1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_01",1.9952624,1,100};
		soundConcrete2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_02",1.9952624,1,100};
		soundConcrete3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_03",1.9952624,1,100};
		soundConcrete4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_04",1.9952624,1,100};
		soundConcrete5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_05",1.9952624,1,100};
		soundConcrete6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_06",1.9952624,1,100};
		soundConcrete7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_07",1.9952624,1,100};
		soundConcrete8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_08",1.9952624,1,100};
		soundTyre1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_01",1.7782794,1,100};
		soundTyre2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_02",1.7782794,1,100};
		soundTyre3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_03",1.7782794,1,100};
		soundTyre4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_04",1.7782794,1,100};
		soundTyre5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_05",1.7782794,1,100};
		soundTyre6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_06",1.7782794,1,100};
		soundTyre7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_07",1.7782794,1,100};
		soundTyre8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_08",1.7782794,1,100};
		soundRubber1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\rubber_01",0.8912509,1,100};
		soundRubber2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\rubber_02",0.8912509,1,100};
		soundRubber3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\rubber_03",0.8912509,1,100};
		soundRubber4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\rubber_04",0.8912509,1,100};
		soundRubber5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\rubber_05",0.8912509,1,100};
		soundRubber6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\rubber_06",0.8912509,1,100};
		soundWater1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_01",1.4125376,1,100};
		soundWater2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_02",1.4125376,1,100};
		soundWater3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_03",1.4125376,1,100};
		soundWater4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_04",1.4125376,1,100};
		soundWater5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_05",1.4125376,1,100};
		soundWater6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_06",1.4125376,1,100};
		soundWater7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_07",1.4125376,1,100};
		soundWater8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_08",1.4125376,1,100};
		soundMetalInt1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_01",2.2387211,1,100};
		soundMetalInt2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_02",2.2387211,1,100};
		soundMetalInt3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_03",2.2387211,1,100};
		soundMetalInt4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_04",2.2387211,1,100};
		soundMetalInt5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_05",2.2387211,1,100};
		soundMetalInt6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_06",2.2387211,1,100};
		soundVehiclePlateInt1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_01",2.2387211,1,100};
		soundVehiclePlateInt2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_02",2.2387211,1,100};
		soundVehiclePlateInt3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_03",2.2387211,1,100};
		soundVehiclePlateInt4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_04",2.2387211,1,100};
		soundVehiclePlateInt5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_05",2.2387211,1,100};
		soundVehiclePlateInt6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_06",2.2387211,1,100};
		soundVehiclePlateInt7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_07",2.2387211,1,100};
		soundVehiclePlateInt8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_08",2.2387211,1,100};
		soundVehiclePlateInt9[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_09",2.2387211,1,100};
		soundVehiclePlateInt10[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_10",2.2387211,1,100};
		soundVehiclePlateInt11[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_11",2.2387211,1,100};
		soundVehiclePlateInt12[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_12",2.2387211,1,100};
		soundVehiclePlateInt13[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_13",2.2387211,1,100};
		soundVehiclePlateInt14[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_14",2.2387211,1,100};
		soundVehiclePlateInt15[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_15",2.2387211,1,100};
		hitArmorInt[] = {"soundVehiclePlateInt1",0.066,"soundVehiclePlateInt2",0.066,"soundVehiclePlateInt3",0.066,"soundVehiclePlateInt4",0.066,"soundVehiclePlateInt5",0.066,"soundVehiclePlateInt6",0.066,"soundVehiclePlateInt7",0.066,"soundVehiclePlateInt8",0.066,"soundVehiclePlateInt9",0.066,"soundVehiclePlateInt10",0.066,"soundVehiclePlateInt11",0.066,"soundVehiclePlateInt12",0.066,"soundVehiclePlateInt13",0.066,"soundVehiclePlateInt14",0.066,"soundVehiclePlateInt15",0.066};
		hitMetalInt[] = {"soundMetalInt1",0.166,"soundMetalInt2",0.166,"soundMetalInt3",0.166,"soundMetalInt4",0.166,"soundMetalInt5",0.166,"soundMetalInt6",0.166};
		hitGroundSoft[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1,"soundGroundSoft4",0.1,"soundGroundSoft5",0.1,"soundGroundSoft6",0.1,"soundGroundSoft7",0.1,"soundGroundSoft8",0.1};
		hitGroundHard[] = {"soundGroundHard1",0.2,"soundGroundHard2",0.2,"soundGroundHard3",0.1,"soundGroundHard4",0.1,"soundGroundHard5",0.1,"soundGroundHard6",0.1,"soundGroundHard7",0.1,"soundGroundHard8",0.1};
		hitMan[] = {"soundHitBody1",0.125,"soundHitBody2",0.125,"soundHitBody3",0.125,"soundHitBody4",0.125,"soundHitBody5",0.125,"soundHitBody6",0.125,"soundHitBody7",0.125,"soundHitBody8",0.125};
		hitArmor[] = {"soundVehiclePlate1",0.125,"soundVehiclePlate2",0.125,"soundVehiclePlate3",0.125,"soundVehiclePlate4",0.125,"soundVehiclePlate5",0.125,"soundVehiclePlate6",0.125,"soundVehiclePlate7",0.125,"soundVehiclePlate8",0.125};
		hitBuilding[] = {"soundHitBuilding1",0.2,"soundHitBuilding2",0.2,"soundHitBuilding3",0.1,"soundHitBuilding4",0.1,"soundHitBuilding5",0.1,"soundHitBuilding6",0.1,"soundHitBuilding7",0.1,"soundHitBuilding8",0.1};
		hitFoliage[] = {"soundHitFoliage1",0.125,"soundHitFoliage2",0.125,"soundHitFoliage3",0.125,"soundHitFoliage4",0.125,"soundHitFoliage5",0.125,"soundHitFoliage6",0.125,"soundHitFoliage7",0.125,"soundHitFoliage8",0.125};
		hitWood[] = {"soundWood1",0.125,"soundWood2",0.125,"soundWood3",0.125,"soundWood4",0.125,"soundWood5",0.125,"soundWood6",0.125,"soundWood7",0.125,"soundWood8",0.125};
		hitGlass[] = {"soundGlass1",0.125,"soundGlass2",0.125,"soundGlass3",0.125,"soundGlass4",0.125,"soundGlass5",0.125,"soundGlass6",0.125,"soundGlass7",0.125,"soundGlass8",0.125};
		hitGlassArmored[] = {"soundGlassArmored1",0.125,"soundGlassArmored2",0.125,"soundGlassArmored3",0.125,"soundGlassArmored4",0.125,"soundGlassArmored5",0.125,"soundGlassArmored6",0.125,"soundGlassArmored7",0.125,"soundGlassArmored8",0.125};
		hitConcrete[] = {"soundConcrete1",0.125,"soundConcrete2",0.125,"soundConcrete3",0.125,"soundConcrete4",0.125,"soundConcrete5",0.125,"soundConcrete6",0.125,"soundConcrete7",0.125,"soundConcrete8",0.125};
		hitTyre[] = {"soundTyre1",0.125,"soundTyre2",0.125,"soundTyre3",0.125,"soundTyre4",0.125,"soundTyre5",0.125,"soundTyre6",0.125,"soundTyre7",0.125,"soundTyre8",0.125};
		hitRubber[] = {"soundRubber1",0.125,"soundRubber2",0.125,"soundRubber3",0.125,"soundRubber4",0.125,"soundRubber5",0.125,"soundRubber6",0.125};
		hitPlastic[] = {"soundPlastic1",0.125,"soundPlastic2",0.125,"soundPlastic3",0.125,"soundPlastic4",0.125,"soundPlastic5",0.125,"soundPlastic6",0.125,"soundPlastic7",0.125,"soundPlastic8",0.125};
		hitDefault[] = {"soundDefault1",0.2,"soundDefault2",0.2,"soundDefault3",0.1,"soundDefault4",0.1,"soundDefault5",0.1,"soundDefault6",0.1,"soundDefault7",0.1,"soundDefault8",0.1};
		hitMetal[] = {"soundMetal1",0.125,"soundMetal2",0.125,"soundMetal3",0.125,"soundMetal4",0.125,"soundMetal5",0.125,"soundMetal6",0.125,"soundMetal7",0.125,"soundMetal8",0.125};
		hitMetalplate[] = {"soundVehiclePlate1",0.125,"soundVehiclePlate2",0.125,"soundVehiclePlate3",0.125,"soundVehiclePlate4",0.125,"soundVehiclePlate5",0.125,"soundVehiclePlate6",0.125,"soundVehiclePlate7",0.125,"soundVehiclePlate8",0.125};
		hitWater[] = {"soundWater1",0.125,"soundWater2",0.125,"soundWater3",0.125,"soundWater4",0.125,"soundWater5",0.125,"soundWater6",0.125,"soundWater7",0.125,"soundWater8",0.125};
		soundBell1[] = {"A3\Sounds_F\ambient\objects\bell_small",1.4125376,1,500};
		hitBell[] = {"soundBell1",1.0};
		bulletFly1[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby01",2.2387211,1,100};
		bulletFly2[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby02",2.2387211,1,100};
		bulletFly3[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby03",2.2387211,1,100};
		bulletFly4[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby04",2.2387211,1,100};
		bulletFly5[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby05",2.2387211,1,100};
		bulletFly6[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby06",2.2387211,1,100};
		bulletFly7[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby07",2.2387211,1,100};
		bulletFly8[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby08",2.2387211,1,100};
		bulletFly9[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby09",2.2387211,1,100};
		bulletFly10[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby10",2.2387211,1,100};
		bulletFly11[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby11",2.2387211,1,100};
		bulletFly12[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby12",2.2387211,1,100};
		bulletFly[] = {"bulletFly1",0.083,"bulletFly2",0.083,"bulletFly3",0.083,"bulletFly4",0.083,"bulletFly5",0.083,"bulletFly6",0.083,"bulletFly7",0.083,"bulletFly8",0.083,"bulletFly9",0.083,"bulletFly10",0.083,"bulletFly11",0.083,"bulletFly12",0.083};
		supersonicCrackNear[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\scrack_close",3.1622777,1,200};
		supersonicCrackFar[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\scrack_middle",3.1622777,1,200};
		class SuperSonicCrack
		{
			superSonicCrack[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_meadow1",3.1622777,1,200};
			class SCrackForest
			{
				range[] = {0,500};
				sound1[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_forest1",1.0,1,500};
				sound2[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_forest2",1.0,1,500};
				sound3[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_forest3",1.0,1,500};
				sounds[] = {"sound1",0.333,"sound2",0.333,"sound3",0.333};
				frequency = "((speed factor [330, 930]) * 0.1) + 1.05";
				trigger = "forest";
			};
			class SCrackTrees
			{
				range[] = {0,500};
				sound1[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_trees1",1.0,1,500};
				sound2[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_trees2",1.0,1,500};
				sound3[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_trees3",1.0,1,500};
				sounds[] = {"sound1",0.333,"sound2",0.333,"sound3",0.333};
				frequency = "((speed factor [330, 930]) * 0.1) + 1.05";
				trigger = "trees";
			};
			class SCrackMeadow
			{
				range[] = {0,500};
				sound1[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_meadow1",1.0,1,500};
				sound2[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_meadow2",1.0,1,500};
				sound3[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_meadow3",1.0,1,500};
				sounds[] = {"sound1",0.333,"sound2",0.333,"sound3",0.333};
				frequency = "((speed factor [330, 930]) * 0.1) + 1.05";
				trigger = "meadow max sea";
			};
			class SCrackHouses
			{
				range[] = {0,500};
				sound1[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_houses1",1.0,1,500};
				sound2[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_houses2",1.0,1,500};
				sound3[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_houses3",1.0,1,500};
				sounds[] = {"sound1",0.333,"sound2",0.333,"sound3",0.333};
				frequency = "((speed factor [330, 930]) * 0.1) + 1.05";
				trigger = "houses max interior";
			};
		};
		class HitEffects
		{
			Hit_Foliage_green = "ImpactLeavesGreen";
			Hit_Foliage_Dead = "ImpactLeavesDead";
			Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
			Hit_Foliage_Palm = "ImpactLeavesPalm";
			Hit_Foliage_Pine = "ImpactLeavesPine";
			hitFoliage = "ImpactLeaves";
			hitGlass = "ImpactGlass";
			hitGlassArmored = "ImpactGlassThin";
			hitWood = "ImpactWood";
			hitHay = "ImpactHay";
			hitMetal = "ImpactMetal";
			hitMetalPlate = "ImpactMetal";
			hitBuilding = "ImpactPlaster";
			hitPlastic = "ImpactPlastic";
			hitRubber = "ImpactRubber";
			hitTyre = "ImpactTyre";
			hitConcrete = "ImpactConcrete";
			hitMan = "ImpactEffectsBlood";
			hitGroundSoft = "ImpactEffectsSmall";
			hitGroundRed = "ImpactEffectsRed";
			hitGroundHard = "ImpactEffectsHardGround";
			hitWater = "ImpactEffectsWater";
			hitVirtual = "ImpactMetal";
		};
		class CamShakeExplode
		{
			power = 1.73205;
			duration = 0.4;
			frequency = 20;
			distance = 5.19615;
		};
		class CamShakeHit
		{
			power = 3;
			duration = 0.2;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 0;
			duration = 0;
			frequency = 0;
			distance = 0;
		};
		class CamShakePlayerFire
		{
			power = 0;
			duration = 0;
			frequency = 0;
			distance = 0;
		};
	};
	class ShellCore;
	class ShellBase: ShellCore
	{
		supersonicCrackNear[] = {"A3\Sounds_F\weapons\Explosion\supersonic_crack_close",0.31622776,1,50};
		supersonicCrackFar[] = {"A3\Sounds_F\weapons\Explosion\supersonic_crack_50meters",0.22387211,1,150};
		CraterEffects = "HEShellCrater";
		CraterWaterEffects = "ImpactEffectsWaterHE";
		ExplosionEffects = "HEShellExplosion";
		visibleFire = 64;
		audibleFire = 250;
		dangerRadiusHit = -1;
		suppressionRadiusHit = 30;
		timeToLive = 360;
		muzzleEffect = "";
		caliber = 34;
		deflecting = 10;
		deflectionDirDistribution = 0.39;
		penetrationDirDistribution = 0.26;
		whistleOnFire = 2;
		aiAmmoUsageFlags = "64 + 128 + 256";
		class HitEffects
		{
			hitWater = "ImpactEffectsWaterRocket";
		};
		soundFakeFall0[] = {"a3\Sounds_F\weapons\falling_bomb\fall_01",3.1622777,1,1000};
		soundFakeFall1[] = {"a3\Sounds_F\weapons\falling_bomb\fall_02",3.1622777,1,1000};
		soundFakeFall2[] = {"a3\Sounds_F\weapons\falling_bomb\fall_03",3.1622777,1,1000};
		soundFakeFall3[] = {"a3\Sounds_F\weapons\falling_bomb\fall_04",3.1622777,1,1000};
		soundFakeFall[] = {"soundFakeFall0",0.25,"soundFakeFall1",0.25,"soundFakeFall2",0.25,"soundFakeFall3",0.25};
	};
	class ammo_Penetrator_Base: ShellBase
	{
		model = "\A3\weapons_f\empty";
		caliber = 40;
		warheadName = "HEAT";
		hit = 300;
		indirectHit = 0;
		indirectHitRange = 0;
		explosive = 0;
		typicalSpeed = 1000;
		timeToLive = 0.2;
		simulationStep = 0.05;
		airFriction = -0.28;
		deflecting = 0;
		deflectionDirDistribution = 0;
		penetrationDirDistribution = 0;
		aiAmmoUsageFlags = "128 + 512";
		dangerRadiusHit = 60;
		suppressionRadiusHit = 30;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		class HitEffects
		{
			Hit_Foliage_green = "ImpactLeavesGreen";
			Hit_Foliage_Dead = "ImpactLeavesDead";
			Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
			Hit_Foliage_Palm = "ImpactLeavesPalm";
			Hit_Foliage_Pine = "ImpactLeavesPine";
			hitFoliage = "ImpactLeaves";
			hitGlass = "ImpactMetalSabotSmall";
			hitGlassArmored = "ImpactMetalSabotSmall";
			hitWood = "ImpactMetalSabotSmall";
			hitHay = "ImpactMetalSabotSmall";
			hitMetal = "ImpactMetalSabotSmall";
			hitMetalPlate = "ImpactMetalSabotSmall";
			hitBuilding = "ImpactMetalSabotSmall";
			hitPlastic = "ImpactMetalSabotSmall";
			hitRubber = "ImpactMetalSabotSmall";
			hitTyre = "ImpactMetalSabotSmall";
			hitConcrete = "ImpactMetalSabotSmall";
			hitMan = "ImpactMetalSabotSmall";
			hitGroundSoft = "ImpactMetalSabotSmall";
			hitGroundRed = "ImpactMetalSabotSmall";
			hitGroundHard = "ImpactMetalSabotSmall";
			hitWater = "ImpactEffectsWater";
			default_mat = "ImpactMetalSabotSmall";
		};
		whistleOnFire = 1;
		whistleDist = 14;
	};
	class FlareCore;
	class ShotDeployCore;
	class ShotDeployBase: ShotDeployCore
	{
		model = "\A3\Weapons_F\Ammo\shell.p3d";
	};
	class SubmunitionCore;
	class SubmunitionBase: SubmunitionCore
	{
		model = "\A3\Weapons_F\Ammo\shell.p3d";
	};
	class SubmunitionBullet: SubmunitionBase
	{
		explosive = 0;
		triggerTime = 1;
		submunitionConeAngle = 0;
		submunitionCount = 1;
		submunitionAmmo = "BulletBase";
		class HitEffects
		{
			Hit_Foliage_green = "ImpactLeavesGreen";
			Hit_Foliage_Dead = "ImpactLeavesDead";
			Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
			Hit_Foliage_Palm = "ImpactLeavesPalm";
			Hit_Foliage_Pine = "ImpactLeavesPine";
			hitFoliage = "ImpactLeaves";
			hitGlass = "ImpactGlass";
			hitGlassArmored = "ImpactGlassThin";
			hitWood = "ImpactWood";
			hitHay = "ImpactHay";
			hitMetal = "ImpactMetal";
			hitMetalPlate = "ImpactMetal";
			hitBuilding = "ImpactPlaster";
			hitPlastic = "ImpactPlastic";
			hitRubber = "ImpactRubber";
			hitTyre = "ImpactTyre";
			hitConcrete = "ImpactConcrete";
			hitMan = "ImpactEffectsBlood";
			hitGroundSoft = "ImpactEffectsSmall";
			hitGroundRed = "ImpactEffectsRed";
			hitGroundHard = "ImpactEffectsHardGround";
			hitWater = "ImpactEffectsWater";
			hitVirtual = "ImpactMetal";
		};
	};
	class MissileCore;
	class MissileBase: MissileCore
	{
		manualControl = 0;
		maneuvrability = 20;
		maxSpeed = 500;
		simulationStep = 0.01;
		airFriction = 0.2;
		sideAirFriction = 0.001;
		maxControlRange = 4000;
		soundHit1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_01",2.5118864,1,2000};
		soundHit2[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_02",2.5118864,1,2000};
		soundHit3[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_03",2.5118864,1,2000};
		multiSoundHit[] = {"soundHit1",0.34,"soundHit2",0.33,"soundHit3",0.33};
		explosionSoundEffect = "DefaultExplosion";
		soundFly[] = {"",1,1,400};
		soundEngine[] = {"",1,1,50};
		supersonicCrackNear[] = {"A3\Sounds_F\weapons\Explosion\supersonic_crack_close",0.39810717,1,20};
		supersonicCrackFar[] = {"A3\Sounds_F\weapons\Explosion\supersonic_crack_50meters",0.31622776,1,50};
		CraterEffects = "ATMissileCrater";
		explosionEffects = "ATMissileExplosion";
		muzzleEffect = "BIS_fnc_effectFiredRocket";
		effectsMissile = "missile4";
		deflecting = 0;
		weaponLockSystem = "2 + 16";
		cmImmunity = 0.9;
		dangerRadiusHit = -1;
		suppressionRadiusHit = 30;
		class HitEffects
		{
			hitWater = "ImpactEffectsWaterRocket";
		};
		class Components;
		maverickWeaponIndexOffset = 0;
		htMin = 60;
		htMax = 1800;
		afMax = 200;
		mfMax = 100;
		mFact = 0;
		tBody = 0;
	};
	class ammo_Missile_CruiseBase: MissileBase
	{
		model = "\A3\weapons_f\empty";
		proxyShape = "\A3\weapons_f\empty";
		hit = 6000;
		indirectHit = 2000;
		indirectHitRange = 30;
		explosive = 0.8;
		warheadName = "HE";
		simulationStep = 0.002;
		timeToLive = 205;
		initTime = 0.3;
		thrustTime = 200;
		thrust = 35;
		maxSpeed = 194.444;
		maneuvrability = 16;
		maneuvDependsOnSpeedCoef = 0.4;
		fuseDistance = 100;
		trackLead = 0.5;
		trackOversteer = 1.2;
		airFriction = 0.45;
		sideAirFriction = 0.5;
		cost = 5000;
		aiAmmoUsageFlags = "128 + 512";
		dangerRadiusHit = 2000;
		suppressionRadiusHit = 200;
		audibleFire = 64;
		visibleFire = 64;
		visibleFireTime = 20;
		craterEffects = "HeavyBombCrater";
		explosionEffects = "HeavyBombExplosion";
		effectsMissileInit = "RocketBackEffectsRPG";
		effectsMissile = "CruiseMissile";
		muzzleEffect = "BIS_fnc_effectFiredCruiseMissile";
		whistleDist = 64;
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_2",1.5848932,1.8,1000};
		soundEngine[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_2",1.5848932,1.8,1000};
		soundSetExplosion[] = {"BombsHeavy_Exp_SoundSet","BombsHeavy_Tail_SoundSet","Explosion_Debris_SoundSet"};
		airLock = 0;
		lockType = 0;
		weaponLockSystem = 16;
		cmImmunity = 1;
		cameraViewAvailable = 1;
		autoSeekTarget = 0;
		lockSeekRadius = 1500;
		missileLockCone = 360;
		missileKeepLockedCone = 360;
		missileLockMaxSpeed = 1;
		missileLockMaxDistance = 32000;
		missileLockMinDistance = 50;
		flightProfiles[] = {"Cruise"};
		class Cruise
		{
			preferredFlightAltitude = 100;
			lockDistanceToTarget = 300;
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class DataLinkSensorComponent: SensorTemplateDataLink
					{
						class AirTarget
						{
							minRange = 32000;
							maxRange = 32000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 32000;
							maxRange = 32000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						maxTrackableSpeed = 1;
					};
				};
			};
		};
		class CamShakeExplode
		{
			power = 46;
			duration = 3;
			frequency = 20;
			distance = 361.326;
		};
		class CamShakeHit
		{
			power = 230;
			duration = 0.8;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 3.89432;
			duration = 3;
			frequency = 20;
			distance = 121.326;
		};
		class CamShakePlayerFire
		{
			power = 5;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class ammo_Missile_CannonLaunchedBase: MissileBase
	{
		model = "\A3\weapons_f\empty";
		proxyShape = "\A3\weapons_f\empty";
		hit = 750;
		indirectHit = 15;
		indirectHitRange = 4.5;
		explosive = 0.4;
		warheadName = "HE";
		simulationStep = 0.002;
		timeToLive = 75;
		initTime = 0;
		thrustTime = 5;
		thrust = 60;
		maxSpeed = 280;
		maneuvrability = 3;
		fuseDistance = 50;
		trackLead = 0.95;
		trackOversteer = 1.4;
		airFriction = 0.05;
		sideAirFriction = 0.1;
		cost = 500;
		aiAmmoUsageFlags = "128 + 512";
		dangerRadiusHit = 1000;
		suppressionRadiusHit = 120;
		craterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		explosionSoundEffect = "DefaultExplosion";
		effectsMissileInit = "RocketBackEffectsRPG";
		effectsMissile = "missile2";
		muzzleEffect = "";
		whistleDist = 4;
		lockType = 1;
		manualControl = 1;
		maxControlRange = 5000;
		manualControlOffset = 100;
		missileManualControlCone = 90;
		weaponLockSystem = 16;
		cmImmunity = 1;
		cameraViewAvailable = 1;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class AIManualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 8000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 35;
						angleRangeHorizontal = 3;
						angleRangeVertical = 3;
						maxTrackableATL = 50;
					};
				};
			};
		};
		class CamShakeExplode
		{
			power = 11;
			duration = 1.4;
			frequency = 20;
			distance = 91.3296;
		};
		class CamShakeHit
		{
			power = 110;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 2.78316;
			duration = 1.6;
			frequency = 20;
			distance = 61.9677;
		};
		class CamShakePlayerFire
		{
			power = 3;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class GrenadeCore: Default
	{
		deflecting = 30;
	};
	class GrenadeBase: GrenadeCore
	{
		soundHit1[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_1",3.1622777,1,1400};
		soundHit2[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_2",3.1622777,1,1400};
		soundHit3[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_3",3.1622777,1,1400};
		soundHit4[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_4",3.1622777,1,1400};
		soundHit5[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_5",3.1622777,1,1400};
		soundHit6[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_6",3.1622777,1,1400};
		multiSoundHit[] = {"soundHit1",0.2,"soundHit2",0.2,"soundHit3",0.2,"soundHit4",0.1,"soundHit5",0.15,"soundHit6",0.15};
		soundImpactSoft1[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grass_1",1.4125376,1,45};
		soundImpactSoft2[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grass_2",1.4125376,1,45};
		soundImpactSoft3[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grass_3",1.4125376,1,45};
		soundImpactSoft4[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grass_4",1.4125376,1,45};
		soundImpactSoft5[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grass_5",1.4125376,1,45};
		soundImpactSoft6[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grass_6",1.4125376,1,45};
		soundImpactSoft7[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grass_7",1.4125376,1,45};
		soundImpactHard1[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_concrete_1",1.4125376,1,65};
		soundImpactHard2[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_concrete_2",1.4125376,1,65};
		soundImpactHard3[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_concrete_3",1.4125376,1,65};
		soundImpactHard4[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_concrete_4",1.4125376,1,65};
		soundImpactHard5[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_concrete_5",1.4125376,1,65};
		soundImpactHard6[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_concrete_6",1.4125376,1,65};
		soundImpactHard7[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_concrete_7",1.4125376,1,65};
		soundImpactIron1[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_Metal_1",1.2589254,1,95};
		soundImpactIron2[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_Metal_2",1.2589254,1,95};
		soundImpactIron3[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_Metal_3",1.2589254,1,95};
		soundImpactIron4[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_Metal_4",1.2589254,1,95};
		soundImpactIron5[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_Metal_5",1.2589254,1,95};
		soundImpactWoodExt1[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_wood_ext_1",1.4125376,1,75};
		soundImpactWoodExt2[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_wood_ext_2",1.4125376,1,75};
		soundImpactWoodExt3[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_wood_ext_3",1.4125376,1,75};
		soundImpactWoodExt4[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_wood_ext_4",1.4125376,1,75};
		soundImpactWater1[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_water_1",1.4125376,1,55};
		soundImpactWater2[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_water_2",1.4125376,1,55};
		soundImpactWater3[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_water_3",1.4125376,1,55};
		impactGroundSoft[] = {"soundImpactSoft1",0.2,"soundImpactSoft2",0.2,"soundImpactSoft3",0.2,"soundImpactSoft4",0.1,"soundImpactSoft5",0.1,"soundImpactSoft6",0.1,"soundImpactSoft7",0.1};
		impactGroundHard[] = {"soundImpactHard1",0.2,"soundImpactHard2",0.2,"soundImpactHard3",0.2,"soundImpactHard4",0.1,"soundImpactHard5",0.1,"soundImpactHard6",0.1,"soundImpactHard7",0.1};
		impactIron[] = {"soundImpactIron1",0.2,"soundImpactIron2",0.2,"soundImpactIron3",0.2,"soundImpactIron4",0.2,"soundImpactIron5",0.2};
		impactArmor[] = {"soundImpactIron1",0.2,"soundImpactIron2",0.2,"soundImpactIron3",0.2,"soundImpactIron4",0.2,"soundImpactIron5",0.2};
		impactBuilding[] = {"soundImpactHard1",0.2,"soundImpactHard2",0.2,"soundImpactHard3",0.2,"soundImpactHard4",0.1,"soundImpactHard5",0.1,"soundImpactHard6",0.1,"soundImpactHard7",0.1};
		impactFoliage[] = {"soundImpactSoft1",0.2,"soundImpactSoft2",0.2,"soundImpactSoft3",0.2,"soundImpactSoft4",0.1,"soundImpactSoft5",0.1,"soundImpactSoft6",0.1,"soundImpactSoft7",0.1};
		impactWood[] = {"soundImpactWoodExt1",0.25,"soundImpactWoodExt2",0.25,"soundImpactWoodExt3",0.25,"soundImpactWoodExt4",0.25};
		impactGlass[] = {"soundImpactHard1",0.2,"soundImpactHard2",0.2,"soundImpactHard3",0.2,"soundImpactHard4",0.1,"soundImpactHard5",0.1,"soundImpactHard6",0.1,"soundImpactHard7",0.1};
		impactGlassArmored[] = {"soundImpactHard1",0.2,"soundImpactHard2",0.2,"soundImpactHard3",0.2,"soundImpactHard4",0.1,"soundImpactHard5",0.1,"soundImpactHard6",0.1,"soundImpactHard7",0.1};
		impactConcrete[] = {"soundImpactHard1",0.2,"soundImpactHard2",0.2,"soundImpactHard3",0.2,"soundImpactHard4",0.1,"soundImpactHard5",0.1,"soundImpactHard6",0.1,"soundImpactHard7",0.1};
		impactTyre[] = {"soundImpactSoft1",0.2,"soundImpactSoft2",0.2,"soundImpactSoft3",0.2,"soundImpactSoft4",0.1,"soundImpactSoft5",0.1,"soundImpactSoft6",0.1,"soundImpactSoft7",0.1};
		impactRubber[] = {"soundImpactSoft1",0.2,"soundImpactSoft2",0.2,"soundImpactSoft3",0.2,"soundImpactSoft4",0.1,"soundImpactSoft5",0.1,"soundImpactSoft6",0.1,"soundImpactSoft7",0.1};
		impactPlastic[] = {"soundImpactSoft1",0.2,"soundImpactSoft2",0.2,"soundImpactSoft3",0.2,"soundImpactSoft4",0.1,"soundImpactSoft5",0.1,"soundImpactSoft6",0.1,"soundImpactSoft7",0.1};
		impactDefault[] = {"soundImpactHard1",0.2,"soundImpactHard2",0.2,"soundImpactHard3",0.2,"soundImpactHard4",0.1,"soundImpactHard5",0.1,"soundImpactHard6",0.1,"soundImpactHard7",0.1};
		impactMetal[] = {"soundImpactIron1",0.2,"soundImpactIron2",0.2,"soundImpactIron3",0.2,"soundImpactIron4",0.2,"soundImpactIron5",0.2};
		impactMetalplate[] = {"soundImpactIron1",0.2,"soundImpactIron2",0.2,"soundImpactIron3",0.2,"soundImpactIron4",0.2,"soundImpactIron5",0.2};
		impactWater[] = {"soundImpactWater1",0.35,"soundImpactWater2",0.35,"soundImpactWater3",0.3};
		soundGlass1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_01",1.7782794,1,100};
		soundGlass2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_02",1.7782794,1,100};
		soundGlass3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_03",1.7782794,1,100};
		soundGlass4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_04",1.7782794,1,100};
		soundGlass5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_05",1.7782794,1,100};
		soundGlass6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_06",1.7782794,1,100};
		soundGlass7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_07",1.7782794,1,100};
		soundGlass8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_08",1.7782794,1,100};
		hitGlassBreak[] = {"soundGlass1",0.125,"soundGlass2",0.125,"soundGlass3",0.125,"soundGlass4",0.125,"soundGlass5",0.125,"soundGlass6",0.125,"soundGlass7",0.125,"soundGlass8",0.125};
		soundHitBody3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_03",2.2387211,1,100};
		soundHitBody4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_04",2.2387211,1,100};
		soundHitBody5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_05",2.2387211,1,100};
		soundHitBody6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_06",2.2387211,1,100};
		impactMan[] = {"soundHitBody3",0.25,"soundHitBody4",0.25,"soundHitBody5",0.25,"soundHitBody6",0.25};
		supersonicCrackNear[] = {"A3\Sounds_F\weapons\Explosion\supersonic_crack_close",0.31622776,1,50};
		supersonicCrackFar[] = {"A3\Sounds_F\weapons\Explosion\supersonic_crack_50meters",0.22387211,1,75};
		explosionSoundEffect = "DefaultExplosion";
		CraterEffects = "GrenadeCrater";
		explosionEffects = "GrenadeExplosion";
		muzzleEffect = "";
		explosionForceCoef = 4;
		shadow = 1;
		class HitEffects
		{
			hitWater = "ImpactEffectsWater";
		};
	};
	class Grenade: Default
	{
		model = "\A3\Weapons_f\ammo\Handgrenade";
		hit = 10;
		indirectHit = 8;
		indirectHitRange = 6;
		explosive = 1;
		explosionEffectsRadius = 5;
		typicalspeed = 60;
		deflecting = 15;
		cost = 40;
		simulation = "shotGrenade";
		simulationStep = 0.05;
		shadow = 1;
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_HE_grenade_01",2.5118864,1,1500};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_HE_grenade_02",2.5118864,1,1500};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_HE_grenade_03",2.5118864,1,1500};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_HE_grenade_04",2.5118864,1,1500};
		multiSoundHit[] = {"soundHit1",0.25,"soundHit2",0.25,"soundHit3",0.25,"soundHit4",0.25};
		soundImpactSoft1[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grass_1",1.4125376,1,45};
		soundImpactSoft2[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grass_2",1.4125376,1,45};
		soundImpactSoft3[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grass_3",1.4125376,1,45};
		soundImpactSoft4[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grass_4",1.4125376,1,45};
		soundImpactSoft5[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grass_5",1.4125376,1,45};
		soundImpactSoft6[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grass_6",1.4125376,1,45};
		soundImpactSoft7[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grass_7",1.4125376,1,45};
		soundImpactHard1[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_concrete_1",1.4125376,1,65};
		soundImpactHard2[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_concrete_2",1.4125376,1,65};
		soundImpactHard3[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_concrete_3",1.4125376,1,65};
		soundImpactHard4[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_concrete_4",1.4125376,1,65};
		soundImpactHard5[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_concrete_5",1.4125376,1,65};
		soundImpactHard6[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_concrete_6",1.4125376,1,65};
		soundImpactHard7[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_concrete_7",1.4125376,1,65};
		soundImpactIron1[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_Metal_1",1.2589254,1,95};
		soundImpactIron2[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_Metal_2",1.2589254,1,95};
		soundImpactIron3[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_Metal_3",1.2589254,1,95};
		soundImpactIron4[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_Metal_4",1.2589254,1,95};
		soundImpactIron5[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_Metal_5",1.2589254,1,95};
		soundImpactWoodExt1[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_wood_ext_1",1.4125376,1,75};
		soundImpactWoodExt2[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_wood_ext_2",1.4125376,1,75};
		soundImpactWoodExt3[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_wood_ext_3",1.4125376,1,75};
		soundImpactWoodExt4[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_wood_ext_4",1.4125376,1,75};
		soundImpactWater1[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_water_1",1.4125376,1,55};
		soundImpactWater2[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_water_2",1.4125376,1,55};
		soundImpactWater3[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_water_3",1.4125376,1,55};
		impactGroundSoft[] = {"soundImpactSoft1",0.2,"soundImpactSoft2",0.2,"soundImpactSoft3",0.2,"soundImpactSoft4",0.1,"soundImpactSoft5",0.1,"soundImpactSoft6",0.1,"soundImpactSoft7",0.1};
		impactGroundHard[] = {"soundImpactHard1",0.2,"soundImpactHard2",0.2,"soundImpactHard3",0.2,"soundImpactHard4",0.1,"soundImpactHard5",0.1,"soundImpactHard6",0.1,"soundImpactHard7",0.1};
		impactIron[] = {"soundImpactIron1",0.2,"soundImpactIron2",0.2,"soundImpactIron3",0.2,"soundImpactIron4",0.2,"soundImpactIron5",0.2};
		impactArmor[] = {"soundImpactIron1",0.2,"soundImpactIron2",0.2,"soundImpactIron3",0.2,"soundImpactIron4",0.2,"soundImpactIron5",0.2};
		impactBuilding[] = {"soundImpactHard1",0.2,"soundImpactHard2",0.2,"soundImpactHard3",0.2,"soundImpactHard4",0.1,"soundImpactHard5",0.1,"soundImpactHard6",0.1,"soundImpactHard7",0.1};
		impactFoliage[] = {"soundImpactSoft1",0.2,"soundImpactSoft2",0.2,"soundImpactSoft3",0.2,"soundImpactSoft4",0.1,"soundImpactSoft5",0.1,"soundImpactSoft6",0.1,"soundImpactSoft7",0.1};
		impactWood[] = {"soundImpactWoodExt1",0.25,"soundImpactWoodExt2",0.25,"soundImpactWoodExt3",0.25,"soundImpactWoodExt4",0.25};
		impactGlass[] = {"soundImpactHard1",0.2,"soundImpactHard2",0.2,"soundImpactHard3",0.2,"soundImpactHard4",0.1,"soundImpactHard5",0.1,"soundImpactHard6",0.1,"soundImpactHard7",0.1};
		impactGlassArmored[] = {"soundImpactHard1",0.2,"soundImpactHard2",0.2,"soundImpactHard3",0.2,"soundImpactHard4",0.1,"soundImpactHard5",0.1,"soundImpactHard6",0.1,"soundImpactHard7",0.1};
		impactConcrete[] = {"soundImpactHard1",0.2,"soundImpactHard2",0.2,"soundImpactHard3",0.2,"soundImpactHard4",0.1,"soundImpactHard5",0.1,"soundImpactHard6",0.1,"soundImpactHard7",0.1};
		impactTyre[] = {"soundImpactSoft1",0.2,"soundImpactSoft2",0.2,"soundImpactSoft3",0.2,"soundImpactSoft4",0.1,"soundImpactSoft5",0.1,"soundImpactSoft6",0.1,"soundImpactSoft7",0.1};
		impactRubber[] = {"soundImpactSoft1",0.2,"soundImpactSoft2",0.2,"soundImpactSoft3",0.2,"soundImpactSoft4",0.1,"soundImpactSoft5",0.1,"soundImpactSoft6",0.1,"soundImpactSoft7",0.1};
		impactPlastic[] = {"soundImpactSoft1",0.2,"soundImpactSoft2",0.2,"soundImpactSoft3",0.2,"soundImpactSoft4",0.1,"soundImpactSoft5",0.1,"soundImpactSoft6",0.1,"soundImpactSoft7",0.1};
		impactDefault[] = {"soundImpactHard1",0.2,"soundImpactHard2",0.2,"soundImpactHard3",0.2,"soundImpactHard4",0.1,"soundImpactHard5",0.1,"soundImpactHard6",0.1,"soundImpactHard7",0.1};
		impactMetal[] = {"soundImpactIron1",0.2,"soundImpactIron2",0.2,"soundImpactIron3",0.2,"soundImpactIron4",0.2,"soundImpactIron5",0.2};
		impactMetalplate[] = {"soundImpactIron1",0.2,"soundImpactIron2",0.2,"soundImpactIron3",0.2,"soundImpactIron4",0.2,"soundImpactIron5",0.2};
		impactWater[] = {"soundImpactWater1",0.35,"soundImpactWater2",0.35,"soundImpactWater3",0.3};
		soundGlass1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_01",1.7782794,1,100};
		soundGlass2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_02",1.7782794,1,100};
		soundGlass3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_03",1.7782794,1,100};
		soundGlass4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_04",1.7782794,1,100};
		soundGlass5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_05",1.7782794,1,100};
		soundGlass6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_06",1.7782794,1,100};
		soundGlass7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_07",1.7782794,1,100};
		soundGlass8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_08",1.7782794,1,100};
		hitGlassBreak[] = {"soundGlass1",0.125,"soundGlass2",0.125,"soundGlass3",0.125,"soundGlass4",0.125,"soundGlass5",0.125,"soundGlass6",0.125,"soundGlass7",0.125,"soundGlass8",0.125};
		soundImpactMan1[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grassdry_2",1.4125376,1,45};
		soundImpactMan2[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grassdry_2",1.4125376,1,45};
		soundImpactMan3[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grassdry_6",1.4125376,1,45};
		soundImpactMan4[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grassdry_7",1.4125376,1,45};
		impactMan[] = {"soundImpactMan1",0.25,"soundImpactMan2",0.25,"soundImpactMan3",0.25,"soundImpactMan4",0.25};
		soundFly[] = {"",0.099999994,1,20};
		soundEngine[] = {"",1,1};
		explosionSoundEffect = "DefaultExplosion";
		CraterEffects = "GrenadeCrater";
		CraterWaterEffects = "ImpactEffectsWaterExplosion";
		explosionEffects = "GrenadeExplosion";
		visibleFire = 1;
		audibleFire = 0.25;
		visibleFireTime = 0;
		whistleDist = 28;
		explosionTime = 5;
		timeToLive = 6;
		class HitEffects
		{
			hitWater = "ImpactEffectsWater";
		};
		class CamShakeExplode
		{
			power = 6;
			duration = 1;
			frequency = 20;
			distance = 99.8178;
		};
	};
	class BombCore;
	class LaserBombCore;
	class ammo_Bomb_LaserGuidedBase: LaserBombCore
	{
		model = "\A3\weapons_f\empty";
		proxyShape = "\A3\weapons_f\empty";
		hit = 5000;
		indirectHit = 1100;
		indirectHitRange = 12;
		maneuvrability = 10;
		fuseDistance = 50;
		trackLead = 0.95;
		trackOversteer = 1;
		airFriction = 0.06;
		sideAirFriction = 0.12;
		aiAmmoUsageFlags = "128 + 512";
		dangerRadiusHit = 1000;
		suppressionRadiusHit = 120;
		craterEffects = "BombCrater";
		explosionEffects = "BombExplosion";
		explosionSoundEffect = "DefaultExplosion";
		explosionTime = 2;
		multiSoundHit[] = {"soundHit1",0.2,"soundHit2",0.2,"soundHit3",0.2,"soundHit4",0.2,"soundHit5",0.2};
		soundHit1[] = {"\A3\Sounds_F\weapons\Explosion\expl_big_1",2.5118864,1,2400};
		soundHit2[] = {"\A3\Sounds_F\weapons\Explosion\expl_big_2",2.5118864,1,2400};
		soundHit3[] = {"\A3\Sounds_F\weapons\Explosion\expl_big_3",2.5118864,1,2400};
		soundHit4[] = {"\A3\Sounds_F\weapons\Explosion\expl_shell_1",2.5118864,1,2400};
		soundHit5[] = {"\A3\Sounds_F\weapons\Explosion\expl_shell_2",2.5118864,1,2400};
		whistleDist = 24;
		missileLockCone = 120;
		missileKeepLockedCone = 120;
		missileLockMaxDistance = 5000;
		missileLockMinDistance = 100;
		missileLockMaxSpeed = 30;
		autoSeekTarget = 1;
		lockSeekRadius = 500;
		weaponLockSystem = 4;
		cmImmunity = 0.3;
		flightProfiles[] = {"LoalAltitude"};
		class LoalAltitude
		{
			lockSeekAltitude = 500;
		};
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class NVSensorComponent: SensorTemplateNV
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 5000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 30;
						angleRangeHorizontal = 120;
						angleRangeVertical = 120;
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
						class AirTarget
						{
							minRange = 5000;
							maxRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 5000;
							maxRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						maxTrackableSpeed = 30;
						angleRangeHorizontal = 120;
						angleRangeVertical = 120;
					};
				};
			};
		};
	};
	class RocketCore;
	class RocketBase: RocketCore
	{
		model = "\A3\Weapons_F\Ammo\Rocket_01_fly_F.p3d";
		hit = 500;
		indirectHit = 150;
		indirectHitRange = 2;
		dangerRadiusHit = -1;
		suppressionRadiusHit = 30;
		soundHit[] = {"A3\Sounds_F\weapons\Rockets\explosion_missile_02",2.5118864,1,2500};
		explosionSoundEffect = "DefaultExplosion";
		soundFly[] = {"",1,1,400};
		soundEngine[] = {"",1,1,20};
		supersonicCrackNear[] = {"",1,1,50};
		supersonicCrackFar[] = {"",1,1,150};
		maxSpeed = 1;
		initTime = 0;
		thrustTime = 0.2;
		thrust = 2000;
		CraterEffects = "HERocketCrater";
		explosionEffects = "HERocketExplosion";
		muzzleEffect = "BIS_fnc_effectFiredRocket";
		effectsMissile = "missile1";
		class HitEffects
		{
			hitWater = "ImpactEffectsWaterRocket";
		};
		airFriction = 0.1;
		sideAirFriction = 0.001;
	};
	class ShotgunCore;
	class ShotgunBase: ShotgunCore
	{
		waterEffectOffset = -0.8;
		dangerRadiusBulletClose = 4;
		dangerRadiusHit = 8;
		suppressionRadiusBulletClose = 2;
		suppressionRadiusHit = 4;
		model = "\A3\Weapons_f\ammo\shell";
		class HitEffects
		{
			Hit_Foliage_green = "ImpactLeavesGreen";
			Hit_Foliage_Dead = "ImpactLeavesDead";
			Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
			Hit_Foliage_Palm = "ImpactLeavesPalm";
			Hit_Foliage_Pine = "ImpactLeavesPine";
			hitFoliage = "ImpactLeaves";
			hitGlass = "ImpactGlass";
			hitGlassArmored = "ImpactGlassThin";
			hitWood = "ImpactWood";
			hitHay = "ImpactHay";
			hitMetal = "ImpactMetal";
			hitMetalPlate = "ImpactMetal";
			hitBuilding = "ImpactPlaster";
			hitPlastic = "ImpactPlastic";
			hitRubber = "ImpactRubber";
			hitConcrete = "ImpactConcrete";
			hitMan = "ImpactEffectsBlood";
			hitGroundSoft = "ImpactEffectsSmall";
			hitGroundRed = "ImpactEffectsRed";
			hitGroundHard = "ImpactEffectsHardGround";
			hitWater = "ImpactEffectsWater";
			hitVirtual = "ImpactMetal";
		};
	};
	class FuelExplosion: Default
	{
		hit = 100;
		indirectHit = 100;
		indirectHitRange = 2.5;
		model = "";
		simulation = "";
		cost = 1;
		SoundSetExplosion[] = {"ExplosiveCharge_Exp_SoundSet","ExplosiveCharge_Tail_SoundSet","Explosion_Debris_SoundSet"};
		explosionSoundEffect = "DefaultExplosion";
		soundFly[] = {"",1,1};
		soundEngine[] = {"",1,4};
		explosionEffects = "VehicleExplosionEffects";
	};
	class FuelExplosionBig: FuelExplosion
	{
		explosionEffects = "VehicleExplosionEffectsBig";
	};
	class HelicopterExploSmall: ShellBase
	{
		hit = 2500;
		indirectHit = 500;
		indirectHitRange = 5;
		typicalSpeed = 100;
		explosive = 1;
		cost = 300;
		model = "\A3\Weapons_f\empty";
		airFriction = 0;
		timeToLive = 1;
		explosionTime = 0.001;
		soundFly[] = {"",1,1};
		soundEngine[] = {"",1,4};
		explosionEffects = "HelicopterExplosionEffects";
		SoundSetExplosion[] = {"SmallIED_Exp_SoundSet","SmallIED_Tail_SoundSet","Explosion_Debris_SoundSet"};
	};
	class HelicopterExploBig: HelicopterExploSmall
	{
		hit = 10000;
		indirectHit = 200;
		indirectHitRange = 7.5;
		explosionEffects = "HelicopterExplosionEffects2";
		explosionSoundEffect = "DefaultExplosion";
		SoundSetExplosion[] = {"BigIED_Exp_SoundSet","BigIED_Tail_SoundSet","Explosion_Debris_SoundSet"};
	};
	class SmallSecondary: HelicopterExploSmall
	{
		hit = 5;
		indirectHit = 2;
		indirectHitRange = 5;
		explosionEffects = "SencondaryExplosion";
		craterEffects = "SecondaryCrater";
		SoundSetExplosion[] = {"ExplosiveCharge_Exp_SoundSet","ExplosiveCharge_Tail_SoundSet","Explosion_Debris_SoundSet"};
		explosionSoundEffect = "DefaultExplosion";
	};
	class Laserbeam: Default
	{
		hit = 500;
		indirectHit = 150;
		indirectHitRange = 2.5;
		model = "\A3\weapons_f\empty";
		simulation = "laserDesignate";
		simulationStep = 0.1;
		cost = 5000;
		timeToLive = 0;
		soundHit[] = {"",19.952623,1,1500};
		soundFly[] = {"",9.999998e-05,4};
		maxSpeed = 350;
		airLock = 1;
		manualControl = 1;
		maxControlRange = 0;
		initTime = 0;
		maneuvrability = 0;
	};
	class B_556x45_Ball: BulletBase
	{
		airLock = 1;
		hit = 9;
		indirectHit = 0;
		indirectHitRange = 0;
		cost = 1;
		typicalSpeed = 920;
		airFriction = -0.0012;
		waterFriction = -0.3;
		caliber = 0.869565;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		tracerScale = 1;
		tracerStartTime = 0.05;
		tracerEndTime = 1;
		audibleFire = 35;
		dangerRadiusBulletClose = 8;
		dangerRadiusHit = 12;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 8;
		aiAmmoUsageFlags = 64;
		class CamShakeExplode
		{
			power = 2.23607;
			duration = 0.4;
			frequency = 20;
			distance = 6.7082;
		};
		class CamShakeHit
		{
			power = 5;
			duration = 0.2;
			frequency = 20;
			distance = 1;
		};
	};
	class B_556x45_Ball_Tracer_Red: B_556x45_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		nvgOnly = 0;
	};
	class B_556x45_Ball_Tracer_Green: B_556x45_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		nvgOnly = 0;
	};
	class B_556x45_Ball_Tracer_Yellow: B_556x45_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		nvgOnly = 0;
	};
	class B_556x45_dual: B_556x45_Ball
	{
		cartridge = "FxCartridge_65";
		audibleFire = 20;
		dangerRadiusBulletClose = 4;
		dangerRadiusHit = 8;
		suppressionRadiusBulletClose = 2;
		suppressionRadiusHit = 4;
		typicalSpeed = 270;
		airFriction = -0.02;
		waterFriction = -0.01;
		effectFly = "AmmoUnderwater";
		nvgOnly = 1;
		aiAmmoUsageFlags = "64 + 32";
	};
	class B_56x15_dual: BulletBase
	{
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		cost = 2;
		caliber = 2;
		deflecting = 25;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale = 0.5;
		tracerStartTime = 0.05;
		tracerEndTime = 1;
		nvgOnly = 1;
		cartridge = "FxCartridge_9mm";
		audibleFire = 20;
		waterFriction = -0.014;
		airFriction = -0.0018;
		aiAmmoUsageFlags = 64;
	};
	class B_65x39_Caseless: BulletBase
	{
		hit = 10;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "";
		aiAmmoUsageFlags = 64;
		dangerRadiusBulletClose = 8;
		dangerRadiusHit = 12;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 8;
		cost = 1.2;
		airLock = 1;
		typicalSpeed = 820;
		caliber = 1;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale = 1.0;
		tracerStartTime = 0.05;
		tracerEndTime = 1;
		airFriction = -0.0009;
		class CamShakeExplode
		{
			power = 2.44949;
			duration = 0.4;
			frequency = 20;
			distance = 7.34847;
		};
		class CamShakeHit
		{
			power = 6;
			duration = 0.4;
			frequency = 20;
			distance = 1;
		};
	};
	class B_65x39_Caseless_green: B_65x39_Caseless
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class B_65x39_Caseless_yellow: B_65x39_Caseless
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class B_65x39_Case: B_65x39_Caseless
	{
		cartridge = "FxCartridge_65";
	};
	class B_65x39_Case_green: B_65x39_Case
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class B_65x39_Case_yellow: B_65x39_Case
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class B_65x39_Minigun_Caseless: SubmunitionBullet
	{
		hit = 10;
		indirectHit = 0;
		indirectHitRange = 0;
		caliber = 3.2;
		deflecting = 25;
		explosive = 0;
		triggerTime = 0.1;
		submunitionConeAngle = 0;
		submunitionCount = 1;
		submunitionAmmo = "B_65x39_Minigun_Caseless_Red_splash";
		cartridge = "";
		visibleFire = 5;
		audibleFire = 60;
		cost = 1.2;
		airLock = 1;
		typicalSpeed = 820;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale = 1.0;
		tracerStartTime = 0.05;
		tracerEndTime = 1;
		airFriction = -0.0009;
		class CamShakeExplode
		{
			power = 2.44949;
			duration = 0.4;
			frequency = 20;
			distance = 7.34847;
		};
		class CamShakeHit
		{
			power = 6;
			duration = 0.4;
			frequency = 20;
			distance = 1;
		};
	};
	class B_65x39_Minigun_Caseless_Red_splash: B_65x39_Caseless
	{
		hit = 10;
		indirectHit = 1;
		indirectHitRange = 2;
		caliber = 3.2;
		deflecting = 25;
		fuseDistance = 12;
		soundSetSonicCrack[] = {"BulletSonicCrack_Gatling_SoundSet"};
	};
	class B_65x39_Minigun_Caseless_Yellow_splash: B_65x39_Minigun_Caseless_Red_splash
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class B_65x39_Minigun_Caseless_Green_splash: B_65x39_Minigun_Caseless_Red_splash
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class B_762x51_Ball: BulletBase
	{
		hit = 11.6;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_762";
		visibleFire = 3;
		audibleFire = 45;
		dangerRadiusBulletClose = 8;
		dangerRadiusHit = 12;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 8;
		cost = 1.2;
		airLock = 1;
		typicalSpeed = 800;
		caliber = 1.6;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale = 0.6;
		tracerStartTime = 0.0075;
		tracerEndTime = 5;
		airFriction = -0.001;
		class CamShakeExplode
		{
			power = 2.82843;
			duration = 0.6;
			frequency = 20;
			distance = 8.48528;
		};
		class CamShakeHit
		{
			power = 5;
			duration = 0.2;
			frequency = 20;
			distance = 1;
		};
	};
	class B_762x51_Tracer_Red: B_762x51_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class B_762x51_Tracer_Green: B_762x51_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class B_762x51_Tracer_Yellow: B_762x51_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class B_762x54_Ball: B_762x51_Ball
	{
		caliber = 1.8;
		airFriction = -0.0012;
	};
	class B_762x54_Tracer_Red: B_762x54_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class B_762x54_Tracer_Green: B_762x54_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class B_762x54_Tracer_Yellow: B_762x54_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class B_762x51_Minigun_Tracer_Red: SubmunitionBullet
	{
		hit = 11.6;
		indirectHit = 0;
		indirectHitRange = 0;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		caliber = 3.6;
		deflecting = 25;
		explosive = 0;
		triggerTime = 0.1;
		submunitionConeAngle = 0;
		submunitionCount = 1;
		submunitionAmmo = "B_762x51_Minigun_Tracer_Red_splash";
		cartridge = "FxCartridge_762";
		visibleFire = 5;
		audibleFire = 70;
		cost = 1.2;
		airLock = 1;
		typicalSpeed = 800;
		tracerScale = 0.6;
		tracerStartTime = 0.0075;
		tracerEndTime = 5;
		airFriction = -0.001;
		class CamShakeExplode
		{
			power = 2.82843;
			duration = 0.6;
			frequency = 20;
			distance = 8.48528;
		};
		class CamShakeHit
		{
			power = 5;
			duration = 0.2;
			frequency = 20;
			distance = 1;
		};
	};
	class B_762x51_Minigun_Tracer_Red_splash: B_762x51_Ball
	{
		hit = 11.6;
		indirectHit = 1.2;
		indirectHitRange = 2;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		caliber = 3.6;
		deflecting = 25;
		fuseDistance = 12;
		soundSetSonicCrack[] = {"BulletSonicCrack_Gatling_SoundSet"};
	};
	class B_12Gauge_Slug: BulletBase
	{
		hit = 42;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_slug";
		cost = 5;
		typicalSpeed = 600;
		airFriction = -0.008;
		caliber = 3;
		deflecting = 30;
	};
	class B_12Gauge_Pellets: ShotgunBase
	{
		hit = 2;
		indirectHit = 2;
		indirectHitRange = 0.4;
		cartridge = "FxCartridge_slug";
		cost = 5;
		typicalSpeed = 400;
		airFriction = -0.008;
		caliber = 1;
		deflecting = 30;
		class CamShakeFire
		{
			power = 3;
			duration = 0.5;
			frequency = 20;
			distance = 10;
		};
		class CamShakePlayerFire
		{
			power = 1;
			duration = 0.1;
			frequency = 20;
		};
		class CamShakeHit
		{
			power = 10;
			duration = 1;
			frequency = 20;
		};
	};
	class B_9x21_Ball: BulletBase
	{
		hit = 5;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_9mm";
		cost = 100;
		typicalSpeed = 380;
		airFriction = -0.0016;
		caliber = 1.2;
		deflecting = 25;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		airLock = 1;
		tracerScale = 0.5;
		tracerStartTime = 0.05;
		tracerEndTime = 1;
		nvgOnly = 1;
		audibleFire = 30;
		aiAmmoUsageFlags = 64;
		dangerRadiusBulletClose = 4;
		dangerRadiusHit = 8;
		suppressionRadiusBulletClose = 2;
		suppressionRadiusHit = 4;
	};
	class B_9x21_Ball_Tracer_Green: B_9x21_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerScale = 0.5;
		tracerStartTime = 0.05;
		tracerEndTime = 1;
		nvgOnly = 0;
	};
	class B_9x21_Ball_Tracer_Red: B_9x21_Ball_Tracer_Green
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_Red";
	};
	class B_9x21_Ball_Tracer_Yellow: B_9x21_Ball_Tracer_Green
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_Yellow";
	};
	class B_408_Ball: BulletBase
	{
		hit = 24;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_127";
		visibleFire = 5;
		audibleFire = 120;
		visibleFireTime = 3;
		cost = 7;
		airLock = 1;
		caliber = 2.4;
		typicalSpeed = 910;
		timeToLive = 10;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerScale = 1.2;
		tracerStartTime = 0.075;
		tracerEndTime = 1;
		airFriction = -0.00048;
		class CamShakeExplode
		{
			power = 3.16228;
			duration = 0.6;
			frequency = 20;
			distance = 9.48683;
		};
		class CamShakeHit
		{
			power = 10;
			duration = 0.4;
			frequency = 20;
			distance = 1;
		};
	};
	class B_127x33_Ball: BulletBase
	{
		hit = 7.5;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_127";
		audibleFire = 50;
		dangerRadiusBulletClose = 4;
		dangerRadiusHit = 8;
		suppressionRadiusBulletClose = 2;
		suppressionRadiusHit = 4;
		visibleFireTime = 3;
		cost = 50;
		airLock = 1;
		caliber = 1;
		deflecting = 25;
		typicalSpeed = 420;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerScale = 1.2;
		tracerStartTime = 0.075;
		tracerEndTime = 1;
		airFriction = -0.002;
	};
	class B_127x99_Ball: BulletBase
	{
		hit = 30;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_127";
		visibleFire = 8;
		audibleFire = 120;
		dangerRadiusBulletClose = 12;
		dangerRadiusHit = 16;
		suppressionRadiusBulletClose = 8;
		suppressionRadiusHit = 12;
		cost = 5;
		airLock = 1;
		caliber = 2.6;
		typicalSpeed = 880;
		timeToLive = 10;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale = 1.2;
		tracerStartTime = 0.075;
		tracerEndTime = 1;
		airFriction = -0.00086;
		class CamShakeExplode
		{
			power = 3.60555;
			duration = 0.8;
			frequency = 20;
			distance = 10.8167;
		};
		class CamShakeHit
		{
			power = 13;
			duration = 0.4;
			frequency = 20;
			distance = 1;
		};
	};
	class B_127x99_Ball_Tracer_Red: B_127x99_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class B_127x99_Ball_Tracer_Green: B_127x99_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class B_127x99_Ball_Tracer_Yellow: B_127x99_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class B_127x99_SLAP: B_127x99_Ball
	{
		hit = 50;
		indirectHit = 0;
		indirectHitRange = 0;
		caliber = 3.4;
		typicalSpeed = 1215;
		airFriction = -0.00036;
		cost = 15;
		class CamShakeExplode
		{
			power = 4.47214;
			duration = 0.8;
			frequency = 20;
			distance = 13.4164;
		};
		class CamShakeHit
		{
			power = 20;
			duration = 0.4;
			frequency = 20;
			distance = 1;
		};
	};
	class B_127x99_SLAP_Tracer_Red: B_127x99_SLAP
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class B_127x99_SLAP_Tracer_Green: B_127x99_SLAP
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class B_127x99_SLAP_Tracer_Yellow: B_127x99_SLAP
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class B_127x108_Ball: BulletBase
	{
		hit = 35;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_127";
		visibleFire = 5;
		audibleFire = 120;
		dangerRadiusBulletClose = 12;
		dangerRadiusHit = 16;
		suppressionRadiusBulletClose = 8;
		suppressionRadiusHit = 12;
		visibleFireTime = 3;
		cost = 5;
		airLock = 1;
		caliber = 2.8;
		typicalSpeed = 820;
		timeToLive = 10;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerScale = 1.5;
		tracerStartTime = 0.075;
		tracerEndTime = 1;
		airFriction = -0.00086;
		class CamShakeExplode
		{
			power = 3.60555;
			duration = 0.8;
			frequency = 20;
			distance = 10.8167;
		};
		class CamShakeHit
		{
			power = 13;
			duration = 0.4;
			frequency = 20;
			distance = 1;
		};
	};
	class B_127x108_APDS: B_127x108_Ball
	{
		hit = 60;
		indirectHit = 0;
		indirectHitRange = 0;
		caliber = 3.6;
		typicalSpeed = 1060;
		airFriction = -0.00036;
		cost = 15;
		class CamShakeExplode
		{
			power = 4.47214;
			duration = 0.8;
			frequency = 20;
			distance = 13.4164;
		};
		class CamShakeHit
		{
			power = 20;
			duration = 0.4;
			frequency = 20;
			distance = 1;
		};
	};
	class B_19mm_HE: BulletBase
	{
		soundFly[] = {"",1.0,1,50};
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01",1.7782794,1,1600};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02",1.7782794,1,1600};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03",1.7782794,1,1600};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04",1.7782794,1,1600};
		multiSoundHit[] = {"soundHit1",0.25,"soundHit2",0.25,"soundHit3",0.25,"soundHit4",0.25};
		explosionSoundEffect = "DefaultExplosion";
		hit = 20;
		indirectHit = 6;
		indirectHitRange = 2;
		warheadName = "HE";
		explosive = 0.8;
		explosionEffects = "ExploAmmoExplosion";
		craterEffects = "ExploAmmoCrater";
		visibleFire = 16;
		audibleFire = 150;
		visibleFireTime = 3;
		dangerRadiusBulletClose = 16;
		dangerRadiusHit = 40;
		suppressionRadiusBulletClose = 10;
		suppressionRadiusHit = 14;
		cost = 20;
		deflecting = 5;
		airFriction = -0.0006;
		fuseDistance = 3;
		typicalSpeed = 400;
		caliber = 2;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale = 1;
		tracerStartTime = 0.05;
		tracerEndTime = 1;
		class CamShakeExplode
		{
			power = 3.8;
			duration = 0.8;
			frequency = 20;
			distance = 50.8712;
		};
		class CamShakeHit
		{
			power = 19;
			duration = 0.4;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 2.0878;
			duration = 0.8;
			frequency = 20;
			distance = 34.8712;
		};
		class CamShakePlayerFire
		{
			power = 0.01;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class B_30mm_HE: B_19mm_HE
	{
		weaponType = "cannon";
		hit = 30;
		indirectHit = 8;
		indirectHitRange = 3;
		explosive = 0.8;
		visibleFire = 32;
		audibleFire = 200;
		visibleFireTime = 3;
		dangerRadiusBulletClose = 20;
		dangerRadiusHit = 60;
		suppressionRadiusBulletClose = 12;
		suppressionRadiusHit = 24;
		cost = 20;
		airFriction = -0.00036;
		fuseDistance = 3;
		typicalSpeed = 960;
		caliber = 1.4;
		airlock = 1;
		aiAmmoUsageFlags = "64 + 128";
		tracerScale = 2.5;
		tracerStartTime = 0.1;
		tracerEndTime = 4.7;
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01",1.7782794,1,1600};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02",1.7782794,1,1600};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03",1.7782794,1,1600};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04",1.7782794,1,1600};
		multiSoundHit[] = {"soundHit1",0.25,"soundHit2",0.25,"soundHit3",0.25,"soundHit4",0.25};
		class CamShakeExplode
		{
			power = 6;
			duration = 1;
			frequency = 20;
			distance = 67.8178;
		};
		class CamShakeHit
		{
			power = 30;
			duration = 0.4;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 2.23607;
			duration = 1;
			frequency = 20;
			distance = 40;
		};
		class CamShakePlayerFire
		{
			power = 0.01;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class B_30mm_HE_Tracer_Red: B_30mm_HE
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class B_30mm_HE_Tracer_Green: B_30mm_HE
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class B_30mm_HE_Tracer_Yellow: B_30mm_HE
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class B_30mm_MP: B_30mm_HE
	{
		hit = 90;
		indirectHit = 4;
		indirectHitRange = 2;
		warheadName = "HEAT";
		caliber = 4.4;
		deflecting = 10;
		explosive = 0.6;
		typicalSpeed = 1070;
		airFriction = -0.00036;
		dangerRadiusBulletClose = 16;
		dangerRadiusHit = 40;
		suppressionRadiusBulletClose = 10;
		suppressionRadiusHit = 14;
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01",1.7782794,1,1600};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02",1.7782794,1,1600};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03",1.7782794,1,1600};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04",1.7782794,1,1600};
		multiSoundHit[] = {"soundHit1",0.25,"soundHit2",0.25,"soundHit3",0.25,"soundHit4",0.25};
		class CamShakeExplode
		{
			power = 6;
			duration = 1;
			frequency = 20;
			distance = 67.8178;
		};
		class CamShakeHit
		{
			power = 30;
			duration = 0.4;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 2.34035;
			duration = 1;
			frequency = 20;
			distance = 43.8178;
		};
		class CamShakePlayerFire
		{
			power = 0.01;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class B_30mm_MP_Tracer_Red: B_30mm_MP
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class B_30mm_MP_Tracer_Green: B_30mm_MP
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class B_30mm_MP_Tracer_Yellow: B_30mm_MP
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class B_40mm_GPR: B_30mm_HE
	{
		hit = 70;
		indirectHit = 8;
		indirectHitRange = 4;
		warheadName = "AP";
		caliber = 4.6;
		deflecting = 10;
		cost = 40;
		airFriction = -0.0006;
		timeToLive = 15;
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01",1.7782794,1,1600};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02",1.7782794,1,1600};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03",1.7782794,1,1600};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04",1.7782794,1,1600};
		multiSoundHit[] = {"soundHit1",0.25,"soundHit2",0.25,"soundHit3",0.25,"soundHit4",0.25};
		class CamShakeExplode
		{
			power = 8;
			duration = 1.2;
			frequency = 20;
			distance = 82.5964;
		};
		class CamShakeHit
		{
			power = 40;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 2.51487;
			duration = 1.2;
			frequency = 20;
			distance = 50.5964;
		};
		class CamShakePlayerFire
		{
			power = 0.01;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class B_40mm_GPR_Tracer_Red: B_40mm_GPR
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class B_40mm_GPR_Tracer_Green: B_40mm_GPR
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class B_40mm_GPR_Tracer_Yellow: B_40mm_GPR
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class B_20mm: BulletBase
	{
		hit = 60;
		indirectHit = 6;
		indirectHitRange = 1.6;
		weaponType = "cannon";
		warheadName = "HE";
		explosive = 0.4;
		caliber = 3.4;
		cost = 30;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale = 1;
		tracerStartTime = 0.05;
		tracerEndTime = 1;
		nvgOnly = 0;
		typicalSpeed = 1030;
		visibleFire = 32;
		audibleFire = 200;
		visibleFireTime = 4;
		dangerRadiusBulletClose = 16;
		dangerRadiusHit = 40;
		suppressionRadiusBulletClose = 10;
		suppressionRadiusHit = 14;
		aiAmmoUsageFlags = "64 + 128";
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_01",1.7782794,1,1300};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_02",1.7782794,1,1300};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_03",1.7782794,1,1300};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_04",1.7782794,1,1300};
		multiSoundHit[] = {"soundHit1",0.25,"soundHit2",0.25,"soundHit3",0.25,"soundHit4",0.25};
		explosionSoundEffect = "DefaultExplosion";
		airLock = 1;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		airFriction = -0.00078;
		muzzleEffect = "";
		class CamShakeExplode
		{
			power = 4;
			duration = 0.8;
			frequency = 20;
			distance = 43.7771;
		};
		class CamShakeHit
		{
			power = 20;
			duration = 0.4;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 2.11474;
			duration = 0.8;
			frequency = 20;
			distance = 35.7771;
		};
		class CamShakePlayerFire
		{
			power = 0.01;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class B_20mm_Tracer_Red: B_20mm
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class B_25mm: BulletBase
	{
		hit = 70;
		indirectHit = 6;
		indirectHitRange = 0.4;
		warheadName = "AP";
		explosive = 0.4;
		caliber = 3.8;
		cost = 20;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale = 1;
		tracerStartTime = 0.05;
		tracerEndTime = 1;
		nvgOnly = 1;
		typicalSpeed = 1030;
		visibleFire = 32;
		audibleFire = 200;
		visibleFireTime = 4;
		dangerRadiusBulletClose = 16;
		dangerRadiusHit = 40;
		suppressionRadiusBulletClose = 10;
		suppressionRadiusHit = 14;
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01",1.7782794,1,1600};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02",1.7782794,1,1600};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03",1.7782794,1,1600};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04",1.7782794,1,1600};
		multiSoundHit[] = {"soundHit1",0.25,"soundHit2",0.25,"soundHit3",0.25,"soundHit4",0.25};
		explosionSoundEffect = "DefaultExplosion";
		airLock = 1;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		airFriction = -0.00076;
		muzzleEffect = "";
		class CamShakeExplode
		{
			power = 5;
			duration = 1;
			frequency = 20;
			distance = 56;
		};
		class CamShakeHit
		{
			power = 25;
			duration = 0.4;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 2.23607;
			duration = 1;
			frequency = 20;
			distance = 40;
		};
		class CamShakePlayerFire
		{
			power = 0.01;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class B_30mm_AP: BulletBase
	{
		weaponType = "cannon";
		hit = 80;
		indirectHit = 8;
		indirectHitRange = 0.2;
		warheadName = "AP";
		caliber = 4.2;
		visibleFire = 32;
		audibleFire = 200;
		visibleFireTime = 3;
		dangerRadiusBulletClose = 16;
		dangerRadiusHit = 40;
		suppressionRadiusBulletClose = 10;
		suppressionRadiusHit = 14;
		cost = 35;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale = 2.5;
		tracerStartTime = 0.1;
		tracerEndTime = 2;
		airFriction = -0.00042;
		muzzleEffect = "";
		deflecting = 15;
		typicalSpeed = 1120;
		airlock = 1;
		aiAmmoUsageFlags = "128 + 512";
		allowAgainstInfantry = 1;
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01",1.7782794,1,1600};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02",1.7782794,1,1600};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03",1.7782794,1,1600};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04",1.7782794,1,1600};
		multiSoundHit[] = {"soundHit1",0.25,"soundHit2",0.25,"soundHit3",0.25,"soundHit4",0.25};
		class CamShakeExplode
		{
			power = 5;
			duration = 1;
			frequency = 20;
			distance = 56;
		};
		class CamShakeHit
		{
			power = 50;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 2.23607;
			duration = 1;
			frequency = 20;
			distance = 40;
		};
		class CamShakePlayerFire
		{
			power = 0.01;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class B_30mm_AP_Tracer_Red: B_30mm_AP
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class B_30mm_AP_Tracer_Green: B_30mm_AP
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class B_30mm_AP_Tracer_Yellow: B_30mm_AP
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class B_30mm_APFSDS: B_30mm_AP
	{
		hit = 120;
		indirectHit = 8;
		indirectHitRange = 0.2;
		caliber = 6;
		deflecting = 15;
		airFriction = -0.0001;
		typicalSpeed = 1320;
		cost = 75;
		tracerEndTime = 1.5;
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01",1.7782794,1,1600};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02",1.7782794,1,1600};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03",1.7782794,1,1600};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04",1.7782794,1,1600};
		multiSoundHit[] = {"soundHit1",0.25,"soundHit2",0.25,"soundHit3",0.25,"soundHit4",0.25};
		class HitEffects
		{
			hitMetal = "ImpactMetalSabotSmall";
			hitMetalPlate = "ImpactMetalSabotSmall";
			hitBuilding = "ImpactConcreteSabotSmall";
			hitConcrete = "ImpactConcreteSabotSmall";
			hitGroundSoft = "ImpactEffectsGroundSabot";
			hitGroundHard = "ImpactEffectsGroundSabot";
			Hit_Foliage_green = "ImpactLeavesGreen";
			Hit_Foliage_Dead = "ImpactLeavesDead";
			Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
			Hit_Foliage_Palm = "ImpactLeavesPalm";
			Hit_Foliage_Pine = "ImpactLeavesPine";
			hitFoliage = "ImpactLeaves";
			hitGlass = "ImpactGlass";
			hitGlassArmored = "ImpactGlassThin";
			hitWood = "ImpactWood";
			hitHay = "ImpactHay";
			hitPlastic = "ImpactPlastic";
			hitRubber = "ImpactRubber";
			hitTyre = "ImpactTyre";
			hitMan = "ImpactEffectsBlood";
			hitWater = "ImpactEffectsWater";
			default_mat = "ImpactEffectsGroundSabot";
		};
		class CamShakeExplode
		{
			power = 6.7082;
			duration = 1.4;
			frequency = 20;
			distance = 20.1246;
		};
		class CamShakeHit
		{
			power = 45;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 2.34035;
			duration = 1;
			frequency = 20;
			distance = 43.8178;
		};
		class CamShakePlayerFire
		{
			power = 0.01;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class B_30mm_APFSDS_Tracer_Red: B_30mm_APFSDS
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class B_30mm_APFSDS_Tracer_Green: B_30mm_APFSDS
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class B_30mm_APFSDS_Tracer_Yellow: B_30mm_APFSDS
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class B_40mm_APFSDS: B_30mm_APFSDS
	{
		hit = 150;
		indirectHit = 8;
		indirectHitRange = 0.2;
		warheadName = "AP";
		typicalSpeed = 1140;
		caliber = 8;
		airFriction = -0.00012;
		cost = 100;
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01",1.7782794,1,1600};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02",1.7782794,1,1600};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03",1.7782794,1,1600};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04",1.7782794,1,1600};
		multiSoundHit[] = {"soundHit1",0.25,"soundHit2",0.25,"soundHit3",0.25,"soundHit4",0.25};
		class CamShakeExplode
		{
			power = 7.74597;
			duration = 1.6;
			frequency = 20;
			distance = 23.2379;
		};
		class CamShakeHit
		{
			power = 60;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 2.51487;
			duration = 1.2;
			frequency = 20;
			distance = 50.5964;
		};
		class CamShakePlayerFire
		{
			power = 0.01;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class B_40mm_APFSDS_Tracer_Red: B_40mm_APFSDS
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class B_40mm_APFSDS_Tracer_Green: B_40mm_APFSDS
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class B_40mm_APFSDS_Tracer_Yellow: B_40mm_APFSDS
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class B_35mm_AA: BulletBase
	{
		hit = 60;
		indirectHit = 25;
		indirectHitRange = 2.4;
		warheadName = "HE";
		visibleFire = 38;
		audibleFire = 200;
		visibleFireTime = 5;
		dangerRadiusBulletClose = 20;
		dangerRadiusHit = 60;
		suppressionRadiusBulletClose = 12;
		suppressionRadiusHit = 24;
		deflecting = 0;
		explosive = 0.6;
		airLock = 1;
		aiAmmoUsageFlags = "64 + 128 + 256";
		cost = 42;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		explosionSoundEffect = "DefaultExplosion";
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale = 1.85;
		tracerStartTime = 0.1;
		tracerEndTime = 2;
		airFriction = -0.0005;
		muzzleEffect = "";
		caliber = 2.8;
		typicalSpeed = 960;
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01",1.7782794,1,1600};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02",1.7782794,1,1600};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03",1.7782794,1,1600};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04",1.7782794,1,1600};
		multiSoundHit[] = {"soundHit1",0.25,"soundHit2",0.25,"soundHit3",0.25,"soundHit4",0.25};
		class CamShakeExplode
		{
			power = 3.6;
			duration = 0.8;
			frequency = 20;
			distance = 41.9411;
		};
		class CamShakeHit
		{
			power = 18;
			duration = 0.4;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 1.49535;
			duration = 0.4;
			frequency = 20;
			distance = 17.8885;
		};
		class CamShakePlayerFire
		{
			power = 0.001;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class B_35mm_AA_Tracer_Red: B_35mm_AA
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class B_35mm_AA_Tracer_Green: B_35mm_AA
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class B_35mm_AA_Tracer_Yellow: B_35mm_AA
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class B_coil_5g_spike: BulletBase
	{
		hit = 30;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_9mm";
		cost = 50;
		typicalSpeed = 3000;
		visibleFire = 1;
		audibleFire = 0.01;
		visibleFireTime = 2;
		dangerRadiusBulletClose = 16;
		dangerRadiusHit = 40;
		suppressionRadiusBulletClose = 10;
		suppressionRadiusHit = 14;
		airFriction = -0.0001;
		caliber = 10;
		deflecting = 0;
	};
	class B_coil_20g_spike: B_coil_5g_spike
	{
		hit = 120;
		typicalSpeed = 6000;
	};
	class SmokeLauncherAmmo: BulletBase
	{
		muzzleEffect = "BIS_fnc_effectFiredSmokeLauncher";
		effectsSmoke = "EmptyEffect";
		weaponLockSystem = "1 + 2 + 4";
		hit = 1;
		indirectHit = 0;
		indirectHitRange = 0;
		timeToLive = 10.0;
		thrustTime = 10.0;
		airFriction = -0.1;
		simulation = "shotCM";
		model = "\A3\weapons_f\empty";
		maxControlRange = 50;
		initTime = 2;
		aiAmmoUsageFlags = "4 + 8";
	};
	class SmokeLauncherAmmo_boat: SmokeLauncherAmmo
	{
		muzzleEffect = "BIS_fnc_effectFiredSmokeLauncher_boat";
	};
	class FlareLauncherAmmo: SmokeLauncherAmmo
	{
		muzzleEffect = "BIS_fnc_effectFiredFlares";
	};
	class CMflareAmmo: BulletBase
	{
		hit = 1;
		indirectHit = 0;
		indirectHitRange = 0;
		timeToLive = 15.0;
		thrustTime = 4.0;
		airFriction = -0.01;
		simulation = "shotCM";
		effectsSmoke = "CounterMeasureFlare";
		weaponLockSystem = 2;
		model = "\A3\weapons_f\empty";
		maxControlRange = -1;
		initTime = 0;
		aiAmmoUsageFlags = 8;
	};
	class CMflare_Chaff_Ammo: CMflareAmmo
	{
		effectsSmoke = "CounterMeasureChaff";
		weaponLockSystem = "2 + 8";
	};
	class GrenadeHand: Grenade
	{
		hit = 8;
		indirectHit = 8;
		indirectHitRange = 6;
		dangerRadiusHit = 60;
		suppressionRadiusHit = 24;
		typicalspeed = 18;
		model = "\A3\Weapons_f\ammo\Handgrenade_throw";
		visibleFire = 0.5;
		audibleFire = 0.05;
		visibleFireTime = 1;
		fuseDistance = 0;
	};
	class mini_Grenade: GrenadeHand
	{
		hit = 6;
		indirectHit = 6;
		indirectHitRange = 4;
		dangerRadiusHit = 50;
		suppressionRadiusHit = 18;
		typicalspeed = 26;
		model = "\A3\Weapons_f\ammo\mini_frag_throw";
		whistleDist = 12;
		explosionEffectsRadius = 1.5;
		deflecting = 30;
		class CamShakeExplode
		{
			power = 3.2;
			duration = 0.8;
			frequency = 20;
			distance = 56;
		};
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_01",3.1622777,1,1300};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_02",3.1622777,1,1300};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_03",3.1622777,1,1300};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_04",3.1622777,1,1300};
		multiSoundHit[] = {"soundHit1",0.25,"soundHit2",0.25,"soundHit3",0.25,"soundHit4",0.25};
	};
	class GrenadeHand_stone: GrenadeHand
	{
		hit = 0.5;
		indirectHit = 0.2;
		indirectHitRange = 1;
		dangerRadiusHit = 6;
		suppressionRadiusHit = -1;
		model = "\A3\Weapons_f\ammo\stone_2";
		CraterEffects = "NoCrater";
		explosionEffects = "NoExplosion";
		explosive = 0;
		soundHit[] = {"",1,1};
		cost = 1;
		whistleDist = 0;
		class CamShakeExplode
		{
			power = 0;
			duration = 0.2;
			frequency = 20;
			distance = 0;
		};
		class CamShakeHit
		{
			power = 5;
			duration = 0.2;
			frequency = 20;
			distance = 1;
		};
	};
	class SmokeShell: GrenadeHand
	{
		model = "\A3\Weapons_f\ammo\smokegrenade_white_throw";
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0.2;
		dangerRadiusHit = -1;
		suppressionRadiusHit = -1;
		typicalspeed = 22;
		cost = 100;
		simulation = "shotSmokeX";
		explosive = 0;
		deflecting = 30;
		explosionTime = 2;
		timeToLive = 60;
		fuseDistance = 0;
		soundHit[] = {"",0,1};
		SmokeShellSoundHit1[] = {"A3\Sounds_F\weapons\smokeshell\smoke_1",1.2589254,1,100};
		SmokeShellSoundHit2[] = {"A3\Sounds_F\weapons\smokeshell\smoke_2",1.2589254,1,100};
		SmokeShellSoundHit3[] = {"A3\Sounds_F\weapons\smokeshell\smoke_3",1.2589254,1,100};
		SmokeShellSoundLoop1[] = {"A3\Sounds_F\weapons\smokeshell\smoke_loop1",0.12589253,1,70};
		SmokeShellSoundLoop2[] = {"A3\Sounds_F\weapons\smokeshell\smoke_loop2",0.12589253,1,70};
		grenadeFireSound[] = {"SmokeShellSoundHit1",0.25,"SmokeShellSoundHit2",0.25,"SmokeShellSoundHit3",0.5};
		grenadeBurningSound[] = {"SmokeShellSoundLoop1",0.5,"SmokeShellSoundLoop2",0.5};
		aiAmmoUsageFlags = "4 + 2";
		smokeColor[] = {1,1,1,1};
		effectsSmoke = "SmokeShellWhiteEffect";
		whistleDist = 0;
	};
	class SmokeShellRed: SmokeShell
	{
		model = "\A3\Weapons_f\ammo\smokegrenade_red_throw";
		smokeColor[] = {0.8438,0.1383,0.1353,1};
		effectsSmoke = "SmokeShellRedEffect";
	};
	class SmokeShellGreen: SmokeShell
	{
		model = "\A3\Weapons_f\ammo\smokegrenade_green_throw";
		smokeColor[] = {0.2125,0.6258,0.48909998,1};
		effectsSmoke = "SmokeShellGreenEffect";
	};
	class SmokeShellYellow: SmokeShell
	{
		model = "\A3\Weapons_f\ammo\smokegrenade_yellow_throw";
		smokeColor[] = {0.9883,0.8606,0.0719,1};
		effectsSmoke = "SmokeShellYellowEffect";
	};
	class SmokeShellPurple: SmokeShell
	{
		model = "\A3\Weapons_f\ammo\smokegrenade_purple_throw";
		smokeColor[] = {0.4341,0.1388,0.41439998,1};
		effectsSmoke = "SmokeShellPurpleEffect";
	};
	class SmokeShellBlue: SmokeShell
	{
		model = "\A3\Weapons_f\ammo\smokegrenade_blue_throw";
		smokeColor[] = {0.1183,0.1867,1,1};
		effectsSmoke = "SmokeShellBlueEffect";
	};
	class SmokeShellOrange: SmokeShell
	{
		model = "\A3\Weapons_f\ammo\smokegrenade_orange_throw";
		smokeColor[] = {0.6697,0.2275,0.10053,1};
		effectsSmoke = "SmokeShellOrangeEffect";
	};
	class G_40mm_Smoke: SmokeShell
	{
		model = "\A3\weapons_f\Ammo\UGL_slug";
	};
	class G_40mm_SmokeRed: G_40mm_Smoke
	{
		smokeColor[] = {0.8438,0.1383,0.1353,1};
		effectsSmoke = "SmokeShellRedEffect";
	};
	class G_40mm_SmokeGreen: G_40mm_Smoke
	{
		smokeColor[] = {0.2125,0.6258,0.48909998,1};
		effectsSmoke = "SmokeShellGreenEffect";
	};
	class G_40mm_SmokeYellow: G_40mm_Smoke
	{
		smokeColor[] = {0.9883,0.8606,0.0719,1};
		effectsSmoke = "SmokeShellYellowEffect";
	};
	class G_40mm_SmokePurple: G_40mm_Smoke
	{
		smokeColor[] = {0.4341,0.1388,0.41439998,1};
		effectsSmoke = "SmokeShellPurpleEffect";
	};
	class G_40mm_SmokeBlue: G_40mm_Smoke
	{
		smokeColor[] = {0.1183,0.1867,1,1};
		effectsSmoke = "SmokeShellBlueEffect";
	};
	class G_40mm_SmokeOrange: G_40mm_Smoke
	{
		smokeColor[] = {0.6697,0.2275,0.10053,1};
		effectsSmoke = "SmokeShellOrangeEffect";
	};
	class SmokeShellArty: SmokeShell
	{
		simulation = "shotSmoke";
		effectsSmoke = "SmokeShellWhiteSmall";
		model = "\A3\weapons_f\ammo\shell_smoke";
	};
	class IncinerateShell: SmokeShellArty
	{
		model = "\A3\Weapons_f\ammo\smokegrenade_orange";
		effectsSmoke = "IncinerateShell";
	};
	class Chemlight_base: SmokeShell
	{
		timeToLive = 900;
		grenadeFireSound[] = {};
		grenadeBurningSound[] = {};
		aiAmmoUsageFlags = "2 + 1";
	};
	class Chemlight_green: Chemlight_base
	{
		model = "\A3\Weapons_f\chemlight\chemlight_green_lit";
		effectsSmoke = "ChemlightLight_green";
		typicalspeed = 14;
	};
	class Chemlight_red: Chemlight_base
	{
		model = "\A3\Weapons_f\chemlight\chemlight_red_lit";
		effectsSmoke = "ChemlightLight_red";
	};
	class Chemlight_yellow: Chemlight_base
	{
		model = "\A3\Weapons_f\chemlight\chemlight_yellow_lit";
		effectsSmoke = "ChemlightLight_yellow";
	};
	class Chemlight_blue: Chemlight_base
	{
		model = "\A3\Weapons_f\chemlight\chemlight_blue_lit";
		effectsSmoke = "ChemlightLight_blue";
	};
	class SmokeShellVehicle: SmokeShell
	{
		soundFly[] = {"A3\sounds_f\dummysound",0.1,1};
		effectsSmoke = "EmptyEffect";
	};
	class SmokeShellVehicle_boat: SmokeShellVehicle
	{
		model = "\A3\weapons_f\Ammo\UGL_slug";
	};
	class FlareCountermeasure: SmokeShellVehicle
	{
		airFriction = -0.05;
		model = "\A3\Weapons_f\empty";
		deflecting = 30;
	};
	class FlareBase: FlareCore
	{
		timeToLive = 25;
		muzzleEffect = "BIS_fnc_effectFiredRifle";
		intensity = 10000;
	};
	class F_40mm_White: FlareBase
	{
		model = "\A3\Weapons_F\Ammo\UGL_Flare";
		lightColor[] = {0.5,0.5,0.5,0.5};
		useFlare = 1;
		deflecting = 30;
		smokeColor[] = {1,1,1,0.5};
		brightness = 12;
		size = 1;
		triggerTime = 3;
		triggerSpeedCoef = 1;
		audibleFire = 20;
	};
	class F_40mm_Green: F_40mm_White
	{
		model = "\A3\Weapons_F\Ammo\UGL_Flare";
		lightColor[] = {0.25,0.5,0.25,0};
	};
	class F_40mm_Red: F_40mm_White
	{
		model = "\A3\Weapons_F\Ammo\UGL_Flare";
		lightColor[] = {0.5,0.25,0.25,0};
	};
	class F_40mm_Yellow: F_40mm_White
	{
		model = "\A3\Weapons_F\Ammo\UGL_Flare";
		lightColor[] = {0.5,0.5,0.25,0};
	};
	class F_40mm_Cir: F_40mm_White
	{
		model = "\A3\Weapons_F\Ammo\UGL_Flare";
		lightColor[] = {0.5,0.5,0.25,0};
	};
	class F_20mm_White: FlareBase
	{
		model = "\A3\weapons_f\ammo\flare_white";
		lightColor[] = {0.5,0.5,0.5,0.5};
		useFlare = 1;
		flareSize = 3.0;
		deflecting = 30;
		smokeColor[] = {1,1,1,0.5};
		brightness = 8;
		size = 1;
		triggerTime = 3;
		triggerSpeedCoef = 1;
	};
	class F_20mm_Green: F_20mm_White
	{
		model = "\A3\weapons_f\ammo\flare_green";
		lightColor[] = {0.25,0.5,0.25,0};
	};
	class F_20mm_Red: F_20mm_White
	{
		model = "\A3\weapons_f\ammo\flare_red";
		lightColor[] = {0.5,0.25,0.25,0};
	};
	class F_20mm_Yellow: F_20mm_White
	{
		model = "\A3\weapons_f\ammo\flare_yellow";
		lightColor[] = {0.5,0.5,0.25,0};
	};
	class SmokeShell_Infinite: SmokeShell
	{
		timeToLive = 1e+10;
	};
	class SmokeShellBlue_Infinite: SmokeShellBlue
	{
		timeToLive = 1e+10;
	};
	class SmokeShellGreen_Infinite: SmokeShellGreen
	{
		timeToLive = 1e+10;
	};
	class SmokeShellOrange_Infinite: SmokeShellOrange
	{
		timeToLive = 1e+10;
	};
	class SmokeShellPurple_Infinite: SmokeShellPurple
	{
		timeToLive = 1e+10;
	};
	class SmokeShellRed_Infinite: SmokeShellRed
	{
		timeToLive = 1e+10;
	};
	class SmokeShellYellow_Infinite: SmokeShellYellow
	{
		timeToLive = 1e+10;
	};
	class Chemlight_blue_Infinite: Chemlight_blue
	{
		timeToLive = 1e+10;
	};
	class Chemlight_green_Infinite: Chemlight_green
	{
		timeToLive = 1e+10;
	};
	class Chemlight_red_Infinite: Chemlight_red
	{
		timeToLive = 1e+10;
	};
	class Chemlight_yellow_Infinite: Chemlight_yellow
	{
		timeToLive = 1e+10;
	};
	class G_40mm_Smoke_Infinite: G_40mm_Smoke
	{
		timeToLive = 1e+10;
	};
	class G_40mm_SmokeBlue_Infinite: G_40mm_SmokeBlue
	{
		timeToLive = 1e+10;
	};
	class G_40mm_SmokeGreen_Infinite: G_40mm_SmokeGreen
	{
		timeToLive = 1e+10;
	};
	class G_40mm_SmokeOrange_Infinite: G_40mm_SmokeOrange
	{
		timeToLive = 1e+10;
	};
	class G_40mm_SmokePurple_Infinite: G_40mm_SmokePurple
	{
		timeToLive = 1e+10;
	};
	class G_40mm_SmokeRed_Infinite: G_40mm_SmokeRed
	{
		timeToLive = 1e+10;
	};
	class G_40mm_SmokeYellow_Infinite: G_40mm_SmokeYellow
	{
		timeToLive = 1e+10;
	};
	class F_40mm_White_Infinite: F_40mm_White
	{
		timeToLive = 1e+10;
	};
	class F_40mm_Green_Infinite: F_40mm_Green
	{
		timeToLive = 1e+10;
	};
	class F_40mm_Red_Infinite: F_40mm_Red
	{
		timeToLive = 1e+10;
	};
	class F_40mm_Yellow_Infinite: F_40mm_Yellow
	{
		timeToLive = 1e+10;
	};
	class F_40mm_Cir_Infinite: F_40mm_Cir
	{
		timeToLive = 1e+10;
	};
	class F_20mm_White_Infinite: F_20mm_White
	{
		timeToLive = 1e+10;
	};
	class F_20mm_Green_Infinite: F_20mm_Green
	{
		timeToLive = 1e+10;
	};
	class F_20mm_Red_Infinite: F_20mm_Red
	{
		timeToLive = 1e+10;
	};
	class F_20mm_Yellow_Infinite: F_20mm_Yellow
	{
		timeToLive = 1e+10;
	};
	class ammo_Penetrator_30mm: ammo_Penetrator_Base
	{
		caliber = 2;
		hit = 75;
	};
	class ammo_Penetrator_grenade_40mm: ammo_Penetrator_Base
	{
		caliber = 3.33333;
		hit = 84;
	};
	class ammo_Penetrator_105mm: ammo_Penetrator_Base
	{
		caliber = 28.6667;
		hit = 450;
	};
	class ammo_Penetrator_120mm: ammo_Penetrator_Base
	{
		caliber = 40;
		hit = 510;
	};
	class ammo_Penetrator_125mm: ammo_Penetrator_Base
	{
		caliber = 43.3333;
		warheadName = "TandemHEAT";
		hit = 532.5;
	};
	class ammo_Penetrator_120mm_missile: ammo_Penetrator_Base
	{
		caliber = 53.3333;
		warheadName = "TandemHEAT";
		hit = 630;
	};
	class ammo_Penetrator_125mm_missile: ammo_Penetrator_Base
	{
		caliber = 56.6667;
		warheadName = "TandemHEAT";
		hit = 600;
	};
	class ammo_Penetrator_NLAW: ammo_Penetrator_Base
	{
		caliber = 26.6667;
		warheadName = "AP";
		typicalSpeed = 1000;
		hit = 525;
	};
	class ammo_Penetrator_Titan_AT: ammo_Penetrator_Base
	{
		caliber = 60;
		hit = 585;
	};
	class ammo_Penetrator_Titan_AT_long: ammo_Penetrator_Base
	{
		caliber = 60;
		warheadName = "TandemHEAT";
		hit = 780;
	};
	class ammo_Penetrator_PG_AT: ammo_Penetrator_Base
	{
		caliber = 20;
		hit = 450;
	};
	class ammo_Penetrator_Scalpel: ammo_Penetrator_Base
	{
		caliber = 56.6667;
		warheadName = "TandemHEAT";
		hit = 900;
	};
	class ammo_Penetrator_Jian: ammo_Penetrator_Base
	{
		caliber = 66.6667;
		warheadName = "TandemHEAT";
		hit = 999;
	};
	class ammo_Penetrator_AGM_01: ammo_Penetrator_Base
	{
		caliber = 66.6667;
		warheadName = "HE";
		indirectHit = 90;
		indirectHitRange = 10;
		explosive = 0.65;
		hit = 1650;
	};
	class ammo_Penetrator_AGM_02: ammo_Penetrator_Base
	{
		caliber = 66.6667;
		warheadName = "HE";
		indirectHit = 85;
		indirectHitRange = 8;
		explosive = 0.65;
		hit = 1500;
	};
	class ammo_Penetrator_Vorona: ammo_Penetrator_Base
	{
		caliber = 60;
		warheadName = "TandemHEAT";
		hit = 720;
	};
	class ammo_Penetrator_Firefist: ammo_Penetrator_Base
	{
		caliber = 60;
		warheadName = "TandemHEAT";
		hit = 750;
	};
	class ammo_Penetrator_RPG32V: ammo_Penetrator_Base
	{
		caliber = 43.3333;
		warheadName = "TandemHEAT";
		hit = 480;
	};
	class ammo_Penetrator_PG7: ammo_Penetrator_Base
	{
		caliber = 20;
		hit = 390;
	};
	class ammo_Penetrator_MRAAWS: ammo_Penetrator_Base
	{
		caliber = 33.3333;
		warheadName = "TandemHEAT";
		hit = 495;
	};
	class ammo_Penetrator_MRAAWS_HEAT55: ammo_Penetrator_Base
	{
		caliber = 26.6667;
		hit = 450;
	};
	class ammo_Penetrator_SPG9: ammo_Penetrator_Base
	{
		caliber = 26.6667;
		hit = 450;
	};
	class ammo_Penetrator_Rocket_03_AP: ammo_Penetrator_Base
	{
		caliber = 26.6667;
		hit = 420;
	};
	class ammo_Penetrator_Rocket_04_AP: ammo_Penetrator_Base
	{
		caliber = 20;
		hit = 435;
	};
	class Sh_120mm_HE: ShellBase
	{
		hit = 250;
		indirectHit = 60;
		indirectHitRange = 6;
		warheadName = "HE";
		dangerRadiusHit = 160;
		suppressionRadiusHit = 32;
		typicalSpeed = 1400;
		explosive = 0.8;
		cost = 300;
		airFriction = -0.000275;
		caliber = 10;
		deflecting = 4;
		timeToLive = 15;
		whistleOnFire = 1;
		whistleDist = 14;
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_white";
		tracerScale = 1;
		tracerStartTime = 0.1;
		tracerEndTime = 3.0;
		muzzleEffect = "";
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_01",1.7782794,1,1800};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_02",1.7782794,1,1800};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_03",1.7782794,1,1800};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_04",1.7782794,1,1800};
		multiSoundHit[] = {"soundHit1",0.25,"soundHit2",0.25,"soundHit3",0.25,"soundHit4",0.25};
		class CamShakeExplode
		{
			power = 24;
			duration = 2.2;
			frequency = 20;
			distance = 143.636;
		};
		class CamShakeHit
		{
			power = 120;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 3.30975;
			duration = 2.2;
			frequency = 20;
			distance = 87.6356;
		};
		class CamShakePlayerFire
		{
			power = 0.02;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class Sh_120mm_HE_Tracer_Red: Sh_120mm_HE
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
	};
	class Sh_120mm_HE_Tracer_Green: Sh_120mm_HE
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_green";
	};
	class Sh_120mm_HE_Tracer_Yellow: Sh_120mm_HE
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_yellow";
	};
	class Sh_120mm_APFSDS: ShellBase
	{
		hit = 500;
		indirectHit = 15;
		indirectHitRange = 0.5;
		warheadName = "AP";
		dangerRadiusHit = 100;
		suppressionRadiusHit = 18;
		explosive = 0;
		cost = 500;
		airFriction = -3.96e-05;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		typicalSpeed = 1550;
		caliber = 35.2688;
		deflecting = 15;
		timeToLive = 15;
		whistleOnFire = 1;
		whistleDist = 14;
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_white";
		tracerScale = 3;
		tracerStartTime = 0.1;
		tracerEndTime = 3.0;
		muzzleEffect = "";
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_01",1.7782794,1,1800};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_02",1.7782794,1,1800};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_03",1.7782794,1,1800};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_04",1.7782794,1,1800};
		multiSoundHit[] = {"soundHit1",0.25,"soundHit2",0.25,"soundHit3",0.25,"soundHit4",0.25};
		class HitEffects
		{
			hitMetal = "ImpactMetalSabotBig";
			hitMetalPlate = "ImpactMetalSabotBig";
			hitBuilding = "ImpactConcreteSabot";
			hitConcrete = "ImpactConcreteSabot";
			hitGroundSoft = "ImpactEffectsGroundSabot";
			hitGroundHard = "ImpactEffectsGroundSabot";
			hitWater = "ImpactEffectsWater";
			default_mat = "ImpactEffectsGroundSabot";
		};
		aiAmmoUsageFlags = "128 + 512";
		class CamShakeExplode
		{
			power = 13.4164;
			duration = 2.6;
			frequency = 20;
			distance = 40.2492;
		};
		class CamShakeHit
		{
			power = 180;
			duration = 0.8;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 3.30975;
			duration = 2.2;
			frequency = 20;
			distance = 87.6356;
		};
		class CamShakePlayerFire
		{
			power = 0.02;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class Sh_120mm_APFSDS_Tracer_Red: Sh_120mm_APFSDS
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
	};
	class Sh_120mm_APFSDS_Tracer_Green: Sh_120mm_APFSDS
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_green";
	};
	class Sh_120mm_APFSDS_Tracer_Yellow: Sh_120mm_APFSDS
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_yellow";
	};
	class Sh_120mm_HEAT_MP: ShellBase
	{
		hit = 95;
		warheadName = "HE";
		submunitionAmmo = "ammo_Penetrator_120mm";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0.0;
		submunitionInitialOffset[] = {0,0,-0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		indirectHit = 30;
		indirectHitRange = 3.5;
		dangerRadiusHit = 160;
		suppressionRadiusHit = 32;
		typicalSpeed = 1400;
		explosive = 1;
		cost = 500;
		airFriction = -0.000275;
		deflecting = 8;
		timeToLive = 15;
		whistleOnFire = 1;
		whistleDist = 14;
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_white";
		tracerScale = 1;
		tracerStartTime = 0.1;
		tracerEndTime = 3.0;
		muzzleEffect = "";
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_01",1.7782794,1,1800};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_02",1.7782794,1,1800};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_03",1.7782794,1,1800};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_04",1.7782794,1,1800};
		multiSoundHit[] = {"soundHit1",0.25,"soundHit2",0.25,"soundHit3",0.25,"soundHit4",0.25};
		class CamShakeExplode
		{
			power = 24;
			duration = 2.2;
			frequency = 20;
			distance = 143.636;
		};
		class CamShakeHit
		{
			power = 120;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 3.30975;
			duration = 2.2;
			frequency = 20;
			distance = 87.6356;
		};
		class CamShakePlayerFire
		{
			power = 0.02;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		explosionSoundEffect = "DefaultExplosion";
	};
	class Sh_120mm_HEAT_MP_T_Red: Sh_120mm_HEAT_MP
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
	};
	class Sh_120mm_HEAT_MP_T_Green: Sh_120mm_HEAT_MP
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_green";
	};
	class Sh_120mm_HEAT_MP_T_Yellow: Sh_120mm_HEAT_MP
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_yellow";
	};
	class Sh_155mm_AMOS: ShellBase
	{
		hit = 340;
		indirectHit = 125;
		indirectHitRange = 30;
		warheadName = "HE";
		dangerRadiusHit = 750;
		suppressionRadiusHit = 75;
		typicalSpeed = 800;
		caliber = 10;
		deflecting = 0;
		explosive = 0.8;
		cost = 300;
		model = "\A3\weapons_f\ammo\shell";
		CraterEffects = "ArtyShellCrater";
		ExplosionEffects = "MortarExplosion";
		whistleDist = 60;
		artilleryLock = 1;
		thrust = 0;
		timeToLive = 180;
		airFriction = 0;
		sideairFriction = 0.0;
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_01",2.5118864,1,1900};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_02",2.5118864,1,1900};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_03",2.5118864,1,1900};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_04",2.5118864,1,1900};
		multiSoundHit[] = {"soundHit1",0.25,"soundHit2",0.25,"soundHit3",0.25,"soundHit4",0.25};
		class CamShakeExplode
		{
			power = 31;
			duration = 2.4;
			frequency = 20;
			distance = 339.599;
		};
		class CamShakeHit
		{
			power = 155;
			duration = 0.8;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 3.52844;
			duration = 2.4;
			frequency = 20;
			distance = 99.5992;
		};
		class CamShakePlayerFire
		{
			power = 0.01;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class Sh_82mm_AMOS: Sh_155mm_AMOS
	{
		hit = 165;
		indirectHit = 52;
		indirectHitRange = 18;
		cost = 200;
		muzzleEffect = "";
		class CamShakeExplode
		{
			power = 16.4;
			duration = 1.8;
			frequency = 20;
			distance = 216.443;
		};
		class CamShakeHit
		{
			power = 82;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 3.00922;
			duration = 1.8;
			frequency = 20;
			distance = 72.4431;
		};
		class CamShakePlayerFire
		{
			power = 0.01;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class Flare_82mm_AMOS_White: FlareCore
	{
		timeToLive = 45;
		model = "\A3\weapons_f\ammo\shell";
		effectFlare = "CounterMeasureFlare";
		aimAboveTarget[] = {30,60,120,180,240,300,360};
		aimAboveDefault = 4;
		triggerTime = -1;
		triggerSpeedCoef = 1;
		lightColor[] = {0.95,0.95,1.0,0.5};
		smokeColor[] = {1.0,1.0,1.0,0.5};
		intensity = 10000;
	};
	class Smoke_82mm_AMOS_White: ShotDeployBase
	{
		model = "\A3\weapons_f\ammo\shell";
		submunitionAmmo = "SmokeShellArty";
	};
	class Sh_82mm_AMOS_guided: SubmunitionBase
	{
		submunitionAmmo = "M_Mo_82mm_AT";
		submunitionCount = 1;
		submunitionConeAngle = 0;
		laserLock = 0;
		autoSeekTarget = 1;
		cost = 200;
		muzzleEffect = "";
		triggerDistance = 300;
		airFriction = 0;
		hit = 165;
		class CamShakeFire
		{
			power = 3.00922;
			duration = 1.8;
			frequency = 20;
			distance = 72.4431;
		};
		class CamShakePlayerFire
		{
			power = 0.01;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class Sh_82mm_AMOS_LG: Sh_82mm_AMOS_guided
	{
		submunitionAmmo = "M_Mo_82mm_AT_LG";
		cost = 500;
		laserLock = 1;
		irLock = 0;
		muzzleEffect = "";
	};
	class Fire_82mm_AMOS: ShotDeployBase
	{
		model = "\A3\weapons_f\ammo\shell";
		submunitionAmmo = "IncinerateShell";
		hit = 165;
	};
	class Sh_155mm_AMOS_guided: Sh_82mm_AMOS_guided
	{
		submunitionAmmo = "M_Mo_155mm_AT";
		muzzleEffect = "";
		triggerDistance = 500;
		hit = 300;
	};
	class Sh_155mm_AMOS_LG: Sh_82mm_AMOS_LG
	{
		submunitionAmmo = "M_Mo_155mm_AT_LG";
		muzzleEffect = "";
		triggerDistance = 500;
		hit = 300;
	};
	class Smoke_120mm_AMOS_White: SubmunitionBase
	{
		submunitionAmmo = "SmokeShellArty";
		submunitionConeType[] = {"poissondisc",5};
		submunitionConeAngle = 5;
		triggerDistance = 100;
		cost = 200;
		airFriction = 0;
		muzzleEffect = "";
		hit = 300;
		class CamShakeFire
		{
			power = 3.30975;
			duration = 2.2;
			frequency = 20;
			distance = 87.6356;
		};
		class CamShakePlayerFire
		{
			power = 0.02;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class Mo_ClassicMineRange: ShotDeployBase
	{
		submunitionAmmo = "APERSMine_Range_Ammo";
		airFriction = 0;
		EffectFly = "ArtilleryTrails";
		hit = 300;
	};
	class Mo_ATMineRange: ShotDeployBase
	{
		submunitionAmmo = "ATMine_Range_Ammo";
		airFriction = 0;
		EffectFly = "ArtilleryTrails";
		hit = 300;
	};
	class Mo_UnderwaterMineRange: Mo_ClassicMineRange
	{
		submunitionAmmo = "UnderwaterMine_Range_Ammo";
		airFriction = 0;
		hit = 300;
	};
	class Mine_155mm_AMOS_range: SubmunitionBase
	{
		submunitionAmmo = "Mo_ClassicMineRange";
		submunitionConeType[] = {"randomcenter",24};
		submunitionConeAngle = 30;
		triggerDistance = 100;
		cost = 500;
		airFriction = 0;
		muzzleEffect = "";
		hit = 300;
		class CamShakeFire
		{
			power = 3.52844;
			duration = 2.4;
			frequency = 20;
			distance = 99.5992;
		};
		class CamShakePlayerFire
		{
			power = 0.02;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class AT_Mine_155mm_AMOS_range: SubmunitionBase
	{
		submunitionAmmo = "Mo_ATMineRange";
		submunitionConeType[] = {"randomcenter",12};
		submunitionConeAngle = 30;
		triggerDistance = 100;
		cost = 500;
		airFriction = 0;
		muzzleEffect = "";
		hit = 300;
		class CamShakeFire
		{
			power = 3.52844;
			duration = 2.4;
			frequency = 20;
			distance = 99.5992;
		};
		class CamShakePlayerFire
		{
			power = 0.02;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class UWMine_155mm_AMOS_range: Mine_155mm_AMOS_range
	{
		submunitionAmmo = "Mo_UnderwaterMineRange";
		airFriction = 0;
	};
	class Cluster_155mm_AMOS: SubmunitionBase
	{
		triggerDistance = 200;
		triggerSpeedCoef[] = {0.5,1};
		submunitionConeAngle = 15;
		submunitionConeType[] = {"randomcenter",35};
		submunitionAmmo[] = {"Mo_cluster_AP",0.93,"Mo_cluster_AP_UXO_deploy",0.07};
		cost = 200;
		airFriction = 0;
		muzzleEffect = "";
		hit = 300;
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_01",1.7782794,1,2000};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_02",1.7782794,1,2000};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_03",1.7782794,1,2000};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_04",1.7782794,1,2000};
		soundHit5[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_05",1.7782794,1,2000};
		soundHit6[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_06",1.7782794,1,2000};
		soundHit7[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_07",1.7782794,1,2000};
		soundHit8[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_08",1.7782794,1,2000};
		multiSoundHit[] = {"soundHit1",0.125,"soundHit2",0.125,"soundHit3",0.125,"soundHit4",0.125,"soundHit5",0.125,"soundHit6",0.125,"soundHit7",0.125,"soundHit8",0.125};
		class CamShakeFire
		{
			power = 3.52844;
			duration = 2.4;
			frequency = 20;
			distance = 99.5992;
		};
		class CamShakePlayerFire
		{
			power = 0.02;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class M_PG_AT: MissileBase
	{
		model = "\A3\Weapons_F\Ammo\Rocket_01_fly_F";
		proxyShape = "\A3\Weapons_F\Ammo\Rocket_01_F";
		submunitionAmmo = "ammo_Penetrator_PG_AT";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0.0;
		submunitionInitialOffset[] = {0,0,-0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		hit = 95;
		indirectHit = 40;
		indirectHitRange = 3.2;
		warheadName = "HE";
		cost = 200;
		maxSpeed = 720;
		irLock = 1;
		laserLock = 1;
		aiAmmoUsageFlags = "128 + 64";
		trackOversteer = 1;
		trackLead = 1;
		maneuvrability = 8;
		timeToLive = 20;
		simulationStep = 0.002;
		airFriction = 0.1;
		sideAirFriction = 0.16;
		initTime = 0.0;
		thrustTime = 1.07;
		thrust = 825;
		fuseDistance = 50;
		effectsMissileInit = "MissileDAR1";
		effectsMissile = "missile2";
		whistleDist = 4;
		muzzleEffect = "";
		airLock = 0;
		missileLockCone = 30;
		missileKeepLockedCone = 60;
		missileLockMaxDistance = 5000;
		missileLockMinDistance = 100;
		missileLockMaxSpeed = 35;
		weaponLockSystem = "2 + 4 + 16";
		cmImmunity = 0.3;
		manualControl = 1;
		maxControlRange = 5000;
		missileManualControlCone = 240;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 4000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 4000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 35;
						angleRangeHorizontal = 45;
						angleRangeVertical = 35;
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
						class AirTarget
						{
							minRange = 4000;
							maxRange = 4000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 4000;
							maxRange = 4000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						maxTrackableSpeed = 35;
						angleRangeHorizontal = 90;
						angleRangeVertical = 70;
					};
				};
			};
		};
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1",0.56234133,1.2,700};
	};
	class M_AT: M_PG_AT
	{
		submunitionAmmo = "";
		submunitionDirectionType = "";
		submunitionInitSpeed = 0;
		submunitionParentSpeedCoef = 0.0;
		submunitionInitialOffset[] = {0,0,0};
		triggerOnImpact = 0;
		hit = 300;
		cost = 100;
		indirectHit = 50;
		indirectHitRange = 8;
		irLock = 0;
		laserLock = 0;
		maneuvrability = 0;
		maxControlRange = 0;
		simulationStep = 0.05;
		sideAirFriction = 0.005;
		muzzleEffect = "";
		simulation = "shotRocket";
		soundHit1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_01",2.5118864,1,1900};
		soundHit2[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_02",2.5118864,1,1900};
		soundHit3[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_03",2.5118864,1,1900};
		multiSoundHit[] = {"soundHit1",0.34,"soundHit2",0.33,"soundHit3",0.33};
		soundFly[] = {"\A3\Sounds_F\weapons\Rockets\rocket_fly_2",0.56234133,1.2,700};
		explosionSoundEffect = "DefaultExplosion";
		weaponLockSystem = 0;
		manualControl = 0;
	};
	class M_NLAW_AT_F: MissileBase
	{
		hit = 50;
		indirectHit = 25;
		indirectHitRange = 2.4;
		proximityExplosionDistance = 5;
		explosive = 0.5;
		maneuvrability = 2;
		simulationStep = 0.002;
		trackOversteer = 0.8;
		trackLead = 1;
		irLock = 1;
		aiAmmoUsageFlags = "128 + 512";
		maxControlRange = 11;
		model = "\A3\weapons_f\launchers\nlaw\nlaw_rocket";
		cost = 400;
		timeToLive = 8;
		airFriction = 0.09;
		sideAirFriction = 0.5;
		maxSpeed = 180;
		initTime = 0.2;
		thrustTime = 0.8;
		thrust = 200;
		fuseDistance = 20;
		effectsMissile = "missile3";
		whistleDist = 16;
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		effectsMissileInit = "";
		allowAgainstInfantry = 0;
		soundHit[] = {"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\NLAW_Hit",1.7782794,1,1500};
		soundFly[] = {"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\Fly_NLAW",0.56234133,1.5,700};
		class CamShakeExplode
		{
			power = 11;
			duration = 1.4;
			frequency = 20;
			distance = 91.3296;
		};
		class CamShakeHit
		{
			power = 110;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 2.51487;
			duration = 1.2;
			frequency = 20;
			distance = 50.5964;
		};
		class CamShakePlayerFire
		{
			power = 2;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
		submunitionAmmo = "ammo_Penetrator_NLAW";
		submunitionDirectionType = "SubmunitionTargetDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0.0;
		submunitionInitialOffset[] = {0,0,-0.5};
		triggerOnImpact = 1;
		triggerDistance = 2.5;
		deleteParentWhenTriggered = 0;
		flightProfiles[] = {"Direct","Overfly"};
		class Direct{};
		class Overfly: Direct
		{
			overflyElevation = 2.5;
		};
		airLock = 1;
		missileLockCone = 5;
		missileKeepLockedCone = 300;
		missileLockMaxDistance = 800;
		missileLockMinDistance = 20;
		missileLockMaxSpeed = 35;
		weaponLockSystem = "1 + 16";
		cmImmunity = 0.2;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 800;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 800;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 35;
						nightRangeCoef = 0.8;
						angleRangeHorizontal = 5;
						angleRangeVertical = 5;
						maxTrackableATL = 20;
					};
				};
			};
		};
	};
	class M_Scalpel_AT: MissileBase
	{
		hit = 150;
		indirectHit = 50;
		indirectHitRange = 4;
		warheadName = "TandemHEAT";
		submunitionAmmo = "ammo_Penetrator_Scalpel";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0.0;
		submunitionInitialOffset[] = {0,0,-0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		soundHit[] = {"A3\Sounds_F\weapons\Rockets\explosion_missile_02",0.8912509,1,1900};
		model = "\A3\Weapons_F\Ammo\Missile_AT_03_fly_F";
		proxyShape = "\A3\Weapons_F\Ammo\Missile_AT_03_F";
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		whistleDist = 8;
		maneuvrability = 15;
		simulationStep = 0.002;
		aiAmmoUsageFlags = "128 + 512";
		irLock = 1;
		nvLock = 1;
		laserLock = 1;
		cost = 300;
		maxSpeed = 450;
		timeToLive = 28;
		airFriction = 0.103;
		sideAirFriction = 0.18;
		trackLead = 1;
		trackOversteer = 1.5;
		initTime = 0;
		thrustTime = 3.5;
		thrust = 168;
		fuseDistance = 500;
		muzzleEffect = "BIS_fnc_effectFiredHeliRocket";
		class Hiteffects
		{
			hitWater = "ImpactEffectsWater";
		};
		cameraViewAvailable = 1;
		airLock = 0;
		missileLockCone = 30;
		missileKeepLockedCone = 60;
		missileLockMaxDistance = 6000;
		missileLockMinDistance = 250;
		missileLockMaxSpeed = 55;
		weaponLockSystem = "2 + 4 + 16";
		cmImmunity = 0.45;
		manualControl = 1;
		maxControlRange = 6000;
		missileManualControlCone = 120;
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1",0.56234133,1.5,700};
		flightProfiles[] = {"TopDown"};
		class TopDown
		{
			ascendHeight = 400.0;
			descendDistance = 800.0;
			minDistance = 800.0;
			ascendAngle = 20.0;
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 6000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 6000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 55;
						angleRangeHorizontal = 45;
						angleRangeVertical = 35;
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
						class AirTarget
						{
							minRange = 6000;
							maxRange = 6000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 6000;
							maxRange = 6000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						maxTrackableSpeed = 55;
						angleRangeHorizontal = 90;
						angleRangeVertical = 70;
					};
				};
			};
		};
	};
	class M_Scalpel_AT_hidden: M_Scalpel_AT
	{
		proxyShape = "\A3\weapons_f\empty";
	};
	class Bo_Air_LGB: M_Scalpel_AT{};
	class Bo_Air_LGB_hidden: M_Scalpel_AT_hidden{};
	class Bo_GBU12_LGB: ammo_Bomb_LaserGuidedBase
	{
		model = "\A3\Weapons_F\Ammo\Bomb_01_fly_F";
		proxyShape = "\A3\Weapons_F\Ammo\Bomb_01_F";
	};
	class Bo_GBU12_LGB_MI10: Bo_GBU12_LGB
	{
		maverickWeaponIndexOffset = 10;
	};
	class Bomb_03_F: ammo_Bomb_LaserGuidedBase
	{
		model = "\A3\Weapons_F_EPC\Ammo\Bomb_03_F.p3d";
		proxyShape = "\A3\Weapons_F_EPC\Ammo\Bomb_03_F.p3d";
		maverickWeaponIndexOffset = 6;
		hit = 6400;
		indirectHit = 1400;
		indirectHitRange = 16;
	};
	class Bomb_04_F: ammo_Bomb_LaserGuidedBase
	{
		model = "\A3\Weapons_F_EPC\Ammo\Bomb_04_fly_F.p3d";
		proxyShape = "\A3\Weapons_F_EPC\Ammo\Bomb_04_F.p3d";
		maverickWeaponIndexOffset = 8;
	};
	class Bo_Mk82: BombCore
	{
		hit = 5000;
		indirectHit = 1100;
		indirectHitRange = 12;
		dangerRadiusHit = 1250;
		suppressionRadiusHit = 100;
		cost = 500;
		irLock = 0;
		laserLock = 0;
		airFriction = 0.08;
		sideAirFriction = 0.12;
		maneuvrability = 4.6;
		trackLead = 0;
		maxSpeed = 100;
		timeToLive = 120;
		initTime = 0;
		thrustTime = 0;
		thrust = 0;
		soundHit1[] = {"A3\Sounds_F\weapons\Explosion\expl_big_1",2.5118864,1,1500};
		soundHit2[] = {"A3\Sounds_F\weapons\Explosion\expl_big_2",2.5118864,1,1500};
		soundHit3[] = {"A3\Sounds_F\weapons\Explosion\expl_big_3",2.5118864,1,1500};
		soundHit4[] = {"A3\Sounds_F\weapons\Explosion\expl_shell_1",2.5118864,1,1500};
		soundHit5[] = {"A3\Sounds_F\weapons\Explosion\expl_shell_2",2.5118864,1,1500};
		multiSoundHit[] = {"soundHit1",0.2,"soundHit2",0.2,"soundHit3",0.2,"soundHit4",0.2,"soundHit5",0.2};
		explosionSoundEffect = "DefaultExplosion";
		model = "\A3\Weapons_F\Ammo\Bomb_02_F";
		proxyShape = "\A3\Weapons_F\Ammo\Bomb_02_F";
		CraterEffects = "BombCrater";
		explosionEffects = "BombExplosion";
		whistleDist = 24;
	};
	class Bo_Mk82_MI08: Bo_Mk82
	{
		maverickWeaponIndexOffset = 8;
	};
	class R_PG32V_F: RocketBase
	{
		model = "\A3\weapons_f\launchers\RPG32\pg32v_rocket.p3d";
		hit = 150;
		indirectHit = 28;
		indirectHitRange = 3;
		warheadName = "TandemHEAT";
		submunitionAmmo = "ammo_Penetrator_RPG32V";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0.0;
		submunitionInitialOffset[] = {0,0,-0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		explosive = 1;
		cost = 100;
		airFriction = 0.075;
		sideAirFriction = 0.075;
		maxSpeed = 140;
		initTime = 0;
		thrustTime = 0.1;
		thrust = 500;
		fuseDistance = 10;
		CraterEffects = "ATMissileCrater";
		explosionEffects = "ATMissileExplosion";
		effectsMissileInit = "";
		effectsMissile = "EmptyEffect";
		simulationStep = 0.02;
		airLock = 0;
		aiAmmoUsageFlags = "128 + 512";
		irLock = 0;
		timeToLive = 10;
		maneuvrability = 0;
		allowAgainstInfantry = 0;
		soundHit1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_01",2.5118864,1,1800};
		soundHit2[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_02",2.5118864,1,1800};
		soundHit3[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_03",2.5118864,1,1800};
		multiSoundHit[] = {"soundHit1",0.34,"soundHit2",0.33,"soundHit3",0.33};
		soundFly[] = {"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\Fly_RPG32",0.31622776,1.5,900};
		class CamShakeExplode
		{
			power = 11;
			duration = 1.4;
			frequency = 20;
			distance = 99.3296;
		};
		class CamShakeHit
		{
			power = 110;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 2.11474;
			duration = 0.8;
			frequency = 20;
			distance = 35.7771;
		};
		class CamShakePlayerFire
		{
			power = 1;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class R_TBG32V_F: R_PG32V_F
	{
		submunitionAmmo = "";
		submunitionDirectionType = "";
		submunitionInitSpeed = 0;
		submunitionParentSpeedCoef = 0.0;
		submunitionInitialOffset[] = {0,0,0};
		triggerOnImpact = 0;
		hit = 200;
		indirectHit = 50;
		indirectHitRange = 6;
		warheadName = "HE";
		explosive = 1;
		model = "\A3\weapons_f\launchers\RPG32\tbg32v_rocket.p3d";
		CraterEffects = "ArtyShellCrater";
		ExplosionEffects = "MortarExplosion";
		aiAmmoUsageFlags = "64 + 128";
		class CamShakeExplode
		{
			power = 22;
			duration = 2;
			frequency = 20;
			distance = 123.905;
		};
	};
	class R_80mm_HE: RocketBase
	{
		model = "\A3\Weapons_F\Ammo\Rocket_02_fly_F";
		hit = 400;
		indirectHit = 60;
		indirectHitRange = 15;
		warheadName = "HE";
		cost = 100;
		maxSpeed = 590;
		initTime = 0.002;
		thrustTime = 0.69;
		thrust = 1060;
		airFriction = 0.09;
		sideAirFriction = 0.005;
		fuseDistance = 50;
		whistleDist = 30;
		timeToLive = 15;
		effectsMissileInit = "PylonBackEffectsRockets";
		muzzleEffect = "";
		simulation = "shotMissile";
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1",0.56234133,1.9,700};
		class CamShakeExplode
		{
			power = 16;
			duration = 1.8;
			frequency = 20;
			distance = 191.554;
		};
		class CamShakeHit
		{
			power = 80;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 2.9907;
			duration = 1.8;
			frequency = 20;
			distance = 71.5542;
		};
		class CamShakePlayerFire
		{
			power = 2;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class R_60mm_HE: R_80mm_HE
	{
		model = "\A3\Weapons_F\Ammo\Rocket_01_fly_F";
		hit = 200;
		indirectHit = 40;
		indirectHitRange = 10;
		cost = 100;
		maxSpeed = 490;
		thrustTime = 1.1;
		thrust = 620;
		airFriction = 0.2;
		timeToLive = 10;
		class CamShakeExplode
		{
			power = 12;
			duration = 1.6;
			frequency = 20;
			distance = 141.968;
		};
		class CamShakeHit
		{
			power = 60;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 2.78316;
			duration = 1.6;
			frequency = 20;
			distance = 61.9677;
		};
		class CamShakePlayerFire
		{
			power = 2;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class R_230mm_HE: SubmunitionBase
	{
		artilleryLock = 1;
		submunitionAmmo = "R_230mm_fly";
		triggerDistance = 500;
		cost = 1000;
		airFriction = 0;
		muzzleEffect = "";
		effectFly = "Missile0";
		model = "\A3\Weapons_F\Ammo\Rocket_230mm_F";
		hit = 300;
		class CamShakeExplode
		{
			power = 46;
			duration = 3;
			frequency = 20;
			distance = 361.326;
		};
		class CamShakeHit
		{
			power = 230;
			duration = 0.8;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 3.89432;
			duration = 3;
			frequency = 20;
			distance = 121.326;
		};
		class CamShakePlayerFire
		{
			power = 5;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1",0.56234133,1.9,500};
	};
	class R_230mm_Cluster: R_230mm_HE
	{
		triggerDistance = 250;
		triggerSpeedCoef[] = {0.5,1};
		submunitionConeAngle = 19;
		submunitionConeType[] = {"randomcenter",50};
		submunitionAmmo[] = {"Mo_cluster_AP",0.93,"Mo_cluster_AP_UXO_deploy",0.07};
	};
	class R_230mm_LG: R_230mm_HE
	{
		submunitionAmmo = "M_Mo_230mm_AT_LG";
		muzzleEffect = "";
		triggerDistance = 500;
	};
	class R_230mm_fly: ShellBase
	{
		artilleryLock = 1;
		model = "\A3\Weapons_F\Ammo\Rocket_230mm_Fly_F";
		hit = 1200;
		indirectHit = 800;
		indirectHitRange = 30;
		warheadName = "HE";
		cost = 1000;
		audibleFire = 64;
		dangerRadiusHit = 1250;
		suppressionRadiusHit = 120;
		deflecting = 0;
		airFriction = 0;
		muzzleEffect = "";
		effectFly = "ArtilleryTrails";
		class CamShakeExplode
		{
			power = 46;
			duration = 3;
			frequency = 20;
			distance = 361.326;
		};
		class CamShakeHit
		{
			power = 230;
			duration = 0.8;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 3.89432;
			duration = 3;
			frequency = 20;
			distance = 121.326;
		};
		class CamShakePlayerFire
		{
			power = 5;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
		soundHit1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_01",2.5118864,1,1900};
		soundHit2[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_02",2.5118864,1,1900};
		soundHit3[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_03",2.5118864,1,1900};
		multiSoundHit[] = {"soundHit1",0.34,"soundHit2",0.33,"soundHit3",0.33};
	};
	class G_40mm_HE: GrenadeBase
	{
		explosionSoundEffect = "DefaultExplosion";
		simulation = "shotShell";
		model = "\A3\weapons_f\ammo\UGL_slug";
		hit = 80;
		indirectHit = 8;
		indirectHitRange = 6;
		warheadName = "HE";
		visibleFire = 1;
		audibleFire = 30;
		visibleFireTime = 3;
		dangerRadiusHit = 60;
		suppressionRadiusHit = 24;
		explosive = 1;
		cost = 10;
		deflecting = 5;
		airFriction = -0.001;
		fuseDistance = 15;
		whistleDist = 16;
		typicalSpeed = 185;
		caliber = 2;
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_01",3.1622777,1,1500};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_02",3.1622777,1,1500};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_03",3.1622777,1,1500};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_04",3.1622777,1,1500};
		multiSoundHit[] = {"soundHit1",0.25,"soundHit2",0.25,"soundHit3",0.25,"soundHit4",0.25};
		class CamShakeExplode
		{
			power = 8;
			duration = 1.2;
			frequency = 20;
			distance = 74.5964;
		};
		class CamShakeHit
		{
			power = 20;
			duration = 0.4;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 0;
			duration = 0.2;
			frequency = 20;
			distance = 0;
		};
		class CamShakePlayerFire
		{
			power = 0;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class G_20mm_HE: G_40mm_HE
	{
		hit = 40;
		indirectHit = 6;
		indirectHitRange = 4;
		whistleDist = 20;
		caliber = 1;
		class CamShakeExplode
		{
			power = 4;
			duration = 0.8;
			frequency = 20;
			distance = 75.7771;
		};
		class CamShakeHit
		{
			power = 20;
			duration = 0.4;
			frequency = 20;
			distance = 1;
		};
	};
	class G_40mm_HEDP: G_40mm_HE
	{
		hit = 100;
		indirectHit = 6;
		indirectHitRange = 4;
		caliber = 3;
		warheadName = "HEAT";
		class CamShakeHit
		{
			power = 30;
			duration = 0.4;
			frequency = 20;
			distance = 1;
		};
	};
	class G_40mm_HEDP_Bullet: G_40mm_HEDP
	{
		simulation = "shotBullet";
	};
	class B_45ACP_Ball: BulletBase
	{
		airLock = 1;
		hit = 5;
		indirectHit = 0;
		indirectHitRange = 0;
		aiAmmoUsageFlags = 64;
		dangerRadiusBulletClose = 4;
		dangerRadiusHit = 8;
		suppressionRadiusBulletClose = 2;
		suppressionRadiusHit = 4;
		cartridge = "FxCartridge_9mm";
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		caliber = 1.4;
		deflecting = 25;
		audibleFire = 45;
		cost = 100;
		typicalSpeed = 280;
		airFriction = -0.0018;
		tracerScale = 0.6;
		tracerStartTime = 0.0075;
		tracerEndTime = 5;
	};
	class B_45ACP_Ball_Green: B_45ACP_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class B_45ACP_Ball_Yellow: B_45ACP_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class M_Titan_AA: MissileBase
	{
		model = "\A3\Weapons_F_beta\Launchers\titan\titan_missile_atl_fly.p3d";
		hit = 80;
		indirectHit = 60;
		indirectHitRange = 6;
		warheadName = "HE";
		proximityExplosionDistance = 10;
		maneuvrability = 15;
		simulationStep = 0.002;
		trackOversteer = 1;
		trackLead = 0.95;
		aiAmmoUsageFlags = 256;
		irLock = 1;
		cost = 1000;
		timeToLive = 15;
		airFriction = 0.145;
		sideAirFriction = 0.1;
		maxSpeed = 850;
		initTime = 0.25;
		thrustTime = 2.25;
		thrust = 380;
		fuseDistance = 50;
		CraterEffects = "AAMissileCrater";
		explosionEffects = "AAMissileExplosion";
		effectsMissileInit = "";
		effectsMissile = "missile3";
		soundHit1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_01",2.5118864,1,1900};
		soundHit2[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_02",2.5118864,1,1900};
		soundHit3[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_03",2.5118864,1,1900};
		multiSoundHit[] = {"soundHit1",0.34,"soundHit2",0.33,"soundHit3",0.33};
		airLock = 2;
		missileLockCone = 4;
		missileKeepLockedCone = 75;
		missileLockMaxDistance = 3500;
		missileLockMinDistance = 100;
		missileLockMaxSpeed = 250;
		weaponLockSystem = "2 + 16";
		cmImmunity = 0.9;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 3500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 2500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 250;
						angleRangeHorizontal = 7;
						angleRangeVertical = 4.5;
						groundNoiseDistanceCoef = 0.2;
						maxGroundNoiseDistance = 50;
					};
				};
			};
		};
		class CamShakeExplode
		{
			power = 22;
			duration = 2;
			frequency = 20;
			distance = 147.905;
		};
		class CamShakeHit
		{
			power = 110;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 2.78316;
			duration = 1.6;
			frequency = 20;
			distance = 61.9677;
		};
		class CamShakePlayerFire
		{
			power = 3;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class M_Titan_AA_static: M_Titan_AA
	{
		effectsMissileInit = "RocketBackEffectsStaticRPG";
	};
	class M_Titan_AA_long: M_Titan_AA
	{
		model = "\A3\Weapons_F_Beta\Launchers\Titan\titan_missile_atl_fly.p3d";
		thrustTime = 3.0;
		missileLockCone = 30;
		missileKeepLockedCone = 40;
		missileLockMaxDistance = 4500;
		missileLockMaxSpeed = 500;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 4500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 3500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 500;
						angleRangeHorizontal = 40;
						angleRangeVertical = 25;
						groundNoiseDistanceCoef = 0.2;
						maxGroundNoiseDistance = 50;
					};
				};
			};
		};
	};
	class M_Zephyr: M_Titan_AA
	{
		proxyShape = "\A3\Weapons_F\Ammo\Missile_AA_02_F.p3d";
		model = "\A3\Weapons_F\Ammo\Missile_AA_02_fly_F.p3d";
		airFriction = 0.078;
		sideAirFriction = 0.18;
		maneuvrability = 22;
		hit = 170;
		indirectHit = 115;
		indirectHitRange = 12;
		proximityExplosionDistance = 25;
		timeToLive = 30;
		initTime = 0.6;
		effectsMissileInit = "PylonBackEffects_InitDelay";
		muzzleEffect = "";
		thrustTime = 7;
		thrust = 200;
		maxSpeed = 850;
		fuseDistance = 500;
		cost = 1500;
		trackOversteer = 1.1;
		trackLead = 1.05;
		class CamShakeFire
		{
			power = 2.9907;
			duration = 1.8;
			frequency = 20;
			distance = 71.5542;
		};
		class CamShakePlayerFire
		{
			power = 4;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
		activeSensorAlwaysOn = 0;
		missileLockCone = 40;
		missileKeepLockedCone = 75;
		missileLockMaxDistance = 10000;
		missileLockMinDistance = 500;
		missileLockMaxSpeed = 835;
		weaponLockSystem = "8 + 16";
		cmImmunity = 0.94;
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1",0.56234133,1.1,700};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class RadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 10000;
							maxRange = 10000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 5000;
							maxRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						angleRangeHorizontal = 60;
						angleRangeVertical = 60;
					};
				};
			};
		};
	};
	class M_Zephyr_Mi06: M_Zephyr
	{
		maverickWeaponIndexOffset = 6;
	};
	class M_Zephyr_air: M_Zephyr
	{
		effectsMissile = "missile3";
	};
	class Mo_cluster_AP: ShellBase
	{
		model = "\A3\weapons_f\ammo\shell";
		hit = 35;
		indirectHit = 25;
		indirectHitRange = 8;
		CraterEffects = "ClusterCraterEffects";
		CraterWaterEffects = "ClusterCraterWaterEffects";
		EffectFly = "ClusterEffectFly";
		ExplosionEffects = "ClusterExplosionEffects";
		effectsSmoke = "";
		class CamShakeExplode
		{
			power = 7;
			duration = 1.2;
			frequency = 20;
			distance = 287.329;
		};
		class CamShakeHit
		{
			power = 35;
			duration = 0.4;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 2.4323;
			duration = 1.2;
			frequency = 20;
			distance = 47.3286;
		};
		class CamShakePlayerFire
		{
			power = 0.01;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
		timeToLive = 20;
		initTime = 0.025;
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_01",1.7782794,1,2000};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_02",1.7782794,1,2000};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_03",1.7782794,1,2000};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_04",1.7782794,1,2000};
		soundHit5[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_05",1.7782794,1,2000};
		soundHit6[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_06",1.7782794,1,2000};
		soundHit7[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_07",1.7782794,1,2000};
		soundHit8[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_08",1.7782794,1,2000};
		multiSoundHit[] = {"soundHit1",0.125,"soundHit2",0.125,"soundHit3",0.125,"soundHit4",0.125,"soundHit5",0.125,"soundHit6",0.125,"soundHit7",0.125,"soundHit8",0.125};
	};
	class M_Air_AA: MissileBase
	{
		model = "\A3\Weapons_F\Ammo\Missile_AT_02_fly_F";
		proxyShape = "\A3\Weapons_F\Ammo\Missile_AT_02_F";
		hit = 200;
		indirectHit = 100;
		indirectHitRange = 7;
		warheadName = "HE";
		maneuvrability = 42;
		simulationStep = 0.002;
		aiAmmoUsageFlags = 256;
		irLock = 1;
		cost = 1000;
		maxSpeed = 1020;
		timeToLive = 30;
		airFriction = 0.14;
		sideAirFriction = 0.18;
		trackOversteer = 1;
		trackLead = 1;
		initTime = 0;
		thrustTime = 5;
		thrust = 250;
		fuseDistance = 300;
		CraterEffects = "AAMissileCrater";
		explosionEffects = "AAMissileExplosion";
		effectsMissile = "missile3";
		whistleDist = 20;
		muzzleEffect = "BIS_fnc_effectFiredHeliRocket";
		soundHit1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_01",2.5118864,1,1900};
		soundHit2[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_02",2.5118864,1,1900};
		soundHit3[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_03",2.5118864,1,1900};
		multiSoundHit[] = {"soundHit1",0.34,"soundHit2",0.33,"soundHit3",0.33};
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_2",0.56234133,1.1,700};
		airLock = 2;
		missileLockCone = 90;
		missileKeepLockedCone = 120;
		missileLockMaxDistance = 6000;
		missileLockMinDistance = 200;
		missileLockMaxSpeed = 600;
		weaponLockSystem = "2 + 16";
		cmImmunity = 0.92;
		manualControl = 0;
		maxControlRange = 6000;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 6000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 5000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						angleRangeHorizontal = 120;
						angleRangeVertical = 90;
					};
				};
			};
		};
		class CamShakeExplode
		{
			power = 22;
			duration = 2;
			frequency = 20;
			distance = 163.905;
		};
		class CamShakeHit
		{
			power = 110;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 2.9907;
			duration = 1.8;
			frequency = 20;
			distance = 71.5542;
		};
		class CamShakePlayerFire
		{
			power = 4;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class M_Air_AA_MI02: M_Air_AA
	{
		maverickWeaponIndexOffset = 2;
	};
	class M_Air_AA_MI06: M_Air_AA
	{
		maverickWeaponIndexOffset = 6;
	};
	class M_Titan_AT: MissileBase
	{
		model = "\A3\Weapons_F_beta\Launchers\titan\titan_missile_at_fly";
		hit = 95;
		indirectHit = 20;
		indirectHitRange = 3.3;
		explosive = 1;
		warheadName = "HE";
		submunitionAmmo = "ammo_Penetrator_Titan_AT";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0.0;
		submunitionInitialOffset[] = {0,0,-0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		cost = 500;
		aiAmmoUsageFlags = "128 + 512";
		explosionSoundEffect = "DefaultExplosion";
		effectsMissileInit = "";
		muzzleEffect = "";
		simulationStep = 0.002;
		initTime = 0.25;
		trackOversteer = 1.5;
		trackLead = 0.9;
		timeToLive = 22;
		maneuvrability = 20;
		airFriction = 0.085;
		sideAirFriction = 1.0;
		maxSpeed = 180;
		typicalSpeed = 160;
		thrustTime = 5;
		thrust = 45;
		fuseDistance = 50;
		effectsMissile = "missile2";
		whistleDist = 4;
		airLock = 1;
		lockType = 0;
		missileLockCone = 4.5;
		missileKeepLockedCone = 160;
		missileLockMaxDistance = 2000;
		missileLockMinDistance = 50;
		missileLockMaxSpeed = 35;
		manualControl = 1;
		missileManualControlCone = 45;
		maxControlRange = 2000;
		weaponLockSystem = "2 + 16";
		cmImmunity = 0.4;
		flightProfiles[] = {"Direct","TopDown"};
		class Direct{};
		class TopDown
		{
			ascendHeight = 150.0;
			descendDistance = 180.0;
			minDistance = 180.0;
			ascendAngle = 30.0;
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 2000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 2000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 35;
						angleRangeHorizontal = 3.7;
						angleRangeVertical = 2.3;
						maxTrackableATL = 50;
					};
				};
			};
		};
		soundFly[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Fly_Titan",0.63095737,1.5,300};
		class CamShakeExplode
		{
			power = 11;
			duration = 1.4;
			frequency = 20;
			distance = 91.3296;
		};
		class CamShakeHit
		{
			power = 110;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 2.78316;
			duration = 1.6;
			frequency = 20;
			distance = 61.9677;
		};
		class CamShakePlayerFire
		{
			power = 3;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class M_Titan_AP: M_Titan_AT
	{
		submunitionAmmo = "";
		submunitionDirectionType = "";
		submunitionInitSpeed = 0;
		submunitionParentSpeedCoef = 0.0;
		submunitionInitialOffset[] = {0,0,0};
		triggerOnImpact = 0;
		model = "\A3\Weapons_F_beta\Launchers\titan\titan_missile_ap_fly";
		hit = 100;
		indirectHit = 25;
		indirectHitRange = 10;
		warheadName = "HE";
		explosive = 1;
		aiAmmoUsageFlags = "64 + 128";
		irLock = 0;
		cost = 300;
		CraterEffects = "ATMissileCrater";
		effectsMissile = "missile3";
		lockType = 1;
		manualControl = 1;
		manualControlOffset = 100;
		missileManualControlCone = 60;
		flightProfiles[] = {"Direct"};
		class Components: Components
		{
			class SensorsManagerComponent{};
		};
		class CamShakeExplode
		{
			power = 11;
			duration = 1.4;
			frequency = 20;
			distance = 123.33;
		};
		class CamShakeHit
		{
			power = 55;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
	};
	class M_Titan_AT_static: M_Titan_AT
	{
		effectsMissileInit = "RocketBackEffectsStaticRPG";
		initTime = 0.1;
	};
	class M_Titan_AT_long: M_Titan_AT
	{
		submunitionAmmo = "ammo_Penetrator_Titan_AT_long";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0.0;
		submunitionInitialOffset[] = {0,0,-0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		warheadName = "TandemHEAT";
		hit = 150;
		indirectHit = 40;
		indirectHitRange = 4;
		timeToLive = 35;
		initTime = 0.15;
		thrustTime = 8;
		thrust = 35;
		maxSpeed = 180;
		typicalSpeed = 1660;
		missileLockCone = 12;
		missileLockMaxDistance = 5000;
		missileLockMinDistance = 200;
		missileLockMaxSpeed = 35;
		maxControlRange = 5000;
		weaponLockSystem = "2 + 16";
		cmImmunity = 0.5;
		flightProfiles[] = {"Direct","TopDown"};
		class Direct{};
		class TopDown
		{
			ascendHeight = 200.0;
			descendDistance = 240.0;
			minDistance = 240.0;
			ascendAngle = 30.0;
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 5000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 35;
						angleRangeHorizontal = 9.5;
						angleRangeVertical = 6;
						maxTrackableATL = 50;
					};
				};
			};
		};
	};
	class M_Air_AT: M_Titan_AT{};
	class IRStrobeBase: GrenadeCore
	{
		muzzleEffect = "BIS_Effects_Rifle";
		timeToLive = 300;
		explosionTime = 310;
		shadow = 1;
		hit = 5;
		indirectHit = 2;
		indirectHitRange = 0.2;
		typicalspeed = 18;
		cost = 5000;
		irLock = 1;
		simulation = "shotNVGMarker";
		simulationStep = 0.05;
		explosive = 0;
		soundHit[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grass_1",1.0,1,45};
		deflecting = 30;
		class NVGMarkers
		{
			class Blinking1
			{
				name = "cerveny pozicni blik";
				color[] = {0.01,0.01,0.01,1};
				ambient[] = {0.005,0.005,0.005,1};
				blinking = 1;
				brightness = 0.002;
				onlyInNvg = 1;
			};
		};
		soundImpactSoft1[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grass_1",1.4125376,1,45};
		soundImpactSoft2[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grass_2",1.4125376,1,45};
		soundImpactSoft3[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grass_3",1.4125376,1,45};
		soundImpactSoft4[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grass_4",1.4125376,1,45};
		soundImpactSoft5[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grass_5",1.4125376,1,45};
		soundImpactSoft6[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grass_6",1.4125376,1,45};
		soundImpactSoft7[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grass_7",1.4125376,1,45};
		soundImpactHard1[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_concrete_1",1.4125376,1,65};
		soundImpactHard2[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_concrete_2",1.4125376,1,65};
		soundImpactHard3[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_concrete_3",1.4125376,1,65};
		soundImpactHard4[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_concrete_4",1.4125376,1,65};
		soundImpactHard5[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_concrete_5",1.4125376,1,65};
		soundImpactHard6[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_concrete_6",1.4125376,1,65};
		soundImpactHard7[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_concrete_7",1.4125376,1,65};
		soundImpactIron1[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_Metal_1",1.2589254,1,95};
		soundImpactIron2[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_Metal_2",1.2589254,1,95};
		soundImpactIron3[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_Metal_3",1.2589254,1,95};
		soundImpactIron4[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_Metal_4",1.2589254,1,95};
		soundImpactIron5[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_Metal_5",1.2589254,1,95};
		soundImpactWoodExt1[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_wood_ext_1",1.4125376,1,75};
		soundImpactWoodExt2[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_wood_ext_2",1.4125376,1,75};
		soundImpactWoodExt3[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_wood_ext_3",1.4125376,1,75};
		soundImpactWoodExt4[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_wood_ext_4",1.4125376,1,75};
		soundImpactWater1[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_water_1",1.4125376,1,55};
		soundImpactWater2[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_water_2",1.4125376,1,55};
		soundImpactWater3[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_water_3",1.4125376,1,55};
		impactGroundSoft[] = {"soundImpactSoft1",0.2,"soundImpactSoft2",0.2,"soundImpactSoft3",0.2,"soundImpactSoft4",0.1,"soundImpactSoft5",0.1,"soundImpactSoft6",0.1,"soundImpactSoft7",0.1};
		impactGroundHard[] = {"soundImpactHard1",0.2,"soundImpactHard2",0.2,"soundImpactHard3",0.2,"soundImpactHard4",0.1,"soundImpactHard5",0.1,"soundImpactHard6",0.1,"soundImpactHard7",0.1};
		impactIron[] = {"soundImpactIron1",0.2,"soundImpactIron2",0.2,"soundImpactIron3",0.2,"soundImpactIron4",0.2,"soundImpactIron5",0.2};
		impactArmor[] = {"soundImpactIron1",0.2,"soundImpactIron2",0.2,"soundImpactIron3",0.2,"soundImpactIron4",0.2,"soundImpactIron5",0.2};
		impactBuilding[] = {"soundImpactHard1",0.2,"soundImpactHard2",0.2,"soundImpactHard3",0.2,"soundImpactHard4",0.1,"soundImpactHard5",0.1,"soundImpactHard6",0.1,"soundImpactHard7",0.1};
		impactFoliage[] = {"soundImpactSoft1",0.2,"soundImpactSoft2",0.2,"soundImpactSoft3",0.2,"soundImpactSoft4",0.1,"soundImpactSoft5",0.1,"soundImpactSoft6",0.1,"soundImpactSoft7",0.1};
		impactWood[] = {"soundImpactWoodExt1",0.25,"soundImpactWoodExt2",0.25,"soundImpactWoodExt3",0.25,"soundImpactWoodExt4",0.25};
		impactGlass[] = {"soundImpactHard1",0.2,"soundImpactHard2",0.2,"soundImpactHard3",0.2,"soundImpactHard4",0.1,"soundImpactHard5",0.1,"soundImpactHard6",0.1,"soundImpactHard7",0.1};
		impactGlassArmored[] = {"soundImpactHard1",0.2,"soundImpactHard2",0.2,"soundImpactHard3",0.2,"soundImpactHard4",0.1,"soundImpactHard5",0.1,"soundImpactHard6",0.1,"soundImpactHard7",0.1};
		impactConcrete[] = {"soundImpactHard1",0.2,"soundImpactHard2",0.2,"soundImpactHard3",0.2,"soundImpactHard4",0.1,"soundImpactHard5",0.1,"soundImpactHard6",0.1,"soundImpactHard7",0.1};
		impactTyre[] = {"soundImpactSoft1",0.2,"soundImpactSoft2",0.2,"soundImpactSoft3",0.2,"soundImpactSoft4",0.1,"soundImpactSoft5",0.1,"soundImpactSoft6",0.1,"soundImpactSoft7",0.1};
		impactRubber[] = {"soundImpactSoft1",0.2,"soundImpactSoft2",0.2,"soundImpactSoft3",0.2,"soundImpactSoft4",0.1,"soundImpactSoft5",0.1,"soundImpactSoft6",0.1,"soundImpactSoft7",0.1};
		impactPlastic[] = {"soundImpactSoft1",0.2,"soundImpactSoft2",0.2,"soundImpactSoft3",0.2,"soundImpactSoft4",0.1,"soundImpactSoft5",0.1,"soundImpactSoft6",0.1,"soundImpactSoft7",0.1};
		impactDefault[] = {"soundImpactHard1",0.2,"soundImpactHard2",0.2,"soundImpactHard3",0.2,"soundImpactHard4",0.1,"soundImpactHard5",0.1,"soundImpactHard6",0.1,"soundImpactHard7",0.1};
		impactMetal[] = {"soundImpactIron1",0.2,"soundImpactIron2",0.2,"soundImpactIron3",0.2,"soundImpactIron4",0.2,"soundImpactIron5",0.2};
		impactMetalplate[] = {"soundImpactIron1",0.2,"soundImpactIron2",0.2,"soundImpactIron3",0.2,"soundImpactIron4",0.2,"soundImpactIron5",0.2};
		impactWater[] = {"soundImpactWater1",0.35,"soundImpactWater2",0.35,"soundImpactWater3",0.3};
	};
	class B_IRStrobe: IRStrobeBase
	{
		model = "\A3\Weapons_F_EPB\Ammo\B_IRstrobe_F.p3d";
		class NVGMarkers
		{
			class Blinking1{};
		};
	};
	class O_IRStrobe: IRStrobeBase
	{
		model = "\A3\Weapons_F_EPB\Ammo\O_IRstrobe_F.p3d";
		class NVGMarkers
		{
			class Blinking1{};
		};
	};
	class I_IRStrobe: IRStrobeBase
	{
		model = "\A3\Weapons_F_EPB\Ammo\I_IRstrobe_F.p3d";
		class NVGMarkers
		{
			class Blinking1{};
		};
	};
	class B_762x51_Minigun_Tracer_Yellow: B_762x51_Minigun_Tracer_Red
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		submunitionAmmo = "B_762x51_Minigun_Tracer_Yellow_splash";
	};
	class B_762x51_Minigun_Tracer_Yellow_splash: B_762x51_Minigun_Tracer_Red_splash
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class Sh_125mm_APFSDS: Sh_120mm_APFSDS
	{
		hit = 550;
		indirectHit = 20;
		indirectHitRange = 0.5;
		typicalSpeed = 1550;
		caliber = 34.8387;
		deflecting = 15;
	};
	class Sh_125mm_APFSDS_T_Red: Sh_125mm_APFSDS
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
	};
	class Sh_125mm_APFSDS_T_Green: Sh_125mm_APFSDS
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_green";
	};
	class Sh_125mm_APFSDS_T_Yellow: Sh_125mm_APFSDS
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_yellow";
	};
	class Sh_125mm_HE: Sh_120mm_HE
	{
		hit = 300;
		indirectHit = 80;
		indirectHitRange = 6;
		caliber = 10;
		deflecting = 4;
	};
	class Sh_125mm_HE_T_Red: Sh_125mm_HE
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
	};
	class Sh_125mm_HE_T_Green: Sh_125mm_HE
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_green";
	};
	class Sh_125mm_HE_T_Yellow: Sh_125mm_HE
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_yellow";
	};
	class Sh_125mm_HEAT: Sh_125mm_HE
	{
		warheadName = "TandemHEAT";
		hit = 150;
		indirectHit = 31;
		indirectHitRange = 3.75;
		submunitionAmmo = "ammo_Penetrator_125mm";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0.0;
		submunitionInitialOffset[] = {0,0,-0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		cost = 500;
		typicalSpeed = 900;
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_01",1.7782794,1,1800};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_02",1.7782794,1,1800};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_03",1.7782794,1,1800};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_04",1.7782794,1,1800};
		multiSoundHit[] = {"soundHit1",0.25,"soundHit2",0.25,"soundHit3",0.25,"soundHit4",0.25};
		explosionSoundEffect = "DefaultExplosion";
	};
	class Sh_125mm_HEAT_T_Red: Sh_125mm_HEAT
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
	};
	class Sh_125mm_HEAT_T_Green: Sh_125mm_HEAT
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_green";
	};
	class Sh_125mm_HEAT_T_Yellow: Sh_125mm_HEAT
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_yellow";
	};
	class Gatling_30mm_HE_Plane_CAS_01_F: BulletBase
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red.p3d";
		cost = 20;
		hit = 180;
		indirectHit = 4;
		indirectHitRange = 3;
		caliber = 5;
		explosive = 0.4;
		warheadName = "AP";
		airlock = 1;
		deflecting = 5;
		airFriction = -0.00036;
		typicalSpeed = 960;
		visibleFire = 32;
		audibleFire = 250;
		visibleFireTime = 3;
		fuseDistance = 10;
		dangerRadiusBulletClose = 20;
		dangerRadiusHit = 60;
		suppressionRadiusBulletClose = 12;
		suppressionRadiusHit = 24;
		tracerScale = 2.5;
		tracerStartTime = 0.1;
		tracerEndTime = 4.7;
		soundFly[] = {"",1.0,1,50};
		explosionSoundEffect = "DefaultExplosion";
		explosionEffects = "ExploAmmoExplosionPlaneCAS";
		craterEffects = "ExploAmmoCrater";
		soundSetSonicCrack[] = {"BulletSonicCrack_Gatling_SoundSet"};
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_01",3.1622777,1,1300};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_02",3.1622777,1,1300};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_03",3.1622777,1,1300};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_04",3.1622777,1,1300};
		multiSoundHit[] = {"soundHit1",0.25,"soundHit2",0.25,"soundHit3",0.25,"soundHit4",0.25};
		class CamShakeExplode
		{
			power = 6;
			duration = 1;
			frequency = 20;
			distance = 67.8178;
		};
		class CamShakeHit
		{
			power = 30;
			duration = 0.4;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 2.23607;
			duration = 1;
			frequency = 20;
			distance = 40;
		};
		class CamShakePlayerFire
		{
			power = 0.01;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
		class HitEffects
		{
			Hit_Foliage_green = "ImpactLeavesGreen";
			Hit_Foliage_Dead = "ImpactLeavesDead";
			Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
			Hit_Foliage_Palm = "ImpactLeavesPalm";
			Hit_Foliage_Pine = "ImpactLeavesPine";
			hitFoliage = "ImpactLeaves";
			hitGlass = "";
			hitGlassArmored = "";
			hitWood = "ImpactWood";
			hitHay = "ImpactHay";
			hitMetal = "";
			hitMetalPlate = "";
			hitBuilding = "";
			hitPlastic = "";
			hitRubber = "";
			hitConcrete = "";
			hitMan = "";
			hitGroundSoft = "";
			hitGroundHard = "";
			hitWater = "ImpactEffectsWater";
			hitVirtual = "";
		};
	};
	class Missile_AA_04_F: MissileBase
	{
		model = "\A3\Weapons_F_EPC\Ammo\Missile_AA_04_fly_F.p3d";
		proxyShape = "\A3\Weapons_F_EPC\Ammo\Missile_AA_04_F.p3d";
		maverickWeaponIndexOffset = 0;
		cost = 1000;
		hit = 100;
		indirectHit = 75;
		indirectHitRange = 9;
		proximityExplosionDistance = 15;
		warheadName = "HE";
		airLock = 2;
		irLock = 1;
		laserLock = 0;
		nvLock = 0;
		missileLockCone = 30;
		missileKeepLockedCone = 45;
		missileLockMaxDistance = 4500;
		missileLockMinDistance = 150;
		missileLockMaxSpeed = 445;
		weaponLockSystem = "2 + 16";
		cmImmunity = 0.9;
		manualControl = 0;
		maxControlRange = 4500;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 4000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						angleRangeHorizontal = 30;
						angleRangeVertical = 30;
					};
				};
			};
		};
		aiAmmoUsageFlags = 256;
		initTime = 0;
		thrust = 220;
		thrustTime = 5;
		airFriction = 0.14;
		sideAirFriction = 0.2;
		maxSpeed = 920;
		maneuvrability = 36;
		simulationStep = 0.002;
		fuseDistance = 500;
		timeToLive = 20;
		trackLead = 0.9;
		trackOversteer = 1;
		craterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		effectsMissileInit = "PylonBackEffects";
		muzzleEffect = "";
		soundHit1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_01",2.5118864,1,2000};
		soundHit2[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_02",2.5118864,1,2000};
		soundHit3[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_03",2.5118864,1,2000};
		multiSoundHit[] = {"soundHit1",0.34,"soundHit2",0.33,"soundHit3",0.33};
		whistleDist = 8;
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1",0.56234133,1,1500};
		class Hiteffects
		{
			hitWater = "ImpactEffectsWater";
		};
	};
	class Missile_AGM_02_F: MissileBase
	{
		model = "\A3\Weapons_F_EPC\Ammo\Missile_AGM_02_fly_F.p3d";
		proxyShape = "\A3\Weapons_F_EPC\Ammo\Missile_AGM_02_F.p3d";
		maverickWeaponIndexOffset = 2;
		cost = 800;
		submunitionAmmo = "ammo_Penetrator_AGM_02";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0.0;
		submunitionInitialOffset[] = {0,0,-0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		hit = 1100;
		indirectHit = 85;
		indirectHitRange = 8;
		warheadName = "HE";
		cameraViewAvailable = 1;
		airLock = 0;
		missileLockCone = 50;
		missileKeepLockedCone = 30;
		missileLockMaxDistance = 6000;
		missileLockMinDistance = 350;
		missileLockMaxSpeed = 55;
		weaponLockSystem = "2 + 16";
		cmImmunity = 0.5;
		flightProfiles[] = {"TopDown"};
		class TopDown
		{
			ascendHeight = 400.0;
			descendDistance = 1000.0;
			minDistance = 400.0;
			ascendAngle = 0.01;
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 8000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 55;
						angleRangeHorizontal = 35;
						angleRangeVertical = 35;
					};
				};
			};
		};
		aiAmmoUsageFlags = "128 + 512";
		initTime = 0;
		thrust = 95;
		thrustTime = 4;
		airFriction = 0.05;
		sideAirFriction = 0.15;
		maxSpeed = 320;
		typicalSpeed = 270;
		maneuvrability = 27;
		simulationStep = 0.002;
		fuseDistance = 350;
		timeToLive = 40;
		trackLead = 1;
		trackOversteer = 4;
		craterEffects = "AAMissileCrater";
		effectsMissile = "missile3";
		explosionEffects = "AAMissileExplosion";
		effectsMissileInit = "PylonBackEffects";
		muzzleEffect = "";
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_2",0.5011872,1,1700};
		whistleDist = 20;
		class CamShakeExplode
		{
			power = 22;
			duration = 2;
			frequency = 20;
			distance = 163.905;
		};
		class CamShakeHit
		{
			power = 110;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 2.9907;
			duration = 1.8;
			frequency = 20;
			distance = 71.5542;
		};
		class CamShakePlayerFire
		{
			power = 4;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class M_Mo_82mm_AT: MissileBase
	{
		model = "\A3\weapons_f\ammo\shell";
		hit = 160;
		indirectHit = 50;
		indirectHitRange = 8;
		autoSeekTarget = 1;
		airLock = 0;
		maneuvrability = 6;
		simulationStep = 0.002;
		fuseDistance = 0;
		airFriction = 0.01;
		sideAirFriction = 0.03;
		weaponLockSystem = 2;
		missileLockCone = 40;
		missileKeepLockedCone = 40;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 800;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 800;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						angleRangeHorizontal = 40;
						angleRangeVertical = 40;
					};
				};
			};
		};
	};
	class M_Mo_82mm_AT_LG: M_Mo_82mm_AT
	{
		hit = 240;
		simulationStep = 0.002;
		weaponLockSystem = 4;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class LaserSensorComponent: SensorTemplateLaser
					{
						class AirTarget
						{
							minRange = 800;
							maxRange = 800;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 800;
							maxRange = 800;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						angleRangeHorizontal = 40;
						angleRangeVertical = 40;
					};
				};
			};
		};
	};
	class M_Mo_120mm_AT: M_Mo_82mm_AT
	{
		hit = 800;
		indirectHit = 50;
		indirectHitRange = 3;
		EffectFly = "ArtilleryTrails";
		cameraViewAvailable = 1;
	};
	class M_Mo_120mm_AT_LG: M_Mo_120mm_AT
	{
		weaponLockSystem = 4;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class LaserSensorComponent: SensorTemplateLaser
					{
						class AirTarget
						{
							minRange = 800;
							maxRange = 800;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 800;
							maxRange = 800;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						angleRangeHorizontal = 40;
						angleRangeVertical = 40;
					};
				};
			};
		};
	};
	class M_Mo_155mm_AT: M_Mo_120mm_AT
	{
		hit = 1200;
		indirectHit = 200;
		indirectHitRange = 4;
	};
	class M_Mo_155mm_AT_LG: M_Mo_120mm_AT_LG
	{
		hit = 1200;
		indirectHit = 200;
		indirectHitRange = 4;
	};
	class M_Mo_230mm_AT_LG: M_Mo_155mm_AT_LG
	{
		model = "\A3\Weapons_F_Delta\Ammo\Rocket_230mm_F";
		hit = 1200;
		indirectHit = 800;
		indirectHitRange = 30;
		cost = 1000;
		audibleFire = 64;
		dangerRadiusHit = 1250;
		suppressionRadiusHit = 120;
		deflecting = 0;
		airFriction = 0;
		muzzleEffect = "";
		effectFly = "ArtilleryTrails";
		class CamShakeExplode
		{
			power = 46;
			duration = 3;
			frequency = 20;
			distance = 361.326;
		};
		class CamShakeHit
		{
			power = 230;
			duration = 0.8;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 3.89432;
			duration = 3;
			frequency = 20;
			distance = 121.326;
		};
		class CamShakePlayerFire
		{
			power = 5;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class M_Mo_230mm_guided: R_230mm_HE
	{
		submunitionAmmo = "M_Mo_230mm_AT";
		muzzleEffect = "";
		triggerDistance = 500;
		hit = 300;
	};
	class M_Mo_230mm_AT: M_Mo_155mm_AT
	{
		model = "\A3\Weapons_F_Delta\Ammo\Rocket_230mm_F";
		hit = 1200;
		indirectHit = 800;
		indirectHitRange = 30;
		cost = 1000;
		audibleFire = 64;
		dangerRadiusHit = 1250;
		suppressionRadiusHit = 120;
		deflecting = 0;
		airFriction = 0;
		muzzleEffect = "";
		effectFly = "ArtilleryTrails";
		class CamShakeExplode
		{
			power = 46;
			duration = 3;
			frequency = 20;
			distance = 361.326;
		};
		class CamShakeHit
		{
			power = 230;
			duration = 0.8;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 3.89432;
			duration = 3;
			frequency = 20;
			distance = 121.326;
		};
		class CamShakePlayerFire
		{
			power = 5;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class Rocket_04_HE_F: MissileBase
	{
		model = "\A3\Weapons_F_EPC\Ammo\Rocket_04_HE_fly_F.p3d";
		proxyShape = "\A3\Weapons_F_EPC\Ammo\Rocket_04_HE_F.p3d";
		maverickWeaponIndexOffset = 12;
		maverickweapon = 1;
		cost = 100;
		hit = 210;
		indirectHit = 55;
		indirectHitRange = 15;
		warheadName = "HE";
		manualControl = 0;
		maxControlRange = 0;
		airLock = 0;
		irLock = 0;
		laserLock = 0;
		nvLock = 0;
		weaponLockSystem = 0;
		aiAmmoUsageFlags = "64 + 128";
		missileLockMinDistance = 500;
		missileLockMaxDistance = 3000;
		initTime = 0.002;
		thrust = 1060;
		thrustTime = 0.69;
		airFriction = 0.09;
		sideAirFriction = 0.005;
		maxSpeed = 590;
		maneuvrability = 0;
		fuseDistance = 50;
		timeToLive = 60;
		effectsMissileInit = "PylonBackEffectsFFAR";
		muzzleEffect = "";
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1",0.63095737,1.2,1700};
		whistleDist = 30;
		class CamShakeExplode
		{
			power = 16;
			duration = 1.8;
			frequency = 20;
			distance = 191.554;
		};
		class CamShakeHit
		{
			power = 80;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 2.9907;
			duration = 1.8;
			frequency = 20;
			distance = 71.5542;
		};
		class CamShakePlayerFire
		{
			power = 2;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class Rocket_04_AP_F: Rocket_04_HE_F
	{
		model = "\A3\Weapons_F_EPC\Ammo\Rocket_04_AP_fly_F.p3d";
		proxyShape = "\A3\Weapons_F_EPC\Ammo\Rocket_04_AP_F.p3d";
		maverickWeaponIndexOffset = 19;
		submunitionAmmo = "ammo_Penetrator_Rocket_04_AP";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0.0;
		submunitionInitialOffset[] = {0,0,-0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		hit = 95;
		indirectHit = 25;
		indirectHitRange = 2.5;
		warheadName = "HE";
		aiAmmoUsageFlags = 128;
	};
	class Cannon_30mm_HE_Plane_CAS_02_F: Gatling_30mm_HE_Plane_CAS_01_F
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green.p3d";
		hit = 150;
		indirectHit = 4;
		indirectHitRange = 4;
		caliber = 3;
		explosive = 0.6;
		missileLockMaxDistance = 1000;
		missileLockMinDistance = 350;
	};
	class Missile_AA_03_F: Missile_AA_04_F
	{
		model = "\A3\Weapons_F_EPC\Ammo\Missile_AA_03_fly_F.p3d";
		proxyShape = "\A3\Weapons_F_EPC\Ammo\Missile_AA_03_F.p3d";
		maverickWeaponIndexOffset = 0;
		hit = 140;
		indirectHit = 90;
		indirectHitRange = 8;
		proximityExplosionDistance = 15;
		missileLockCone = 45;
		missileKeepLockedCone = 120;
		missileLockMaxDistance = 6000;
		missileLockMinDistance = 150;
		missileLockMaxSpeed = 700;
		weaponLockSystem = "2 + 16";
		cmImmunity = 0.9;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 6000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 4000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 700;
						angleRangeHorizontal = 45;
						angleRangeVertical = 45;
					};
				};
			};
		};
		airFriction = 0.13;
		thrust = 200;
		thrustTime = 7;
		maxSpeed = 850;
		maneuvrability = 30;
		fuseDistance = 300;
	};
	class Missile_AGM_01_F: Missile_AGM_02_F
	{
		model = "\A3\Weapons_F_EPC\Ammo\Missile_AGM_01_fly_F.p3d";
		proxyShape = "\A3\Weapons_F_EPC\Ammo\Missile_AGM_01_F.p3d";
		maverickWeaponIndexOffset = 2;
		thrustTime = 6;
		submunitionAmmo = "ammo_Penetrator_AGM_01";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0.0;
		submunitionInitialOffset[] = {0,0,-0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		hit = 1200;
		indirectHit = 90;
		indirectHitRange = 8;
		warheadName = "HE";
		cameraViewAvailable = 1;
		missileLockCone = 20;
		missileKeepLockedCone = 20;
		missileLockMaxDistance = 6000;
		missileLockMinDistance = 300;
		missileLockMaxSpeed = 40;
		weaponLockSystem = "2 + 16";
		cmImmunity = 0.5;
		flightProfiles[] = {"Direct"};
		class Direct{};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 8000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 40;
						angleRangeHorizontal = 20;
						angleRangeVertical = 20;
					};
				};
			};
		};
	};
	class Rocket_03_HE_F: Rocket_04_HE_F
	{
		model = "\A3\Weapons_F_EPC\Ammo\Rocket_03_HE_fly_F.p3d";
		proxyShape = "\A3\Weapons_F_EPC\Ammo\Rocket_03_HE_F.p3d";
		maverickWeaponIndexOffset = 8;
	};
	class Rocket_03_AP_F: Rocket_04_AP_F
	{
		model = "\A3\Weapons_F_EPC\Ammo\Rocket_03_AP_fly_F.p3d";
		proxyShape = "\A3\Weapons_F_EPC\Ammo\Rocket_03_AP_F.p3d";
		maverickWeaponIndexOffset = 28;
		submunitionAmmo = "ammo_Penetrator_Rocket_03_AP";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0.0;
		submunitionInitialOffset[] = {0,0,-0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		hit = 95;
		indirectHit = 25;
		indirectHitRange = 3;
	};
	class Sh_105mm_APFSDS: Sh_120mm_APFSDS
	{
		hit = 450;
		indirectHit = 10;
		indirectHitRange = 0.5;
		airFriction = -3.48e-05;
		caliber = 28.5714;
		tracerEndTime = 2.5;
	};
	class Sh_105mm_APFSDS_T_Red: Sh_105mm_APFSDS
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
	};
	class Sh_105mm_APFSDS_T_Green: Sh_105mm_APFSDS
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_green";
	};
	class Sh_105mm_APFSDS_T_Yellow: Sh_105mm_APFSDS
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_yellow";
	};
	class Sh_105mm_HEAT_MP: Sh_125mm_HEAT
	{
		hit = 95;
		indirectHit = 26;
		indirectHitRange = 4.2;
		submunitionAmmo = "ammo_Penetrator_105mm";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0.0;
		submunitionInitialOffset[] = {0,0,-0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		airFriction = -0.000308;
	};
	class Sh_105mm_HEAT_MP_T_Red: Sh_105mm_HEAT_MP
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
	};
	class Sh_105mm_HEAT_MP_T_Green: Sh_105mm_HEAT_MP
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_green";
	};
	class Sh_105mm_HEAT_MP_T_Yellow: Sh_105mm_HEAT_MP
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_yellow";
	};
};
class CfgMagazines
{
	class Default;
	class CA_Magazine: Default
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 1;
		value = 1;
		displayName = "";
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		picture = "";
		modelSpecial = "";
		useAction = 0;
		useActionTitle = "";
		reloadAction = "";
		ammo = "";
		count = 30;
		type = 256;
		initSpeed = 900;
		selectionFireAnim = "zasleh";
		nameSound = "magazine";
		maxLeadSpeed = 25;
		weaponpoolavailable = 1;
		mass = 8;
	};
	class VehicleMagazine: CA_Magazine
	{
		author = "$STR_A3_Bohemia_Interactive";
		type = 0;
		reloadAction = "";
		maxLeadSpeed = 100;
		weaponPoolAvailable = 0;
	};
	class CA_LauncherMagazine: CA_Magazine
	{
		author = "$STR_A3_Bohemia_Interactive";
		model = "";
		value = 5;
		type = "2*		256";
		allowedSlots[] = {901};
		count = 1;
		initSpeed = 5;
		picture = "";
		nameSound = "handgrenade";
	};
	class 30Rnd_556x45_Stanag: CA_Magazine
	{
		picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_556x45_Stanag_CA.paa";
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_CfgMagazines_30Rnd_556x45_Stanag0";
		ammo = "B_556x45_Ball";
		count = 30;
		initSpeed = 920;
		tracersEvery = 0;
		lastRoundsTracer = 4;
		descriptionShort = "$STR_A3_CfgMagazines_30Rnd_556x45_Stanag1";
	};
	class 30Rnd_556x45_Stanag_green: 30Rnd_556x45_Stanag
	{
		picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_556x45_Stanag_green_CA.paa";
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_30Rnd_556x45_Stanag_green0";
		ammo = "B_556x45_Ball_Tracer_Green";
	};
	class 30Rnd_556x45_Stanag_red: 30Rnd_556x45_Stanag
	{
		picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_556x45_Stanag_red_CA.paa";
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_30Rnd_556x45_Stanag_red0";
		ammo = "B_556x45_Ball_Tracer_Red";
	};
	class 30Rnd_556x45_Stanag_Tracer_Red: 30Rnd_556x45_Stanag
	{
		picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_556x45_Stanag_Tracer_Red_CA.paa";
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_30Rnd_556x45_Stanag_Tracer_Red0";
		ammo = "B_556x45_Ball_Tracer_Red";
		tracersEvery = 1;
		descriptionShort = "$STR_A3_CfgMagazines_30Rnd_556x45_Stanag_Tracer_Red1";
		displaynameshort = "$STR_A3_tracer_dns";
	};
	class 30Rnd_556x45_Stanag_Tracer_Green: 30Rnd_556x45_Stanag
	{
		picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_556x45_Stanag_Tracer_Green_CA.paa";
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_30Rnd_556x45_Stanag_Tracer_Green0";
		ammo = "B_556x45_Ball_Tracer_Green";
		tracersEvery = 1;
		descriptionShort = "$STR_A3_CfgMagazines_30Rnd_556x45_Stanag_Tracer_Green1";
		displaynameshort = "$STR_A3_tracer_dns";
	};
	class 30Rnd_556x45_Stanag_Tracer_Yellow: 30Rnd_556x45_Stanag
	{
		picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_556x45_Stanag_Tracer_Yellow_CA.paa";
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_30Rnd_556x45_Stanag_Tracer_Yellow0";
		ammo = "B_556x45_Ball_Tracer_Yellow";
		tracersEvery = 1;
		descriptionShort = "$STR_A3_CfgMagazines_30Rnd_556x45_Stanag_Tracer_Yellow1";
		displaynameshort = "$STR_A3_tracer_dns";
	};
	class 30Rnd_556x45_Stanag_Sand: 30Rnd_556x45_Stanag
	{
		picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_556x45_Stanag_Sand_CA.paa";
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_30Rnd_556x45_Stanag_Sand0";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"a3\weapons_f_exp\rifles\spar_01\data\arifle_spar_01_snd_f_01_co.paa"};
	};
	class 30Rnd_556x45_Stanag_Sand_green: 30Rnd_556x45_Stanag_Sand
	{
		picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_556x45_Stanag_Sand_green_CA.paa";
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_30Rnd_556x45_Stanag_Sand_green0";
		ammo = "B_556x45_Ball_Tracer_Green";
	};
	class 30Rnd_556x45_Stanag_Sand_red: 30Rnd_556x45_Stanag_Sand
	{
		picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_556x45_Stanag_Sand_red_CA.paa";
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_30Rnd_556x45_Stanag_Sand_red0";
		ammo = "B_556x45_Ball_Tracer_Red";
	};
	class 30Rnd_556x45_Stanag_Sand_Tracer_Red: 30Rnd_556x45_Stanag_Sand
	{
		picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_556x45_Stanag_Sand_Tracer_Red_CA.paa";
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_30Rnd_556x45_Stanag_Sand_Tracer_Red0";
		ammo = "B_556x45_Ball_Tracer_Red";
		tracersEvery = 1;
		descriptionShort = "$STR_A3_CfgMagazines_30Rnd_556x45_Stanag_Tracer_Red1";
		displaynameshort = "$STR_A3_tracer_dns";
	};
	class 30Rnd_556x45_Stanag_Sand_Tracer_Green: 30Rnd_556x45_Stanag_Sand_Tracer_Red
	{
		picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_556x45_Stanag_Sand_Tracer_Green_CA.paa";
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_30Rnd_556x45_Stanag_Sand_Tracer_Green0";
		ammo = "B_556x45_Ball_Tracer_Green";
		descriptionShort = "$STR_A3_CfgMagazines_30Rnd_556x45_Stanag_Tracer_Green1";
	};
	class 30Rnd_556x45_Stanag_Sand_Tracer_Yellow: 30Rnd_556x45_Stanag_Sand_Tracer_Red
	{
		picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_556x45_Stanag_Sand_Tracer_Yellow_CA.paa";
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_30Rnd_556x45_Stanag_Sand_Tracer_Yellow0";
		ammo = "B_556x45_Ball_Tracer_Yellow";
		descriptionShort = "$STR_A3_CfgMagazines_30Rnd_556x45_Stanag_Tracer_Yellow1";
	};
	class 20Rnd_556x45_UW_mag: 30Rnd_556x45_Stanag
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_CfgMagazines_20Rnd_556x45_UW_mag0";
		descriptionShort = "$STR_A3_CfgMagazines_20Rnd_556x45_UW_mag1";
		displaynameshort = "$STR_A3_CfgMagazines_20Rnd_556x45_UW_mag_dns";
		picture = "\A3\weapons_f\data\ui\m_20stanag_CA.paa";
		ammo = "B_556x45_dual";
		count = 20;
		mass = 6;
		initSpeed = 270;
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class 30Rnd_65x39_caseless_mag: CA_Magazine
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_CfgMagazines_30Rnd_65x39_caseless_mag0";
		picture = "\A3\weapons_f\data\ui\m_30stanag_caseless_CA.paa";
		modelSpecial = "a3\Weapons_F\MagazineProxies\mag_65x39c_mx_30rnd.p3d";
		modelSpecialIsProxy = 1;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\weapons_f\rifles\mx\data\xmx_base_co.paa"};
		ammo = "B_65x39_Caseless";
		count = 30;
		mass = 10;
		initSpeed = 800;
		tracersEvery = 0;
		lastRoundsTracer = 4;
		descriptionShort = "$STR_A3_CfgMagazines_30Rnd_65x39_mag1";
	};
	class 30Rnd_65x39_caseless_khaki_mag: 30Rnd_65x39_caseless_mag
	{
		picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_khaki_mag_CA.paa";
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_30Rnd_65x39_caseless_khaki_mag0";
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_Base_khk_co.paa"};
	};
	class 30Rnd_65x39_caseless_black_mag: 30Rnd_65x39_caseless_mag
	{
		picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_black_mag_CA.paa";
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_30Rnd_65x39_caseless_black_mag0";
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_Base_Black_co.paa"};
	};
	class 30Rnd_65x39_caseless_green: 30Rnd_65x39_caseless_mag
	{
		author = "$STR_A3_Bohemia_Interactive";
		ammo = "B_65x39_Caseless_green";
		picture = "\A3\weapons_f\data\ui\m_20stanag_CA.paa";
		descriptionShort = "$STR_A3_CfgMagazines_30Rnd_65x39_caseless_green0";
		displayName = "$STR_A3_CfgMagazines_30Rnd_65x39_caseless_green1";
	};
	class 30Rnd_65x39_caseless_mag_Tracer: 30Rnd_65x39_caseless_mag
	{
		author = "$STR_A3_Bohemia_Interactive";
		tracersEvery = 1;
		lastRoundsTracer = 30;
		picture = "\A3\weapons_f\data\ui\m_30stanag_caseless_red_CA.paa";
		displayName = "$STR_A3_CfgMagazines_30Rnd_65x39_caseless_mag_Tracer0";
		descriptionShort = "$STR_A3_CfgMagazines_30Rnd_65x39_mag_Tracer_Red1";
		displaynameshort = "$STR_A3_tracer_dns";
	};
	class 30Rnd_65x39_caseless_khaki_mag_Tracer: 30Rnd_65x39_caseless_mag_Tracer
	{
		picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_khaki_mag_Tracer_CA.paa";
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_30Rnd_65x39_caseless_khaki_mag_Tracer0";
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_Base_khk_co.paa"};
	};
	class 30Rnd_65x39_caseless_black_mag_Tracer: 30Rnd_65x39_caseless_mag_Tracer
	{
		picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_black_mag_Tracer_CA.paa";
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_30Rnd_65x39_caseless_black_mag_Tracer0";
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_Base_Black_co.paa"};
	};
	class 30Rnd_65x39_caseless_green_mag_Tracer: 30Rnd_65x39_caseless_green
	{
		author = "$STR_A3_Bohemia_Interactive";
		tracersEvery = 1;
		lastRoundsTracer = 30;
		picture = "\A3\weapons_f\data\ui\m_20stanag_green_ca.paa";
		displayName = "$STR_A3_CfgMagazines_30Rnd_65x39_caseless_green_mag_Tracer0";
		descriptionShort = "$STR_A3_CfgMagazines_30Rnd_65x39_caseless_green_mag_Tracer1";
		displaynameshort = "$STR_A3_tracer_dns";
	};
	class 20Rnd_762x51_Mag: CA_Magazine
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_CfgMagazines_20Rnd_762x45_Mag0";
		picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_20Rnd_762x51_Mag_ca.paa";
		count = 20;
		ammo = "B_762x51_Ball";
		mass = 12;
		initSpeed = 850;
		descriptionShort = "$STR_A3_CfgMagazines_20Rnd_762x45_Mag1";
		modelSpecial = "a3\Weapons_F_Mark\MagazineProxies\mag_762x51_mk14_20rnd";
		modelSpecialIsProxy = 1;
	};
	class 7Rnd_408_Mag: CA_Magazine
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_CFGMAGAZINES_7RND_408_MAG0";
		picture = "\A3\weapons_f\data\UI\m_M24_CA.paa";
		count = 7;
		ammo = "B_408_Ball";
		initSpeed = 910;
		descriptionShort = "$STR_A3_CFGMAGAZINES_7RND_408_MAG1";
		mass = 14;
	};
	class 5Rnd_127x108_Mag: CA_Magazine
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_CfgMagazines_5Rnd_127x108_Mag0";
		picture = "\A3\Weapons_F_EPA\Data\ui\M_5rnd_127x108_ball_CA.paa";
		count = 5;
		ammo = "B_127x108_Ball";
		initSpeed = 820;
		descriptionShort = "$STR_A3_CfgMagazines_5Rnd_127x108_Mag1";
		mass = 16;
	};
	class 100Rnd_65x39_caseless_mag: CA_Magazine
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_CfgMagazines_100Rnd_65x39_caseless_mag0";
		picture = "\A3\Weapons_F\Data\UI\M_100Rnd_65x39_CA.paa";
		count = 100;
		type = "2*		256";
		ammo = "B_65x39_Caseless";
		initSpeed = 880;
		tracersEvery = 4;
		lastRoundsTracer = 4;
		nameSound = "mgun";
		descriptionShort = "$STR_A3_CfgMagazines_100Rnd_65x39_Belt1";
		mass = 25;
		modelSpecial = "a3\Weapons_F\MagazineProxies\mag_65x39c_mx_100rnd.p3d";
		modelSpecialIsProxy = 1;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\weapons_f\rifles\mx\data\xmx_lmg_co.paa"};
	};
	class 100Rnd_65x39_caseless_khaki_mag: 100Rnd_65x39_caseless_mag
	{
		picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_100Rnd_65x39_caseless_khaki_mag_CA.paa";
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_100Rnd_65x39_caseless_khaki_mag0";
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_LMG_khk_co.paa"};
	};
	class 100Rnd_65x39_caseless_black_mag: 100Rnd_65x39_caseless_mag
	{
		picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_100Rnd_65x39_caseless_black_mag_CA.paa";
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_100Rnd_65x39_caseless_black_mag0";
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_lmg_Black_co.paa"};
	};
	class 100Rnd_65x39_caseless_mag_Tracer: 100Rnd_65x39_caseless_mag
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_100Rnd_65x39_caseless_mag_Tracer0";
		picture = "\A3\Weapons_F\Data\UI\M_100Rnd_65x39_red_CA.paa";
		tracersEvery = 1;
		lastRoundsTracer = 100;
		descriptionShort = "$STR_A3_CfgMagazines_100Rnd_65x39_Belt_Tracer_Red1";
		displaynameshort = "$STR_A3_tracer_dns";
		modelSpecial = "a3\Weapons_F\MagazineProxies\mag_65x39c_mx_100rnd.p3d";
		modelSpecialIsProxy = 1;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\weapons_f\rifles\mx\data\xmx_lmg_co.paa"};
	};
	class 100Rnd_65x39_caseless_khaki_mag_tracer: 100Rnd_65x39_caseless_mag_Tracer
	{
		picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_100Rnd_65x39_caseless_khaki_mag_tracer_CA.paa";
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_100Rnd_65x39_caseless_khaki_mag_tracer0";
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_LMG_khk_co.paa"};
	};
	class 100Rnd_65x39_caseless_black_mag_tracer: 100Rnd_65x39_caseless_mag_Tracer
	{
		picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_100Rnd_65x39_caseless_black_mag_tracer_CA.paa";
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_100Rnd_65x39_caseless_black_mag_tracer0";
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_lmg_Black_co.paa"};
	};
	class 200Rnd_65x39_cased_Box: 100Rnd_65x39_caseless_mag
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_200Rnd_65x39_Box0";
		picture = "\A3\Weapons_F\Data\UI\M_200Rnd_65x39_CA.paa";
		count = 200;
		initSpeed = 920;
		ammo = "B_65x39_Caseless_yellow";
		descriptionShort = "$STR_A3_CfgMagazines_200Rnd_65x39_Box1";
		mass = 50;
	};
	class 200Rnd_65x39_cased_Box_Tracer: 200Rnd_65x39_cased_Box
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CFGMAGAZINES_200RND_65X39_BELT_TRACER_YELLOW0";
		picture = "\A3\Weapons_F\Data\UI\m_200rnd_65x39_yellow_ca.paa";
		descriptionShort = "$STR_A3_CFGMAGAZINES_200RND_65X39_BELT_TRACER_YELLOW1";
		displaynameshort = "$STR_A3_tracer_dns";
		lastRoundsTracer = 200;
		tracersEvery = 1;
	};
	class 200Rnd_65x39_cased_Box_Red: 100Rnd_65x39_caseless_mag
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_200Rnd_65x39_cased_Box_Red0";
		picture = "\A3\Weapons_F\Data\UI\M_200Rnd_65x39_CA.paa";
		count = 200;
		initSpeed = 920;
		ammo = "B_65x39_Caseless";
		descriptionShort = "$STR_A3_CfgMagazines_200Rnd_65x39_Box1";
		mass = 50;
	};
	class 200Rnd_65x39_cased_Box_Tracer_Red: 200Rnd_65x39_cased_Box
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_200Rnd_65x39_cased_Box_Tracer_Red0";
		picture = "\A3\Weapons_F\Data\UI\m_200rnd_65x39_red_ca.paa";
		descriptionShort = "$STR_A3_CFGMAGAZINES_200RND_65X39_BELT_TRACER_RED1";
		displaynameshort = "$STR_A3_tracer_dns";
		ammo = "B_65x39_Caseless";
		lastRoundsTracer = 200;
		tracersEvery = 1;
	};
	class 30Rnd_9x21_Mag: CA_Magazine
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_CfgMagazines_30Rnd_9x21_Mag0";
		picture = "\A3\Weapons_F\Data\UI\M_30Rnd_45ACP_CA.paa";
		ammo = "B_9x21_Ball";
		count = 30;
		mass = 10;
		initSpeed = 370;
		tracersEvery = 0;
		descriptionShort = "$STR_A3_CfgMagazines_30Rnd_9x21_Mag1";
	};
	class 30Rnd_9x21_Red_Mag: 30Rnd_9x21_Mag
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_30Rnd_9x21_Red_Mag0";
		ammo = "B_9x21_Ball_Tracer_Red";
		lastRoundsTracer = 4;
	};
	class 30Rnd_9x21_Yellow_Mag: 30Rnd_9x21_Mag
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_30Rnd_9x21_Yellow_Mag0";
		ammo = "B_9x21_Ball_Tracer_Yellow";
		lastRoundsTracer = 4;
	};
	class 30Rnd_9x21_Green_Mag: 30Rnd_9x21_Mag
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_30Rnd_9x21_Green_Mag0";
		ammo = "B_9x21_Ball_Tracer_Green";
		lastRoundsTracer = 4;
	};
	class 16Rnd_9x21_Mag: 30Rnd_9x21_Mag
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_16Rnd_9x21_Mag0";
		picture = "\A3\weapons_f\data\ui\M_16Rnd_9x21_CA.paa";
		type = 16;
		count = 16;
		descriptionShort = "$STR_A3_CfgMagazines_16Rnd_9x21_Mag1";
		mass = 6;
		initSpeed = 410;
	};
	class 30Rnd_9x21_Mag_SMG_02: 30Rnd_9x21_Mag
	{
		author = "$STR_A3_Bohemia_Interactive";
		picture = "\A3\weapons_f\data\ui\M_30Rnd_9x21_CA.paa";
		descriptionShort = "$STR_A3_CFGMAGAZINES_30RND_9X21_MAG2";
	};
	class 30Rnd_9x21_Mag_SMG_02_Tracer_Red: 30Rnd_9x21_Mag_SMG_02
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_30Rnd_9x21_Red_Mag0";
		ammo = "B_9x21_Ball_Tracer_Red";
		lastRoundsTracer = 4;
	};
	class 30Rnd_9x21_Mag_SMG_02_Tracer_Yellow: 30Rnd_9x21_Mag_SMG_02
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_30Rnd_9x21_Yellow_Mag0";
		ammo = "B_9x21_Ball_Tracer_Yellow";
		lastRoundsTracer = 4;
	};
	class 30Rnd_9x21_Mag_SMG_02_Tracer_Green: 30Rnd_9x21_Mag_SMG_02
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_30Rnd_9x21_Green_Mag0";
		ammo = "B_9x21_Ball_Tracer_Green";
		lastRoundsTracer = 4;
	};
	class 16Rnd_9x21_red_Mag: 16Rnd_9x21_Mag
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_16Rnd_9x21_red_Mag0";
		ammo = "B_9x21_Ball_Tracer_Red";
		lastRoundsTracer = 4;
	};
	class 16Rnd_9x21_green_Mag: 16Rnd_9x21_Mag
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_16Rnd_9x21_green_Mag0";
		ammo = "B_9x21_Ball_Tracer_Green";
		lastRoundsTracer = 4;
	};
	class 16Rnd_9x21_yellow_Mag: 16Rnd_9x21_Mag
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_16Rnd_9x21_yellow_Mag0";
		ammo = "B_9x21_Ball_Tracer_Yellow";
		lastRoundsTracer = 4;
	};
	class RPG32_F: CA_LauncherMagazine
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_CfgMagazines_LAW0";
		model = "\A3\weapons_f\launchers\RPG32\pg32v_rocket_item.p3d";
		picture = "\A3\Weapons_F\launchers\RPG32\data\UI\gear_rpg32_rocket_ca.paa";
		initSpeed = 140;
		descriptionShort = "$STR_A3_CfgMagazines_LAW1";
		displaynameshort = "$STR_A3_CFGMAGAZINES_TITAN_AT_DNS";
		ammo = "R_PG32V_F";
		type = "2*		256";
		mass = 60;
	};
	class RPG32_HE_F: RPG32_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_RPG32_AA_F0";
		displayNameShort = "$STR_A3_CfgMagazines_50Rnd_120mm_Mo_shells_dns";
		descriptionShort = "$STR_A3_CfgMagazines_LAW2";
		model = "\A3\weapons_f\launchers\RPG32\tbg32v_rocket_item.p3d";
		picture = "\A3\Weapons_F\launchers\RPG32\data\UI\gear_tbg32v_rocket_ca.paa";
		ammo = "R_TBG32V_F";
		mass = 40;
	};
	class NLAW_F: CA_LauncherMagazine
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_CfgMagazines_NLAW0";
		descriptionShort = "$STR_A3_CfgMagazines_NLAW1";
		displaynameshort = "$STR_A3_CFGMAGAZINES_TITAN_AT_DNS";
		ammo = "M_NLAW_AT_F";
		type = "3 * 		256";
		picture = "\A3\weapons_f\launchers\nlaw\data\UI\gear_nlaw_rocket_ca.paa";
		modelSpecial = "\A3\weapons_f\launchers\nlaw\nlaw_loaded_F";
		model = "\A3\weapons_f\launchers\nlaw\nlaw_proxy";
		initSpeed = 40;
		maxLeadSpeed = 27.7778;
		mass = 80;
	};
	class 1Rnd_HE_Grenade_shell: CA_Magazine
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		type = 16;
		displayName = "$STR_A3_CfgMagazines_1Rnd_HE_Grenade_shell0";
		displayNameShort = "$STR_A3_CfgMagazines_1Rnd_HE_Grenade_shell_dns";
		picture = "\A3\Weapons_f\Data\ui\gear_UGL_slug_CA.paa";
		ammo = "G_40mm_HE";
		initSpeed = 80;
		count = 1;
		nameSound = "";
		descriptionShort = "$STR_A3_CfgMagazines_1Rnd_HE_Grenade_shell1";
		mass = 4;
		modelSpecial = "\a3\Weapons_F\MagazineProxies\mag_40x36_HE_1rnd.p3d";
		modelSpecialIsProxy = 1;
		deleteIfEmpty = 0;
	};
	class 3Rnd_HE_Grenade_shell: 1Rnd_HE_Grenade_shell
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 3;
		displayName = "$STR_A3_CfgMagazines_3Rnd_HE_Grenade_shell0";
		descriptionShort = "$STR_A3_CfgMagazines_3Rnd_HE_Grenade_shell1";
		mass = 12;
	};
	class 1Rnd_Smoke_Grenade_shell: 1Rnd_HE_Grenade_shell
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_1Rnd_Smoke_Grenade_shell0";
		picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_white_CA.paa";
		ammo = "G_40mm_Smoke";
		descriptionShort = "$STR_A3_CfgMagazines_1Rnd_Smoke_Grenade_shell1";
		displayNameShort = "$STR_A3_CfgMagazines_SmokeShell_dns";
	};
	class 3Rnd_Smoke_Grenade_shell: 1Rnd_Smoke_Grenade_shell
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 3;
		displayName = "$STR_A3_CfgMagazines_3Rnd_Smoke_Grenade_shell0";
		descriptionShort = "$STR_A3_CfgMagazines_3Rnd_Smoke_Grenade_shell1";
		mass = 12;
	};
	class 1Rnd_SmokeRed_Grenade_shell: 1Rnd_Smoke_Grenade_shell
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_1Rnd_SmokeRed_Grenade_shell0";
		picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_red_CA.paa";
		ammo = "G_40mm_SmokeRed";
		displayNameShort = "$STR_A3_CFGMAGAZINES_SMOKESHELLRED_DNS";
		descriptionShort = "$STR_A3_CfgMagazines_1Rnd_SmokeRed_Grenade_shell1";
	};
	class 3Rnd_SmokeRed_Grenade_shell: 1Rnd_SmokeRed_Grenade_shell
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 3;
		displayName = "$STR_A3_CfgMagazines_3Rnd_SmokeRed_Grenade_shell0";
		descriptionShort = "$STR_A3_CfgMagazines_3Rnd_SmokeRed_Grenade_shell1";
		mass = 12;
	};
	class 1Rnd_SmokeGreen_Grenade_shell: 1Rnd_Smoke_Grenade_shell
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_1Rnd_SmokeGreen_Grenade_shell0";
		picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_green_CA.paa";
		ammo = "G_40mm_SmokeGreen";
		displayNameShort = "$STR_A3_CFGMAGAZINES_SMOKESHELLGREEN_DNS";
		descriptionShort = "$STR_A3_CfgMagazines_1Rnd_SmokeGreen_Grenade_shell1";
	};
	class 3Rnd_SmokeGreen_Grenade_shell: 1Rnd_SmokeGreen_Grenade_shell
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 3;
		displayName = "$STR_A3_CfgMagazines_3Rnd_SmokeGreen_Grenade_shell0";
		descriptionShort = "$STR_A3_CfgMagazines_3Rnd_SmokeGreen_Grenade_shell1";
		mass = 12;
	};
	class 1Rnd_SmokeYellow_Grenade_shell: 1Rnd_Smoke_Grenade_shell
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_1Rnd_SmokeYellow_Grenade_shell0";
		picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_yellow_CA.paa";
		ammo = "G_40mm_SmokeYellow";
		displayNameShort = "$STR_A3_CFGMAGAZINES_SMOKESHELLYELLOW_DNS";
		descriptionShort = "$STR_A3_CfgMagazines_1Rnd_SmokeYellow_Grenade_shell1";
	};
	class 3Rnd_SmokeYellow_Grenade_shell: 1Rnd_SmokeYellow_Grenade_shell
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 3;
		displayName = "$STR_A3_CfgMagazines_3Rnd_SmokeYellow_Grenade_shell0";
		descriptionShort = "$STR_A3_CfgMagazines_3Rnd_SmokeYellow_Grenade_shell1";
		mass = 12;
	};
	class 1Rnd_SmokePurple_Grenade_shell: 1Rnd_Smoke_Grenade_shell
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_1Rnd_SmokePurple_Grenade_shell0";
		picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_purple_CA.paa";
		ammo = "G_40mm_SmokePurple";
		displayNameShort = "$STR_A3_CFGMAGAZINES_SMOKESHELLPURPLE_DNS";
		descriptionShort = "$STR_A3_CfgMagazines_1Rnd_SmokePurple_Grenade_shell1";
	};
	class 3Rnd_SmokePurple_Grenade_shell: 1Rnd_SmokePurple_Grenade_shell
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 3;
		displayName = "$STR_A3_CfgMagazines_3Rnd_SmokePurple_Grenade_shell0";
		descriptionShort = "$STR_A3_CfgMagazines_3Rnd_SmokePurple_Grenade_shell1";
		mass = 12;
	};
	class 1Rnd_SmokeBlue_Grenade_shell: 1Rnd_Smoke_Grenade_shell
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_1Rnd_SmokeBlue_Grenade_shell0";
		picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_blue_CA.paa";
		ammo = "G_40mm_SmokeBlue";
		displayNameShort = "$STR_A3_CFGMAGAZINES_SMOKESHELLBLUE_DNS";
		descriptionShort = "$STR_A3_CfgMagazines_1Rnd_SmokeBlue_Grenade_shell1";
	};
	class 3Rnd_SmokeBlue_Grenade_shell: 1Rnd_SmokeBlue_Grenade_shell
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 3;
		displayName = "$STR_A3_CfgMagazines_3Rnd_SmokeBlue_Grenade_shell0";
		descriptionShort = "$STR_A3_CfgMagazines_3Rnd_SmokeBlue_Grenade_shell1";
		mass = 12;
	};
	class 1Rnd_SmokeOrange_Grenade_shell: 1Rnd_Smoke_Grenade_shell
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_1Rnd_SmokeOrange_Grenade_shell0";
		picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_orange_CA.paa";
		ammo = "G_40mm_SmokeOrange";
		displayNameShort = "$STR_A3_CFGMAGAZINES_1RND_SMOKEORANGE_GRENADE_SHELL_DNS";
		descriptionShort = "$STR_A3_CfgMagazines_1Rnd_SmokeOrange_Grenade_shell1";
	};
	class 3Rnd_SmokeOrange_Grenade_shell: 1Rnd_SmokeOrange_Grenade_shell
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 3;
		displayName = "$STR_A3_CfgMagazines_3Rnd_SmokeOrange_Grenade_shell0";
		descriptionShort = "$STR_A3_CfgMagazines_3Rnd_SmokeOrange_Grenade_shell1";
		mass = 12;
	};
	class HandGrenade: CA_Magazine
	{
		author = "$STR_A3_Bohemia_Interactive";
		mass = 10;
		scope = 2;
		value = 1;
		displayName = "$STR_A3_CfgMagazines_HandGrenade0";
		picture = "\A3\Weapons_F\Data\UI\gear_M67_CA.paa";
		model = "\A3\Weapons_f\ammo\Handgrenade";
		type = 256;
		ammo = "GrenadeHand";
		count = 1;
		initSpeed = 18;
		nameSound = "handgrenade";
		maxLeadSpeed = 6.94444;
		descriptionShort = "$STR_A3_CfgMagazines_HandGrenade1";
		displayNameShort = "$STR_A3_CfgMagazines_HandGrenade_dns";
	};
	class MiniGrenade: CA_Magazine
	{
		author = "$STR_A3_Bohemia_Interactive";
		mass = 6;
		scope = 2;
		value = 1;
		displayName = "$STR_A3_CfgMagazines_MiniGrenade0";
		model = "\A3\Weapons_f\ammo\mini_frag";
		picture = "\A3\Weapons_F\Data\UI\gear_M67_CA.paa";
		type = 256;
		ammo = "mini_Grenade";
		count = 1;
		initSpeed = 26;
		nameSound = "handgrenade";
		maxLeadSpeed = 6.94444;
		descriptionShort = "$STR_A3_CfgMagazines_MiniGrenade1";
		displayNameShort = "$STR_A3_CfgMagazines_MiniGrenade_dns";
	};
	class HandGrenade_Stone: HandGrenade
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 1;
		displayName = "$STR_A3_CfgMagazines_HandGrenade_Stone0";
		value = 0.1;
		ammo = "GrenadeHand_stone";
		descriptionShort = "$STR_A3_CfgMagazines_HandGrenade_Stone1";
		displayNameShort = "$STR_A3_CfgMagazines_HandGrenade_Stone_dns";
	};
	class SmokeShell: HandGrenade
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_SmokeShell0";
		picture = "\A3\Weapons_f\data\ui\gear_smokegrenade_white_ca.paa";
		model = "\A3\Weapons_f\ammo\smokegrenade_white";
		value = 2;
		ammo = "SmokeShell";
		nameSoundWeapon = "smokeshell";
		nameSound = "smokeshell";
		descriptionShort = "$STR_A3_CfgMagazines_SmokeShell1";
		displayNameShort = "$STR_A3_CfgMagazines_SmokeShell_dns";
		mass = 4;
		initSpeed = 22;
	};
	class SmokeShellRed: SmokeShell
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_SmokeShellRed0";
		displayNameShort = "$STR_A3_CfgMagazines_SmokeShellRed_dns";
		picture = "\A3\Weapons_f\data\ui\gear_smokegrenade_red_ca.paa";
		model = "\A3\Weapons_f\ammo\smokegrenade_red";
		ammo = "SmokeShellRed";
		descriptionShort = "$STR_A3_CfgMagazines_SmokeShellRed1";
	};
	class SmokeShellGreen: SmokeShell
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_SmokeShellGreen0";
		displayNameShort = "$STR_A3_CFGMAGAZINES_SMOKESHELLGREEN_DNS";
		picture = "\A3\Weapons_f\data\ui\gear_smokegrenade_green_ca.paa";
		model = "\A3\Weapons_f\ammo\smokegrenade_green";
		ammo = "SmokeShellGreen";
		descriptionShort = "$STR_A3_CfgMagazines_SmokeShellGreen1";
	};
	class SmokeShellYellow: SmokeShell
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_SmokeShellYellow0";
		displayNameShort = "$STR_A3_CfgMagazines_SmokeShellYellow_dns";
		picture = "\A3\Weapons_f\data\ui\gear_smokegrenade_yellow_ca.paa";
		model = "\A3\Weapons_f\ammo\smokegrenade_yellow";
		ammo = "SmokeShellYellow";
		descriptionShort = "$STR_A3_CfgMagazines_SmokeShellYellow1";
	};
	class SmokeShellPurple: SmokeShell
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_SmokeShellPurple0";
		displayNameShort = "$STR_A3_CfgMagazines_SmokeShellPurple_dns";
		picture = "\A3\Weapons_f\data\ui\gear_smokegrenade_purple_ca.paa";
		model = "\A3\Weapons_f\ammo\smokegrenade_purple";
		ammo = "SmokeShellPurple";
		descriptionShort = "$STR_A3_CfgMagazines_SmokeShellPurple1";
	};
	class SmokeShellBlue: SmokeShell
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_SmokeShellBlue0";
		displayNameShort = "$STR_A3_CfgMagazines_SmokeShellBlue_dns";
		ammo = "SmokeShellBlue";
		picture = "\A3\Weapons_f\data\ui\gear_smokegrenade_blue_ca.paa";
		model = "\A3\Weapons_f\ammo\smokegrenade_blue";
		descriptionShort = "$STR_A3_CfgMagazines_SmokeShellBlue1";
	};
	class SmokeShellOrange: SmokeShell
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_SmokeShellOrange0";
		displayNameShort = "$STR_A3_CfgMagazines_SmokeShellOrange_dns";
		ammo = "SmokeShellOrange";
		picture = "\A3\Weapons_f\data\ui\gear_smokegrenade_orange_ca.paa";
		model = "\A3\Weapons_f\ammo\smokegrenade_orange";
		descriptionShort = "$STR_A3_CfgMagazines_SmokeShellOrange1";
	};
	class Chemlight_green: SmokeShell
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CFGMAGAZINES_CHEMLIGHT0";
		picture = "\A3\Weapons_F\Data\UI\M_chemlight_green_CA.paa";
		model = "\A3\Weapons_f\chemlight\chemlight_green";
		value = 2;
		initSpeed = 14;
		ammo = "Chemlight_green";
		nameSoundWeapon = "Chemlight";
		nameSound = "Chemlight";
		descriptionShort = "$STR_A3_CfgMagazines_Chemlight1";
		displayNameShort = "$STR_A3_CFGMAGAZINES_CHEMLIGHT_DNS";
		mass = 2;
	};
	class Chemlight_red: Chemlight_green
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CFGMAGAZINES_CHEMLIGHT_RED0";
		ammo = "Chemlight_red";
		descriptionShort = "$STR_A3_CfgMagazines_Chemlight_red1";
		model = "\A3\Weapons_f\chemlight\chemlight_red";
		displayNameShort = "$STR_A3_CFGMAGAZINES_CHEMLIGHTT_RED_DNS";
		picture = "\A3\Weapons_F\Data\UI\M_chemlight_red_CA.paa";
	};
	class Chemlight_yellow: Chemlight_green
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CFGMAGAZINES_CHEMLIGHT_YELLOW0";
		ammo = "Chemlight_yellow";
		descriptionShort = "$STR_A3_CfgMagazines_Chemlight_yellow1";
		model = "\A3\Weapons_f\chemlight\chemlight_yellow";
		displayNameShort = "$STR_A3_CFGMAGAZINES_CHEMLIGHTT_YELLOW_DNS";
		picture = "\A3\Weapons_F\Data\UI\M_chemlight_yellow_CA.paa";
	};
	class Chemlight_blue: Chemlight_green
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CFGMAGAZINES_CHEMLIGHT_BLUE0";
		ammo = "Chemlight_blue";
		descriptionShort = "$STR_A3_CfgMagazines_Chemlight_blue1";
		model = "\A3\Weapons_f\chemlight\chemlight_blue";
		displayNameShort = "$STR_A3_CFGMAGAZINES_CHEMLIGHTT_BLUE_DNS";
		picture = "\A3\Weapons_F\Data\UI\M_chemlight_blue_CA.paa";
	};
	class 60Rnd_CMFlareMagazine: CA_Magazine
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 60;
		ammo = "CMflareAmmo";
		initSpeed = 30;
	};
	class 120Rnd_CMFlareMagazine: 60Rnd_CMFlareMagazine
	{
		count = 120;
	};
	class 240Rnd_CMFlareMagazine: 60Rnd_CMFlareMagazine
	{
		count = 240;
	};
	class 60Rnd_CMFlare_Chaff_Magazine: 60Rnd_CMFlareMagazine
	{
		ammo = "CMflare_Chaff_Ammo";
	};
	class 120Rnd_CMFlare_Chaff_Magazine: 60Rnd_CMFlare_Chaff_Magazine
	{
		count = 120;
	};
	class 240Rnd_CMFlare_Chaff_Magazine: 60Rnd_CMFlare_Chaff_Magazine
	{
		count = 240;
	};
	class 192Rnd_CMFlare_Chaff_Magazine: 60Rnd_CMFlare_Chaff_Magazine
	{
		count = 192;
	};
	class 168Rnd_CMFlare_Chaff_Magazine: 60Rnd_CMFlare_Chaff_Magazine
	{
		count = 168;
	};
	class 300Rnd_CMFlare_Chaff_Magazine: 60Rnd_CMFlare_Chaff_Magazine
	{
		count = 300;
	};
	class SmokeLauncherMag: VehicleMagazine
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		ammo = "SmokeLauncherAmmo";
		count = 2;
		nameSound = "smokeshell";
		initSpeed = 14;
	};
	class SmokeLauncherMag_Single: SmokeLauncherMag
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 1;
	};
	class SmokeLauncherMag_boat: VehicleMagazine
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		ammo = "SmokeLauncherAmmo_boat";
		count = 2;
		nameSound = "smokeshell";
		initSpeed = 14;
	};
	class 200Rnd_65x39_Belt: VehicleMagazine
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		count = 200;
		ammo = "B_65x39_Caseless";
		initSpeed = 825;
		maxLeadSpeed = 36.1111;
		tracersEvery = 5;
		nameSound = "mgun";
		displayName = "$STR_A3_CfgMagazines_200Rnd_65x39_Belt0";
		descriptionShort = "$STR_A3_CfgMagazines_200Rnd_65x39_Belt1";
	};
	class 200Rnd_65x39_Belt_Tracer_Red: 200Rnd_65x39_Belt
	{
		author = "$STR_A3_Bohemia_Interactive";
		ammo = "B_65x39_Caseless";
		tracersEvery = 1;
		displayName = "$STR_A3_CfgMagazines_200Rnd_65x39_Belt_Tracer_Red0";
		descriptionShort = "$STR_A3_CfgMagazines_200Rnd_65x39_Belt_Tracer_Red1";
		displaynameshort = "$STR_A3_tracer_dns";
	};
	class 200Rnd_65x39_Belt_Tracer_Green: 200Rnd_65x39_Belt
	{
		author = "$STR_A3_Bohemia_Interactive";
		ammo = "B_65x39_Case_green";
		tracersEvery = 1;
		displayName = "$STR_A3_CfgMagazines_200Rnd_65x39_Belt_Tracer_Green0";
		descriptionShort = "$STR_A3_CfgMagazines_200Rnd_65x39_Belt_Tracer_Green1";
		displaynameshort = "$STR_A3_tracer_dns";
	};
	class 200Rnd_65x39_Belt_Tracer_Yellow: 200Rnd_65x39_Belt
	{
		author = "$STR_A3_Bohemia_Interactive";
		ammo = "B_65x39_Case_yellow";
		tracersEvery = 1;
		displayName = "$STR_A3_CfgMagazines_200Rnd_65x39_Belt_Tracer_Yellow0";
		descriptionShort = "$STR_A3_CfgMagazines_200Rnd_65x39_Belt_Tracer_Yellow1";
		displaynameshort = "$STR_A3_tracer_dns";
	};
	class 1000Rnd_65x39_Belt: 200Rnd_65x39_Belt
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 1000;
		displayName = "$STR_A3_CfgMagazines_1000Rnd_65x39_Belt0";
		descriptionShort = "$STR_A3_CfgMagazines_1000Rnd_65x39_Belt1";
	};
	class 1000Rnd_65x39_Belt_Tracer_Red: 1000Rnd_65x39_Belt
	{
		author = "$STR_A3_Bohemia_Interactive";
		tracersEvery = 1;
		ammo = "B_65x39_Caseless";
		displayName = "$STR_A3_CfgMagazines_1000Rnd_65x39_Belt_Tracer_Red0";
		descriptionShort = "$STR_A3_CfgMagazines_1000Rnd_65x39_Belt_Tracer_Red1";
		displaynameshort = "$STR_A3_tracer_dns";
	};
	class 1000Rnd_65x39_Belt_Green: 1000Rnd_65x39_Belt
	{
		author = "$STR_A3_Bohemia_Interactive";
		ammo = "B_65x39_Case_green";
		displayNameMFDFormat = "П";
	};
	class 1000Rnd_65x39_Belt_Tracer_Green: 1000Rnd_65x39_Belt_Green
	{
		author = "$STR_A3_Bohemia_Interactive";
		tracersEvery = 1;
		displayName = "$STR_A3_CfgMagazines_1000Rnd_65x39_Belt_Tracer_Green0";
		descriptionShort = "$STR_A3_CfgMagazines_1000Rnd_65x39_Belt_Tracer_Green1";
		displaynameshort = "$STR_A3_tracer_dns";
	};
	class 1000Rnd_65x39_Belt_Yellow: 1000Rnd_65x39_Belt
	{
		author = "$STR_A3_Bohemia_Interactive";
		ammo = "B_65x39_Case_Yellow";
		displayNameMFDFormat = "LMG";
	};
	class 1000Rnd_65x39_Belt_Tracer_Yellow: 1000Rnd_65x39_Belt_Yellow
	{
		author = "$STR_A3_Bohemia_Interactive";
		tracersEvery = 1;
		displayName = "$STR_A3_CfgMagazines_1000Rnd_65x39_Belt_Tracer_Yellow0";
		descriptionShort = "$STR_A3_CfgMagazines_1000Rnd_65x39_Belt_Tracer_Yellow1";
		displaynameshort = "$STR_A3_tracer_dns";
	};
	class 2000Rnd_65x39_Belt: 200Rnd_65x39_Belt
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 2000;
		displayName = "$STR_A3_CfgMagazines_2000Rnd_65x39_Belt0";
		descriptionShort = "$STR_A3_CfgMagazines_2000Rnd_65x39_Belt1";
		displayNameMFDFormat = "LMG";
	};
	class 2000Rnd_65x39_Belt_Tracer_Red: 2000Rnd_65x39_Belt
	{
		author = "$STR_A3_Bohemia_Interactive";
		tracersEvery = 1;
		ammo = "B_65x39_Minigun_Caseless_Red_splash";
		displayName = "$STR_A3_CfgMagazines_2000Rnd_65x39_Belt_Tracer_Red0";
		descriptionShort = "$STR_A3_CfgMagazines_2000Rnd_65x39_Belt_Tracer_Red1";
		displaynameshort = "$STR_A3_tracer_dns";
		weight = 30;
	};
	class 2000Rnd_65x39_Belt_Green: 2000Rnd_65x39_Belt
	{
		author = "$STR_A3_Bohemia_Interactive";
		ammo = "B_65x39_Case_Green";
	};
	class 2000Rnd_65x39_Belt_Tracer_Green: 2000Rnd_65x39_Belt_Green
	{
		author = "$STR_A3_Bohemia_Interactive";
		tracersEvery = 1;
		displayName = "$STR_A3_CfgMagazines_2000Rnd_65x39_Belt_Tracer_Green0";
		descriptionShort = "$STR_A3_CfgMagazines_2000Rnd_65x39_Belt_Tracer_Green1";
		displaynameshort = "$STR_A3_tracer_dns";
		weight = 30;
	};
	class 2000Rnd_65x39_Belt_Tracer_Green_Splash: 2000Rnd_65x39_Belt_Tracer_Green
	{
		author = "$STR_A3_Bohemia_Interactive";
		ammo = "B_65x39_Minigun_Caseless_Green_splash";
	};
	class 2000Rnd_65x39_Belt_Yellow: 2000Rnd_65x39_Belt
	{
		author = "$STR_A3_Bohemia_Interactive";
		ammo = "B_65x39_Case_Yellow";
	};
	class 2000Rnd_65x39_Belt_Tracer_Yellow: 2000Rnd_65x39_Belt_Yellow
	{
		author = "$STR_A3_Bohemia_Interactive";
		tracersEvery = 1;
		displayName = "$STR_A3_CfgMagazines_2000Rnd_65x39_Belt_Tracer_Yellow0";
		descriptionShort = "$STR_A3_CfgMagazines_2000Rnd_65x39_Belt_Tracer_Yellow1";
		displaynameshort = "$STR_A3_tracer_dns";
	};
	class 2000Rnd_65x39_Belt_Tracer_Yellow_Splash: 2000Rnd_65x39_Belt_Tracer_Yellow
	{
		author = "$STR_A3_Bohemia_Interactive";
		ammo = "B_65x39_Minigun_Caseless_Yellow_splash";
	};
	class 5000Rnd_762x51_Belt: 2000Rnd_65x39_Belt
	{
		author = "$STR_A3_Bohemia_Interactive";
		ammo = "B_762x51_Minigun_Tracer_Red_splash";
		displayName = "$STR_A3_CfgMagazines_2000Rnd_762x45_Belt0";
		descriptionShort = "$STR_A3_CfgMagazines_2000Rnd_762x45_Belt1";
		tracersEvery = 1;
		count = 5000;
		initSpeed = 860;
		weight = 128;
	};
	class 5000Rnd_762x51_Yellow_Belt: 5000Rnd_762x51_Belt
	{
		author = "$STR_A3_Bohemia_Interactive";
		ammo = "B_762x51_Minigun_Tracer_Yellow_splash";
	};
	class 500Rnd_127x99_mag: VehicleMagazine
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		count = 500;
		ammo = "B_127x99_Ball";
		initSpeed = 910;
		maxLeadSpeed = 36.1111;
		tracersEvery = 4;
		nameSound = "mgun";
		displayName = "$STR_A3_CfgMagazines_500Rnd_127x99_mag0";
		descriptionShort = "$STR_A3_CfgMagazines_500Rnd_127x99_mag1";
		muzzleImpulseFactor[] = {0.05,0.05};
	};
	class 500Rnd_127x99_mag_Tracer_Red: 500Rnd_127x99_mag
	{
		author = "$STR_A3_Bohemia_Interactive";
		ammo = "B_127x99_Ball_Tracer_Red";
		displayName = "$STR_A3_CfgMagazines_500Rnd_127x99_mag_Tracer_Red0";
		descriptionShort = "$STR_A3_CfgMagazines_500Rnd_127x99_mag_Tracer_Red1";
		displaynameshort = "$STR_A3_tracer_dns";
		displayNameMFDFormat = "HMG";
	};
	class 500Rnd_127x99_mag_Tracer_Green: 500Rnd_127x99_mag
	{
		author = "$STR_A3_Bohemia_Interactive";
		ammo = "B_127x99_Ball_Tracer_Green";
		displayName = "$STR_A3_CfgMagazines_500Rnd_127x99_mag_Tracer_Green0";
		descriptionShort = "$STR_A3_CfgMagazines_500Rnd_127x99_mag_Tracer_Green1";
		displaynameshort = "$STR_A3_tracer_dns";
		displayNameMFDFormat = "П";
	};
	class 500Rnd_127x99_mag_Tracer_Yellow: 500Rnd_127x99_mag
	{
		author = "$STR_A3_Bohemia_Interactive";
		ammo = "B_127x99_Ball_Tracer_Yellow";
		displayName = "$STR_A3_CfgMagazines_500Rnd_127x99_mag_Tracer_Yellow0";
		descriptionShort = "$STR_A3_CfgMagazines_500Rnd_127x99_mag_Tracer_Yellow1";
		displaynameshort = "$STR_A3_tracer_dns";
		displayNameMFDFormat = "HMG";
	};
	class 200Rnd_127x99_mag: 500Rnd_127x99_mag
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 200;
		tracersEvery = 3;
		displayName = "$STR_A3_CfgMagazines_200Rnd_127x99_mag0";
		descriptionShort = "$STR_A3_CfgMagazines_200Rnd_127x99_mag1";
	};
	class 200Rnd_127x99_mag_Tracer_Red: 200Rnd_127x99_mag
	{
		author = "$STR_A3_Bohemia_Interactive";
		ammo = "B_127x99_Ball_Tracer_Red";
		displayName = "$STR_A3_CfgMagazines_200Rnd_127x99_mag_Tracer_Red0";
		descriptionShort = "$STR_A3_CfgMagazines_200Rnd_127x99_mag_Tracer_Red1";
		displaynameshort = "$STR_A3_tracer_dns";
		displayNameMFDFormat = "HMG";
	};
	class 200Rnd_127x99_mag_Tracer_Green: 200Rnd_127x99_mag
	{
		author = "$STR_A3_Bohemia_Interactive";
		ammo = "B_127x99_Ball_Tracer_Green";
		displayName = "$STR_A3_CfgMagazines_200Rnd_127x99_mag_Tracer_Green0";
		descriptionShort = "$STR_A3_CfgMagazines_200Rnd_127x99_mag_Tracer_Green1";
		displaynameshort = "$STR_A3_tracer_dns";
		displayNameMFDFormat = "П";
	};
	class 200Rnd_127x99_mag_Tracer_Yellow: 200Rnd_127x99_mag
	{
		author = "$STR_A3_Bohemia_Interactive";
		ammo = "B_127x99_Ball_Tracer_Yellow";
		displayName = "$STR_A3_CfgMagazines_200Rnd_127x99_mag_Tracer_Yellow0";
		descriptionShort = "$STR_A3_CfgMagazines_200Rnd_127x99_mag_Tracer_Yellow1";
		displaynameshort = "$STR_A3_tracer_dns";
		displayNameMFDFormat = "HMG";
	};
	class 100Rnd_127x99_mag: 500Rnd_127x99_mag
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 100;
		displayName = "$STR_A3_CfgMagazines_100Rnd_127x99_mag0";
		descriptionShort = "$STR_A3_CfgMagazines_100Rnd_127x99_mag1";
	};
	class 100Rnd_127x99_mag_Tracer_Red: 100Rnd_127x99_mag
	{
		author = "$STR_A3_Bohemia_Interactive";
		ammo = "B_127x99_Ball_Tracer_Red";
		displayName = "$STR_A3_CfgMagazines_100Rnd_127x99_mag_Tracer_Red0";
		descriptionShort = "$STR_A3_CfgMagazines_100Rnd_127x99_mag_Tracer_Red1";
		displaynameshort = "$STR_A3_tracer_dns";
	};
	class 100Rnd_127x99_mag_Tracer_Green: 100Rnd_127x99_mag
	{
		author = "$STR_A3_Bohemia_Interactive";
		ammo = "B_127x99_Ball_Tracer_Green";
		displayName = "$STR_A3_CfgMagazines_100Rnd_127x99_mag_Tracer_Green0";
		descriptionShort = "$STR_A3_CfgMagazines_100Rnd_127x99_mag_Tracer_Green1";
		displaynameshort = "$STR_A3_tracer_dns";
	};
	class 100Rnd_127x99_mag_Tracer_Yellow: 100Rnd_127x99_mag
	{
		author = "$STR_A3_Bohemia_Interactive";
		ammo = "B_127x99_Ball_Tracer_Yellow";
		displayName = "$STR_A3_CfgMagazines_100Rnd_127x99_mag_Tracer_Yellow0";
		descriptionShort = "$STR_A3_CfgMagazines_100Rnd_127x99_mag_Tracer_Yellow1";
		displaynameshort = "$STR_A3_tracer_dns";
	};
	class 450Rnd_127x108_Ball: VehicleMagazine
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		count = 450;
		ammo = "B_127x108_Ball";
		initSpeed = 845;
		maxLeadSpeed = 36.1111;
		tracersEvery = 4;
		nameSound = "mgun";
		displayName = "$STR_A3_CfgMagazines_450Rnd_127x108_Ball0";
		muzzleImpulseFactor[] = {0.05,0.05};
	};
	class 150Rnd_127x108_Ball: 450Rnd_127x108_Ball
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 150;
	};
	class 50Rnd_127x108_Ball: 450Rnd_127x108_Ball
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 50;
	};
	class 200Rnd_40mm_G_belt: VehicleMagazine
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		ammo = "G_40mm_HEDP";
		initSpeed = 241;
		maxLeadSpeed = 25;
		nameSound = "";
		count = 200;
		displayName = "$STR_A3_CfgMagazines_200Rnd_40mm_G_belt0";
		descriptionShort = "$STR_A3_CfgMagazines_200Rnd_40mm_G_belt1";
		muzzleImpulseFactor[] = {0.1,0.1};
	};
	class 96Rnd_40mm_G_belt: 200Rnd_40mm_G_belt
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 96;
		displayNameMFDFormat = "GMG";
	};
	class 64Rnd_40mm_G_belt: 200Rnd_40mm_G_belt
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 64;
	};
	class 32Rnd_40mm_G_belt: 200Rnd_40mm_G_belt
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 32;
	};
	class 200Rnd_20mm_G_belt: VehicleMagazine
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		ammo = "G_20mm_HE";
		initSpeed = 400;
		maxLeadSpeed = 25;
		nameSound = "";
		count = 200;
		displayName = "$STR_A3_CfgMagazines_200Rnd_20mm_G_belt0";
		descriptionShort = "$STR_A3_CfgMagazines_200Rnd_20mm_G_belt1";
		muzzleImpulseFactor[] = {0.1,0.1};
	};
	class 40Rnd_20mm_G_belt: 200Rnd_20mm_G_belt
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 40;
		displayName = "$STR_A3_CfgMagazines_40Rnd_20mm_G_belt0";
		displayNameShort = "$STR_A3_CfgMagazines_40Rnd_20mm_G_belt_dns";
		descriptionShort = "$STR_A3_CfgMagazines_40Rnd_20mm_G_belt1";
	};
	class 24Rnd_PG_missiles: VehicleMagazine
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		count = 24;
		ammo = "M_PG_AT";
		displayName = "$STR_A3_CfgMagazines_24Rnd_PG_missiles0";
		displayNameShort = "$STR_A3_CfgMagazines_24Rnd_PG_missiles_dns";
		descriptionShort = "$STR_A3_cfgMagazine_DAGR_tooltip";
		initSpeed = 0;
		maxLeadSpeed = 41.6667;
		nameSound = "missiles";
	};
	class 12Rnd_PG_missiles: 24Rnd_PG_missiles
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 12;
		displayName = "$STR_A3_CfgMagazines_12Rnd_PG_missiles0";
		displayNameShort = "$STR_A3_CfgMagazines_12Rnd_PG_missiles_dns";
		weight = 72;
	};
	class 24Rnd_missiles: VehicleMagazine
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		count = 24;
		ammo = "M_AT";
		displayName = "$STR_A3_CfgMagazines_24Rnd_PuG_missiles0";
		displayNameShort = "$STR_A3_CfgMagazines_24Rnd_PuG_missiles_dns";
		descriptionShort = "$STR_A3_cfgMagazine_DAR_tooltip";
		initSpeed = 0;
		maxLeadSpeed = 41.6667;
		nameSound = "rockets";
		weight = 144;
	};
	class 12Rnd_missiles: 24Rnd_missiles
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 12;
	};
	class 32Rnd_155mm_Mo_shells: VehicleMagazine
	{
		author = "$STR_A3_Bohemia_Interactive";
		initSpeed = 810;
		displayNameShort = "$STR_A3_CfgMagazines_50Rnd_120mm_Mo_shells_dns";
		scope = 2;
		displayName = "$STR_A3_CfgMagazines_50Rnd_120mm_Mo_shells0";
		displayNameMFDFormat = "HE";
		ammo = "Sh_155mm_AMOS";
		count = 32;
		nameSound = "heat";
		muzzleImpulseFactor[] = {1.5,30.0};
	};
	class 32Rnd_155mm_Mo_shells_O: 32Rnd_155mm_Mo_shells
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayNameMFDFormat = "ОФ";
	};
	class 8Rnd_82mm_Mo_shells: 32Rnd_155mm_Mo_shells
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_cfgmagazines_8rnd_82mm_mo_shells0";
		displayNameShort = "$STR_A3_cfgmagazines_8rnd_82mm_mo_shells_dns";
		count = 8;
		ammo = "Sh_82mm_AMOS";
		muzzleImpulseFactor[] = {0.0,0.0};
		initSpeed = 200;
	};
	class 8Rnd_82mm_Mo_Flare_white: 8Rnd_82mm_Mo_shells
	{
		author = "$STR_A3_Bohemia_Interactive";
		ammo = "Flare_82mm_AMOS_White";
		displayName = "$STR_A3_CfgMagazines_8Rnd_82mm_Mo_Flare_white0";
		displayNameShort = "$STR_A3_CfgMagazines_8Rnd_82mm_Mo_Flare_white_dns";
	};
	class 8Rnd_82mm_Mo_Smoke_white: 8Rnd_82mm_Mo_shells
	{
		author = "$STR_A3_Bohemia_Interactive";
		ammo = "Smoke_82mm_AMOS_White";
		displayName = "$STR_A3_CfgMagazines_8Rnd_82mm_Mo_Smoke_white0";
		displayNameShort = "$STR_A3_CfgMagazines_SmokeShell_dns";
	};
	class 8Rnd_82mm_Mo_guided: 8Rnd_82mm_Mo_shells
	{
		author = "$STR_A3_Bohemia_Interactive";
		ammo = "Sh_82mm_AMOS_guided";
		displayName = "$STR_A3_CfgMagazines_8Rnd_82mm_Mo_guided0";
		displayNameShort = "$STR_A3_CfgMagazines_8Rnd_82mm_Mo_guided_dns";
	};
	class 8Rnd_82mm_Mo_LG: 8Rnd_82mm_Mo_shells
	{
		author = "$STR_A3_Bohemia_Interactive";
		ammo = "Sh_82mm_AMOS_LG";
		displayName = "$STR_A3_CfgMagazines_8Rnd_82mm_Mo_LG0";
		displayNameShort = "$STR_A3_CfgMagazines_8Rnd_82mm_Mo_LG_dns";
	};
	class 6Rnd_155mm_Mo_smoke: 32Rnd_155mm_Mo_shells
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 6;
		ammo = "Smoke_120mm_AMOS_White";
		displayName = "$STR_A3_CfgMagazines_10Rnd_120mm_Mo_smoke0";
		displayNameShort = "$STR_A3_CfgMagazines_SmokeShell_dns";
		displayNameMFDFormat = "SMOKE";
	};
	class 6Rnd_155mm_Mo_smoke_O: 6Rnd_155mm_Mo_smoke
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayNameMFDFormat = "ДЫМ";
	};
	class 2Rnd_155mm_Mo_guided: 6Rnd_155mm_Mo_smoke
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 2;
		ammo = "Sh_155mm_AMOS_guided";
		displayName = "$STR_A3_CfgMagazines_10Rnd_120mm_Mo_guided0";
		displayNameShort = "$STR_A3_CfgMagazines_10Rnd_120mm_Mo_guided0";
		displayNameMFDFormat = "GUIDED";
	};
	class 2Rnd_155mm_Mo_guided_O: 2Rnd_155mm_Mo_guided
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayNameMFDFormat = "КОФ";
	};
	class 4Rnd_155mm_Mo_guided: 2Rnd_155mm_Mo_guided
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 4;
	};
	class 4Rnd_155mm_Mo_guided_O: 2Rnd_155mm_Mo_guided
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayNameMFDFormat = "КОФ";
		count = 4;
	};
	class 2Rnd_155mm_Mo_LG: 6Rnd_155mm_Mo_smoke
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 2;
		ammo = "Sh_155mm_AMOS_LG";
		displayName = "$STR_A3_CfgMagazines_10Rnd_120mm_Mo_LG0";
		displayNameShort = "$STR_A3_CfgMagazines_10Rnd_120mm_Mo_LG0";
		displayNameMFDFormat = "LASER GUID";
	};
	class 4Rnd_155mm_Mo_LG: 2Rnd_155mm_Mo_LG
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 4;
		displayName = "$STR_A3_CfgMagazines_10Rnd_120mm_Mo_LG0";
		displayNameShort = "$STR_A3_CfgMagazines_10Rnd_120mm_Mo_LG0";
	};
	class 4Rnd_155mm_Mo_LG_O: 2Rnd_155mm_Mo_LG
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 4;
		displayName = "$STR_A3_CfgMagazines_10Rnd_120mm_Mo_LG0";
		displayNameShort = "$STR_A3_CfgMagazines_10Rnd_120mm_Mo_LG0";
		displayNameMFDFormat = "ЛАЗ.НАВЕД.";
	};
	class 6Rnd_155mm_Mo_mine: 6Rnd_155mm_Mo_smoke
	{
		author = "$STR_A3_Bohemia_Interactive";
		ammo = "Mine_155mm_AMOS_range";
		displayName = "$STR_A3_CfgMagazines_10Rnd_120mm_Mo_mine0";
		displayNameShort = "$STR_A3_CfgMagazines_10Rnd_120mm_Mo_mine0";
		displayNameMFDFormat = "MINE";
	};
	class 6Rnd_155mm_Mo_mine_O: 6Rnd_155mm_Mo_mine
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayNameMFDFormat = "МИНЫ";
	};
	class 6Rnd_155mm_Mo_AT_mine: 6Rnd_155mm_Mo_smoke
	{
		author = "$STR_A3_Bohemia_Interactive";
		ammo = "AT_Mine_155mm_AMOS_range";
		displayName = "$STR_A3_at_mine_cluster_0";
		displayNameShort = "$STR_A3_at_mine_cluster_0";
		displayNameMFDFormat = "AT MINE";
	};
	class 6Rnd_155mm_Mo_AT_mine_O: 6Rnd_155mm_Mo_AT_mine
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayNameMFDFormat = "ПТ МИНЫ";
	};
	class 2Rnd_155mm_Mo_Cluster: 6Rnd_155mm_Mo_smoke
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 2;
		ammo = "Cluster_155mm_AMOS";
		displayName = "$STR_A3_CfgMagazines_10Rnd_120mm_Mo_Cluster0";
		displayNameShort = "$STR_A3_CfgMagazines_10Rnd_120mm_Mo_Cluster0";
		displayNameMFDFormat = "CLUSTER";
	};
	class 2Rnd_155mm_Mo_Cluster_O: 2Rnd_155mm_Mo_Cluster
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayNameMFDFormat = "КАССЕТНЫЙ";
	};
	class UGL_FlareWhite_F: CA_Magazine
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		type = 16;
		displayName = "$STR_A3_CfgMagazines_UGL_FlareWhite_F_test1";
		displayNameShort = "$STR_A3_CfgMagazines_UGL_FlareWhite_F_dns";
		picture = "\A3\Weapons_F\Data\UI\gear_UGL_Flare_CA.paa";
		model = "\A3\Weapons_F\Ammo\UGL_Flare";
		ammo = "F_40mm_White";
		initSpeed = 80;
		count = 1;
		nameSound = "";
		descriptionShort = "$STR_A3_CfgMagazines_UGL_FlareWhite_F1";
		weaponPoolAvailable = 1;
		mass = 4;
	};
	class 3Rnd_UGL_FlareWhite_F: UGL_FlareWhite_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 3;
		displayName = "$STR_A3_cfgmagazines_3rnd_ugl_flarewhite_f_test";
		displayNameShort = "$STR_A3_CfgMagazines_UGL_FlareWhite_F_dns";
		descriptionShort = "$STR_a3_cfgmagazines_3rnd_ugl_flarewhite_f1";
		mass = 12;
	};
	class UGL_FlareGreen_F: UGL_FlareWhite_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_UGL_FlareGreen_F0";
		displayNameShort = "$STR_A3_CfgMagazines_UGL_FlareGreen_F_dns";
		ammo = "F_40mm_Green";
		picture = "\A3\Weapons_F\Data\UI\gear_UGL_Flare_Green_CA.paa";
		descriptionShort = "$STR_A3_CfgMagazines_UGL_FlareGreen_F1";
	};
	class 3Rnd_UGL_FlareGreen_F: UGL_FlareGreen_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 3;
		displayName = "$STR_a3_cfgmagazines_3rnd_ugl_flaregreen_f0";
		descriptionShort = "$STR_a3_cfgmagazines_3rnd_ugl_flaregreen_f1";
		displayNameShort = "$STR_A3_CfgMagazines_UGL_FlareGreen_F_dns";
		mass = 12;
	};
	class UGL_FlareRed_F: UGL_FlareWhite_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_UGL_FlareRed_F0";
		ammo = "F_40mm_Red";
		picture = "\A3\Weapons_F\Data\UI\gear_UGL_Flare_Red_CA.paa";
		descriptionShort = "$STR_A3_CfgMagazines_UGL_FlareRed_F1";
		displayNameShort = "$STR_A3_CfgMagazines_UGL_FlareRed_F_dns";
	};
	class 3Rnd_UGL_FlareRed_F: UGL_FlareRed_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 3;
		displayName = "$STR_a3_cfgmagazines_3rnd_ugl_flarered_f0";
		descriptionShort = "$STR_a3_cfgmagazines_3rnd_ugl_flarered_f1";
		displayNameShort = "$STR_A3_CfgMagazines_UGL_FlareRed_F_dns";
		mass = 12;
	};
	class UGL_FlareYellow_F: UGL_FlareWhite_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_UGL_FlareYellow_F0";
		ammo = "F_40mm_Yellow";
		picture = "\A3\Weapons_F\Data\UI\gear_UGL_Flare_yelow_CA.paa";
		descriptionShort = "$STR_A3_CfgMagazines_UGL_FlareYellow_F1";
		displayNameShort = "$STR_a3_cfgmagazines_ugl_flareyellow_f_dns";
	};
	class 3Rnd_UGL_FlareYellow_F: UGL_FlareYellow_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 3;
		displayName = "$STR_a3_cfgmagazines_3rnd_ugl_flareyellow_f0";
		descriptionShort = "$STR_a3_cfgmagazines_3rnd_ugl_flareyellow_f1";
		displayNameShort = "$STR_a3_cfgmagazines_ugl_flareyellow_f_dns";
		mass = 12;
	};
	class UGL_FlareCIR_F: UGL_FlareWhite_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_UGL_FlareCIR_F0";
		ammo = "F_40mm_CIR";
		picture = "\A3\Weapons_F\Data\UI\gear_UGL_Flare_purple_CA.paa";
		descriptionShort = "$STR_A3_CfgMagazines_UGL_FlareCIR_F1";
		displayNameShort = "$STR_A3_CfgMagazines_UGL_FlareCIR_F_dns";
	};
	class 3Rnd_UGL_FlareCIR_F: UGL_FlareCIR_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 3;
		displayName = "$STR_a3_cfgmagazines_3rnd_ugl_flarecir_f0";
		descriptionShort = "$STR_a3_cfgmagazines_3rnd_ugl_flarecir_f1";
		displayNameShort = "$STR_a3_cfgmagazines_3rnd_ugl_flarecir_f_dns";
		mass = 12;
	};
	class FlareWhite_F: CA_Magazine
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		type = 16;
		displayName = "$STR_A3_CfgMagazines_FlareWhite_F0";
		picture = "\A3\Weapons_F\Data\UI\gear_flare_white_ca.paa";
		model = "\A3\weapons_f\ammo\flare_white";
		ammo = "F_20mm_White";
		initSpeed = 80;
		count = 1;
		nameSound = "";
		descriptionShort = "$STR_A3_CfgMagazines_FlareWhite_F1";
		displayNameShort = "$STR_A3_CfgMagazines_FlareWhite_F_dns";
		weaponPoolAvailable = 1;
		mass = 4;
	};
	class FlareGreen_F: FlareWhite_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_FlareGreen_F0";
		ammo = "F_20mm_Green";
		picture = "\A3\Weapons_F\Data\UI\gear_flare_green_ca.paa";
		model = "\A3\weapons_f\ammo\flare_green";
		descriptionShort = "$STR_A3_CfgMagazines_FlareGreen_F1";
		displayNameShort = "$STR_A3_CfgMagazines_FlareGreen_F_dns";
	};
	class FlareRed_F: FlareWhite_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_FlareRed_F0";
		ammo = "F_20mm_Red";
		picture = "\A3\Weapons_F\Data\UI\gear_flare_red_ca.paa";
		model = "\A3\weapons_f\ammo\flare_red";
		descriptionShort = "$STR_A3_CfgMagazines_FlareRed_F1";
		displayNameShort = "$STR_A3_CfgMagazines_FlareRed_F_dns";
	};
	class FlareYellow_F: FlareWhite_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_FlareYellow_F0";
		ammo = "F_20mm_Yellow";
		picture = "\A3\Weapons_F\Data\UI\gear_flare_yellow_ca.paa";
		model = "\A3\weapons_f\ammo\flare_yellow";
		descriptionShort = "$STR_A3_CfgMagazines_FlareYellow_F1";
		displayNameShort = "$STR_A3_CfgMagazines_FlareYellow_F_dns";
	};
	class Laserbatteries: CA_Magazine
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_CfgMagazines_Laserbatteries0";
		picture = "\A3\Weapons_F\Data\UI\M_battery_CA.paa";
		ammo = "Laserbeam";
		count = 1;
		initSpeed = 30;
		nameSound = "laserdesignator";
		descriptionShort = "$STR_A3_CfgMagazines_Laserbatteries1";
		mass = 6;
	};
	class 30Rnd_45ACP_Mag_SMG_01: 30Rnd_9x21_Mag
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_30Rnd_9x21_Mag_SMG_010";
		descriptionShort = "$STR_A3_CfgMagazines_30Rnd_9x21_Mag_SMG_011";
		picture = "\A3\Weapons_F\Data\UI\M_30Rnd_45ACP_CA.paa";
		mass = 10;
		tracersEvery = 0;
		lastRoundsTracer = 4;
		ammo = "B_45ACP_Ball";
		initSpeed = 280;
	};
	class 30Rnd_45ACP_Mag_SMG_01_Tracer_Green: 30Rnd_45ACP_Mag_SMG_01
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_30Rnd_9x21_Mag_SMG_01_Tracer_Green0";
		tracersEvery = 1;
		lastRoundsTracer = 30;
		descriptionShort = "$STR_A3_CfgMagazines_30Rnd_9x21_Mag_SMG_01_Tracer_Green1";
		displaynameshort = "$STR_A3_tracer_dns";
		ammo = "B_45ACP_Ball_Green";
	};
	class 30Rnd_45ACP_Mag_SMG_01_Tracer_Red: 30Rnd_45ACP_Mag_SMG_01
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CFGMAGAZINES_30RND_9X21_MAG_SMG_01_TRACER_RED0";
		tracersEvery = 1;
		lastRoundsTracer = 30;
		descriptionShort = "$STR_A3_CFGMAGAZINES_30RND_9X21_MAG_SMG_01_TRACER_RED1";
	};
	class 30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow: 30Rnd_45ACP_Mag_SMG_01
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CFGMAGAZINES_30RND_9X21_MAG_SMG_01_TRACER_YELLOW0";
		tracersEvery = 1;
		lastRoundsTracer = 30;
		descriptionShort = "$STR_A3_CFGMAGAZINES_30RND_9X21_MAG_SMG_01_TRACER_YELLOW1";
		ammo = "B_45ACP_Ball_Yellow";
	};
	class 9Rnd_45ACP_Mag: 30Rnd_45ACP_Mag_SMG_01
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_Weapons_F_Beta_CfgMagazines_9Rnd_45ACP_Mag0";
		descriptionShort = "$STR_A3_Weapons_F_Beta_CfgMagazines_9Rnd_45ACP_Mag1";
		count = 9;
		mass = 6;
		lastRoundsTracer = 0;
		initSpeed = 280;
		ammo = "B_45ACP_Ball_Green";
	};
	class 150Rnd_762x51_Box: CA_Magazine
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_CfgMagazines_150Rnd_762x51_Box0";
		descriptionShort = "$STR_A3_CfgMagazines_150Rnd_762x51_Box1";
		picture = "\A3\Weapons_F_Beta\Data\UI\m_150Rnd_762x51_CA.paa";
		count = 150;
		type = "2*		256";
		ammo = "B_762x51_Tracer_Green";
		initSpeed = 860;
		tracersEvery = 5;
		lastRoundsTracer = 4;
		nameSound = "mgun";
		mass = 50;
	};
	class 150Rnd_762x51_Box_Tracer: 150Rnd_762x51_Box
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_150Rnd_762x51_Box_Tracer0";
		displayNameShort = "Tracer";
		descriptionShort = "$STR_A3_CfgMagazines_150Rnd_762x51_Box_Tracer1";
		picture = "\A3\Weapons_F_Beta\Data\UI\m_150Rnd_762x51_tracer_CA.paa";
		tracersEvery = 1;
	};
	class 150Rnd_762x54_Box: 150Rnd_762x51_Box
	{
		author = "$STR_A3_Bohemia_Interactive";
		ammo = "B_762x54_Tracer_Green";
	};
	class 150Rnd_762x54_Box_Tracer: 150Rnd_762x54_Box
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_150Rnd_762x51_Box_Tracer0";
		displayNameShort = "Tracer";
		descriptionShort = "$STR_A3_CfgMagazines_150Rnd_762x51_Box_Tracer1";
		picture = "\A3\Weapons_F_Beta\Data\UI\m_150Rnd_762x51_tracer_CA.paa";
		tracersEvery = 1;
	};
	class Titan_AA: CA_LauncherMagazine
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_CfgMagazines_Titan_AA0";
		displayNameShort = "$STR_A3_CfgMagazines_Titan_AA_dns";
		ammo = "M_Titan_AA";
		type = "6 * 		256";
		picture = "\A3\Weapons_F_beta\Launchers\titan\Data\UI\gear_titan_missile_atl_CA.paa";
		model = "\A3\Weapons_F_beta\Launchers\titan\titan_missile_atl";
		initSpeed = 18;
		maxLeadSpeed = 277.778;
		descriptionShort = "$STR_A3_CfgMagazines_Titan_AA1";
		mass = 100;
	};
	class Titan_AP: Titan_AA
	{
		author = "$STR_A3_Bohemia_Interactive";
		ammo = "M_Titan_AP";
		displayName = "$STR_A3_CfgMagazines_Titan_AP0";
		displayNameShort = "$STR_A3_CfgMagazines_Titan_AP_dns";
		descriptionShort = "$STR_A3_CfgMagazines_Titan_AP1";
		model = "\A3\Weapons_F_beta\Launchers\titan\titan_missile_ap";
		picture = "\A3\Weapons_F_beta\Launchers\titan\Data\UI\gear_titan_missile_ap_CA.paa";
		maxLeadSpeed = 27.7778;
		mass = 60;
	};
	class Titan_AT: Titan_AA
	{
		author = "$STR_A3_Bohemia_Interactive";
		ammo = "M_Titan_AT";
		displayName = "$STR_A3_CfgMagazines_Titan_AT0";
		displayNameShort = "$STR_A3_CfgMagazines_Titan_AT_dns";
		descriptionShort = "$STR_A3_CfgMagazines_Titan_AT1";
		model = "\A3\Weapons_F_beta\Launchers\titan\titan_missile_at";
		picture = "\A3\Weapons_F_beta\Launchers\titan\Data\UI\gear_titan_missile_at_CA.paa";
		maxLeadSpeed = 27.7778;
		mass = 100;
	};
	class 300Rnd_20mm_shells: VehicleMagazine
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_CfgMagazines_1000Rnd_20mm_shells0";
		displayNameShort = "$STR_A3_CfgMagazines_300Rnd_20mm_shells_dns";
		ammo = "B_20mm";
		count = 300;
		initSpeed = 1030;
		maxLeadSpeed = 83.3333;
		tracersEvery = 5;
		nameSound = "cannon";
		muzzleImpulseFactor[] = {0.1,0.8};
	};
	class 1000Rnd_20mm_shells: 300Rnd_20mm_shells
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_1000Rnd_20mm_shells0";
		count = 1000;
		ammo = "B_20mm_Tracer_Red";
		weight = 126;
	};
	class 2000Rnd_20mm_shells: 300Rnd_20mm_shells
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_1000Rnd_20mm_shells0";
		count = 2000;
	};
	class 300Rnd_25mm_shells: VehicleMagazine
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_CfgMagazines_300Rnd_25mm_shells0";
		ammo = "B_25mm";
		count = 300;
		initSpeed = 1030;
		maxLeadSpeed = 83.3333;
		tracersEvery = 4;
		nameSound = "cannon";
		muzzleImpulseFactor[] = {0.1,0.8};
	};
	class 1000Rnd_25mm_shells: 300Rnd_25mm_shells
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_1000Rnd_25mm_shells0";
		count = 1000;
	};
	class 250Rnd_30mm_HE_shells: VehicleMagazine
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_CfgMagazines_250Rnd_30mm_HE_shells0";
		displayNameShort = "$STR_A3_CfgMagazines_250Rnd_30mm_HE_shells_dns";
		ammo = "B_30mm_HE";
		count = 250;
		initSpeed = 960;
		maxLeadSpeed = 83.3333;
		nameSound = "cannon";
		tracersEvery = 1;
		weight = 126;
		muzzleImpulseFactor[] = {1.0,4};
	};
	class 250Rnd_30mm_HE_shells_Tracer_Red: 250Rnd_30mm_HE_shells
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_CfgMagazines_250Rnd_30mm_HE_shells_Tracer_Red0";
		ammo = "B_30mm_HE_Tracer_Red";
		tracersEvery = 1;
		displayNameShort = "$STR_A3_CfgMagazines_30Rnd_120mm_HE_shells_dns";
	};
	class 250Rnd_30mm_HE_shells_Tracer_Green: 250Rnd_30mm_HE_shells
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_CFGMAGAZINES_250RND_30MM_HE_SHELLS_TRACER_GREEN0";
		ammo = "B_30mm_HE_Tracer_Green";
		tracersEvery = 1;
	};
	class 250Rnd_30mm_APDS_shells: 250Rnd_30mm_HE_shells
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_250Rnd_30mm_APDS_shells0";
		displayNameShort = "$STR_A3_CfgMagazines_250Rnd_30mm_APDS_shells_dns";
		ammo = "B_30mm_AP";
		initSpeed = 1120;
		muzzleImpulseFactor[] = {0.5,2};
	};
	class 250Rnd_30mm_APDS_shells_Tracer_Red: 250Rnd_30mm_APDS_shells
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_250Rnd_30mm_APDS_shells_Tracer_Red0";
		ammo = "B_30mm_AP_Tracer_Red";
		tracersEvery = 1;
	};
	class 250Rnd_30mm_APDS_shells_Tracer_Green: 250Rnd_30mm_APDS_shells
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CFGMAGAZINES_250RND_30MM_APDS_SHELLS_TRACER_GREEN0";
		ammo = "B_30mm_AP_Tracer_Green";
		tracersEvery = 1;
	};
	class 250Rnd_30mm_APDS_shells_Tracer_Yellow: 250Rnd_30mm_APDS_shells
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_250Rnd_30mm_APDS_shells_Tracer_Yellow0";
		ammo = "B_30mm_AP_Tracer_Yellow";
		tracersEvery = 1;
	};
	class 140Rnd_30mm_MP_shells: 250Rnd_30mm_HE_shells
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CFGMAGAZINES_140RND_30MM_MP_SHELLS_0";
		displayNameShort = "$STR_A3_CFGMAGAZINES_140RND_30MM_MP_SHELLS_DNS";
		ammo = "B_30mm_MP";
		initSpeed = 1070;
		count = 140;
	};
	class 140Rnd_30mm_MP_shells_Tracer_Red: 140Rnd_30mm_MP_shells
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_140Rnd_30mm_MP_shells_Tracer_Red0";
		ammo = "B_30mm_MP_Tracer_Red";
		displaynameshort = "$STR_A3_CFGMAGAZINES_140RND_30MM_MP_SHELLS_TRACER_RED_DNS";
		count = 140;
		displayNameMFDFormat = "ОФ";
	};
	class 140Rnd_30mm_MP_shells_Tracer_Green: 140Rnd_30mm_MP_shells_Tracer_Red
	{
		author = "$STR_A3_Bohemia_Interactive";
		ammo = "B_30mm_MP_Tracer_Green";
	};
	class 140Rnd_30mm_MP_shells_Tracer_Yellow: 140Rnd_30mm_MP_shells_Tracer_Red
	{
		author = "$STR_A3_Bohemia_Interactive";
		ammo = "B_30mm_MP_Tracer_Yellow";
		displayNameMFDFormat = "MP-T";
	};
	class 60Rnd_30mm_APFSDS_shells: 250Rnd_30mm_HE_shells
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CFGMAGAZINES_30MM_APFSD";
		displayNameShort = "$STR_A3_CFGMAGAZINES_APFSD0";
		ammo = "B_30mm_APFSDS";
		initSpeed = 1430;
		count = 60;
		muzzleImpulseFactor[] = {0.5,2};
	};
	class 60Rnd_30mm_APFSDS_shells_Tracer_Red: 60Rnd_30mm_APFSDS_shells
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CFGMAGAZINES_30MMAPDSFT";
		displaynameshort = "$STR_A3_CFGMAGAZINES_APFSD_T0";
		ammo = "B_30mm_APFSDS_Tracer_Red";
		tracersEvery = 1;
	};
	class 60Rnd_30mm_APFSDS_shells_Tracer_Green: 60Rnd_30mm_APFSDS_shells
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CFGMAGAZINES_30MM_APFSD";
		displaynameshort = "$STR_A3_CFGMAGAZINES_APFSD_T0";
		displayNameMFDFormat = "БР";
		ammo = "B_30mm_APFSDS_Tracer_Green";
		tracersEvery = 1;
	};
	class 60Rnd_30mm_APFSDS_shells_Tracer_Yellow: 60Rnd_30mm_APFSDS_shells
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CFGMAGAZINES_30MMAPDSFT";
		displaynameshort = "$STR_A3_CFGMAGAZINES_APFSD_T0";
		ammo = "B_30mm_APFSDS_Tracer_Yellow";
		tracersEvery = 1;
		displayNameMFDFormat = "APFSDS-T";
	};
	class 60Rnd_40mm_GPR_shells: VehicleMagazine
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_CFGMAGAZINES_40MMGPR";
		displayNameShort = "$STR_A3_CFGMAGAZINES_GPR";
		ammo = "B_40mm_GPR";
		count = 60;
		initSpeed = 1035;
		maxLeadSpeed = 83.3333;
		nameSound = "cannon";
		tracersEvery = 1;
		muzzleImpulseFactor[] = {1.0,6};
	};
	class 60Rnd_40mm_GPR_Tracer_Red_shells: 60Rnd_40mm_GPR_shells
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CFGMAGAZINES_40MMGPRT";
		displayNameShort = "$STR_A3_CFGMAGAZINES_GPRT";
		ammo = "B_40mm_GPR_Tracer_Red";
		displayNameMFDFormat = "GPR-T";
	};
	class 60Rnd_40mm_GPR_Tracer_Green_shells: 60Rnd_40mm_GPR_shells
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CFGMAGAZINES_40MMGPRT";
		displayNameShort = "$STR_A3_CFGMAGAZINES_GPRT";
		ammo = "B_40mm_GPR_Tracer_Green";
	};
	class 60Rnd_40mm_GPR_Tracer_Yellow_shells: 60Rnd_40mm_GPR_shells
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CFGMAGAZINES_40MMGPRT";
		displayNameShort = "$STR_A3_CFGMAGAZINES_GPRT";
		ammo = "B_40mm_GPR_Tracer_Yellow";
	};
	class 40Rnd_40mm_APFSDS_shells: 60Rnd_40mm_GPR_shells
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CFGMAGAZINES_40MM_APFSD";
		displayNameShort = "$STR_A3_CFGMAGAZINES_APFSD0";
		ammo = "B_40mm_APFSDS";
		initSpeed = 1600;
		count = 40;
		muzzleImpulseFactor[] = {0.5,2};
	};
	class 40Rnd_40mm_APFSDS_Tracer_Red_shells: 40Rnd_40mm_APFSDS_shells
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_40Rnd_40mm_APFSDS_Tracer_Red_shells0";
		displayNameShort = "$STR_A3_CFGMAGAZINES_APFSD_T0";
		ammo = "B_40mm_APFSDS_Tracer_Red";
		count = 40;
		displayNameMFDFormat = "APFSDS-T";
	};
	class 40Rnd_40mm_APFSDS_Tracer_Green_shells: 40Rnd_40mm_APFSDS_Tracer_Red_shells
	{
		author = "$STR_A3_Bohemia_Interactive";
		ammo = "B_40mm_APFSDS_Tracer_Green";
	};
	class 40Rnd_40mm_APFSDS_Tracer_Yellow_shells: 40Rnd_40mm_APFSDS_Tracer_Red_shells
	{
		author = "$STR_A3_Bohemia_Interactive";
		ammo = "B_40mm_APFSDS_Tracer_Yellow";
	};
	class 8Rnd_LG_scalpel: VehicleMagazine
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_CfgMagazines_8Rnd_LG_scalpel0";
		displayNameShort = "$STR_A3_CfgMagazines_8Rnd_LG_scalpel_dns";
		descriptionShort = "$STR_A3_cfgMagazine_Scalpel_tooltip";
		ammo = "M_Scalpel_AT";
		initSpeed = 0;
		count = 8;
		nameSound = "missiles";
		weight = 400;
	};
	class 6Rnd_LG_scalpel: 8Rnd_LG_scalpel
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 6;
	};
	class 2Rnd_LG_scalpel: 8Rnd_LG_scalpel
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 2;
	};
	class 2Rnd_LG_scalpel_hidden: 2Rnd_LG_scalpel
	{
		author = "$STR_A3_Bohemia_Interactive";
		ammo = "M_Scalpel_AT_hidden";
	};
	class 14Rnd_80mm_rockets: VehicleMagazine
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_CfgMagazines_14Rnd_80mm_rockets0";
		displayNameShort = "$STR_A3_CfgMagazines_14Rnd_80mm_rockets_dns";
		descriptionShort = "$STR_A3_cfgMagazine_Skyfire_tooltip";
		ammo = "R_80mm_HE";
		initSpeed = 44;
		maxLeadSpeed = 41.6667;
		count = 14;
		nameSound = "rockets";
	};
	class 38Rnd_80mm_rockets: 14Rnd_80mm_rockets
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 38;
		weight = 460;
	};
	class 12Rnd_230mm_rockets: 14Rnd_80mm_rockets
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_12Rnd_230mm_rockets0";
		displayNameMFDFormat = "AG";
		ammo = "R_230mm_HE";
		initSpeed = 850;
		count = 12;
	};
	class 12Rnd_230mm_rockets_cluster: 12Rnd_230mm_rockets
	{
		displayName = "$STR_A3_CfgMagazines_12Rnd_230mm_rockets_cluster0";
		displayNameShort = "Cluster";
		displayNameMFDFormat = "CLUSTER";
		ammo = "R_230mm_Cluster";
	};
	class 2Rnd_AAA_missiles: VehicleMagazine
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_CfgMagazines_2Rnd_AAA_missiles0";
		displayNameShort = "$STR_A3_CfgMagazines_2Rnd_AAA_missiles_dns";
		descriptionShort = "$STR_A3_cfgMagazine_ASRAAM_tooltip";
		ammo = "M_Air_AA";
		count = 2;
		initSpeed = 0;
		maxLeadSpeed = 694.444;
		nameSound = "missiles";
	};
	class 2Rnd_AAA_missiles_MI02: 2Rnd_AAA_missiles
	{
		author = "$STR_A3_Bohemia_Interactive";
		ammo = "M_Air_AA_MI02";
	};
	class 2Rnd_AAA_missiles_MI06: 2Rnd_AAA_missiles
	{
		author = "$STR_A3_Bohemia_Interactive";
		ammo = "M_Air_AA_MI06";
	};
	class 4Rnd_AAA_missiles: 2Rnd_AAA_missiles
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_4Rnd_AAA_missiles0";
		displayNameShort = "$STR_A3_CfgMagazines_4Rnd_AAA_missiles_dns";
		count = 4;
		weight = 360;
	};
	class 4Rnd_AAA_missiles_MI02: 4Rnd_AAA_missiles
	{
		author = "$STR_A3_Bohemia_Interactive";
		ammo = "M_Air_AA_MI02";
	};
	class 4Rnd_GAA_missiles: VehicleMagazine
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_CfgMagazines_4Rnd_GAA_missiles0";
		displayNameShort = "$STR_A3_CfgMagazines_4Rnd_GAA_missiles_dns";
		descriptionShort = "$STR_A3_cfgMagazine_Zephyr_tooltip";
		count = 4;
		ammo = "M_Zephyr";
		initSpeed = 25;
		maxLeadSpeed = 694.444;
		nameSound = "missiles";
	};
	class 4Rnd_Titan_long_missiles: 4Rnd_GAA_missiles
	{
		author = "$STR_A3_Bohemia_Interactive";
		ammo = "M_Titan_AA_long";
		displayName = "$STR_A3_MISSILES_TITAN0";
		displayNameShort = "$STR_A3_CfgMagazines_Titan_AA_dns";
		displayNameMFDFormat = "MISSILE";
	};
	class 4Rnd_Titan_long_missiles_O: 4Rnd_Titan_long_missiles
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayNameMFDFormat = "З-В РАКЕТА";
	};
	class 5Rnd_GAT_missiles: VehicleMagazine
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_MISSILES_TITAN0";
		displayNameShort = "$STR_A3_CFGMAGAZINES_TITAN_AT_DNS";
		count = 5;
		ammo = "M_Titan_AT_long";
		initSpeed = 36;
		maxLeadSpeed = 55.5556;
		nameSound = "missiles";
	};
	class 2Rnd_GAT_missiles: 5Rnd_GAT_missiles
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 2;
		displayNameMFDFormat = "MISSILE";
	};
	class 2Rnd_GAT_missiles_O: 2Rnd_GAT_missiles
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayNameMFDFormat = "Р";
	};
	class 30Rnd_120mm_HE_shells: VehicleMagazine
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_CfgMagazines_30Rnd_120mm_HE_shells0";
		displayNameShort = "$STR_A3_CfgMagazines_30Rnd_120mm_HE_shells_dns";
		ammo = "Sh_120mm_HE";
		count = 30;
		initSpeed = 1410;
		maxLeadSpeed = 25;
		tracersEvery = 0;
		nameSound = "cannon";
		muzzleImpulseFactor[] = {1.0,6};
	};
	class 30Rnd_120mm_HE_shells_Tracer_Red: 30Rnd_120mm_HE_shells
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CFGMAGAZINES_120MMHE";
		displayNameShort = "$STR_A3_CFGMAGAZINES_120MMHE_DNS";
		displayNameMFDFormat = "HE";
		ammo = "Sh_120mm_HE_Tracer_Red";
		tracersEvery = 1;
	};
	class 30Rnd_120mm_HE_shells_Tracer_Green: 30Rnd_120mm_HE_shells
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CFGMAGAZINES_120MMHE";
		displayNameShort = "$STR_A3_CFGMAGAZINES_120MMHE_DNS";
		ammo = "Sh_120mm_HE_Tracer_Green";
		tracersEvery = 1;
	};
	class 30Rnd_120mm_HE_shells_Tracer_Yellow: 30Rnd_120mm_HE_shells
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CFGMAGAZINES_120MMHE";
		displayNameShort = "$STR_A3_CFGMAGAZINES_120MMHE_DNS";
		displayNameMFDFormat = "HE";
		ammo = "Sh_120mm_HE_Tracer_Yellow";
		tracersEvery = 1;
	};
	class 16Rnd_120mm_HE_shells: 30Rnd_120mm_HE_shells
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 16;
		initSpeed = 1410;
	};
	class 16Rnd_120mm_HE_shells_Tracer_Red: 30Rnd_120mm_HE_shells_Tracer_Red
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 16;
		initSpeed = 1410;
	};
	class 16Rnd_120mm_HE_shells_Tracer_Green: 30Rnd_120mm_HE_shells_Tracer_Green
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 16;
		initSpeed = 1410;
	};
	class 16Rnd_120mm_HE_shells_Tracer_Yellow: 30Rnd_120mm_HE_shells_Tracer_Yellow
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 16;
		initSpeed = 1410;
	};
	class 14Rnd_120mm_HE_shells: 30Rnd_120mm_HE_shells
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 14;
		initSpeed = 1460;
	};
	class 14Rnd_120mm_HE_shells_Tracer_Red: 30Rnd_120mm_HE_shells_Tracer_Red
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 14;
		initSpeed = 1460;
	};
	class 14Rnd_120mm_HE_shells_Tracer_Green: 30Rnd_120mm_HE_shells_Tracer_Green
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 14;
		initSpeed = 1460;
	};
	class 14Rnd_120mm_HE_shells_Tracer_Yellow: 30Rnd_120mm_HE_shells_Tracer_Yellow
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 14;
		initSpeed = 1460;
	};
	class 12Rnd_120mm_HE_shells: 30Rnd_120mm_HE_shells
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 12;
		initSpeed = 1410;
	};
	class 12Rnd_120mm_HE_shells_Tracer_Red: 30Rnd_120mm_HE_shells_Tracer_Red
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 12;
		initSpeed = 1410;
	};
	class 12Rnd_120mm_HE_shells_Tracer_Green: 30Rnd_120mm_HE_shells_Tracer_Green
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 12;
		initSpeed = 1410;
	};
	class 12Rnd_120mm_HE_shells_Tracer_Yellow: 30Rnd_120mm_HE_shells_Tracer_Yellow
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 12;
		initSpeed = 1410;
	};
	class 8Rnd_120mm_HE_shells: 30Rnd_120mm_HE_shells
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 8;
		initSpeed = 1410;
	};
	class 8Rnd_120mm_HE_shells_Tracer_Red: 30Rnd_120mm_HE_shells_Tracer_Red
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 8;
		initSpeed = 1410;
	};
	class 8Rnd_120mm_HE_shells_Tracer_Green: 30Rnd_120mm_HE_shells_Tracer_Green
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 8;
		initSpeed = 1410;
	};
	class 8Rnd_120mm_HE_shells_Tracer_Yellow: 30Rnd_120mm_HE_shells_Tracer_Yellow
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 8;
		initSpeed = 1410;
	};
	class 30Rnd_120mm_APFSDS_shells: 30Rnd_120mm_HE_shells
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CFGMAGAZINES_120MMAPFSDS";
		displayNameShort = "$STR_A3_CFGMAGAZINES_APFSD0";
		ammo = "Sh_120mm_APFSDS";
		initSpeed = 1680;
		muzzleImpulseFactor[] = {0.5,3};
	};
	class 30Rnd_120mm_APFSDS_shells_Tracer_Red: 30Rnd_120mm_APFSDS_shells
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CFGMAGAZINES_120MMAPFSDST";
		displayNameShort = "$STR_A3_CFGMAGAZINES_APFSD_T0";
		displayNameMFDFormat = "APDS";
		ammo = "Sh_120mm_APFSDS_Tracer_Red";
		tracersEvery = 1;
	};
	class 30Rnd_120mm_APFSDS_shells_Tracer_Green: 30Rnd_120mm_APFSDS_shells
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CFGMAGAZINES_120MMAPFSDST";
		displayNameShort = "$STR_A3_CFGMAGAZINES_APFSD_T0";
		ammo = "Sh_120mm_APFSDS_Tracer_Green";
		tracersEvery = 1;
	};
	class 30Rnd_120mm_APFSDS_shells_Tracer_Yellow: 30Rnd_120mm_APFSDS_shells
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CFGMAGAZINES_120MMAPFSDST";
		displayNameShort = "$STR_A3_CFGMAGAZINES_APFSD_T0";
		displayNameMFDFormat = "APDS";
		ammo = "Sh_120mm_APFSDS_Tracer_Yellow";
		tracersEvery = 1;
	};
	class 32Rnd_120mm_APFSDS_shells: 30Rnd_120mm_APFSDS_shells
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 32;
		initSpeed = 1670;
	};
	class 32Rnd_120mm_APFSDS_shells_Tracer_Red: 30Rnd_120mm_APFSDS_shells_Tracer_Red
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 32;
		initSpeed = 1670;
	};
	class 32Rnd_120mm_APFSDS_shells_Tracer_Green: 30Rnd_120mm_APFSDS_shells_Tracer_Green
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 32;
		initSpeed = 1670;
	};
	class 32Rnd_120mm_APFSDS_shells_Tracer_Yellow: 30Rnd_120mm_APFSDS_shells_Tracer_Yellow
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 32;
		initSpeed = 1670;
	};
	class 28Rnd_120mm_APFSDS_shells: 30Rnd_120mm_APFSDS_shells
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 28;
		initSpeed = 1750;
	};
	class 28Rnd_120mm_APFSDS_shells_Tracer_Red: 30Rnd_120mm_APFSDS_shells_Tracer_Red
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 28;
		initSpeed = 1750;
	};
	class 28Rnd_120mm_APFSDS_shells_Tracer_Green: 30Rnd_120mm_APFSDS_shells_Tracer_Green
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 28;
		initSpeed = 1750;
	};
	class 28Rnd_120mm_APFSDS_shells_Tracer_Yellow: 30Rnd_120mm_APFSDS_shells_Tracer_Yellow
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 28;
		initSpeed = 1750;
	};
	class 24Rnd_120mm_APFSDS_shells: 30Rnd_120mm_APFSDS_shells
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 24;
		initSpeed = 1670;
	};
	class 24Rnd_120mm_APFSDS_shells_Tracer_Red: 30Rnd_120mm_APFSDS_shells_Tracer_Red
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 24;
		initSpeed = 1670;
	};
	class 24Rnd_120mm_APFSDS_shells_Tracer_Green: 30Rnd_120mm_APFSDS_shells_Tracer_Green
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 24;
		initSpeed = 1670;
	};
	class 24Rnd_120mm_APFSDS_shells_Tracer_Yellow: 30Rnd_120mm_APFSDS_shells_Tracer_Yellow
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 24;
		initSpeed = 1670;
	};
	class 20Rnd_120mm_APFSDS_shells: 30Rnd_120mm_APFSDS_shells
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 20;
		initSpeed = 1750;
	};
	class 20Rnd_120mm_APFSDS_shells_Tracer_Red: 30Rnd_120mm_APFSDS_shells_Tracer_Red
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 20;
		initSpeed = 1750;
	};
	class 20Rnd_120mm_APFSDS_shells_Tracer_Green: 30Rnd_120mm_APFSDS_shells_Tracer_Green
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 20;
		initSpeed = 1750;
	};
	class 20Rnd_120mm_APFSDS_shells_Tracer_Yellow: 30Rnd_120mm_APFSDS_shells_Tracer_Yellow
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 20;
		initSpeed = 1750;
	};
	class 12Rnd_120mm_APFSDS_shells: 30Rnd_120mm_APFSDS_shells
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 12;
		initSpeed = 1670;
	};
	class 12Rnd_120mm_APFSDS_shells_Tracer_Red: 30Rnd_120mm_APFSDS_shells_Tracer_Red
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 12;
		initSpeed = 1670;
	};
	class 12Rnd_120mm_APFSDS_shells_Tracer_Green: 30Rnd_120mm_APFSDS_shells_Tracer_Green
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 12;
		initSpeed = 1670;
	};
	class 12Rnd_120mm_APFSDS_shells_Tracer_Yellow: 30Rnd_120mm_APFSDS_shells_Tracer_Yellow
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 12;
		initSpeed = 1670;
	};
	class 20Rnd_120mm_HEAT_MP: VehicleMagazine
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_20Rnd_120mm_HEAT_MP0";
		displayNameShort = "$STR_A3_cfgmagazines_heat_mp_t0";
		ammo = "Sh_120mm_HEAT_MP";
		initSpeed = 1330;
		count = 20;
		maxLeadSpeed = 25;
		tracersEvery = 0;
		nameSound = "cannon";
		muzzleImpulseFactor[] = {0.5,3};
	};
	class 20Rnd_120mm_HEAT_MP_T_Red: 20Rnd_120mm_HEAT_MP
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_20Rnd_120mm_HEAT_MP0";
		displayNameShort = "$STR_A3_cfgmagazines_heat_mp_t0";
		ammo = "Sh_120mm_HEAT_MP_T_Red";
		tracersEvery = 1;
		displayNameMFDFormat = "HEAT";
	};
	class 20Rnd_120mm_HEAT_MP_T_Green: 20Rnd_120mm_HEAT_MP
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_20Rnd_120mm_HEAT_MP0";
		displayNameShort = "$STR_A3_cfgmagazines_heat_mp_t0";
		ammo = "Sh_120mm_HEAT_MP_T_Green";
		tracersEvery = 1;
	};
	class 20Rnd_120mm_HEAT_MP_T_Yellow: 20Rnd_120mm_HEAT_MP
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_20Rnd_120mm_HEAT_MP0";
		displayNameShort = "$STR_A3_cfgmagazines_heat_mp_t0";
		ammo = "Sh_120mm_HEAT_MP_T_Yellow";
		tracersEvery = 1;
		displayNameMFDFormat = "HEAT";
	};
	class 12Rnd_120mm_HEAT_MP: 20Rnd_120mm_HEAT_MP
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 12;
		initSpeed = 1330;
	};
	class 12Rnd_120mm_HEAT_MP_T_Red: 20Rnd_120mm_HEAT_MP_T_Red
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 12;
		initSpeed = 1330;
	};
	class 12Rnd_120mm_HEAT_MP_T_Green: 20Rnd_120mm_HEAT_MP_T_Green
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 12;
		initSpeed = 1330;
	};
	class 12Rnd_120mm_HEAT_MP_T_Yellow: 20Rnd_120mm_HEAT_MP_T_Yellow
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 12;
		initSpeed = 1330;
	};
	class 8Rnd_120mm_HEAT_MP: 20Rnd_120mm_HEAT_MP
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 8;
		initSpeed = 1330;
	};
	class 8Rnd_120mm_HEAT_MP_T_Red: 20Rnd_120mm_HEAT_MP_T_Red
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 8;
		initSpeed = 1330;
	};
	class 8Rnd_120mm_HEAT_MP_T_Green: 20Rnd_120mm_HEAT_MP_T_Green
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 8;
		initSpeed = 1330;
	};
	class 8Rnd_120mm_HEAT_MP_T_Yellow: 20Rnd_120mm_HEAT_MP_T_Yellow
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 8;
		initSpeed = 1330;
	};
	class 12Rnd_125mm_HE: 16Rnd_120mm_HE_shells
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_12Rnd_125mm_HE0";
		ammo = "Sh_125mm_HE";
		count = 12;
		initSpeed = 850;
		muzzleImpulseFactor[] = {1.0,8};
	};
	class 12Rnd_125mm_HE_T_Red: 16Rnd_120mm_HE_shells_Tracer_Red
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_12Rnd_125mm_HE_T0";
		ammo = "Sh_125mm_HE_T_Red";
		count = 12;
		initSpeed = 850;
		muzzleImpulseFactor[] = {1.0,8};
	};
	class 12Rnd_125mm_HE_T_Green: 16Rnd_120mm_HE_shells_Tracer_Green
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_12Rnd_125mm_HE_T0";
		ammo = "Sh_125mm_HE_T_Green";
		count = 12;
		initSpeed = 850;
		displayNameMFDFormat = "О";
		muzzleImpulseFactor[] = {1.0,8};
	};
	class 12Rnd_125mm_HE_T_Yellow: 16Rnd_120mm_HE_shells_Tracer_Yellow
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_12Rnd_125mm_HE_T0";
		ammo = "Sh_125mm_HE_T_Yellow";
		count = 12;
		initSpeed = 850;
	};
	class 8Rnd_125mm_HE: 12Rnd_125mm_HE
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 8;
		initSpeed = 1330;
	};
	class 8Rnd_125mm_HE_T_Red: 12Rnd_125mm_HE_T_Red
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 8;
		initSpeed = 1330;
	};
	class 8Rnd_125mm_HE_T_Green: 12Rnd_125mm_HE_T_Green
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 8;
		initSpeed = 1330;
	};
	class 8Rnd_125mm_HE_T_Yellow: 12Rnd_125mm_HE_T_Yellow
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 8;
		initSpeed = 1330;
	};
	class 20Rnd_125mm_APFSDS: VehicleMagazine
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_20Rnd_125mm_APFSDS0";
		displayNameShort = "$STR_A3_cfgmagazines_apfsd_t0";
		ammo = "Sh_125mm_APFSDS";
		initSpeed = 1700;
		count = 20;
		maxLeadSpeed = 25;
		tracersEvery = 0;
		nameSound = "cannon";
		muzzleImpulseFactor[] = {0.5,4};
	};
	class 20Rnd_125mm_APFSDS_T_Red: 20Rnd_125mm_APFSDS
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_20Rnd_125mm_APFSDS0";
		ammo = "Sh_125mm_APFSDS_T_Red";
		count = 20;
		tracersEvery = 1;
	};
	class 20Rnd_125mm_APFSDS_T_Green: 20Rnd_125mm_APFSDS
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_20Rnd_125mm_APFSDS0";
		displayNameMFDFormat = "БР";
		ammo = "Sh_125mm_APFSDS_T_Green";
		count = 20;
		tracersEvery = 1;
	};
	class 20Rnd_125mm_APFSDS_T_Yellow: 20Rnd_125mm_APFSDS
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_20Rnd_125mm_APFSDS0";
		ammo = "Sh_125mm_APFSDS_T_Yellow";
		count = 20;
		tracersEvery = 1;
	};
	class 24Rnd_125mm_APFSDS: 20Rnd_125mm_APFSDS
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 24;
		initSpeed = 1700;
	};
	class 24Rnd_125mm_APFSDS_T_Red: 20Rnd_125mm_APFSDS_T_Red
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 24;
		initSpeed = 1700;
	};
	class 24Rnd_125mm_APFSDS_T_Green: 20Rnd_125mm_APFSDS_T_Green
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 24;
		initSpeed = 1700;
	};
	class 24Rnd_125mm_APFSDS_T_Yellow: 20Rnd_125mm_APFSDS_T_Yellow
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 24;
		initSpeed = 1700;
	};
	class 16Rnd_125mm_APFSDS: 20Rnd_125mm_APFSDS
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 16;
		initSpeed = 1700;
	};
	class 16Rnd_125mm_APFSDS_T_Red: 20Rnd_125mm_APFSDS_T_Red
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 16;
		initSpeed = 1700;
	};
	class 16Rnd_125mm_APFSDS_T_Green: 20Rnd_125mm_APFSDS_T_Green
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 16;
		initSpeed = 1700;
	};
	class 16Rnd_125mm_APFSDS_T_Yellow: 20Rnd_125mm_APFSDS_T_Yellow
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 16;
		initSpeed = 1700;
	};
	class 12Rnd_125mm_HEAT: 12Rnd_125mm_HE
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_12Rnd_125mm_HEAT0";
		displayNameShort = "$STR_A3_HEAT_0";
		ammo = "Sh_125mm_HEAT";
		initSpeed = 915;
		muzzleImpulseFactor[] = {0.5,3};
	};
	class 12Rnd_125mm_HEAT_T_Red: 12Rnd_125mm_HEAT
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_12Rnd_125mm_HEAT_T0";
		displayNameShort = "$STR_A3_HEAT_T0";
		ammo = "Sh_125mm_HEAT_T_Red";
		tracersEvery = 1;
	};
	class 12Rnd_125mm_HEAT_T_Green: 12Rnd_125mm_HEAT
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_12Rnd_125mm_HEAT_T0";
		displayNameShort = "$STR_A3_HEAT_T0";
		ammo = "Sh_125mm_HEAT_T_Green";
		tracersEvery = 1;
		displayNameMFDFormat = "К";
	};
	class 12Rnd_125mm_HEAT_T_Yellow: 12Rnd_125mm_HEAT
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_12Rnd_125mm_HEAT_T0";
		displayNameShort = "$STR_A3_HEAT_T0";
		ammo = "Sh_125mm_HEAT_T_Yellow";
		tracersEvery = 1;
	};
	class 40Rnd_105mm_APFSDS: 24Rnd_125mm_APFSDS
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_40Rnd_105mm_APFSDS0";
		displayNameShort = "$STR_A3_CFGMAGAZINES_APFSD_T0";
		ammo = "Sh_105mm_APFSDS";
		initSpeed = 1505;
		count = 40;
		muzzleImpulseFactor[] = {0.5,3};
	};
	class 40Rnd_105mm_APFSDS_T_Red: 40Rnd_105mm_APFSDS
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_40Rnd_105mm_APFSDS_T0";
		displayNameShort = "$STR_A3_CFGMAGAZINES_APFSD_T0";
		displayNameMFDFormat = "APFSDS-T";
		ammo = "Sh_105mm_APFSDS_T_Red";
		tracersEvery = 1;
	};
	class 40Rnd_105mm_APFSDS_T_Green: 40Rnd_105mm_APFSDS
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_40Rnd_105mm_APFSDS_T0";
		displayNameShort = "$STR_A3_CFGMAGAZINES_APFSD_T0";
		ammo = "Sh_105mm_APFSDS_T_Green";
		tracersEvery = 1;
	};
	class 40Rnd_105mm_APFSDS_T_Yellow: 40Rnd_105mm_APFSDS
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_40Rnd_105mm_APFSDS_T0";
		displayNameShort = "$STR_A3_CFGMAGAZINES_APFSD0";
		ammo = "Sh_105mm_APFSDS_T_Yellow";
		tracersEvery = 1;
	};
	class 20Rnd_105mm_HEAT_MP: 12Rnd_125mm_HEAT
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CFGMAGAZINES_20RND_105MM_HEAT0";
		displayNameShort = "$STR_A3_CFGMAGAZINES_HEAT_MP0";
		ammo = "Sh_105mm_HEAT_MP";
		initSpeed = 1330;
		count = 20;
		muzzleImpulseFactor[] = {0.5,3};
	};
	class 20Rnd_105mm_HEAT_MP_T_Red: 20Rnd_105mm_HEAT_MP
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CFGMAGAZINES_12RND_105MM_HEAT_T0";
		displayNameShort = "$STR_A3_CFGMAGAZINES_HEAT_MP_T0";
		displayNameMFDFormat = "HEAT-MP-T";
		ammo = "Sh_105mm_HEAT_MP_T_Red";
		tracersEvery = 1;
	};
	class 20Rnd_105mm_HEAT_MP_T_Green: 20Rnd_105mm_HEAT_MP
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CFGMAGAZINES_12RND_105MM_HEAT_T0";
		displayNameShort = "$STR_A3_CFGMAGAZINES_HEAT_MP_T0";
		ammo = "Sh_105mm_HEAT_MP_T_Green";
		tracersEvery = 1;
	};
	class 20Rnd_105mm_HEAT_MP_T_Yellow: 20Rnd_105mm_HEAT_MP
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CFGMAGAZINES_12RND_105MM_HEAT_T0";
		displayNameShort = "$STR_A3_CFGMAGAZINES_HEAT_MP_T0";
		ammo = "Sh_105mm_HEAT_MP_T_Yellow";
		tracersEvery = 1;
	};
	class 680Rnd_35mm_AA_shells: VehicleMagazine
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_CfgMagazines_680Rnd_35mm_AA_shells0";
		displayNameShort = "$STR_A3_CfgMagazines_680Rnd_35mm_AA_shells_dns";
		ammo = "B_35mm_AA";
		count = 680;
		initSpeed = 1440;
		maxLeadSpeed = 416.667;
		tracersEvery = 3;
		nameSound = "cannon";
		muzzleImpulseFactor[] = {1.0,4};
	};
	class 680Rnd_35mm_AA_shells_Tracer_Red: 680Rnd_35mm_AA_shells
	{
		author = "$STR_A3_Bohemia_Interactive";
		ammo = "B_35mm_AA_Tracer_Red";
		displayNameMFDFormat = "AA SHELLS";
	};
	class 680Rnd_35mm_AA_shells_Tracer_Green: 680Rnd_35mm_AA_shells
	{
		author = "$STR_A3_Bohemia_Interactive";
		ammo = "B_35mm_AA_Tracer_Green";
		displayNameMFDFormat = "ОФЗТ";
	};
	class 680Rnd_35mm_AA_shells_Tracer_Yellow: 680Rnd_35mm_AA_shells
	{
		author = "$STR_A3_Bohemia_Interactive";
		ammo = "B_35mm_AA_Tracer_Yellow";
	};
	class 6Rnd_AAT_missiles: VehicleMagazine
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_CfgMagazines_6Rnd_AAT_missiles0";
		displayNameShort = "$STR_A3_CfgMagazines_6Rnd_AAT_missiles_dns";
		count = 6;
		ammo = "M_Air_AT";
		initSpeed = 0;
		maxLeadSpeed = 55.5556;
		nameSound = "missiles";
	};
	class 4Rnd_AAT_missiles: 6Rnd_AAT_missiles
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 4;
	};
	class 1Rnd_GAA_missiles: 4Rnd_GAA_missiles
	{
		author = "$STR_A3_Bohemia_Interactive";
		ammo = "M_Titan_AA_static";
		count = 1;
	};
	class 1Rnd_GAT_missiles: 5Rnd_GAT_missiles
	{
		author = "$STR_A3_Bohemia_Interactive";
		ammo = "M_Titan_AT_static";
		count = 1;
	};
	class 2Rnd_GBU12_LGB: VehicleMagazine
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_cfgmagazines_gbu120";
		descriptionShort = "$STR_A3_cfgMagazine_GBU12_tooltip";
		displayNameShort = "$STR_A3_cfgmagazines_gbu12_dns";
		ammo = "Bo_GBU12_LGB";
		initSpeed = 0;
		maxLeadSpeed = 25;
		count = 2;
		nameSound = "cannon";
	};
	class 2Rnd_GBU12_LGB_MI10: 2Rnd_GBU12_LGB
	{
		author = "$STR_A3_Bohemia_Interactive";
		ammo = "Bo_GBU12_LGB_MI10";
	};
	class 2Rnd_Mk82: VehicleMagazine
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		ammo = "Bo_Mk82";
		displayName = "$STR_A3_cfgmagazines_mk820";
		descriptionShort = "$STR_A3_cfgMagazine_Mk82_tooltip";
		displayNameShort = "$STR_A3_cfgmagazines_mk82_dns";
		initSpeed = 0;
		maxLeadSpeed = 25;
		count = 2;
		nameSound = "missiles";
	};
	class 2Rnd_Mk82_MI08: 2Rnd_Mk82
	{
		author = "$STR_A3_Bohemia_Interactive";
		ammo = "Bo_Mk82_MI08";
	};
	class 11Rnd_45ACP_Mag: CA_Magazine
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_CfgMagazines_11Rnd_45ACP_Mag0";
		picture = "\A3\weapons_f\data\UI\M_16Rnd_9x21_CA.paa";
		count = 11;
		ammo = "B_45ACP_Ball";
		initSpeed = 380;
		descriptionShort = "$STR_A3_CfgMagazines_11Rnd_45ACP_Mag1";
		mass = 7;
	};
	class 6Rnd_45ACP_Cylinder: 11Rnd_45ACP_Mag
	{
		author = "$STR_A3_Bohemia_Interactive";
		picture = "\A3\Weapons_F_EPA\Data\ui\M_6Rnd_revolver_CA.paa";
		displayName = "$STR_A3_CfgMagazines_6Rnd_45ACP_Cylinder0";
		descriptionShort = "$STR_A3_CfgMagazines_6Rnd_45ACP_Cylinder1";
		initSpeed = 480;
		count = 6;
		mass = 4;
	};
	class 10Rnd_762x51_Mag: 20Rnd_762x51_Mag
	{
		author = "$STR_A3_Bohemia_Interactive";
		picture = "\A3\Weapons_F_EPA\Data\ui\M_10Rnd_762x51_CA.paa";
		displayName = "$STR_A3_CfgMagazines_10Rnd_762x51_Mag0";
		initSpeed = 830;
		count = 10;
		descriptionShort = "$STR_A3_CfgMagazines_10Rnd_762x51_Mag1";
		mass = 8;
	};
	class 10Rnd_762x54_Mag: 10Rnd_762x51_Mag
	{
		author = "$STR_A3_Bohemia_Interactive";
		ammo = "B_762x54_Ball";
	};
	class 5Rnd_127x108_APDS_Mag: 5Rnd_127x108_Mag
	{
		author = "$STR_A3_Bohemia_Interactive";
		picture = "\A3\weapons_f\data\UI\M_5rnd_127x108_CA.paa";
		displayName = "$STR_A3_CfgMagazines_5Rnd_127x108_APDS_Mag0";
		displayNameShort = "$STR_A3_CfgMagazines_250Rnd_30mm_APDS_shells_dns";
		initSpeed = 1060;
		ammo = "B_127x108_APDS";
		descriptionShort = "$STR_A3_CfgMagazines_5Rnd_127x108_APDS_Mag1";
	};
	class B_IR_Grenade: CA_Magazine
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		value = 1;
		displayName = "$STR_A3_CfgMagazines_B_IR_Grenade0";
		picture = "\A3\Weapons_F_EPB\Ammo\Data\UI\gear_B_IRstrobe_CA.paa";
		model = "\A3\Weapons_F_EPB\Ammo\B_IRstrobe_F.p3d";
		ammo = "B_IRStrobe";
		count = 1;
		initSpeed = 18;
		nameSound = "handgrenade";
		maxLeadSpeed = 6.94444;
		descriptionShort = "$STR_A3_CfgMagazines_B_IR_Grenade1";
		displayNameShort = "$STR_A3_CFGMAGAZINES_IR_GRENADE_DNS";
	};
	class O_IR_Grenade: B_IR_Grenade
	{
		author = "$STR_A3_Bohemia_Interactive";
		ammo = "O_IRStrobe";
		displayName = "$STR_A3_CfgMagazines_O_IR_Grenade0";
		model = "\A3\Weapons_F_EPB\Ammo\O_IRstrobe_F.p3d";
		picture = "\A3\Weapons_F_EPB\Ammo\Data\UI\gear_O_IRstrobe_CA.paa";
		descriptionShort = "$STR_A3_CfgMagazines_O_IR_Grenade1";
	};
	class I_IR_Grenade: B_IR_Grenade
	{
		author = "$STR_A3_Bohemia_Interactive";
		ammo = "I_IRStrobe";
		displayName = "$STR_A3_CfgMagazines_I_IR_Grenade0";
		model = "\A3\Weapons_F_EPB\Ammo\I_IRstrobe_F.p3d";
		picture = "\A3\Weapons_F_EPB\Ammo\Data\UI\gear_I_IRstrobe_CA.paa";
		descriptionShort = "$STR_A3_CfgMagazines_I_IR_Grenade1";
	};
	class 200Rnd_762x51_Belt: VehicleMagazine
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		count = 200;
		ammo = "B_762x51_Ball";
		initSpeed = 860;
		maxLeadSpeed = 36.1111;
		tracersEvery = 5;
		lastRoundsTracer = 4;
		nameSound = "mgun";
		displayName = "$STR_A3_CfgMagazines_2000Rnd_762x45_Belt0";
		descriptionShort = "$STR_A3_CfgMagazines_2000Rnd_762x45_Belt1";
		displayNameMFDFormat = "COAX";
	};
	class 200Rnd_762x51_Belt_Red: 200Rnd_762x51_Belt
	{
		author = "$STR_A3_Bohemia_Interactive";
		ammo = "B_762x51_Tracer_Red";
	};
	class 200Rnd_762x51_Belt_T_Red: 200Rnd_762x51_Belt_Red
	{
		author = "$STR_A3_Bohemia_Interactive";
		tracersEvery = 1;
		displaynameshort = "$STR_A3_tracer_dns";
	};
	class 200Rnd_762x51_Belt_Green: 200Rnd_762x51_Belt
	{
		author = "$STR_A3_Bohemia_Interactive";
		ammo = "B_762x51_Tracer_Green";
		displayNameMFDFormat = "П";
	};
	class 200Rnd_762x51_Belt_T_Green: 200Rnd_762x51_Belt_Green
	{
		author = "$STR_A3_Bohemia_Interactive";
		tracersEvery = 1;
		displaynameshort = "$STR_A3_tracer_dns";
	};
	class 200Rnd_762x51_Belt_Yellow: 200Rnd_762x51_Belt
	{
		author = "$STR_A3_Bohemia_Interactive";
		ammo = "B_762x51_Tracer_Yellow";
	};
	class 200Rnd_762x51_Belt_T_Yellow: 200Rnd_762x51_Belt_Yellow
	{
		author = "$STR_A3_Bohemia_Interactive";
		tracersEvery = 1;
		displaynameshort = "$STR_A3_tracer_dns";
	};
	class 1000Rnd_762x51_Belt: 200Rnd_762x51_Belt
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 1000;
	};
	class 1000Rnd_762x51_Belt_Red: 1000Rnd_762x51_Belt
	{
		author = "$STR_A3_Bohemia_Interactive";
		ammo = "B_762x51_Tracer_Red";
	};
	class 1000Rnd_762x51_Belt_T_Red: 1000Rnd_762x51_Belt_Red
	{
		author = "$STR_A3_Bohemia_Interactive";
		tracersEvery = 1;
		displaynameshort = "$STR_A3_tracer_dns";
	};
	class 1000Rnd_762x51_Belt_Green: 1000Rnd_762x51_Belt
	{
		author = "$STR_A3_Bohemia_Interactive";
		ammo = "B_762x51_Tracer_Green";
		displayNameMFDFormat = "П";
	};
	class 1000Rnd_762x51_Belt_T_Green: 1000Rnd_762x51_Belt_Green
	{
		author = "$STR_A3_Bohemia_Interactive";
		tracersEvery = 1;
		displaynameshort = "$STR_A3_tracer_dns";
	};
	class 1000Rnd_762x51_Belt_Yellow: 1000Rnd_762x51_Belt
	{
		author = "$STR_A3_Bohemia_Interactive";
		ammo = "B_762x51_Tracer_Yellow";
		displayNameMFDFormat = "LMG";
	};
	class 1000Rnd_762x51_Belt_T_Yellow: 1000Rnd_762x51_Belt_Yellow
	{
		author = "$STR_A3_Bohemia_Interactive";
		tracersEvery = 1;
		displaynameshort = "$STR_A3_tracer_dns";
	};
	class 2000Rnd_762x51_Belt: 200Rnd_762x51_Belt
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 2000;
	};
	class 2000Rnd_762x51_Belt_Red: 2000Rnd_762x51_Belt
	{
		author = "$STR_A3_Bohemia_Interactive";
		ammo = "B_762x51_Tracer_Red";
	};
	class 2000Rnd_762x51_Belt_T_Red: 2000Rnd_762x51_Belt_Red
	{
		author = "$STR_A3_Bohemia_Interactive";
		tracersEvery = 1;
		displaynameshort = "$STR_A3_tracer_dns";
	};
	class 2000Rnd_762x51_Belt_Green: 2000Rnd_762x51_Belt
	{
		author = "$STR_A3_Bohemia_Interactive";
		ammo = "B_762x51_Tracer_Green";
		displayNameMFDFormat = "П";
	};
	class 2000Rnd_762x51_Belt_T_Green: 2000Rnd_762x51_Belt_Green
	{
		author = "$STR_A3_Bohemia_Interactive";
		tracersEvery = 1;
		displaynameshort = "$STR_A3_tracer_dns";
	};
	class 2000Rnd_762x51_Belt_Yellow: 2000Rnd_762x51_Belt
	{
		author = "$STR_A3_Bohemia_Interactive";
		ammo = "B_762x51_Tracer_Yellow";
		displayNameMFDFormat = "LMG";
	};
	class 2000Rnd_762x51_Belt_T_Yellow: 2000Rnd_762x51_Belt_Yellow
	{
		author = "$STR_A3_Bohemia_Interactive";
		tracersEvery = 1;
		displaynameshort = "$STR_A3_tracer_dns";
	};
	class 1000Rnd_Gatling_30mm_Plane_CAS_01_F: VehicleMagazine
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayNameShort = "";
		ammo = "Gatling_30mm_HE_Plane_CAS_01_F";
		count = 1000;
		initSpeed = 1120;
		maxLeadSpeed = 83.3333;
		nameSound = "cannon";
		tracersEvery = 1;
		muzzleImpulseFactor[] = {-0.1,1};
	};
	class 2Rnd_Missile_AA_04_F: VehicleMagazine
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayNameShort = "$STR_A3_CFGMAGAZINES_4RND_AAA_MISSILES_DNS";
		descriptionShort = "$STR_A3_cfgMagazine_Falchion22_tooltip";
		ammo = "Missile_AA_04_F";
		count = 2;
		initSpeed = 0;
		maxLeadSpeed = 694.444;
		nameSound = "missiles";
	};
	class 6Rnd_Missile_AGM_02_F: VehicleMagazine
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayNameShort = "$STR_A3_CFGMAGAZINES_38RND_80MM_ROCKETS_DNS";
		descriptionShort = "$STR_A3_cfgMagazine_Macer_tooltip";
		ammo = "Missile_AGM_02_F";
		count = 6;
		initSpeed = 0;
		maxLeadSpeed = 55.5556;
		nameSound = "missiles";
	};
	class 7Rnd_Rocket_04_HE_F: VehicleMagazine
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayNameShort = "$STR_A3_CFGMAGAZINES_40RND_20MM_G_BELT_DNS";
		descriptionShort = "$STR_A3_cfgMagazine_ShriekerHE_tooltip";
		ammo = "Rocket_04_HE_F";
		count = 7;
		initSpeed = 44;
		maxLeadSpeed = 41.6667;
		nameSound = "rockets";
	};
	class 7Rnd_Rocket_04_AP_F: 7Rnd_Rocket_04_HE_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayNameShort = "$STR_A3_CFGMAGAZINES_TITAN_AP_DNS";
		descriptionShort = "$STR_A3_cfgMagazine_ShriekerAP_tooltip";
		ammo = "Rocket_04_AP_F";
	};
	class 4Rnd_Bomb_04_F: VehicleMagazine
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayNameShort = "$STR_A3_CFGVEHICLES_BOMB0";
		descriptionShort = "$STR_A3_cfgMagazine_GBU12_tooltip";
		ammo = "Bomb_04_F";
		count = 4;
		initSpeed = 0;
		maxLeadSpeed = 25;
		nameSound = "cannon";
	};
	class 500Rnd_Cannon_30mm_Plane_CAS_02_F: 1000Rnd_Gatling_30mm_Plane_CAS_01_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayNameShort = "";
		ammo = "Cannon_30mm_HE_Plane_CAS_02_F";
		count = 500;
		muzzleImpulseFactor[] = {-0.025,0.25};
	};
	class 2Rnd_Missile_AA_03_F: 2Rnd_Missile_AA_04_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayNameShort = "$STR_A3_CFGMAGAZINES_4RND_AAA_MISSILES_DNS";
		descriptionShort = "$STR_A3_cfgMagazine_Sahr3_tooltip";
		ammo = "Missile_AA_03_F";
		count = 2;
	};
	class 4Rnd_Missile_AGM_01_F: 6Rnd_Missile_AGM_02_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayNameShort = "$STR_A3_CFGMAGAZINES_38RND_80MM_ROCKETS_DNS";
		descriptionShort = "$STR_A3_cfgMagazine_Sharur_tooltip";
		ammo = "Missile_AGM_01_F";
		count = 4;
	};
	class 20Rnd_Rocket_03_HE_F: 7Rnd_Rocket_04_HE_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayNameShort = "$STR_A3_CFGMAGAZINES_40RND_20MM_G_BELT_DNS";
		descriptionShort = "$STR_A3_cfgMagazine_TratnyrHE_tooltip";
		ammo = "Rocket_03_HE_F";
		count = 20;
	};
	class 20Rnd_Rocket_03_AP_F: 7Rnd_Rocket_04_AP_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayNameShort = "$STR_A3_CFGMAGAZINES_TITAN_AP_DNS";
		descriptionShort = "$STR_A3_cfgMagazine_TratnyrAP_tooltip";
		ammo = "Rocket_03_AP_F";
		count = 20;
	};
	class 2Rnd_Bomb_03_F: 4Rnd_Bomb_04_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayNameShort = "$STR_A3_CFGVEHICLES_BOMB0";
		descriptionShort = "$STR_A3_cfgMagazine_LOM250_tooltip";
		ammo = "Bomb_03_F";
		count = 2;
	};
	class PylonRack_1Rnd_Missile_AA_04_F: 2Rnd_Missile_AA_04_F
	{
		displayName = "$STR_A3_Missile_AA_04_Plane_CAS_01_F0";
		count = 1;
		model = "\A3\Weapons_F\DynamicLoadout\PylonPod_1x_Missile_AA_04_F.p3d";
		hardpoints[] = {"B_MISSILE_PYLON"};
		pylonWeapon = "Missile_AA_04_Plane_CAS_01_F";
		mass = 125;
	};
	class PylonMissile_1Rnd_Missile_AA_04_F: PylonRack_1Rnd_Missile_AA_04_F
	{
		hardpoints[] = {"B_AIM9"};
		model = "\A3\Weapons_F\DynamicLoadout\PylonMissile_1x_Bomb_04_F.p3d";
		mass = 85;
	};
	class PylonRack_1Rnd_AAA_missiles: 4Rnd_AAA_missiles
	{
		displayName = "$STR_A3_missiles_ASRAAM0";
		count = 1;
		hardpoints[] = {"B_MISSILE_PYLON","B_ASRRAM_EJECTOR"};
		model = "\A3\Weapons_F\DynamicLoadout\PylonPod_1x_Missile_AA_04_F.p3d";
		pylonWeapon = "missiles_ASRAAM";
		mass = 128;
	};
	class PylonMissile_1Rnd_AAA_missiles: PylonRack_1Rnd_AAA_missiles
	{
		hardpoints[] = {"B_ASRAAM"};
		model = "\A3\Weapons_F\DynamicLoadout\PylonMissile_1x_Bomb_04_F.p3d";
		mass = 88;
		class mfdElements
		{
			class Heli_Attack_01
			{
				class Bones{};
				class Draw
				{
					class BackgroundGroup
					{
						color[] = {0.0,0.0,0.0};
						class Background
						{
							type = "polygon";
							points[] = {{{{-0.005,-0.03},1},{{0.065,-0.03},1},{{0.065,0.15},1},{{-0.005,0.15},1}}};
						};
					};
					class Default
					{
						condition = "PylonAmmoRelative>0";
						color[] = {0,0.12,0};
						class Shape
						{
							type = "line";
							width = 4.0;
							points[] = {{{0.0553333,0.00176638},1},{{0.0313333,0.0174929},1},{{0.00600001,0.00176638},1},{},{{0.0553333,0.135442},1},{{0.0553333,0.00176638},1},{{0.0553333,-0.00609687},1},{{0.0526667,-0.0126496},1},{{0.05,-0.0178917},1},{{0.0446667,-0.0205128},1},{{0.0393333,-0.0231339},1},{{0.0353333,-0.0244445},1},{{0.0313333,-0.025755},1},{{0.03,-0.025755},1},{{0.026,-0.0244445},1},{{0.022,-0.0231339},1},{{0.0166667,-0.0205128},1},{{0.0126667,-0.0178917},1},{{0.00866666,-0.0126496},1},{{0.00733334,-0.00609687},1},{{0.00600001,0.00176638},1},{{0.00600001,0.135442},1},{{0.0553333,0.135442},1},{}};
						};
						class PylonText1
						{
							type = "text";
							source = "static";
							text = "AA";
							scale = 1;
							sourceScale = 1;
							align = "center";
							pos[] = {{0.03,0.05},1};
							right[] = {{0.06,0.05},1};
							down[] = {{0.03,0.075},1};
						};
						class Ammo
						{
							type = "text";
							source = "PylonAmmo";
							sourceIndex = 1;
							sourceScale = 1;
							align = "center";
							scale = 1;
							pos[] = {{0.03,0.09},1};
							right[] = {{0.07,0.09},1};
							down[] = {{0.03,0.125},1};
						};
					};
					class Selected: Default
					{
						condition = "(PylonSelected +  PylonAmmoRelative)/2";
						color[] = {0.99,0.94,0.59};
						class Shape: Shape{};
						class PylonText1: PylonText1{};
						class Ammo: Ammo{};
					};
					class Empty: Default
					{
						condition = "PylonAmmoRelative <= 0";
						color[] = {1.0,0.0,0.0,1.0};
						class Shape: Shape{};
						class PylonText1: PylonText1{};
						class Ammo: Ammo
						{
							source = "static";
							text = "-";
						};
					};
				};
			};
		};
	};
	class PylonRack_1Rnd_GAA_missiles: 4Rnd_GAA_missiles
	{
		displayName = "$STR_A3_missiles_Zephyr0";
		count = 1;
		hardpoints[] = {"B_ZEPHYR"};
		model = "\A3\Weapons_F\DynamicLoadout\PylonPod_1x_Missile_AA_04_F.p3d";
		pylonWeapon = "missiles_Zephyr";
		mass = 192;
	};
	class PylonMissile_1Rnd_GAA_missiles: PylonRack_1Rnd_GAA_missiles
	{
		hardpoints[] = {"B_AMRAAM"};
		model = "\A3\Weapons_F\DynamicLoadout\PylonMissile_1x_Bomb_04_F.p3d";
		mass = 152;
	};
	class PylonRack_1Rnd_Missile_AGM_02_F: 6Rnd_Missile_AGM_02_F
	{
		displayName = "$STR_A3_PylonRack_1Rnd_Missile_AGM_02_F0";
		model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AGM_02_Rail_x1_F";
		count = 1;
		hardpoints[] = {"B_MISSILE_PYLON"};
		pylonWeapon = "Missile_AGM_02_Plane_CAS_01_F";
		mass = 361;
	};
	class PylonRack_3Rnd_Missile_AGM_02_F: PylonRack_1Rnd_Missile_AGM_02_F
	{
		displayName = "$STR_A3_PylonRack_3Rnd_Missile_AGM_02_F0";
		model = "\A3\Weapons_F\DynamicLoadout\PylonPod_3x_Missile_AGM_02_F.p3d";
		count = 3;
		mirrorMissilesIndexes[] = {2,1,3};
		mass = 1020;
	};
	class PylonRack_1Rnd_LG_scalpel: 2Rnd_LG_scalpel
	{
		displayName = "$STR_A3_PylonRack_1Rnd_LG_scalpel0";
		count = 1;
		hardpoints[] = {"B_MISSILE_PYLON","SCALPEL_1RND_EJECTOR"};
		model = "\A3\Weapons_F\DynamicLoadout\PylonPod_1x_Missile_AA_04_F.p3d";
		pylonWeapon = "missiles_SCALPEL";
		mass = 110;
		class mfdElements
		{
			class Plane_CAS_02
			{
				class Bones
				{
					class Center
					{
						type = "fixed";
						pos[] = {0.0,0.0};
					};
				};
				class Draw
				{
					class BlackBackgroundGroup
					{
						color[] = {0.0,0.0,0.0};
						alpha = 1;
						class BlackBackground
						{
							type = "polygon";
							points[] = {{{{0.1,0.11},1},{{0.17,0.11},1},{{0.17,0.33},1},{{0.1,0.33},1}}};
						};
					};
					class Default
					{
						condition = "(PylonAmmoRelative>0.01) - PylonSelected";
						color[] = {1,1,1};
						alpha = 0.2;
						class Shape
						{
							type = "polygon";
							texture = "a3\Weapons_F\MFD\UI\icon_place_cas_02_scalpel_ca.paa";
							points[] = {{{{0.1,0.1},1},{{0.18,0.1},1},{{0.18,0.34},1},{{0.1,0.34},1}}};
						};
						class PylonText1
						{
							type = "text";
							source = "pylonammo";
							scale = 1;
							sourceScale = 1;
							align = "center";
							pos[] = {{0.14,0.27},1};
							right[] = {{0.18,0.27},1};
							down[] = {{0.14,0.301},1};
						};
					};
					class Selected: Default
					{
						color[] = {0,0.12,0};
						condition = "(PylonSelected +  PylonAmmoRelative)/2";
						alpha = 1;
						class Shape: Shape{};
						class PylonText1: PylonText1{};
					};
					class Empty: Selected
					{
						condition = "PylonAmmoRelative <= 0";
						color[] = {1.0,0.0,0.0,1.0};
						class Shape: Shape{};
						class PylonText1: PylonText1{};
					};
				};
			};
		};
	};
	class PylonMissile_1Rnd_LG_scalpel: PylonRack_1Rnd_LG_scalpel
	{
		hardpoints[] = {"SCALPEL_1RND","UNI_SCALPEL"};
		model = "\A3\Weapons_F\DynamicLoadout\PylonMissile_1x_Bomb_04_F.p3d";
		mass = 49;
		class mfdElements
		{
			class Heli_Attack_01
			{
				class Bones{};
				class Draw
				{
					class BackgroundGroup
					{
						color[] = {0.0,0.0,0.0};
						class Background
						{
							type = "polygon";
							points[] = {{{{-0.005,-0.03},1},{{0.065,-0.03},1},{{0.065,0.15},1},{{-0.005,0.15},1}}};
						};
					};
					class Default
					{
						condition = "PylonAmmoRelative>0";
						color[] = {0,0.12,0};
						class Shape
						{
							type = "line";
							width = 4.0;
							points[] = {{{0.0553333,0.00176638},1},{{0.0313333,0.0174929},1},{{0.00600001,0.00176638},1},{},{{0.0553333,0.135442},1},{{0.0553333,0.00176638},1},{{0.0553333,-0.00609687},1},{{0.0526667,-0.0126496},1},{{0.05,-0.0178917},1},{{0.0446667,-0.0205128},1},{{0.0393333,-0.0231339},1},{{0.0353333,-0.0244445},1},{{0.0313333,-0.025755},1},{{0.03,-0.025755},1},{{0.026,-0.0244445},1},{{0.022,-0.0231339},1},{{0.0166667,-0.0205128},1},{{0.0126667,-0.0178917},1},{{0.00866666,-0.0126496},1},{{0.00733334,-0.00609687},1},{{0.00600001,0.00176638},1},{{0.00600001,0.135442},1},{{0.0553333,0.135442},1},{}};
						};
						class PylonText1
						{
							type = "text";
							source = "static";
							text = "AT";
							scale = 1;
							sourceScale = 1;
							align = "center";
							pos[] = {{0.03,0.05},1};
							right[] = {{0.06,0.05},1};
							down[] = {{0.03,0.075},1};
						};
						class Ammo
						{
							type = "text";
							source = "PylonAmmo";
							sourceIndex = 1;
							sourceScale = 1;
							align = "center";
							scale = 1;
							pos[] = {{0.03,0.09},1};
							right[] = {{0.07,0.09},1};
							down[] = {{0.03,0.125},1};
						};
					};
					class Selected: Default
					{
						condition = "(PylonSelected +  PylonAmmoRelative)/2";
						color[] = {0.99,0.94,0.59};
						class Shape: Shape{};
						class PylonText1: PylonText1{};
						class Ammo: Ammo{};
					};
					class Empty: Default
					{
						condition = "PylonAmmoRelative <= 0";
						color[] = {1.0,0.0,0.0,1.0};
						class Shape: Shape{};
						class PylonText1: PylonText1{};
						class Ammo: Ammo
						{
							source = "static";
							text = "-";
						};
					};
				};
			};
			class Plane_CAS_02
			{
				class Bones
				{
					class Center
					{
						type = "fixed";
						pos[] = {0.0,0.0};
					};
				};
				class Draw
				{
					class BlackBackgroundGroup
					{
						color[] = {0.0,0.0,0.0};
						alpha = 1;
						class BlackBackground
						{
							type = "polygon";
							points[] = {{{{0.1,0.11},1},{{0.17,0.11},1},{{0.17,0.33},1},{{0.1,0.33},1}}};
						};
					};
					class Default
					{
						condition = "(PylonAmmoRelative>0.01) - PylonSelected";
						color[] = {1,1,1};
						alpha = 0.2;
						class Shape
						{
							type = "polygon";
							texture = "a3\Weapons_F\MFD\UI\icon_place_cas_02_scalpel_ca.paa";
							points[] = {{{{0.1,0.1},1},{{0.18,0.1},1},{{0.18,0.34},1},{{0.1,0.34},1}}};
						};
						class PylonText1
						{
							type = "text";
							source = "pylonammo";
							scale = 1;
							sourceScale = 1;
							align = "center";
							pos[] = {{0.14,0.27},1};
							right[] = {{0.18,0.27},1};
							down[] = {{0.14,0.301},1};
						};
					};
					class Selected: Default
					{
						color[] = {0,0.12,0};
						condition = "(PylonSelected +  PylonAmmoRelative)/2";
						alpha = 1;
						class Shape: Shape{};
						class PylonText1: PylonText1{};
					};
					class Empty: Selected
					{
						condition = "PylonAmmoRelative <= 0";
						color[] = {1.0,0.0,0.0,1.0};
						class Shape: Shape{};
						class PylonText1: PylonText1{};
					};
				};
			};
			class VTOL_02
			{
				class Bones
				{
					class Center
					{
						type = "fixed";
						pos[] = {0.0,0.0};
					};
					class R1: Center
					{
						pos[] = {0.0,0.0125};
					};
				};
				class Draw
				{
					class Default
					{
						condition = "PylonAmmoRelative>0";
						color[] = {0.15,1.0,0.15,1.0};
						alpha = 0.22;
						class Shape
						{
							type = "line";
							width = 4.0;
							points[] = {{"R1",{0,-0.01125},1},{"R1",{0.0045,-0.0097425},1},{"R1",{0.007794,-0.005625},1},{"R1",{0.009,0},1},{"R1",{0.007794,0.005625},1},{"R1",{0.0045,0.0097425},1},{"R1",{0,0.01125},1},{"R1",{-0.0045,0.0097425},1},{"R1",{-0.007794,0.005625},1},{"R1",{-0.009,0},1},{"R1",{-0.007794,-0.005625},1},{"R1",{-0.0045,-0.0097425},1},{"R1",{0,-0.01125},1},{},{"R1",{0.00636396,-0.00795495},1},{"R1",{0.0106066,-0.0132583},1},{},{"R1",{0.00636396,0.00795495},1},{"R1",{0.0106066,0.0132583},1},{},{"R1",{-0.00636396,0.00795495},1},{"R1",{-0.0106066,0.0132583},1},{},{"R1",{-0.00636396,-0.00795495},1},{"R1",{-0.0106066,-0.0132582},1},{}};
						};
						class PylonText1
						{
							type = "text";
							source = "static";
							text = "AT";
							scale = 1;
							sourceScale = 1;
							align = "center";
							pos[] = {"Center",1,{0.0,-0.051},1};
							right[] = {"Center",1,{0.018,-0.051},1};
							down[] = {"Center",1,{0.0,-0.03},1};
						};
					};
					class Selected: Default
					{
						condition = "(PylonSelected +  PylonAmmoRelative)/2";
						alpha = 1;
						class Shape: Shape{};
						class PylonText1: PylonText1{};
						class Background
						{
							type = "polygon";
							points[] = {{{"R1",1,{0,0},1},{"R1",{0.00636396,-0.00795495},1},{"R1",{0.009,4.91753e-10},1},{"R1",{0.00636396,0.00795495},1}},{{"R1",1,{0,0},1},{"R1",{0.00636396,0.00795495},1},{"R1",{-7.86805e-10,0.01125},1},{"R1",{-0.00636396,0.00795495},1}},{{"R1",1,{0,0},1},{"R1",{-0.00636396,0.00795495},1},{"R1",{-0.009,-1.34155e-10},1},{"R1",{-0.00636396,-0.00795495},1}},{{"R1",1,{0,0},1},{"R1",{-0.00636396,-0.00795495},1},{"R1",{1.57361e-09,-0.01125},1},{"R1",{0.00636396,-0.00795495},1}}};
						};
					};
					class Empty: Selected
					{
						condition = "PylonAmmoRelative <= 0";
						color[] = {1.0,0.0,0.0,1.0};
						class Shape: Shape{};
						class PylonText1: PylonText1{};
						class Background: Background{};
					};
				};
			};
		};
	};
	class PylonRack_3Rnd_LG_scalpel: PylonRack_1Rnd_LG_scalpel
	{
		hardpoints[] = {"B_MISSILE_PYLON","UNI_SCALPEL"};
		count = 3;
		displayName = "$STR_A3_PylonRack_3Rnd_LG_scalpel0";
		model = "\A3\Weapons_F\DynamicLoadout\PylonPod_3x_Missile_LG_scalpel_F.p3d";
		mass = 300;
		mirrorMissilesIndexes[] = {2,1,3};
		class mfdElements: mfdElements
		{
			class VTOL_02
			{
				class Bones
				{
					class Center
					{
						type = "fixed";
						pos[] = {0.0,0.0};
					};
					class R1: Center
					{
						pos[] = {-0.0,0.03};
					};
					class R2: Center
					{
						pos[] = {-0.0125,-0.01};
					};
					class R3: Center
					{
						pos[] = {0.0125,-0.01};
					};
					class R4: Center
					{
						pos[] = {0.0125,-0.01};
					};
				};
				class Draw
				{
					class Default
					{
						condition = "PylonAmmoRelative>0";
						color[] = {0.15,1.0,0.15,1.0};
						alpha = 0.22;
						class Missile1
						{
							condition = "PylonAmmo>=3";
							class Shape
							{
								type = "line";
								width = 2.0;
								points[] = {{"R1",{0,-0.01125},1},{"R1",{0.0045,-0.0097425},1},{"R1",{0.007794,-0.005625},1},{"R1",{0.009,0},1},{"R1",{0.007794,0.005625},1},{"R1",{0.0045,0.0097425},1},{"R1",{0,0.01125},1},{"R1",{-0.0045,0.0097425},1},{"R1",{-0.007794,0.005625},1},{"R1",{-0.009,0},1},{"R1",{-0.007794,-0.005625},1},{"R1",{-0.0045,-0.0097425},1},{"R1",{0,-0.01125},1},{},{"R1",{0.00636396,-0.00795495},1},{"R1",{0.0106066,-0.0132583},1},{},{"R1",{0.00636396,0.00795495},1},{"R1",{0.0106066,0.0132583},1},{},{"R1",{-0.00636396,0.00795495},1},{"R1",{-0.0106066,0.0132583},1},{},{"R1",{-0.00636396,-0.00795495},1},{"R1",{-0.0106066,-0.0132582},1},{}};
							};
						};
						class Missile2
						{
							condition = "PylonAmmo>=2";
							class Shape
							{
								type = "line";
								width = 2.0;
								points[] = {{"R2",{0,-0.01125},1},{"R2",{0.0045,-0.0097425},1},{"R2",{0.007794,-0.005625},1},{"R2",{0.009,0},1},{"R2",{0.007794,0.005625},1},{"R2",{0.0045,0.0097425},1},{"R2",{0,0.01125},1},{"R2",{-0.0045,0.0097425},1},{"R2",{-0.007794,0.005625},1},{"R2",{-0.009,0},1},{"R2",{-0.007794,-0.005625},1},{"R2",{-0.0045,-0.0097425},1},{"R2",{0,-0.01125},1},{},{"R2",{0.00636396,-0.00795495},1},{"R2",{0.0106066,-0.0132583},1},{},{"R2",{0.00636396,0.00795495},1},{"R2",{0.0106066,0.0132583},1},{},{"R2",{-0.00636396,0.00795495},1},{"R2",{-0.0106066,0.0132583},1},{},{"R2",{-0.00636396,-0.00795495},1},{"R2",{-0.0106066,-0.0132582},1},{}};
							};
						};
						class Missile3
						{
							condition = "PylonAmmo>=1";
							class Shape
							{
								type = "line";
								width = 2.0;
								points[] = {{"R3",{0,-0.01125},1},{"R3",{0.0045,-0.0097425},1},{"R3",{0.007794,-0.005625},1},{"R3",{0.009,0},1},{"R3",{0.007794,0.005625},1},{"R3",{0.0045,0.0097425},1},{"R3",{0,0.01125},1},{"R3",{-0.0045,0.0097425},1},{"R3",{-0.007794,0.005625},1},{"R3",{-0.009,0},1},{"R3",{-0.007794,-0.005625},1},{"R3",{-0.0045,-0.0097425},1},{"R3",{0,-0.01125},1},{},{"R3",{0.00636396,-0.00795495},1},{"R3",{0.0106066,-0.0132583},1},{},{"R3",{0.00636396,0.00795495},1},{"R3",{0.0106066,0.0132583},1},{},{"R3",{-0.00636396,0.00795495},1},{"R3",{-0.0106066,0.0132583},1},{},{"R3",{-0.00636396,-0.00795495},1},{"R3",{-0.0106066,-0.0132582},1},{}};
							};
						};
						class PylonText1
						{
							type = "text";
							source = "static";
							text = "AT";
							scale = 1;
							sourceScale = 1;
							align = "center";
							pos[] = {"Center",1,{0.0,-0.051},1};
							right[] = {"Center",1,{0.018,-0.051},1};
							down[] = {"Center",1,{0.0,-0.03},1};
						};
					};
					class Selected: Default
					{
						condition = "(PylonSelected +  PylonAmmoRelative)/2";
						alpha = 1;
						class PylonText1: PylonText1{};
						class Missile1: Missile1
						{
							condition = "PylonAmmo>=3";
							class Shape: Shape{};
							class Background
							{
								type = "polygon";
								points[] = {{{"R1",1,{0,0},1},{"R1",{0.00636396,-0.00795495},1},{"R1",{0.009,4.91753e-10},1},{"R1",{0.00636396,0.00795495},1}},{{"R1",1,{0,0},1},{"R1",{0.00636396,0.00795495},1},{"R1",{-7.86805e-10,0.01125},1},{"R1",{-0.00636396,0.00795495},1}},{{"R1",1,{0,0},1},{"R1",{-0.00636396,0.00795495},1},{"R1",{-0.009,-1.34155e-10},1},{"R1",{-0.00636396,-0.00795495},1}},{{"R1",1,{0,0},1},{"R1",{-0.00636396,-0.00795495},1},{"R1",{1.57361e-09,-0.01125},1},{"R1",{0.00636396,-0.00795495},1}}};
							};
						};
						class Missile2: Missile2
						{
							condition = "(PylonAmmo>=2)-(PylonAmmo>=3)";
							class Shape: Shape{};
							class Background
							{
								type = "polygon";
								points[] = {{{"R2",1,{0,0},1},{"R2",{0.00636396,-0.00795495},1},{"R2",{0.009,4.91753e-10},1},{"R2",{0.00636396,0.00795495},1}},{{"R2",1,{0,0},1},{"R2",{0.00636396,0.00795495},1},{"R2",{-7.86805e-10,0.01125},1},{"R2",{-0.00636396,0.00795495},1}},{{"R2",1,{0,0},1},{"R2",{-0.00636396,0.00795495},1},{"R2",{-0.009,-1.34155e-10},1},{"R2",{-0.00636396,-0.00795495},1}},{{"R2",1,{0,0},1},{"R2",{-0.00636396,-0.00795495},1},{"R2",{1.57361e-09,-0.01125},1},{"R2",{0.00636396,-0.00795495},1}}};
							};
						};
						class Missile3: Missile3
						{
							condition = "(PylonAmmo>=1)-(PylonAmmo>=2)";
							class Shape: Shape{};
							class Background
							{
								type = "polygon";
								points[] = {{{"R3",1,{0,0},1},{"R3",{0.00636396,-0.00795495},1},{"R3",{0.009,4.91753e-10},1},{"R3",{0.00636396,0.00795495},1}},{{"R3",1,{0,0},1},{"R3",{0.00636396,0.00795495},1},{"R3",{-7.86805e-10,0.01125},1},{"R3",{-0.00636396,0.00795495},1}},{{"R3",1,{0,0},1},{"R3",{-0.00636396,0.00795495},1},{"R3",{-0.009,-1.34155e-10},1},{"R3",{-0.00636396,-0.00795495},1}},{{"R3",1,{0,0},1},{"R3",{-0.00636396,-0.00795495},1},{"R3",{1.57361e-09,-0.01125},1},{"R3",{0.00636396,-0.00795495},1}}};
							};
						};
					};
					class HalfEmpty: Selected
					{
						alpha = 0.15;
						condition = "PylonAmmoRelative <= 1";
						color[] = {1.0,0.0,0.0,1.0};
						class Missile1: Missile1
						{
							condition = "PylonAmmo<=2";
							class Shape: Shape{};
							class Background: Background{};
						};
						class Missile2: Missile2
						{
							condition = "PylonAmmo<=1";
							class Shape: Shape{};
							class Background: Background{};
						};
						class Missile3: Missile3
						{
							condition = "PylonAmmo<=0";
							class Shape: Shape{};
							class Background: Background{};
						};
					};
					class Empty: Selected
					{
						condition = "PylonAmmoRelative <= 0";
						color[] = {1.0,0.0,0.0,1.0};
						class PylonText1: PylonText1{};
					};
				};
			};
		};
	};
	class PylonRack_4Rnd_LG_scalpel: PylonRack_1Rnd_LG_scalpel
	{
		count = 4;
		displayName = "$STR_A3_PylonRack_4Rnd_LG_scalpel0";
		model = "\A3\Weapons_F\DynamicLoadout\PylonPod_4x_Missile_LG_scalpel_F.p3d";
		mass = 370;
		mirrorMissilesIndexes[] = {2,1,4,3};
		hardpoints[] = {"UNI_SCALPEL","SCALPEL_4RND"};
		class mfdElements: mfdElements
		{
			class VTOL_02
			{
				class Bones
				{
					class Center
					{
						type = "fixed";
						pos[] = {0.0,0.0};
					};
					class R1: Center
					{
						pos[] = {-0.0125,0.03};
					};
					class R2: Center
					{
						pos[] = {0.0125,0.03};
					};
					class R3: Center
					{
						pos[] = {-0.0125,-0.01};
					};
					class R4: Center
					{
						pos[] = {0.0125,-0.01};
					};
				};
				class Draw
				{
					class Default
					{
						condition = "PylonAmmoRelative>0";
						color[] = {0.15,1.0,0.15,1.0};
						alpha = 0.22;
						class Missile1
						{
							condition = "PylonAmmo>=4";
							class Shape
							{
								type = "line";
								width = 2.0;
								points[] = {{"R1",{0,-0.01125},1},{"R1",{0.0045,-0.0097425},1},{"R1",{0.007794,-0.005625},1},{"R1",{0.009,0},1},{"R1",{0.007794,0.005625},1},{"R1",{0.0045,0.0097425},1},{"R1",{0,0.01125},1},{"R1",{-0.0045,0.0097425},1},{"R1",{-0.007794,0.005625},1},{"R1",{-0.009,0},1},{"R1",{-0.007794,-0.005625},1},{"R1",{-0.0045,-0.0097425},1},{"R1",{0,-0.01125},1},{},{"R1",{0.00636396,-0.00795495},1},{"R1",{0.0106066,-0.0132583},1},{},{"R1",{0.00636396,0.00795495},1},{"R1",{0.0106066,0.0132583},1},{},{"R1",{-0.00636396,0.00795495},1},{"R1",{-0.0106066,0.0132583},1},{},{"R1",{-0.00636396,-0.00795495},1},{"R1",{-0.0106066,-0.0132582},1},{}};
							};
						};
						class Missile2
						{
							condition = "PylonAmmo>=3";
							class Shape
							{
								type = "line";
								width = 2.0;
								points[] = {{"R2",{0,-0.01125},1},{"R2",{0.0045,-0.0097425},1},{"R2",{0.007794,-0.005625},1},{"R2",{0.009,0},1},{"R2",{0.007794,0.005625},1},{"R2",{0.0045,0.0097425},1},{"R2",{0,0.01125},1},{"R2",{-0.0045,0.0097425},1},{"R2",{-0.007794,0.005625},1},{"R2",{-0.009,0},1},{"R2",{-0.007794,-0.005625},1},{"R2",{-0.0045,-0.0097425},1},{"R2",{0,-0.01125},1},{},{"R2",{0.00636396,-0.00795495},1},{"R2",{0.0106066,-0.0132583},1},{},{"R2",{0.00636396,0.00795495},1},{"R2",{0.0106066,0.0132583},1},{},{"R2",{-0.00636396,0.00795495},1},{"R2",{-0.0106066,0.0132583},1},{},{"R2",{-0.00636396,-0.00795495},1},{"R2",{-0.0106066,-0.0132582},1},{}};
							};
						};
						class Missile3
						{
							condition = "PylonAmmo>=2";
							class Shape
							{
								type = "line";
								width = 2.0;
								points[] = {{"R3",{0,-0.01125},1},{"R3",{0.0045,-0.0097425},1},{"R3",{0.007794,-0.005625},1},{"R3",{0.009,0},1},{"R3",{0.007794,0.005625},1},{"R3",{0.0045,0.0097425},1},{"R3",{0,0.01125},1},{"R3",{-0.0045,0.0097425},1},{"R3",{-0.007794,0.005625},1},{"R3",{-0.009,0},1},{"R3",{-0.007794,-0.005625},1},{"R3",{-0.0045,-0.0097425},1},{"R3",{0,-0.01125},1},{},{"R3",{0.00636396,-0.00795495},1},{"R3",{0.0106066,-0.0132583},1},{},{"R3",{0.00636396,0.00795495},1},{"R3",{0.0106066,0.0132583},1},{},{"R3",{-0.00636396,0.00795495},1},{"R3",{-0.0106066,0.0132583},1},{},{"R3",{-0.00636396,-0.00795495},1},{"R3",{-0.0106066,-0.0132582},1},{}};
							};
						};
						class Missile4
						{
							condition = "PylonAmmo>=1";
							class Shape
							{
								type = "line";
								width = 2.0;
								points[] = {{"R4",{0,-0.01125},1},{"R4",{0.0045,-0.0097425},1},{"R4",{0.007794,-0.005625},1},{"R4",{0.009,0},1},{"R4",{0.007794,0.005625},1},{"R4",{0.0045,0.0097425},1},{"R4",{0,0.01125},1},{"R4",{-0.0045,0.0097425},1},{"R4",{-0.007794,0.005625},1},{"R4",{-0.009,0},1},{"R4",{-0.007794,-0.005625},1},{"R4",{-0.0045,-0.0097425},1},{"R4",{0,-0.01125},1},{},{"R4",{0.00636396,-0.00795495},1},{"R4",{0.0106066,-0.0132583},1},{},{"R4",{0.00636396,0.00795495},1},{"R4",{0.0106066,0.0132583},1},{},{"R4",{-0.00636396,0.00795495},1},{"R4",{-0.0106066,0.0132583},1},{},{"R4",{-0.00636396,-0.00795495},1},{"R4",{-0.0106066,-0.0132582},1},{}};
							};
						};
						class PylonText1
						{
							type = "text";
							source = "static";
							text = "AT";
							scale = 1;
							sourceScale = 1;
							align = "center";
							pos[] = {"Center",1,{0.0,-0.051},1};
							right[] = {"Center",1,{0.018,-0.051},1};
							down[] = {"Center",1,{0.0,-0.03},1};
						};
					};
					class Selected: Default
					{
						condition = "(PylonSelected +  PylonAmmoRelative)/2";
						alpha = 1;
						class PylonText1: PylonText1{};
						class Missile1: Missile1
						{
							condition = "PylonAmmo>=4";
							class Shape: Shape{};
							class Background
							{
								type = "polygon";
								points[] = {{{"R1",1,{0,0},1},{"R1",{0.00636396,-0.00795495},1},{"R1",{0.009,4.91753e-10},1},{"R1",{0.00636396,0.00795495},1}},{{"R1",1,{0,0},1},{"R1",{0.00636396,0.00795495},1},{"R1",{-7.86805e-10,0.01125},1},{"R1",{-0.00636396,0.00795495},1}},{{"R1",1,{0,0},1},{"R1",{-0.00636396,0.00795495},1},{"R1",{-0.009,-1.34155e-10},1},{"R1",{-0.00636396,-0.00795495},1}},{{"R1",1,{0,0},1},{"R1",{-0.00636396,-0.00795495},1},{"R1",{1.57361e-09,-0.01125},1},{"R1",{0.00636396,-0.00795495},1}}};
							};
						};
						class Missile2: Missile2
						{
							condition = "(PylonAmmo>=3)-(PylonAmmo>=4)";
							class Shape: Shape{};
							class Background
							{
								type = "polygon";
								points[] = {{{"R2",1,{0,0},1},{"R2",{0.00636396,-0.00795495},1},{"R2",{0.009,4.91753e-10},1},{"R2",{0.00636396,0.00795495},1}},{{"R2",1,{0,0},1},{"R2",{0.00636396,0.00795495},1},{"R2",{-7.86805e-10,0.01125},1},{"R2",{-0.00636396,0.00795495},1}},{{"R2",1,{0,0},1},{"R2",{-0.00636396,0.00795495},1},{"R2",{-0.009,-1.34155e-10},1},{"R2",{-0.00636396,-0.00795495},1}},{{"R2",1,{0,0},1},{"R2",{-0.00636396,-0.00795495},1},{"R2",{1.57361e-09,-0.01125},1},{"R2",{0.00636396,-0.00795495},1}}};
							};
						};
						class Missile3: Missile3
						{
							condition = "(PylonAmmo>=2)-(PylonAmmo>=3)";
							class Shape: Shape{};
							class Background
							{
								type = "polygon";
								points[] = {{{"R3",1,{0,0},1},{"R3",{0.00636396,-0.00795495},1},{"R3",{0.009,4.91753e-10},1},{"R3",{0.00636396,0.00795495},1}},{{"R3",1,{0,0},1},{"R3",{0.00636396,0.00795495},1},{"R3",{-7.86805e-10,0.01125},1},{"R3",{-0.00636396,0.00795495},1}},{{"R3",1,{0,0},1},{"R3",{-0.00636396,0.00795495},1},{"R3",{-0.009,-1.34155e-10},1},{"R3",{-0.00636396,-0.00795495},1}},{{"R3",1,{0,0},1},{"R3",{-0.00636396,-0.00795495},1},{"R3",{1.57361e-09,-0.01125},1},{"R3",{0.00636396,-0.00795495},1}}};
							};
						};
						class Missile4: Missile4
						{
							condition = "(PylonAmmo>=1)-(PylonAmmo>=2)";
							class Shape: Shape{};
							class Background
							{
								type = "polygon";
								points[] = {{{"R4",1,{0,0},1},{"R4",{0.00636396,-0.00795495},1},{"R4",{0.009,4.91753e-10},1},{"R4",{0.00636396,0.00795495},1}},{{"R4",1,{0,0},1},{"R4",{0.00636396,0.00795495},1},{"R4",{-7.86805e-10,0.01125},1},{"R4",{-0.00636396,0.00795495},1}},{{"R4",1,{0,0},1},{"R4",{-0.00636396,0.00795495},1},{"R4",{-0.009,-1.34155e-10},1},{"R4",{-0.00636396,-0.00795495},1}},{{"R4",1,{0,0},1},{"R4",{-0.00636396,-0.00795495},1},{"R4",{1.57361e-09,-0.01125},1},{"R4",{0.00636396,-0.00795495},1}}};
							};
						};
					};
					class HalfEmpty: Selected
					{
						alpha = 0.15;
						condition = "PylonAmmoRelative <= 1";
						color[] = {1.0,0.0,0.0,1.0};
						class Missile1: Missile1
						{
							condition = "PylonAmmo<=3";
							class Shape: Shape{};
							class Background: Background{};
						};
						class Missile2: Missile2
						{
							condition = "PylonAmmo<=2";
							class Shape: Shape{};
							class Background: Background{};
						};
						class Missile3: Missile3
						{
							condition = "PylonAmmo<=1";
							class Shape: Shape{};
							class Background: Background{};
						};
						class Missile4: Missile4
						{
							condition = "PylonAmmo<=0";
							class Shape: Shape{};
							class Background: Background{};
						};
					};
					class Empty: Selected
					{
						condition = "PylonAmmoRelative <= 0";
						color[] = {1.0,0.0,0.0,1.0};
						class PylonText1: PylonText1{};
					};
				};
			};
		};
	};
	class PylonRack_7Rnd_Rocket_04_HE_F: 7Rnd_Rocket_04_HE_F
	{
		displayName = "$STR_A3_PylonRack_7Rnd_Rocket_04_HE_F0";
		count = 7;
		model = "\A3\Weapons_F\DynamicLoadout\PylonPod_Rocket_02_F.p3d";
		hardpoints[] = {"B_MISSILE_PYLON","B_SHIEKER"};
		pylonWeapon = "Rocket_04_HE_Plane_CAS_01_F";
		mass = 88.3;
	};
	class PylonRack_7Rnd_Rocket_04_AP_F: 7Rnd_Rocket_04_AP_F
	{
		displayName = "$STR_A3_PylonRack_7Rnd_Rocket_04_AP_F0";
		count = 7;
		model = "\A3\Weapons_F\DynamicLoadout\PylonPod_Rocket_02_F.p3d";
		hardpoints[] = {"B_MISSILE_PYLON","B_SHIEKER"};
		pylonWeapon = "Rocket_04_AP_Plane_CAS_01_F";
		mass = 88.3;
	};
	class PylonRack_12Rnd_PG_missiles: 24Rnd_PG_missiles
	{
		displayName = "$STR_A3_missiles_DAGR0";
		count = 12;
		hardpoints[] = {"B_MISSILE_PYLON","DAGR"};
		model = "\A3\Weapons_F\DynamicLoadout\PylonPod_Rocket_DAGR_F.p3d";
		muzzlePos = "muzzlePos";
		muzzleEnd = "muzzleEnd";
		pylonWeapon = "missiles_DAGR";
		mass = 140;
		class mfdElements
		{
			class Heli_Attack_01
			{
				class Bones{};
				class Draw
				{
					class BackgroundGroup
					{
						color[] = {0.0,0.0,0.0};
						class Background
						{
							type = "polygon";
							points[] = {{{{-0.005,-0.03},1},{{0.065,-0.03},1},{{0.065,0.15},1},{{-0.005,0.15},1}}};
						};
					};
					class Default
					{
						condition = "PylonAmmoRelative>0";
						color[] = {0,0.12,0};
						class Shape
						{
							type = "line";
							width = 4.0;
							points[] = {{{-0.005,-0.03},1},{{0.065,-0.03},1},{{0.065,0.15},1},{{-0.005,0.15},1},{{-0.005,-0.03},1}};
						};
						class PylonText1
						{
							type = "text";
							source = "static";
							text = "RKT";
							scale = 1;
							sourceScale = 1;
							align = "center";
							pos[] = {{0.03,0.05},1};
							right[] = {{0.06,0.05},1};
							down[] = {{0.03,0.075},1};
						};
						class Ammo
						{
							type = "text";
							source = "PylonAmmo";
							sourceIndex = 1;
							sourceScale = 1;
							align = "center";
							scale = 1;
							pos[] = {{0.03,0.09},1};
							right[] = {{0.07,0.09},1};
							down[] = {{0.03,0.125},1};
						};
					};
					class Selected: Default
					{
						condition = "(PylonSelected +  PylonAmmoRelative)/2";
						color[] = {0.99,0.94,0.59};
						class Shape: Shape{};
						class PylonText1: PylonText1{};
						class Ammo: Ammo{};
					};
					class Empty: Default
					{
						condition = "PylonAmmoRelative <= 0";
						color[] = {1.0,0.0,0.0,1.0};
						class Shape: Shape{};
						class PylonText1: PylonText1{};
						class Ammo: Ammo
						{
							source = "static";
							text = "-";
						};
					};
				};
			};
		};
	};
	class PylonRack_12Rnd_missiles: 12Rnd_missiles
	{
		displayName = "$STR_A3_missiles_dar0";
		count = 12;
		model = "\A3\Weapons_F\DynamicLoadout\PylonPod_12x_Rocket_DAR_F.p3d";
		hardpoints[] = {"B_MISSILE_PYLON","DAR"};
		muzzlePos = "muzzlePos";
		muzzleEnd = "muzzleEnd";
		pylonWeapon = "missiles_DAR";
		mass = 140;
		class mfdElements
		{
			class Heli_Attack_01
			{
				class Bones{};
				class Draw
				{
					class BackgroundGroup
					{
						color[] = {0.0,0.0,0.0};
						class Background
						{
							type = "polygon";
							points[] = {{{{-0.005,-0.03},1},{{0.065,-0.03},1},{{0.065,0.15},1},{{-0.005,0.15},1}}};
						};
					};
					class Default
					{
						condition = "PylonAmmoRelative>0";
						color[] = {0,0.12,0};
						class Shape
						{
							type = "line";
							width = 4.0;
							points[] = {{{-0.005,-0.03},1},{{0.065,-0.03},1},{{0.065,0.15},1},{{-0.005,0.15},1},{{-0.005,-0.03},1}};
						};
						class PylonText1
						{
							type = "text";
							source = "static";
							text = "RKT";
							scale = 1;
							sourceScale = 1;
							align = "center";
							pos[] = {{0.03,0.05},1};
							right[] = {{0.06,0.05},1};
							down[] = {{0.03,0.075},1};
						};
						class Ammo
						{
							type = "text";
							source = "PylonAmmo";
							sourceIndex = 1;
							sourceScale = 1;
							align = "center";
							scale = 1;
							pos[] = {{0.03,0.09},1};
							right[] = {{0.07,0.09},1};
							down[] = {{0.03,0.125},1};
						};
					};
					class Selected: Default
					{
						condition = "(PylonSelected +  PylonAmmoRelative)/2";
						color[] = {0.99,0.94,0.59};
						class Shape: Shape{};
						class PylonText1: PylonText1{};
						class Ammo: Ammo{};
					};
					class Empty: Default
					{
						condition = "PylonAmmoRelative <= 0";
						color[] = {1.0,0.0,0.0,1.0};
						class Shape: Shape{};
						class PylonText1: PylonText1{};
						class Ammo: Ammo
						{
							source = "static";
							text = "-";
						};
					};
				};
			};
		};
	};
	class PylonMissile_1Rnd_Bomb_04_F: 4Rnd_Bomb_04_F
	{
		displayName = "$STR_A3_CFGMAGAZINES_GBU120";
		count = 1;
		model = "\A3\Weapons_F\DynamicLoadout\PylonMissile_1x_Bomb_04_F.p3d";
		hardpoints[] = {"B_BOMB_PYLON"};
		pylonWeapon = "Bomb_04_Plane_CAS_01_F";
		mass = 230;
	};
	class PylonMissile_1Rnd_Mk82_F: 2Rnd_Mk82
	{
		displayName = "$STR_DN_MK82LAUNCHER";
		count = 1;
		model = "\A3\Weapons_F\DynamicLoadout\PylonMissile_1x_Bomb_02_F.p3d";
		hardpoints[] = {"B_BOMB_PYLON"};
		pylonWeapon = "Mk82BombLauncher";
		mass = 227;
	};
	class PylonWeapon_300Rnd_20mm_shells: 300Rnd_20mm_shells
	{
		displayName = "$STR_A3_twin_cannon_20mm";
		descriptionShort = "$STR_A3_cfgMagazine_PL20_tooltip";
		model = "\A3\Weapons_F\DynamicLoadout\PylonPod_Twin_Cannon_20mm.p3d";
		muzzlePos = "muzzlePos";
		muzzleEnd = "muzzleEnd";
		hardpoints[] = {"B_A143_BUZZARD_CENTER_PYLON","20MM_TWIN_CANNON"};
		pylonWeapon = "Twin_Cannon_20mm_gunpod";
		mass = 230;
	};
	class PylonWeapon_2000Rnd_65x39_belt: 2000Rnd_65x39_Belt_Tracer_Green_Splash
	{
		displayName = "$STR_A3_LMG_Minigun0";
		descriptionShort = "$STR_A3_cfgMagazine_65Minigun_tooltip";
		model = "\A3\Weapons_F\DynamicLoadout\PylonPod_Minigun_Heli_Light_02.p3d";
		muzzlePos = "machinegun_beg";
		muzzleEnd = "machinegun_end";
		hardpoints[] = {"I_ORCA_RIGHT_PYLON"};
		pylonWeapon = "LMG_Minigun_heli";
		mass = 200;
	};
	class PylonRack_20Rnd_Rocket_03_HE_F: 20Rnd_Rocket_03_HE_F
	{
		displayName = "$STR_A3_PylonRack_20Rnd_Rocket_03_HE_F0";
		count = 20;
		model = "\A3\Weapons_F\DynamicLoadout\PylonPod_Rocket_01_F.p3d";
		muzzlePos = "muzzlePos";
		muzzleEnd = "muzzleEnd";
		hardpoints[] = {"O_MISSILE_PYLON"};
		pylonWeapon = "Rocket_03_HE_Plane_CAS_02_F";
		mass = 208;
		class mfdElements
		{
			class Plane_CAS_02
			{
				class Bones
				{
					class Center
					{
						type = "fixed";
						pos[] = {0.0,0.0};
					};
				};
				class Draw
				{
					class BlackBackgroundGroup
					{
						color[] = {0.0,0.0,0.0};
						alpha = 1;
						class BlackBackground
						{
							type = "polygon";
							points[] = {{{{0.1,0.11},1},{{0.17,0.11},1},{{0.17,0.33},1},{{0.1,0.33},1}}};
						};
					};
					class Default
					{
						condition = "(PylonAmmoRelative>0.01) - PylonSelected";
						color[] = {1,1,1};
						alpha = 0.2;
						class Shape
						{
							type = "polygon";
							texture = "a3\Weapons_F\MFD\UI\icon_place_cas_02_rocket_02_ca.paa";
							points[] = {{{{0.1,0.1},1},{{0.18,0.1},1},{{0.18,0.34},1},{{0.1,0.34},1}}};
						};
						class PylonText1
						{
							type = "text";
							source = "pylonammo";
							scale = 1;
							sourceScale = 1;
							align = "center";
							pos[] = {{0.14,0.27},1};
							right[] = {{0.18,0.27},1};
							down[] = {{0.14,0.301},1};
						};
					};
					class Selected: Default
					{
						color[] = {0,0.12,0};
						condition = "(PylonSelected +  PylonAmmoRelative)/2";
						alpha = 1;
						class Shape: Shape{};
						class PylonText1: PylonText1{};
					};
					class Empty: Selected
					{
						condition = "PylonAmmoRelative <= 0";
						color[] = {1.0,0.0,0.0,1.0};
						class Shape: Shape{};
						class PylonText1: PylonText1{};
					};
				};
			};
			class VTOL_02
			{
				class Bones
				{
					class Center
					{
						type = "fixed";
						pos[] = {0.0,0.0};
					};
					class R1: Center
					{
						pos[] = {0.0,0.0125};
					};
				};
				class Draw
				{
					class Default
					{
						condition = "PylonAmmoRelative>0";
						color[] = {0.15,1.0,0.15,1.0};
						alpha = 0.22;
						class Shape
						{
							type = "line";
							width = 2.0;
							points[] = {{"R1",{0,-0.03},1},{"R1",{0.012,-0.02598},1},{"R1",{0.020784,-0.015},1},{"R1",{0.024,0},1},{"R1",{0.020784,0.015},1},{"R1",{0.012,0.02598},1},{"R1",{0,0.03},1},{"R1",{-0.012,0.02598},1},{"R1",{-0.020784,0.015},1},{"R1",{-0.024,0},1},{"R1",{-0.020784,-0.015},1},{"R1",{-0.012,-0.02598},1},{"R1",{0,-0.03},1},{}};
						};
						class PylonText1
						{
							type = "text";
							source = "static";
							text = "RKT";
							scale = 1;
							sourceScale = 1;
							align = "center";
							pos[] = {"Center",1,{0.0,-0.051},1};
							right[] = {"Center",1,{0.018,-0.051},1};
							down[] = {"Center",1,{0.0,-0.03},1};
						};
						class PylonAmmo1
						{
							type = "text";
							source = "pylonammo";
							scale = 1;
							sourceScale = 1;
							align = "center";
							pos[] = {{0.0,0},1};
							right[] = {{0.027,0},1};
							down[] = {{0.0,0.028},1};
						};
					};
					class Selected: Default
					{
						condition = "(PylonSelected +  PylonAmmoRelative)/2";
						alpha = 1;
						class Shape: Shape{};
						class PylonText1: PylonText1{};
					};
					class Empty: Selected
					{
						condition = "PylonAmmoRelative <= 0";
						color[] = {1.0,0.0,0.0,1.0};
						class Shape: Shape{};
						class PylonText1: PylonText1{};
						class PylonAmmo1: PylonAmmo1{};
						class Background
						{
							type = "polygon";
							points[] = {{{"R1",1,{0,0},1},{"R1",{0.0169706,-0.0212132},1},{"R1",{0.024,1.31134e-09},1},{"R1",{0.0169706,0.0212132},1}},{{"R1",1,{0,0},1},{"R1",{0.0169706,0.0212132},1},{"R1",{-2.09815e-09,0.03},1},{"R1",{-0.0169706,0.0212132},1}},{{"R1",1,{0,0},1},{"R1",{-0.0169706,0.0212132},1},{"R1",{-0.024,-3.57746e-10},1},{"R1",{-0.0169706,-0.0212132},1}},{{"R1",1,{0,0},1},{"R1",{-0.0169706,-0.0212132},1},{"R1",{4.19629e-09,-0.03},1},{"R1",{0.0169706,-0.0212132},1}}};
						};
					};
				};
			};
		};
	};
	class PylonRack_20Rnd_Rocket_03_AP_F: 20Rnd_Rocket_03_AP_F
	{
		displayName = "$STR_A3_PylonRack_20Rnd_Rocket_03_AP_F0";
		count = 20;
		model = "\A3\Weapons_F\DynamicLoadout\PylonPod_Rocket_01_F.p3d";
		muzzlePos = "muzzlePos";
		muzzleEnd = "muzzleEnd";
		hardpoints[] = {"O_MISSILE_PYLON"};
		pylonWeapon = "Rocket_03_AP_Plane_CAS_02_F";
		mass = 208;
		class mfdElements
		{
			class Plane_CAS_02
			{
				class Bones
				{
					class Center
					{
						type = "fixed";
						pos[] = {0.0,0.0};
					};
				};
				class Draw
				{
					class BlackBackgroundGroup
					{
						color[] = {0.0,0.0,0.0};
						alpha = 1;
						class BlackBackground
						{
							type = "polygon";
							points[] = {{{{0.1,0.11},1},{{0.17,0.11},1},{{0.17,0.33},1},{{0.1,0.33},1}}};
						};
					};
					class Default
					{
						condition = "(PylonAmmoRelative>0.01) - PylonSelected";
						color[] = {1,1,1};
						alpha = 0.2;
						class Shape
						{
							type = "polygon";
							texture = "a3\Weapons_F\MFD\UI\icon_place_cas_02_rocket_02_ca.paa";
							points[] = {{{{0.1,0.1},1},{{0.18,0.1},1},{{0.18,0.34},1},{{0.1,0.34},1}}};
						};
						class PylonText1
						{
							type = "text";
							source = "pylonammo";
							scale = 1;
							sourceScale = 1;
							align = "center";
							pos[] = {{0.14,0.27},1};
							right[] = {{0.18,0.27},1};
							down[] = {{0.14,0.301},1};
						};
					};
					class Selected: Default
					{
						color[] = {0,0.12,0};
						condition = "(PylonSelected +  PylonAmmoRelative)/2";
						alpha = 1;
						class Shape: Shape{};
						class PylonText1: PylonText1{};
					};
					class Empty: Selected
					{
						condition = "PylonAmmoRelative <= 0";
						color[] = {1.0,0.0,0.0,1.0};
						class Shape: Shape{};
						class PylonText1: PylonText1{};
					};
				};
			};
			class VTOL_02
			{
				class Bones
				{
					class Center
					{
						type = "fixed";
						pos[] = {0.0,0.0};
					};
					class R1: Center
					{
						pos[] = {0.0,0.0125};
					};
				};
				class Draw
				{
					class Default
					{
						condition = "PylonAmmoRelative>0";
						color[] = {0.15,1.0,0.15,1.0};
						alpha = 0.22;
						class Shape
						{
							type = "line";
							width = 2.0;
							points[] = {{"R1",{0,-0.03},1},{"R1",{0.012,-0.02598},1},{"R1",{0.020784,-0.015},1},{"R1",{0.024,0},1},{"R1",{0.020784,0.015},1},{"R1",{0.012,0.02598},1},{"R1",{0,0.03},1},{"R1",{-0.012,0.02598},1},{"R1",{-0.020784,0.015},1},{"R1",{-0.024,0},1},{"R1",{-0.020784,-0.015},1},{"R1",{-0.012,-0.02598},1},{"R1",{0,-0.03},1},{}};
						};
						class PylonText1
						{
							type = "text";
							source = "static";
							text = "RKT";
							scale = 1;
							sourceScale = 1;
							align = "center";
							pos[] = {"Center",1,{0.0,-0.051},1};
							right[] = {"Center",1,{0.018,-0.051},1};
							down[] = {"Center",1,{0.0,-0.03},1};
						};
						class PylonAmmo1
						{
							type = "text";
							source = "pylonammo";
							scale = 1;
							sourceScale = 1;
							align = "center";
							pos[] = {{0.0,0},1};
							right[] = {{0.027,0},1};
							down[] = {{0.0,0.028},1};
						};
					};
					class Selected: Default
					{
						condition = "(PylonSelected +  PylonAmmoRelative)/2";
						alpha = 1;
						class Shape: Shape{};
						class PylonText1: PylonText1{};
					};
					class Empty: Selected
					{
						condition = "PylonAmmoRelative <= 0";
						color[] = {1.0,0.0,0.0,1.0};
						class Shape: Shape{};
						class PylonText1: PylonText1{};
						class PylonAmmo1: PylonAmmo1{};
						class Background
						{
							type = "polygon";
							points[] = {{{"R1",1,{0,0},1},{"R1",{0.0169706,-0.0212132},1},{"R1",{0.024,1.31134e-09},1},{"R1",{0.0169706,0.0212132},1}},{{"R1",1,{0,0},1},{"R1",{0.0169706,0.0212132},1},{"R1",{-2.09815e-09,0.03},1},{"R1",{-0.0169706,0.0212132},1}},{{"R1",1,{0,0},1},{"R1",{-0.0169706,0.0212132},1},{"R1",{-0.024,-3.57746e-10},1},{"R1",{-0.0169706,-0.0212132},1}},{{"R1",1,{0,0},1},{"R1",{-0.0169706,-0.0212132},1},{"R1",{4.19629e-09,-0.03},1},{"R1",{0.0169706,-0.0212132},1}}};
						};
					};
				};
			};
		};
	};
	class PylonRack_19Rnd_Rocket_Skyfire: 38Rnd_80mm_rockets
	{
		displayName = "$STR_A3_PylonRack_19Rnd_Rocket_Skyfire0";
		count = 19;
		model = "\A3\Weapons_F\DynamicLoadout\PylonPod_Rocket_Skyfire_F.p3d";
		muzzlePos = "muzzlePos";
		muzzleEnd = "muzzleEnd";
		hardpoints[] = {"O_MISSILE_PYLON","O_SKYFIRE"};
		pylonWeapon = "rockets_Skyfire";
		mass = 208;
		class mfdElements
		{
			class Plane_CAS_02
			{
				class Bones
				{
					class Center
					{
						type = "fixed";
						pos[] = {0.0,0.0};
					};
				};
				class Draw
				{
					class BlackBackgroundGroup
					{
						color[] = {0.0,0.0,0.0};
						alpha = 1;
						class BlackBackground
						{
							type = "polygon";
							points[] = {{{{0.1,0.11},1},{{0.17,0.11},1},{{0.17,0.33},1},{{0.1,0.33},1}}};
						};
					};
					class Default
					{
						condition = "(PylonAmmoRelative>0.01) - PylonSelected";
						color[] = {1,1,1};
						alpha = 0.2;
						class Shape
						{
							type = "polygon";
							texture = "a3\Weapons_F\MFD\UI\icon_place_cas_02_rocket_01_ca.paa";
							points[] = {{{{0.1,0.1},1},{{0.18,0.1},1},{{0.18,0.34},1},{{0.1,0.34},1}}};
						};
						class PylonText1
						{
							type = "text";
							source = "pylonammo";
							scale = 1;
							sourceScale = 1;
							align = "center";
							pos[] = {{0.14,0.27},1};
							right[] = {{0.18,0.27},1};
							down[] = {{0.14,0.301},1};
						};
					};
					class Selected: Default
					{
						color[] = {0,0.12,0};
						condition = "(PylonSelected +  PylonAmmoRelative)/2";
						alpha = 1;
						class Shape: Shape{};
						class PylonText1: PylonText1{};
					};
					class Empty: Selected
					{
						condition = "PylonAmmoRelative <= 0";
						color[] = {1.0,0.0,0.0,1.0};
						class Shape: Shape{};
						class PylonText1: PylonText1{};
					};
				};
			};
			class VTOL_02
			{
				class Bones
				{
					class Center
					{
						type = "fixed";
						pos[] = {0.0,0.0};
					};
					class R1: Center
					{
						pos[] = {0.0,0.0125};
					};
				};
				class Draw
				{
					class Default
					{
						condition = "PylonAmmoRelative>0";
						color[] = {0.15,1.0,0.15,1.0};
						alpha = 0.22;
						class Shape
						{
							type = "line";
							width = 2.0;
							points[] = {{"R1",{-0.013,-0.025},1},{"R1",{0.013,-0.025},1},{"R1",{0.024,-0.0},1},{"R1",{0.013,0.025},1},{"R1",{-0.013,0.025},1},{"R1",{-0.024,-0.0},1},{"R1",{-0.013,-0.025},1}};
						};
						class PylonText1
						{
							type = "text";
							source = "static";
							text = "RKT";
							scale = 1;
							sourceScale = 1;
							align = "center";
							pos[] = {"Center",1,{0.0,-0.051},1};
							right[] = {"Center",1,{0.018,-0.051},1};
							down[] = {"Center",1,{0.0,-0.03},1};
						};
						class PylonAmmo1
						{
							type = "text";
							source = "pylonammo";
							scale = 1;
							sourceScale = 1;
							align = "center";
							pos[] = {{0.0,0},1};
							right[] = {{0.027,0},1};
							down[] = {{0.0,0.028},1};
						};
					};
					class Selected: Default
					{
						condition = "(PylonSelected +  PylonAmmoRelative)/2";
						alpha = 1;
						class Shape: Shape{};
						class PylonText1: PylonText1{};
					};
					class Empty: Selected
					{
						condition = "PylonAmmoRelative <= 0";
						color[] = {1.0,0.0,0.0,1.0};
						class Shape: Shape{};
						class PylonText1: PylonText1{};
						class PylonAmmo1: PylonAmmo1{};
						class Background
						{
							type = "polygon";
							points[] = {{{"R1",1,{0,0},1},{"R1",{0.0169706,-0.0212132},1},{"R1",{0.024,1.31134e-09},1},{"R1",{0.0169706,0.0212132},1}},{{"R1",1,{0,0},1},{"R1",{0.0169706,0.0212132},1},{"R1",{-2.09815e-09,0.03},1},{"R1",{-0.0169706,0.0212132},1}},{{"R1",1,{0,0},1},{"R1",{-0.0169706,0.0212132},1},{"R1",{-0.024,-3.57746e-10},1},{"R1",{-0.0169706,-0.0212132},1}},{{"R1",1,{0,0},1},{"R1",{-0.0169706,-0.0212132},1},{"R1",{4.19629e-09,-0.03},1},{"R1",{0.0169706,-0.0212132},1}}};
						};
					};
				};
			};
		};
	};
	class PylonRack_1Rnd_Missile_AA_03_F: 2Rnd_Missile_AA_03_F
	{
		displayName = "$STR_A3_MISSILE_AA_03_F0";
		count = 1;
		model = "\A3\Weapons_F\DynamicLoadout\PylonPod_1x_Missile_AA_03_F.p3d";
		hardpoints[] = {"O_MISSILE_PYLON"};
		pylonWeapon = "Missile_AA_03_Plane_CAS_02_F";
		mass = 125;
		class mfdElements
		{
			class Plane_CAS_02
			{
				class Bones
				{
					class Center
					{
						type = "fixed";
						pos[] = {0.0,0.0};
					};
				};
				class Draw
				{
					class BlackBackgroundGroup
					{
						color[] = {0.0,0.0,0.0};
						alpha = 1;
						class BlackBackground
						{
							type = "polygon";
							points[] = {{{{0.1,0.13},1},{{0.17,0.13},1},{{0.17,0.31},1},{{0.1,0.31},1}}};
						};
					};
					class Default
					{
						condition = "(PylonAmmoRelative>0.01) - PylonSelected";
						color[] = {1,1,1};
						alpha = 0.2;
						class Shape
						{
							type = "polygon";
							texture = "a3\Weapons_F\MFD\UI\icon_place_cas_02_aa_03_ca.paa";
							points[] = {{{{0.1,0.1},1},{{0.18,0.1},1},{{0.18,0.34},1},{{0.1,0.34},1}}};
						};
					};
					class Selected: Default
					{
						color[] = {0,0.12,0};
						condition = "(PylonSelected +  PylonAmmoRelative)/2";
						alpha = 1;
						class Shape: Shape{};
					};
					class Empty: Selected
					{
						condition = "PylonAmmoRelative <= 0";
						color[] = {1.0,0.0,0.0,1.0};
						class Shape: Shape{};
					};
				};
			};
			class VTOL_02
			{
				class Bones
				{
					class Center
					{
						type = "fixed";
						pos[] = {0.0,0.0};
					};
					class R1: Center
					{
						pos[] = {0.0,0.0125};
					};
				};
				class Draw
				{
					class Default
					{
						condition = "PylonAmmoRelative>0";
						color[] = {0.15,1.0,0.15,1.0};
						alpha = 0.22;
						class Shape
						{
							type = "line";
							width = 4.0;
							points[] = {{"R1",{0,-0.01375},1},{"R1",{0.0055,-0.0119075},1},{"R1",{0.009526,-0.006875},1},{"R1",{0.011,0},1},{"R1",{0.009526,0.006875},1},{"R1",{0.0055,0.0119075},1},{"R1",{0,0.01375},1},{"R1",{-0.0055,0.0119075},1},{"R1",{-0.009526,0.006875},1},{"R1",{-0.011,0},1},{"R1",{-0.009526,-0.006875},1},{"R1",{-0.0055,-0.0119075},1},{"R1",{0,-0.01375},1},{},{"R1",{0.00777817,-0.00972272},1},{"R1",{0.0162635,-0.0203293},1},{},{"R1",{0.00777817,0.00972272},1},{"R1",{0.0162635,0.0203293},1},{},{"R1",{-0.00777817,0.00972272},1},{"R1",{-0.0162635,0.0203293},1},{},{"R1",{-0.00777818,-0.00972272},1},{"R1",{-0.0162635,-0.0203293},1},{}};
						};
						class PylonText1
						{
							type = "text";
							source = "static";
							text = "AA";
							scale = 1;
							sourceScale = 1;
							align = "center";
							pos[] = {"Center",1,{0.0,-0.051},1};
							right[] = {"Center",1,{0.018,-0.051},1};
							down[] = {"Center",1,{0.0,-0.03},1};
						};
					};
					class Selected: Default
					{
						condition = "(PylonSelected +  PylonAmmoRelative)/2";
						alpha = 1;
						class Shape: Shape{};
						class PylonText1: PylonText1{};
						class Background
						{
							type = "polygon";
							points[] = {{{"R1",1,{0,0},1},{"R1",{0.00777817,-0.00972272},1},{"R1",{0.011,6.01032e-10},1},{"R1",{0.00777817,0.00972272},1}},{{"R1",1,{0,0},1},{"R1",{0.00777817,0.00972272},1},{"R1",{-9.61651e-10,0.01375},1},{"R1",{-0.00777817,0.00972272},1}},{{"R1",1,{0,0},1},{"R1",{-0.00777817,0.00972272},1},{"R1",{-0.011,-1.63967e-10},1},{"R1",{-0.00777818,-0.00972272},1}},{{"R1",1,{0,0},1},{"R1",{-0.00777818,-0.00972272},1},{"R1",{1.9233e-09,-0.01375},1},{"R1",{0.00777818,-0.00972271},1}}};
						};
					};
					class Empty: Selected
					{
						condition = "PylonAmmoRelative <= 0";
						color[] = {1.0,0.0,0.0,1.0};
						class Shape: Shape{};
						class PylonText1: PylonText1{};
						class Background: Background{};
					};
				};
			};
		};
	};
	class PylonMissile_1Rnd_Missile_AA_03_F: PylonRack_1Rnd_Missile_AA_03_F
	{
		hardpoints[] = {"O_SAHR3"};
		model = "\A3\Weapons_F\DynamicLoadout\PylonMissile_1x_Bomb_04_F.p3d";
		mass = 85;
		class mfdElements
		{
			class Plane_CAS_02
			{
				class Bones
				{
					class Center
					{
						type = "fixed";
						pos[] = {0.0,0.0};
					};
				};
				class Draw
				{
					class BlackBackgroundGroup
					{
						color[] = {0.0,0.0,0.0};
						alpha = 1;
						class BlackBackground
						{
							type = "polygon";
							points[] = {{{{0.1,0.13},1},{{0.17,0.13},1},{{0.17,0.31},1},{{0.1,0.31},1}}};
						};
					};
					class Default
					{
						condition = "(PylonAmmoRelative>0.01) - PylonSelected";
						color[] = {1,1,1};
						alpha = 0.2;
						class Shape
						{
							type = "polygon";
							texture = "a3\Weapons_F\MFD\UI\icon_place_cas_02_aa_03_ca.paa";
							points[] = {{{{0.1,0.1},1},{{0.18,0.1},1},{{0.18,0.34},1},{{0.1,0.34},1}}};
						};
					};
					class Selected: Default
					{
						color[] = {0,0.12,0};
						condition = "(PylonSelected +  PylonAmmoRelative)/2";
						alpha = 1;
						class Shape: Shape{};
					};
					class Empty: Selected
					{
						condition = "PylonAmmoRelative <= 0";
						color[] = {1.0,0.0,0.0,1.0};
						class Shape: Shape{};
					};
				};
			};
			class VTOL_02
			{
				class Bones
				{
					class Center
					{
						type = "fixed";
						pos[] = {0.0,0.0};
					};
					class R1: Center
					{
						pos[] = {0.0,0.0125};
					};
				};
				class Draw
				{
					class Default
					{
						condition = "PylonAmmoRelative>0";
						color[] = {0.15,1.0,0.15,1.0};
						alpha = 0.22;
						class Shape
						{
							type = "line";
							width = 4.0;
							points[] = {{"R1",{0,-0.01375},1},{"R1",{0.0055,-0.0119075},1},{"R1",{0.009526,-0.006875},1},{"R1",{0.011,0},1},{"R1",{0.009526,0.006875},1},{"R1",{0.0055,0.0119075},1},{"R1",{0,0.01375},1},{"R1",{-0.0055,0.0119075},1},{"R1",{-0.009526,0.006875},1},{"R1",{-0.011,0},1},{"R1",{-0.009526,-0.006875},1},{"R1",{-0.0055,-0.0119075},1},{"R1",{0,-0.01375},1},{},{"R1",{0.00777817,-0.00972272},1},{"R1",{0.0162635,-0.0203293},1},{},{"R1",{0.00777817,0.00972272},1},{"R1",{0.0162635,0.0203293},1},{},{"R1",{-0.00777817,0.00972272},1},{"R1",{-0.0162635,0.0203293},1},{},{"R1",{-0.00777818,-0.00972272},1},{"R1",{-0.0162635,-0.0203293},1},{}};
						};
						class PylonText1
						{
							type = "text";
							source = "static";
							text = "AA";
							scale = 1;
							sourceScale = 1;
							align = "center";
							pos[] = {"Center",1,{0.0,-0.051},1};
							right[] = {"Center",1,{0.018,-0.051},1};
							down[] = {"Center",1,{0.0,-0.03},1};
						};
					};
					class Selected: Default
					{
						condition = "(PylonSelected +  PylonAmmoRelative)/2";
						alpha = 1;
						class Shape: Shape{};
						class PylonText1: PylonText1{};
						class Background
						{
							type = "polygon";
							points[] = {{{"R1",1,{0,0},1},{"R1",{0.00777817,-0.00972272},1},{"R1",{0.011,6.01032e-10},1},{"R1",{0.00777817,0.00972272},1}},{{"R1",1,{0,0},1},{"R1",{0.00777817,0.00972272},1},{"R1",{-9.61651e-10,0.01375},1},{"R1",{-0.00777817,0.00972272},1}},{{"R1",1,{0,0},1},{"R1",{-0.00777817,0.00972272},1},{"R1",{-0.011,-1.63967e-10},1},{"R1",{-0.00777818,-0.00972272},1}},{{"R1",1,{0,0},1},{"R1",{-0.00777818,-0.00972272},1},{"R1",{1.9233e-09,-0.01375},1},{"R1",{0.00777818,-0.00972271},1}}};
						};
					};
					class Empty: Selected
					{
						condition = "PylonAmmoRelative <= 0";
						color[] = {1.0,0.0,0.0,1.0};
						class Shape: Shape{};
						class PylonText1: PylonText1{};
						class Background: Background{};
					};
				};
			};
		};
	};
	class PylonRack_1Rnd_Missile_AGM_01_F: 4Rnd_Missile_AGM_01_F
	{
		displayName = "$STR_A3_MISSILE_AGM_01_F0";
		model = "\A3\Weapons_F\DynamicLoadout\PylonPod_1x_Missile_AGM_01_F.p3d";
		count = 1;
		hardpoints[] = {"O_MISSILE_PYLON"};
		pylonWeapon = "Missile_AGM_01_Plane_CAS_02_F";
		mass = 361;
		class mfdElements
		{
			class Plane_CAS_02
			{
				class Bones
				{
					class Center
					{
						type = "fixed";
						pos[] = {0.0,0.0};
					};
				};
				class Draw
				{
					class BlackBackgroundGroup
					{
						color[] = {0.0,0.0,0.0};
						alpha = 1;
						class BlackBackground
						{
							type = "polygon";
							points[] = {{{{0.1,0.11},1},{{0.17,0.11},1},{{0.17,0.31},1},{{0.1,0.31},1}}};
						};
					};
					class Default
					{
						condition = "(PylonAmmoRelative>0.01) - PylonSelected";
						color[] = {1,1,1};
						alpha = 0.2;
						class Shape
						{
							type = "polygon";
							texture = "a3\Weapons_F\MFD\UI\icon_place_cas_02_agm_01_ca.paa";
							points[] = {{{{0.1,0.1},1},{{0.18,0.1},1},{{0.18,0.34},1},{{0.1,0.34},1}}};
						};
					};
					class Selected: Default
					{
						color[] = {0,0.12,0};
						condition = "(PylonSelected +  PylonAmmoRelative)/2";
						alpha = 1;
						class Shape: Shape{};
					};
					class Empty: Selected
					{
						condition = "PylonAmmoRelative <= 0";
						color[] = {1.0,0.0,0.0,1.0};
						class Shape: Shape{};
					};
				};
			};
			class VTOL_02
			{
				class Bones
				{
					class Center
					{
						type = "fixed";
						pos[] = {0.0,0.0};
					};
					class R1: Center
					{
						pos[] = {0.0,0.0125};
					};
				};
				class Draw
				{
					class Default
					{
						condition = "PylonAmmoRelative>0";
						color[] = {0.15,1.0,0.15,1.0};
						alpha = 0.22;
						class Shape
						{
							type = "line";
							width = 4.0;
							points[] = {{"R1",{0,-0.01875},1},{"R1",{0.0075,-0.0162375},1},{"R1",{0.01299,-0.009375},1},{"R1",{0.015,0},1},{"R1",{0.01299,0.009375},1},{"R1",{0.0075,0.0162375},1},{"R1",{0,0.01875},1},{"R1",{-0.0075,0.0162375},1},{"R1",{-0.01299,0.009375},1},{"R1",{-0.015,0},1},{"R1",{-0.01299,-0.009375},1},{"R1",{-0.0075,-0.0162375},1},{"R1",{0,-0.01875},1},{},{"R1",{0.0106066,-0.0132583},1},{"R1",{0.0176777,-0.0220971},1},{},{"R1",{0.0106066,0.0132583},1},{"R1",{0.0176777,0.0220971},1},{},{"R1",{-0.0106066,0.0132583},1},{"R1",{-0.0176777,0.0220971},1},{},{"R1",{-0.0106066,-0.0132582},1},{"R1",{-0.0176777,-0.0220971},1},{}};
						};
						class PylonText1
						{
							type = "text";
							source = "static";
							text = "AGM";
							scale = 1;
							sourceScale = 1;
							align = "center";
							pos[] = {"Center",1,{0.0,-0.051},1};
							right[] = {"Center",1,{0.018,-0.051},1};
							down[] = {"Center",1,{0.0,-0.03},1};
						};
					};
					class Selected: Default
					{
						condition = "(PylonSelected +  PylonAmmoRelative)/2";
						alpha = 1;
						class Shape: Shape{};
						class PylonText1: PylonText1{};
						class Background
						{
							type = "polygon";
							points[] = {{{"R1",1,{0,0},1},{"R1",{0.0106066,-0.0132583},1},{"R1",{0.015,8.19589e-10},1},{"R1",{0.0106066,0.0132583},1}},{{"R1",1,{0,0},1},{"R1",{0.0106066,0.0132583},1},{"R1",{-1.31134e-09,0.01875},1},{"R1",{-0.0106066,0.0132583},1}},{{"R1",1,{0,0},1},{"R1",{-0.0106066,0.0132583},1},{"R1",{-0.015,-2.23592e-10},1},{"R1",{-0.0106066,-0.0132582},1}},{{"R1",1,{0,0},1},{"R1",{-0.0106066,-0.0132582},1},{"R1",{2.62268e-09,-0.01875},1},{"R1",{0.0106066,-0.0132582},1}}};
						};
					};
					class Empty: Selected
					{
						condition = "PylonAmmoRelative <= 0";
						color[] = {1.0,0.0,0.0,1.0};
						class Shape: Shape{};
						class PylonText1: PylonText1{};
						class Background: Background{};
					};
				};
			};
		};
	};
	class PylonMissile_1Rnd_Bomb_03_F: 2Rnd_Bomb_03_F
	{
		displayName = "$STR_A3_Bomb_03_F0";
		count = 1;
		model = "\A3\Weapons_F\DynamicLoadout\PylonMissile_1x_Bomb_03_F.p3d";
		hardpoints[] = {"O_BOMB_PYLON","O_BOMB_PYLON_HELI"};
		pylonWeapon = "Bomb_03_Plane_CAS_02_F";
		mass = 250;
		class mfdElements
		{
			class Plane_CAS_02
			{
				class Bones
				{
					class Center
					{
						type = "fixed";
						pos[] = {0.0,0.0};
					};
				};
				class Draw
				{
					class BlackBackgroundGroup
					{
						color[] = {0.0,0.0,0.0};
						alpha = 1;
						class BlackBackground
						{
							type = "polygon";
							points[] = {{{{0.1,0.1},1},{{0.17,0.1},1},{{0.17,0.34},1},{{0.1,0.34},1}}};
						};
					};
					class Default
					{
						condition = "(PylonAmmoRelative>0.01) - PylonSelected";
						color[] = {1,1,1};
						alpha = 0.2;
						class Shape
						{
							type = "polygon";
							texture = "a3\Weapons_F\MFD\UI\icon_place_cas_02_bomb_03_ca.paa";
							points[] = {{{{0.1,0.1},1},{{0.18,0.1},1},{{0.18,0.34},1},{{0.1,0.34},1}}};
						};
					};
					class Selected: Default
					{
						color[] = {0,0.12,0};
						condition = "(PylonSelected +  PylonAmmoRelative)/2";
						alpha = 1;
						class Shape: Shape{};
					};
					class Empty: Selected
					{
						condition = "PylonAmmoRelative <= 0";
						color[] = {1.0,0.0,0.0,1.0};
						class Shape: Shape{};
					};
				};
			};
			class VTOL_02
			{
				class Bones
				{
					class Center
					{
						type = "fixed";
						pos[] = {0.0,0.0};
					};
					class R1: Center
					{
						pos[] = {0.0,0.0125};
					};
				};
				class Draw
				{
					class Default
					{
						condition = "PylonAmmoRelative>0";
						color[] = {0.15,1.0,0.15,1.0};
						alpha = 0.22;
						class Shape
						{
							type = "line";
							width = 4.0;
							points[] = {{"R1",{0,-0.01875},1},{"R1",{0.0075,-0.0162375},1},{"R1",{0.01299,-0.009375},1},{"R1",{0.015,0},1},{"R1",{0.01299,0.009375},1},{"R1",{0.0075,0.0162375},1},{"R1",{0,0.01875},1},{"R1",{-0.0075,0.0162375},1},{"R1",{-0.01299,0.009375},1},{"R1",{-0.015,0},1},{"R1",{-0.01299,-0.009375},1},{"R1",{-0.0075,-0.0162375},1},{"R1",{0,-0.01875},1},{},{"R1",{0.0106066,-0.0132583},1},{"R1",{0.0176777,-0.0220971},1},{},{"R1",{0.0106066,0.0132583},1},{"R1",{0.0176777,0.0220971},1},{},{"R1",{-0.0106066,0.0132583},1},{"R1",{-0.0176777,0.0220971},1},{},{"R1",{-0.0106066,-0.0132582},1},{"R1",{-0.0176777,-0.0220971},1},{}};
						};
						class PylonText1
						{
							type = "text";
							source = "static";
							text = "LGB";
							scale = 1;
							sourceScale = 1;
							align = "center";
							pos[] = {"Center",1,{0.0,-0.051},1};
							right[] = {"Center",1,{0.018,-0.051},1};
							down[] = {"Center",1,{0.0,-0.03},1};
						};
					};
					class Selected: Default
					{
						condition = "(PylonSelected +  PylonAmmoRelative)/2";
						alpha = 1;
						class Shape: Shape{};
						class PylonText1: PylonText1{};
						class Background
						{
							type = "polygon";
							points[] = {{{"R1",1,{0,0},1},{"R1",{0.0106066,-0.0132583},1},{"R1",{0.015,8.19589e-10},1},{"R1",{0.0106066,0.0132583},1}},{{"R1",1,{0,0},1},{"R1",{0.0106066,0.0132583},1},{"R1",{-1.31134e-09,0.01875},1},{"R1",{-0.0106066,0.0132583},1}},{{"R1",1,{0,0},1},{"R1",{-0.0106066,0.0132583},1},{"R1",{-0.015,-2.23592e-10},1},{"R1",{-0.0106066,-0.0132582},1}},{{"R1",1,{0,0},1},{"R1",{-0.0106066,-0.0132582},1},{"R1",{2.62268e-09,-0.01875},1},{"R1",{0.0106066,-0.0132582},1}}};
						};
					};
					class Empty: Selected
					{
						condition = "PylonAmmoRelative <= 0";
						color[] = {1.0,0.0,0.0,1.0};
						class Shape: Shape{};
						class PylonText1: PylonText1{};
						class Background: Background{};
					};
				};
			};
		};
	};
};
class CfgRecoils
{
	recoil_single_aa40[] = {0,0,0,0.03,0.0221658,0.0086088,0.04,0.0190902,0.0030024,0.05,0.011853,0.0018336,0.06,0.0044328,0.000684,0.06,0,0,0.06,-0.0014412,-0.0002304,0.06,-0.002118,-0.0003384,0.06,-0.0022062,-0.0003528,0.06,-0.0018828,-0.0003,0.06,-0.0013236,-0.0002112,0.06,-0.0007062,-0.0001128,0.06,-0.0002058,-3.36e-05,0.06,-9e-05,0,0.06,0,0};
	recoil_single_prone_aa40[] = {0,0,0,0.03,0.0221658,0.0043044,0.04,0.0190902,0.0015012,0.05,0.011853,0.0009168,0.06,0.0044328,0.000342,0.06,0,0,0.06,-0.0014412,-5.76e-05,0.06,-0.002118,-0.0001692,0.06,-0.0022062,-0.0001764,0.06,-0.0018828,-0.00015,0.06,-0.0013236,-0.0001056,0.06,-0.0007062,-5.64e-05,0.06,-0.0002058,-1.68e-05,0.06,-9e-05,0,0.06,0,0};
	recoil_auto_aa40[] = {0,0,0,0.06,0.0221658,0.0086088,0.06,0.0190902,0.0030024,0.06,0.011853,0.0018336,0.06,0.0044328,0.000684,0.06,0,0};
	recoil_auto_prone_aa40[] = {0,0,0,0.06,0.0221658,0.0043044,0.06,0.0190902,0.0015012,0.06,0.011853,0.0009168,0.06,0.0044328,0.000342,0.06,0,0};
	recoil_single_ksg[] = {0,0,0,0.03,0.0332487,0.0129132,0.04,0.0286353,0.0045036,0.05,0.0177795,0.0027504,0.06,0.0066492,0.001026,0.06,0,0,0.06,-0.0021618,-0.0003456,0.06,-0.003177,-0.0005076,0.06,-0.0033093,-0.0005292,0.06,-0.0028242,-0.00045,0.06,-0.0019854,-0.0003168,0.06,-0.0010593,-0.0001692,0.06,-0.0003087,-5.04e-05,0.06,-0.000135,0,0.06,0,0};
	recoil_single_prone_ksg[] = {0,0,0,0.03,0.0295544,0.0057392,0.04,0.0254536,0.0020016,0.05,0.015804,0.0012224,0.06,0.0059104,0.000456,0.06,0,0,0.06,-0.0019216,-7.68e-05,0.06,-0.002824,-0.0002256,0.06,-0.0029416,-0.0002352,0.06,-0.0025104,-0.0002,0.06,-0.0017648,-0.0001408,0.06,-0.0009416,-7.52e-05,0.06,-0.0002744,-2.24e-05,0.06,-0.00012,0,0.06,0,0};
	recoil_single_m4[] = {0,0,0,0.03,0.0332487,0.0129132,0.04,0.0286353,0.0045036,0.05,0.0177795,0.0027504,0.06,0.0066492,0.001026,0.06,0,0,0.06,-0.0021618,-0.0003456,0.06,-0.003177,-0.0005076,0.06,-0.0033093,-0.0005292,0.06,-0.0028242,-0.00045,0.06,-0.0019854,-0.0003168,0.06,-0.0010593,-0.0001692,0.06,-0.0003087,-5.04e-05,0.06,-0.000135,0,0.06,0,0};
	recoil_single_prone_m4[] = {0,0,0,0.03,0.0295544,0.0057392,0.04,0.0254536,0.0020016,0.05,0.015804,0.0012224,0.06,0.0059104,0.000456,0.06,0,0,0.06,-0.0019216,-7.68e-05,0.06,-0.002824,-0.0002256,0.06,-0.0029416,-0.0002352,0.06,-0.0025104,-0.0002,0.06,-0.0017648,-0.0001408,0.06,-0.0009416,-7.52e-05,0.06,-0.0002744,-2.24e-05,0.06,-0.00012,0,0.06,0,0};
	recoil_single_mk20[] = {0,0,0,0.03,0.00554145,0.028696,0.03,0.00795425,0.0120096,0.03,0.00691425,0.0085568,0.06,0.0033246,0.003648,0.06,-0.0003603,-0.002304,0.06,-0.0008825,-0.002256,0.06,-0.00091925,-0.00147,0.06,-0.0004707,-0.000375,0.06,0,0};
	recoil_single_prone_mk20[] = {0,0,0,0.03,0.00554145,0.007174,0.03,0.00795425,0.0045036,0.03,0.00691425,0.0039728,0.06,0.0033246,0.001938,0.06,-0.0003603,-0.001536,0.06,-0.0008825,-0.00141,0.06,-0.00091925,-0.000588,0.06,-0.0004707,-0.000125,0.06,0,0};
	recoil_auto_mk20[] = {0,0,0,0.03,0.00554145,0.028696,0.03,0.00795425,0.0120096,0.03,0.00691425,0.0085568,0.06,0.0033246,0.003648,0.06,-0.0003603,-0.002304,0.06,-0.0008825,-0.002256,0.06,-0.00091925,-0.00147,0.06,-0.0004707,-0.000375,0.06,0,0};
	recoil_auto_prone_mk20[] = {0,0,0,0.03,0.00554145,0.007174,0.03,0.00795425,0.0045036,0.03,0.00691425,0.0039728,0.06,0.0033246,0.001938,0.06,-0.0003603,-0.001536,0.06,-0.0008825,-0.00141,0.06,-0.00091925,-0.000588,0.06,-0.0004707,-0.000125,0.06,0,0};
	recoil_single_mx[] = {0,0,0,0.03,0.0110829,0.043044,0.03,0.0159085,0.0170136,0.03,0.0138285,0.0116128,0.06,0.0066492,0.004788,0.06,-0.0007206,-0.002688,0.06,-0.001765,-0.00282,0.06,-0.0018385,-0.001764,0.06,-0.0009414,-0.0005,0.06,0,0};
	recoil_single_prone_mx[] = {0,0,0,0.03,0.0110829,0.0100436,0.03,0.0159085,0.0055044,0.03,0.0138285,0.004584,0.06,0.0066492,0.002166,0.06,-0.0007206,-0.000768,0.06,-0.001765,-0.000564,0.06,-0.0018385,-0.000294,0.06,-0.0009414,-0.00015,0.06,0,0};
	recoil_auto_mx[] = {0,0,0,0.06,0.0443316,0.0243916,0.06,0.0477255,0.0105084,0.06,0.0335835,0.0073344,0.06,0.0140372,0.003192,0.03,-0.0007206,-0.002688,0.03,-0.001765,-0.00282,0.03,-0.0018385,-0.001764,0.06,0,0};
	recoil_auto_prone_mx[] = {0,0,0,0.06,0.0443316,0.0043044,0.06,0.0477255,0.0035028,0.06,0.0335835,0.0033616,0.06,0.0140372,0.00171,0.03,-0.0007206,-0.001536,0.03,-0.001765,-0.001128,0.03,-0.0018385,-0.000588,0.06,0,0};
	recoil_single_prone_mx_sw[] = {0,0,0,0.03,0.0110829,0.0100436,0.03,0.0159085,0.0055044,0.03,0.0138285,0.004584,0.06,0.0066492,0.002166,0.06,-0.0007206,-0.000768,0.06,-0.001765,-0.000564,0.06,-0.0018385,-0.000294,0.06,-0.0009414,-0.00015,0.06,0,0};
	recoil_single_ktb[] = {0,0,0,0.03,0.00554145,0.03587,0.03,0.00795425,0.015012,0.03,0.00691425,0.0100848,0.06,0.0033246,0.004104,0.06,-0.0003603,-0.002496,0.06,-0.0008825,-0.002538,0.06,-0.00091925,-0.00147,0.06,-0.0004707,-0.0005,0.06,0,0};
	recoil_single_prone_ktb[] = {0,0,0,0.03,0.00554145,0.007174,0.03,0.00795425,0.0040032,0.03,0.00691425,0.003056,0.06,0.0033246,0.00171,0.06,-0.0003603,-0.001728,0.06,-0.0008825,-0.001692,0.06,-0.00091925,-0.000588,0.06,-0.0004707,-0.00025,0.06,0,0};
	recoil_auto_ktb[] = {0,0,0,0.03,0.00554145,0.021522,0.03,0.00795425,0.010008,0.03,0.00691425,0.00764,0.06,0.0033246,0.00342,0.06,-0.0003603,-0.002496,0.06,-0.0008825,-0.002538,0.06,-0.00091925,-0.001764,0.06,-0.0004707,-0.0005,0.06,0,0};
	recoil_auto_prone_ktb[] = {0,0,0,0.03,0.00554145,0.007174,0.03,0.00795425,0.005004,0.03,0.00691425,0.004584,0.06,0.0033246,0.00114,0.06,-0.0003603,-0.001152,0.06,-0.0008825,-0.00141,0.06,-0.00091925,-0.000294,0.06,-0.0004707,-0.00015,0.06,0,0};
	recoil_single_smg_02[] = {0,0,0,0.03,0.0110829,0.021522,0.03,0.0159085,0.0085068,0.03,0.0138285,0.0058064,0.06,0.0066492,0.002394,0.06,-0.0007206,-0.001344,0.06,-0.001765,-0.00141,0.06,-0.0018385,-0.000882,0.06,-0.0009414,-0.00025,0.06,0,0};
	recoil_single_prone_smg_02[] = {0,0,0,0.03,0.0110829,0.0050218,0.03,0.0159085,0.0027522,0.03,0.0138285,0.002292,0.06,0.0066492,0.001083,0.06,-0.0007206,-0.000384,0.06,-0.001765,-0.000282,0.06,-0.0018385,-0.000147,0.06,-0.0009414,-7.5e-05,0.06,0,0};
	recoil_burst_smg_02[] = {0,0,0,0.03,0.0110829,0.014348,0.03,0.0159085,0.0060048,0.03,0.0138285,0.004584,0.03,0.0066492,0.001824,0.03,-0.0007206,-0.00192,0.03,-0.001765,-0.002256,0.03,-0.0018385,-0.001764,0.03,-0.0009414,-0.0005,0.06,0,0};
	recoil_burst_prone_smg_02[] = {0,0,0,0.03,0.0110829,0.0021522,0.03,0.0159085,0.0017514,0.03,0.0138285,0.0016808,0.06,0.0066492,0.000855,0.06,-0.0007206,-0.000768,0.06,-0.001765,-0.000564,0.06,-0.0018385,-0.000294,0.06,-0.0009414,-0.00025,0.06,0,0};
	recoil_auto_smg_02[] = {0,0,0,0.06,0.0221658,0.0121958,0.06,0.031817,0.0052542,0.06,0.027657,0.0036672,0.06,0.0132984,0.001596,0.03,-0.0014412,-0.001344,0.03,-0.00353,-0.00141,0.03,-0.003677,-0.000882,0.06,-0.0018828,-0.00025,0.06,0,0};
	recoil_auto_prone_smg_02[] = {0,0,0,0.06,0.0221658,0.0021522,0.06,0.031817,0.0017514,0.06,0.027657,0.0016808,0.06,0.0132984,0.000855,0.03,-0.0014412,-0.000768,0.03,-0.00353,-0.000564,0.03,-0.003677,-0.000294,0.06,-0.0018828,-0.00025,0.06,0,0};
	recoil_single_sdar[] = {0,0,0,0.03,0.0110829,0.021522,0.03,0.0159085,0.0095076,0.03,0.0138285,0.0070288,0.06,0.0066492,0.003078,0.06,-0.0007206,-0.00192,0.06,-0.001765,-0.002256,0.06,-0.0018385,-0.001176,0.06,-0.0009414,-0.0005,0.06,0,0};
	recoil_single_prone_sdar[] = {0,0,0,0.03,0.0110829,0.007174,0.03,0.0159085,0.0045036,0.03,0.0138285,0.0039728,0.06,0.0066492,0.001938,0.06,-0.0007206,-0.0006528,0.06,-0.001765,-0.000846,0.06,-0.0018385,-0.0005292,0.06,-0.0009414,-0.00025,0.06,0,0};
	recoil_burst_sdar[] = {0,0,0,0.03,0.0110829,0.0157828,0.03,0.0159085,0.007506,0.03,0.0138285,0.0058064,0.06,0.0066492,0.002622,0.06,-0.0007206,-0.001536,0.06,-0.001765,-0.001128,0.06,-0.0018385,-0.000882,0.06,-0.0009414,-0.0005,0.06,0,0};
	recoil_burst_prone_sdar[] = {0,0,0,0.03,0.0110829,0.007174,0.03,0.0159085,0.0045036,0.03,0.0138285,0.0039728,0.06,0.0066492,0.001938,0.06,-0.0007206,-0.0006528,0.06,-0.001765,-0.000846,0.06,-0.0018385,-0.0005292,0.06,-0.0009414,-0.00025,0.06,0,0};
	recoil_auto_sdar[] = {0,0,0,0.03,0.0110829,0.0157828,0.03,0.0159085,0.007506,0.03,0.0138285,0.0058064,0.06,0.0066492,0.002622,0.06,-0.0007206,-0.001536,0.06,-0.001765,-0.001128,0.06,-0.0018385,-0.000882,0.06,-0.0009414,-0.0005,0.06,0,0};
	recoil_auto_prone_sdar[] = {0,0,0,0.03,0.0110829,0.0028696,0.03,0.0159085,0.0030024,0.03,0.0138285,0.003056,0.06,0.0066492,0.001596,0.06,-0.0007206,-0.0005376,0.06,-0.001765,-0.0006204,0.06,-0.0018385,-0.0004116,0.06,-0.0009414,-0.00015,0.06,0,0};
	recoil_single_trg[] = {0,0,0,0.03,0.00554145,0.0301308,0.03,0.00795425,0.01251,0.03,0.00691425,0.0088624,0.06,0.0033246,0.003762,0.06,-0.0003603,-0.002304,0.06,-0.0008825,-0.002256,0.06,-0.00091925,-0.0015288,0.06,-0.0004707,-0.0004,0.06,0,0};
	recoil_single_prone_trg[] = {0,0,0,0.03,0.00554145,0.0086088,0.03,0.00795425,0.005004,0.03,0.00691425,0.0042784,0.06,0.0033246,0.002052,0.06,-0.0003603,-0.001536,0.06,-0.0008825,-0.0014664,0.06,-0.00091925,-0.000588,0.06,-0.0004707,-0.0002,0.06,0,0};
	recoil_auto_trg[] = {0,0,0,0.03,0.00554145,0.028696,0.03,0.00795425,0.01251,0.03,0.00691425,0.0088624,0.06,0.0033246,0.003762,0.06,-0.0003603,-0.002304,0.06,-0.0008825,-0.002256,0.06,-0.00091925,-0.0015288,0.06,-0.0004707,-0.0004,0.06,0,0};
	recoil_auto_prone_trg[] = {0,0,0,0.03,0.00554145,0.0086088,0.03,0.00795425,0.005004,0.03,0.00691425,0.0042784,0.06,0.0033246,0.002052,0.06,-0.0003603,-0.001536,0.06,-0.0008825,-0.0014664,0.06,-0.00091925,-0.000588,0.06,-0.0004707,-0.0002,0.06,0,0};
	recoil_single_SMG_01[] = {0,0,0,0.03,0.0110829,0.014348,0.03,0.0159085,0.0060048,0.03,0.0138285,0.0042784,0.06,0.0066492,0.001824,0.06,-0.0007206,-0.001152,0.06,-0.001765,-0.001128,0.06,-0.0018385,-0.000588,0.06,-0.0009414,-0.00025,0.06,0,0};
	recoil_single_prone_SMG_01[] = {0,0,0,0.03,0.0110829,0.0050218,0.03,0.0159085,0.0027522,0.03,0.0138285,0.002292,0.06,0.0066492,0.001083,0.06,-0.0007206,-0.000384,0.06,-0.001765,-0.000282,0.06,-0.0018385,-0.000147,0.06,-0.0009414,-7.5e-05,0.06,0,0};
	recoil_burst_smg_01[] = {0,0,0,0.03,0.0110829,0.007174,0.03,0.0159085,0.0035028,0.03,0.0138285,0.003056,0.03,0.0066492,0.001254,0.03,-0.0007206,-0.001728,0.03,-0.001765,-0.001974,0.03,-0.0018385,-0.00147,0.03,-0.0009414,-0.00025,0.06,0,0};
	recoil_burst_prone_smg_01[] = {0,0,0,0.03,0.0110829,0.0021522,0.03,0.0159085,0.0017514,0.03,0.0138285,0.0016808,0.06,0.0066492,0.000855,0.06,-0.0007206,-0.000768,0.06,-0.001765,-0.000564,0.06,-0.0018385,-0.000294,0.06,-0.0009414,-0.00025,0.06,0,0};
	recoil_auto_smg_01[] = {0,0,0,0.06,0.0221658,0.0050218,0.06,0.031817,0.0032526,0.06,0.027657,0.0024448,0.06,0.0132984,0.00114,0.03,-0.0014412,-0.001152,0.03,-0.00353,-0.001128,0.03,-0.003677,-0.000588,0.06,-0.0018828,-0.00025,0.06,0,0};
	recoil_auto_prone_smg_01[] = {0,0,0,0.06,0.0221658,0.0021522,0.06,0.031817,0.0017514,0.06,0.027657,0.0016808,0.06,0.0132984,0.000855,0.03,-0.0014412,-0.000768,0.03,-0.00353,-0.000564,0.03,-0.003677,-0.000294,0.06,-0.0018828,-0.00025,0.06,0,0};
	recoil_pistol_light[] = {0,0,0,0.03,0.036943,0.0268696,0.09,0.019755,0.006112,0.12,0,0,0.18,-0.003138,-0.001,0.12,-0.001177,-0.000376,0.12,0,0};
	recoil_prone_pistol_light[] = {0,0,0,0.03,0.036943,0.0134348,0.09,0.019755,0.003056,0.12,0,0,0.18,-0.003138,-0.0005,0.12,-0.001177,-0.000188,0.12,0,0};
	recoil_pistol_heavy[] = {0,0,0,0.03,0.073886,0.0537392,0.09,0.03951,0.012224,0.12,0,0,0.18,-0.006276,-0.002,0.12,-0.002354,-0.000752,0.12,0,0};
	recoil_prone_pistol_heavy[] = {0,0,0,0.03,0.0554145,0.0268696,0.09,0.0296325,0.006112,0.12,0,0,0.18,-0.004707,-0.001,0.12,-0.0017655,-0.000376,0.12,0,0};
	recoil_single_pdw[] = {0,0,0,0.03,0.0110829,0.043044,0.03,0.0159085,0.0170136,0.03,0.0138285,0.0116128,0.06,0.0066492,0.004788,0.06,-0.0007206,-0.002688,0.06,-0.001765,-0.00282,0.06,-0.0018385,-0.001764,0.06,-0.0009414,-0.0005,0.06,0,0};
	recoil_single_prone_pdw[] = {0,0,0,0.03,0.0110829,0.0021522,0.04,0.0095451,0.0007506,0.05,0.0059265,0.0004584,0.06,0.0022164,0.000171,0.06,0,0,0.06,-0.0007206,-2.88e-05,0.06,-0.001059,-8.46e-05,0.06,-0.0011031,-8.82e-05,0.06,-0.0009414,-7.5e-05,0.06,-0.0006618,-5.28e-05,0.06,-0.0003531,-2.82e-05,0.06,-0.0001029,-8.4e-06,0.06,-4.5e-05,0,0.06,0,0};
	recoil_burst_pdw[] = {0,0,0,0.06,0.0221658,0.0086088,0.06,0.0190902,0.0030024,0.06,0.011853,0.0018336,0.06,0.0044328,0.000684,0.06,0,0};
	recoil_burst_prone_pdw[] = {0,0,0,0.06,0.0221658,0.0043044,0.06,0.0190902,0.0015012,0.06,0.011853,0.0009168,0.06,0.0044328,0.000342,0.06,0,0};
	recoil_auto_pdw[] = {0,0,0,0.06,0.0073886,0.0028696,0.06,0.0063634,0.0010008,0.06,0.003951,0.0006112,0.06,0.0014776,0.000228,0.06,0,0};
	recoil_auto_prone_pdw[] = {0,0,0,0.06,0.0073886,0.0014348,0.06,0.0063634,0.0005004,0.06,0.003951,0.0003056,0.06,0.0014776,0.000114,0.06,0,0};
	recoil_single_law[] = {0,0,0,0.03,0.0073886,0.0028696,0.04,0.0063634,0.0010008,0.05,0.003951,0.0006112,0.06,0.0014776,0.000228,0.06,0,0,0.06,-0.0004804,-7.68e-05,0.06,-0.000706,-0.0001128,0.06,-0.0007354,-0.0001176,0.06,-0.0006276,-0.0001,0.06,-0.0004412,-7.04e-05,0.06,-0.0002354,-3.76e-05,0.06,-6.86e-05,-1.12e-05,0.06,-3e-05,0,0.06,0,0};
	recoil_single_nlaw[] = {0,0,0,0.01,0,0.05,0.025,0,0};
	recoil_single_titan[] = {0,0,0,0.01,0,0.05,0.025,0,0};
	recoil_auto_mk200[] = {0,0,0,0.06,0.0443316,0.028696,0.06,0.0477255,0.0120096,0.06,0.0335835,0.0085568,0.06,0.0140372,0.003648,0.03,-0.0007206,-0.002304,0.03,-0.001765,-0.001692,0.03,-0.0018385,-0.000588,0.06,0,0};
	recoil_auto_prone_mk200[] = {0,0,0,0.06,0.0443316,0.0086088,0.06,0.0477255,0.005004,0.06,0.0335835,0.0042784,0.06,0.0140372,0.002052,0.03,-0.0007206,-0.000768,0.03,-0.001765,-0.0006768,0.03,-0.0018385,-0.0004704,0.06,0,0};
	recoil_single_m320[] = {0,0,0,0.03,0.0221658,0.0086088,0.04,0.0190902,0.0030024,0.05,0.011853,0.0018336,0.06,0.0044328,0.000684,0.06,0,0,0.06,-0.0014412,-0.0002304,0.06,-0.002118,-0.0003384,0.06,-0.0022062,-0.0003528,0.06,-0.0018828,-0.0003,0.06,-0.0013236,-0.0002112,0.06,-0.0007062,-0.0001128,0.06,-0.0002058,-3.36e-05,0.06,-9e-05,0,0.06,0,0};
	recoil_single_prone_m320[] = {0,0,0,0.03,0.0221658,0.0043044,0.04,0.0190902,0.0015012,0.05,0.011853,0.0009168,0.06,0.0044328,0.000342,0.06,0,0,0.06,-0.0014412,-5.76e-05,0.06,-0.002118,-0.0001692,0.06,-0.0022062,-0.0001764,0.06,-0.0018828,-0.00015,0.06,-0.0013236,-0.0001056,0.06,-0.0007062,-5.64e-05,0.06,-0.0002058,-1.68e-05,0.06,-9e-05,0,0.06,0,0};
	recoil_auto_m320[] = {0,0,0,0.06,0.0443316,0.0243916,0.06,0.0477255,0.0105084,0.06,0.0335835,0.0073344,0.06,0.0140372,0.003192,0.03,-0.0007206,-0.002688,0.03,-0.001765,-0.00282,0.03,-0.0018385,-0.001764,0.06,0,0};
	recoil_auto_prone_m320[] = {0,0,0,0.06,0.0110829,0.0021522,0.06,0.0095451,0.0007506,0.06,0.0059265,0.0004584,0.06,0.0022164,0.000171,0.06,0,0};
	recoil_single_gm6[] = {0,0,0,0.03,0.110829,0.0516528,0.03,0.190902,0.0210168,0.03,0.059265,0.01528,0.03,0.022164,0.007296,0.03,-0.007206,-0.003072,0.03,-0.01059,-0.009024,0.03,-0.011031,-0.007056,0.03,-0.009414,-0.003,0.03,-0.006618,-0.000704,0.03,0,0};
	recoil_single_prone_gm6[] = {0,0,0,0.03,0.110829,0.0114784,0.03,0.190902,0.0070056,0.03,0.059265,0.0079456,0.03,0.022164,0.003876,0.03,-0.007206,-0.000768,0.03,-0.01059,-0.004512,0.03,-0.011031,-0.003528,0.03,-0.009414,-0.002,0.03,-0.006618,-0.000352,0.03,0,0};
	recoil_single_ebr[] = {0,0,0,0.03,0.0110829,0.0545224,0.03,0.0159085,0.0210168,0.03,0.0138285,0.0140576,0.03,0.0066492,0.0057,0.03,-0.0007206,-0.003456,0.03,-0.001765,-0.003948,0.03,-0.0011031,-0.00294,0.03,-0.0009414,-0.0015,0.06,-0.0006618,-0.000352,0.06,0,0};
	recoil_single_prone_ebr[] = {0,0,0,0.03,0.0036943,0.0086088,0.03,0.0095451,0.0035028,0.03,0.0098775,0.0027504,0.03,0.0051716,0.001254,0.06,-0.0007206,-0.00048,0.06,-0.001765,-0.000846,0.06,-0.0014708,-0.000588,0.06,-0.0009414,-0.00025,0.06,0,0};
	recoil_auto_ebr[] = {0,0,0,0.03,0.0443316,0.0459136,0.03,0.0477255,0.0180144,0.03,0.0335835,0.012224,0.03,0.0140372,0.005016,0.03,-0.0007206,-0.003456,0.03,-0.001765,-0.003948,0.03,-0.0011031,-0.00294,0.03,-0.0009414,-0.0015,0.06,-0.0006618,-0.000352,0.06,0,0};
	recoil_auto_prone_ebr[] = {0,0,0,0.06,0.0110829,0.0086088,0.06,0.0159085,0.0035028,0.06,0.007902,0.0027504,0.06,0.0022164,0.001254,0.06,0,0};
	recoil_single_dmr[] = {0,0,0,0.03,0.0110829,0.0516528,0.03,0.0159085,0.020016,0.03,0.0138285,0.0134464,0.03,0.0066492,0.005472,0.03,-0.0009608,-0.003264,0.03,-0.002118,-0.00423,0.03,-0.0014708,-0.002646,0.03,-0.0012552,-0.00125,0.06,-0.0008824,-0.000352,0.06,0,0};
	recoil_single_prone_dmr[] = {0,0,0,0.03,0.0036943,0.007174,0.03,0.0095451,0.0030024,0.03,0.0098775,0.0024448,0.03,0.0051716,0.00114,0.06,-0.0007206,-0.000528,0.06,-0.001765,-0.000987,0.06,-0.0014708,-0.000735,0.06,-0.0009414,-0.000375,0.06,0,0};
	recoil_auto_dmr[] = {0,0,0,0.03,0.0443316,0.043044,0.03,0.0477255,0.0170136,0.03,0.0335835,0.012224,0.03,0.0140372,0.004788,0.03,-0.0007206,-0.003264,0.03,-0.001765,-0.003666,0.03,-0.0011031,-0.002646,0.03,-0.0009414,-0.00125,0.06,-0.0006618,-0.000352,0.06,0,0};
	recoil_auto_prone_dmr[] = {0,0,0,0.06,0.0110829,0.0100436,0.06,0.0159085,0.0040032,0.06,0.007902,0.003056,0.06,0.0022164,0.001368,0.06,0,0};
	testRecoilA[] = {0,0,0,0.06,0.0110829,0.0043044,0.06,0.0095451,0.0015012,0.06,0.0059265,0.0009168,0.06,0.0022164,0.000342,0.06,0,0,0.06,-0.0007206,-0.0001152,0.06,-0.001059,-0.0001692,0.06,-0.0011031,-0.0001764,0.06,-0.0009414,-0.00015,0.06,-0.0006618,-0.0001056,0.06,-0.0003531,-5.64e-05,0.06,-0.0001029,-1.68e-05,0.06,-4.5e-05,0,0.06,0,0};
	testRecoilB[] = {0,0,0,0,1,0,0,2,0,0,1,0,0,0,0};
	testRecoilC[] = {0,0,0,0,0,0.5,0,0,0.5,0,0,0.5,0,0,0};
	testRecoilD[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	LynxRecoil[] = {0,0,0,0.06,0.110829,0.028696,0.06,0.095451,0.010008,0.06,0.059265,0.006112,0.06,0.022164,0.00228,0.06,0,0,0.06,-0.007206,-0.000768,0.06,-0.01059,-0.001128,0.06,-0.011031,-0.001176,0.06,-0.009414,-0.001,0.06,-0.006618,-0.000704,0.06,-0.003531,-0.000376,0.06,-0.001029,-0.000112,0.06,-0.00045,0,0.06,0,0};
	LynxRecoilprone[] = {0,0,0,0.06,0.110829,0.014348,0.06,0.095451,0.005004,0.06,0.059265,0.003056,0.06,0.022164,0.00114,0.06,0,0,0.06,-0.007206,-0.000192,0.06,-0.01059,-0.000564,0.06,-0.011031,-0.000588,0.06,-0.009414,-0.0005,0.06,-0.006618,-0.000352,0.06,-0.003531,-0.000188,0.06,-0.001029,-5.6e-05,0.06,-0.00045,0,0.06,0,0};
	M240Recoil[] = {0,0,0,0.08,0.01,0.05,0.05,-0.003,-0.008,0.2,0,0};
	M240RecoilProne[] = {0,0,0,0.1,0.003,0.005,0.05,-0.003,-0.01,0.05,0,0};
	pistolBase[] = {0,0,0,0.08,0.003,0.02,0.05,-0.003,-0.033,0.05,0,0};
	subMachineGunBase[] = {0,0,0,0.06,0.005,0.005,0.05,0,-0.02,0.06,-0.005,0.005,0.05,0,0};
	assaultRifleBase[] = {0,0,0,0.06,0.01,0.01,0.1,0,-0.02,0.1,-0.01,0.01,0.05,0,0};
	machinegunBase[] = {0,0,0,0.08,0.01,0.04,0.05,-0.003,-0.01,0.2,0,0};
	launcherBase[] = {0,0,0,0.01,0,0.05,0.025,0,0};
	recoil_pistol[] = {0,0,0,0.03,0.036943,0.0268696,0.09,0.019755,0.006112,0.12,0,0,0.18,-0.003138,-0.001,0.12,-0.001177,-0.000376,0.12,0,0};
	recoil_pistol_strong[] = {0,0,0,0.05,0.036943,0.057392,0.1,0.031817,0.020016,0.1,0.019755,0.012224,0.1,0.007388,0.00456,0.1,0,0,0.2,-0.002402,-0.001536,0.2,-0.003677,-0.002352,0.2,-0.002206,-0.001408,0.2,-0.000343,-0.000224,0.2,0,0};
	recoil_single_primary_1outof10[] = {0,0,0,0.03,0.0036943,0.0014348,0.04,0.0031817,0.0005004,0.05,0.0019755,0.0003056,0.06,0.0007388,0.000114,0.06,0,0,0.06,-0.0002402,-3.84e-05,0.06,-0.000353,-5.64e-05,0.06,-0.0003677,-5.88e-05,0.06,-0.0003138,-5e-05,0.06,-0.0002206,-3.52e-05,0.06,-0.0001177,-1.88e-05,0.06,-3.43e-05,-5.6e-06,0.06,-1.5e-05,0,0.06,0,0};
	recoil_single_primary_2outof10[] = {0,0,0,0.03,0.0073886,0.0028696,0.04,0.0063634,0.0010008,0.05,0.003951,0.0006112,0.06,0.0014776,0.000228,0.06,0,0,0.06,-0.0004804,-7.68e-05,0.06,-0.000706,-0.0001128,0.06,-0.0007354,-0.0001176,0.06,-0.0006276,-0.0001,0.06,-0.0004412,-7.04e-05,0.06,-0.0002354,-3.76e-05,0.06,-6.86e-05,-1.12e-05,0.06,-3e-05,0,0.06,0,0};
	recoil_single_primary_3outof10[] = {0,0,0,0.03,0.0110829,0.043044,0.03,0.0159085,0.0170136,0.03,0.0138285,0.0116128,0.06,0.0066492,0.004788,0.06,-0.0007206,-0.002688,0.06,-0.001765,-0.00282,0.06,-0.0018385,-0.001764,0.06,-0.0009414,-0.0005,0.06,0,0};
	recoil_single_primary_4outof10[] = {0,0,0,0.03,0.0147772,0.0057392,0.04,0.0127268,0.0020016,0.05,0.007902,0.0012224,0.06,0.0029552,0.000456,0.06,0,0,0.06,-0.0009608,-0.0001536,0.06,-0.001412,-0.0002256,0.06,-0.0014708,-0.0002352,0.06,-0.0012552,-0.0002,0.06,-0.0008824,-0.0001408,0.06,-0.0004708,-7.52e-05,0.06,-0.0001372,-2.24e-05,0.06,-6e-05,0,0.06,0,0};
	recoil_single_primary_5outof10[] = {0,0,0,0.03,0.0110829,0.0545224,0.03,0.0159085,0.0210168,0.03,0.0138285,0.0140576,0.03,0.0066492,0.0057,0.03,-0.0007206,-0.003456,0.03,-0.001765,-0.003948,0.03,-0.0011031,-0.00294,0.03,-0.0009414,-0.0015,0.06,-0.0006618,-0.000352,0.06,0,0};
	recoil_single_primary_6outof10[] = {0,0,0,0.03,0.0221658,0.0086088,0.04,0.0190902,0.0030024,0.05,0.011853,0.0018336,0.06,0.0044328,0.000684,0.06,0,0,0.06,-0.0014412,-0.0002304,0.06,-0.002118,-0.0003384,0.06,-0.0022062,-0.0003528,0.06,-0.0018828,-0.0003,0.06,-0.0013236,-0.0002112,0.06,-0.0007062,-0.0001128,0.06,-0.0002058,-3.36e-05,0.06,-9e-05,0,0.06,0,0};
	recoil_single_primary_7outof10[] = {0,0,0,0.03,0.0258601,0.0100436,0.04,0.0222719,0.0035028,0.05,0.0138285,0.0021392,0.06,0.0051716,0.000798,0.06,0,0,0.06,-0.0016814,-0.0002688,0.06,-0.002471,-0.0003948,0.06,-0.0025739,-0.0004116,0.06,-0.0021966,-0.00035,0.06,-0.0015442,-0.0002464,0.06,-0.0008239,-0.0001316,0.06,-0.0002401,-3.92e-05,0.06,-0.000105,0,0.06,0,0};
	recoil_single_primary_8outof10[] = {0,0,0,0.03,0.0295544,0.0114784,0.04,0.0254536,0.0040032,0.05,0.015804,0.0024448,0.06,0.0059104,0.000912,0.06,0,0,0.06,-0.0019216,-0.0003072,0.06,-0.002824,-0.0004512,0.06,-0.0029416,-0.0004704,0.06,-0.0025104,-0.0004,0.06,-0.0017648,-0.0002816,0.06,-0.0009416,-0.0001504,0.06,-0.0002744,-4.48e-05,0.06,-0.00012,0,0.06,0,0};
	recoil_single_primary_9outof10[] = {0,0,0,0.03,0.0332487,0.0129132,0.04,0.0286353,0.0045036,0.05,0.0177795,0.0027504,0.06,0.0066492,0.001026,0.06,0,0,0.06,-0.0021618,-0.0003456,0.06,-0.003177,-0.0005076,0.06,-0.0033093,-0.0005292,0.06,-0.0028242,-0.00045,0.06,-0.0019854,-0.0003168,0.06,-0.0010593,-0.0001692,0.06,-0.0003087,-5.04e-05,0.06,-0.000135,0,0.06,0,0};
	recoil_single_primary_10outof10[] = {0,0,0,0.03,0.036943,0.014348,0.04,0.031817,0.005004,0.05,0.019755,0.003056,0.06,0.007388,0.00114,0.06,0,0,0.06,-0.002402,-0.000384,0.06,-0.00353,-0.000564,0.06,-0.003677,-0.000588,0.06,-0.003138,-0.0005,0.06,-0.002206,-0.000352,0.06,-0.001177,-0.000188,0.06,-0.000343,-5.6e-05,0.06,-0.00015,0,0.06,0,0};
	recoil_single_primary_prone_1outof10[] = {0,0,0,0.03,0.0036943,0.0007174,0.04,0.0031817,0.0002502,0.05,0.0019755,0.0001528,0.06,0.0007388,5.7e-05,0.06,0,0,0.06,-0.0002402,-9.6e-06,0.06,-0.000353,-2.82e-05,0.06,-0.0003677,-2.94e-05,0.06,-0.0003138,-2.5e-05,0.06,-0.0002206,-1.76e-05,0.06,-0.0001177,-9.4e-06,0.06,-3.43e-05,-2.8e-06,0.06,-1.5e-05,0,0.06,0,0};
	recoil_single_primary_prone_2outof10[] = {0,0,0,0.03,0.0073886,0.0014348,0.04,0.0063634,0.0005004,0.05,0.003951,0.0003056,0.06,0.0014776,0.000114,0.06,0,0,0.06,-0.0004804,-1.92e-05,0.06,-0.000706,-5.64e-05,0.06,-0.0007354,-5.88e-05,0.06,-0.0006276,-5e-05,0.06,-0.0004412,-3.52e-05,0.06,-0.0002354,-1.88e-05,0.06,-6.86e-05,-5.6e-06,0.06,-3e-05,0,0.06,0,0};
	recoil_single_primary_prone_3outof10[] = {0,0,0,0.03,0.0110829,0.0021522,0.04,0.0095451,0.0007506,0.05,0.0059265,0.0004584,0.06,0.0022164,0.000171,0.06,0,0,0.06,-0.0007206,-2.88e-05,0.06,-0.001059,-8.46e-05,0.06,-0.0011031,-8.82e-05,0.06,-0.0009414,-7.5e-05,0.06,-0.0006618,-5.28e-05,0.06,-0.0003531,-2.82e-05,0.06,-0.0001029,-8.4e-06,0.06,-4.5e-05,0,0.06,0,0};
	recoil_single_primary_prone_4outof10[] = {0,0,0,0.03,0.0036943,0.0086088,0.03,0.0095451,0.0035028,0.03,0.0098775,0.0027504,0.03,0.0051716,0.001254,0.06,-0.0007206,-0.00048,0.06,-0.001765,-0.000846,0.06,-0.0014708,-0.000588,0.06,-0.0009414,-0.00025,0.06,0,0};
	recoil_single_primary_prone_5outof10[] = {0,0,0,0.03,0.0184715,0.003587,0.04,0.0159085,0.001251,0.05,0.0098775,0.000764,0.06,0.003694,0.000285,0.06,0,0,0.06,-0.001201,-4.8e-05,0.06,-0.001765,-0.000141,0.06,-0.0018385,-0.000147,0.06,-0.001569,-0.000125,0.06,-0.001103,-8.8e-05,0.06,-0.0005885,-4.7e-05,0.06,-0.0001715,-1.4e-05,0.06,-7.5e-05,0,0.06,0,0};
	recoil_single_primary_prone_6outof10[] = {0,0,0,0.03,0.0221658,0.0043044,0.04,0.0190902,0.0015012,0.05,0.011853,0.0009168,0.06,0.0044328,0.000342,0.06,0,0,0.06,-0.0014412,-5.76e-05,0.06,-0.002118,-0.0001692,0.06,-0.0022062,-0.0001764,0.06,-0.0018828,-0.00015,0.06,-0.0013236,-0.0001056,0.06,-0.0007062,-5.64e-05,0.06,-0.0002058,-1.68e-05,0.06,-9e-05,0,0.06,0,0};
	recoil_single_primary_prone_7outof10[] = {0,0,0,0.03,0.0258601,0.0050218,0.04,0.0222719,0.0017514,0.05,0.0138285,0.0010696,0.06,0.0051716,0.000399,0.06,0,0,0.06,-0.0016814,-6.72e-05,0.06,-0.002471,-0.0001974,0.06,-0.0025739,-0.0002058,0.06,-0.0021966,-0.000175,0.06,-0.0015442,-0.0001232,0.06,-0.0008239,-6.58e-05,0.06,-0.0002401,-1.96e-05,0.06,-0.000105,0,0.06,0,0};
	recoil_single_primary_prone_8outof10[] = {0,0,0,0.03,0.0295544,0.0057392,0.04,0.0254536,0.0020016,0.05,0.015804,0.0012224,0.06,0.0059104,0.000456,0.06,0,0,0.06,-0.0019216,-7.68e-05,0.06,-0.002824,-0.0002256,0.06,-0.0029416,-0.0002352,0.06,-0.0025104,-0.0002,0.06,-0.0017648,-0.0001408,0.06,-0.0009416,-7.52e-05,0.06,-0.0002744,-2.24e-05,0.06,-0.00012,0,0.06,0,0};
	recoil_single_primary_prone_9outof10[] = {0,0,0,0.03,0.0332487,0.0064566,0.04,0.0286353,0.0022518,0.05,0.0177795,0.0013752,0.06,0.0066492,0.000513,0.06,0,0,0.06,-0.0021618,-8.64e-05,0.06,-0.003177,-0.0002538,0.06,-0.0033093,-0.0002646,0.06,-0.0028242,-0.000225,0.06,-0.0019854,-0.0001584,0.06,-0.0010593,-8.46e-05,0.06,-0.0003087,-2.52e-05,0.06,-0.000135,0,0.06,0,0};
	recoil_single_primary_prone_10outof10[] = {0,0,0,0.03,0.036943,0.007174,0.04,0.031817,0.002502,0.05,0.019755,0.001528,0.06,0.007388,0.00057,0.06,0,0,0.06,-0.002402,-9.6e-05,0.06,-0.00353,-0.000282,0.06,-0.003677,-0.000294,0.06,-0.003138,-0.00025,0.06,-0.002206,-0.000176,0.06,-0.001177,-9.4e-05,0.06,-0.000343,-2.8e-05,0.06,-0.00015,0,0.06,0,0};
	recoil_auto_primary_1outof10[] = {0,0,0,0.06,0.0036943,0.0014348,0.06,0.0031817,0.0005004,0.06,0.0019755,0.0003056,0.06,0.0007388,0.000114,0.06,0,0};
	recoil_auto_primary_2outof10[] = {0,0,0,0.06,0.0073886,0.0028696,0.06,0.0063634,0.0010008,0.06,0.003951,0.0006112,0.06,0.0014776,0.000228,0.06,0,0};
	recoil_auto_primary_3outof10[] = {0,0,0,0.06,0.0443316,0.0243916,0.06,0.0477255,0.0105084,0.06,0.0335835,0.0073344,0.06,0.0140372,0.003192,0.03,-0.0007206,-0.002688,0.03,-0.001765,-0.00282,0.03,-0.0018385,-0.001764,0.06,0,0};
	recoil_auto_primary_4outof10[] = {0,0,0,0.06,0.0147772,0.0057392,0.06,0.0127268,0.0020016,0.06,0.007902,0.0012224,0.06,0.0029552,0.000456,0.06,0,0};
	recoil_auto_primary_5outof10[] = {0,0,0,0.03,0.0443316,0.0459136,0.03,0.0477255,0.0180144,0.03,0.0335835,0.012224,0.03,0.0140372,0.005016,0.03,-0.0007206,-0.003456,0.03,-0.001765,-0.003948,0.03,-0.0011031,-0.00294,0.03,-0.0009414,-0.0015,0.06,-0.0006618,-0.000352,0.06,0,0};
	recoil_auto_primary_6outof10[] = {0,0,0,0.06,0.0221658,0.0086088,0.06,0.0190902,0.0030024,0.06,0.011853,0.0018336,0.06,0.0044328,0.000684,0.06,0,0};
	recoil_auto_primary_7outof10[] = {0,0,0,0.06,0.0258601,0.0100436,0.06,0.0222719,0.0035028,0.06,0.0138285,0.0021392,0.06,0.0051716,0.000798,0.06,0,0};
	recoil_auto_primary_8outof10[] = {0,0,0,0.06,0.0295544,0.0114784,0.06,0.0254536,0.0040032,0.06,0.015804,0.0024448,0.06,0.0059104,0.000912,0.06,0,0};
	recoil_auto_primary_9outof10[] = {0,0,0,0.06,0.0332487,0.0129132,0.06,0.0286353,0.0045036,0.06,0.0177795,0.0027504,0.06,0.0066492,0.001026,0.06,0,0};
	recoil_auto_primary_10outof10[] = {0,0,0,0.06,0.036943,0.014348,0.06,0.031817,0.005004,0.06,0.019755,0.003056,0.06,0.007388,0.00114,0.06,0,0};
	recoil_auto_primary_prone_1outof10[] = {0,0,0,0.06,0.0036943,0.0007174,0.06,0.0031817,0.0002502,0.06,0.0019755,0.0001528,0.06,0.0007388,5.7e-05,0.06,0,0};
	recoil_auto_primary_prone_2outof10[] = {0,0,0,0.06,0.0073886,0.0014348,0.06,0.0063634,0.0005004,0.06,0.003951,0.0003056,0.06,0.0014776,0.000114,0.06,0,0};
	recoil_auto_primary_prone_3outof10[] = {0,0,0,0.06,0.0110829,0.0021522,0.06,0.0095451,0.0007506,0.06,0.0059265,0.0004584,0.06,0.0022164,0.000171,0.06,0,0};
	recoil_auto_primary_prone_4outof10[] = {0,0,0,0.06,0.0110829,0.0086088,0.06,0.0159085,0.0035028,0.06,0.007902,0.0027504,0.06,0.0022164,0.001254,0.06,0,0};
	recoil_auto_primary_prone_5outof10[] = {0,0,0,0.06,0.0184715,0.003587,0.06,0.0159085,0.001251,0.06,0.0098775,0.000764,0.06,0.003694,0.000285,0.06,0,0};
	recoil_auto_primary_prone_6outof10[] = {0,0,0,0.06,0.0221658,0.0043044,0.06,0.0190902,0.0015012,0.06,0.011853,0.0009168,0.06,0.0044328,0.000342,0.06,0,0};
	recoil_auto_primary_prone_7outof10[] = {0,0,0,0.06,0.0258601,0.0050218,0.06,0.0222719,0.0017514,0.06,0.0138285,0.0010696,0.06,0.0051716,0.000399,0.06,0,0};
	recoil_auto_primary_prone_8outof10[] = {0,0,0,0.06,0.0295544,0.0057392,0.06,0.0254536,0.0020016,0.06,0.015804,0.0012224,0.06,0.0059104,0.000456,0.06,0,0};
	recoil_auto_primary_prone_9outof10[] = {0,0,0,0.06,0.0332487,0.0064566,0.06,0.0286353,0.0022518,0.06,0.0177795,0.0013752,0.06,0.0066492,0.000513,0.06,0,0};
	recoil_auto_primary_prone_10outof10[] = {0,0,0,0.06,0.036943,0.007174,0.06,0.031817,0.002502,0.06,0.019755,0.001528,0.06,0.007388,0.00057,0.06,0,0};
	recoil_auto_machinegun_1outof10[] = {0,0,0,0.06,0.0036943,0.0020288,0.06,0.0034022,0.0019632,0.06,0.0026843,0.0017288,0.06,0.001962,0.0014944,0.06,0.0014516,0.001352,0.06,0.0010574,0.0012528,0.06,0.0009,0.0012208,0.06,0,0};
	recoil_auto_machinegun_2outof10[] = {0,0,0,0.06,0.0073886,0.0040576,0.06,0.0068044,0.0039264,0.06,0.0053686,0.0034576,0.06,0.003924,0.0029888,0.06,0.0029032,0.002704,0.06,0.0021148,0.0025056,0.06,0.0018,0.0024416,0.06,0,0};
	recoil_auto_machinegun_3outof10[] = {0,0,0,0.06,0.0110829,0.0060864,0.06,0.0102066,0.0058896,0.06,0.0080529,0.0051864,0.06,0.005886,0.0044832,0.06,0.0043548,0.004056,0.06,0.0031722,0.0037584,0.06,0.0027,0.0036624,0.06,0,0};
	recoil_auto_machinegun_4outof10[] = {0,0,0,0.06,0.0147772,0.0081152,0.06,0.0136088,0.0078528,0.06,0.0107372,0.0069152,0.06,0.007848,0.0059776,0.06,0.0058064,0.005408,0.06,0.0042296,0.0050112,0.06,0.0036,0.0048832,0.06,0,0};
	recoil_auto_machinegun_5outof10[] = {0,0,0,0.06,0.0184715,0.010144,0.06,0.017011,0.009816,0.06,0.0134215,0.008644,0.06,0.00981,0.007472,0.06,0.007258,0.00676,0.06,0.005287,0.006264,0.06,0.0045,0.006104,0.06,0,0};
	recoil_auto_machinegun_6outof10[] = {0,0,0,0.06,0.0221658,0.0121728,0.06,0.0204132,0.0117792,0.06,0.0161058,0.0103728,0.06,0.011772,0.0089664,0.06,0.0087096,0.008112,0.06,0.0063444,0.0075168,0.06,0.0054,0.0073248,0.06,0,0};
	recoil_auto_machinegun_7outof10[] = {0,0,0,0.06,0.0258601,0.0142016,0.06,0.0238154,0.0137424,0.06,0.0187901,0.0121016,0.06,0.013734,0.0104608,0.06,0.0101612,0.009464,0.06,0.0074018,0.0087696,0.06,0.0063,0.0085456,0.06,0,0};
	recoil_auto_machinegun_8outof10[] = {0,0,0,0.06,0.0295544,0.0162304,0.06,0.0272176,0.0157056,0.06,0.0214744,0.0138304,0.06,0.015696,0.0119552,0.06,0.0116128,0.010816,0.06,0.0084592,0.0100224,0.06,0.0072,0.0097664,0.06,0,0};
	recoil_auto_machinegun_9outof10[] = {0,0,0,0.06,0.0332487,0.0182592,0.06,0.0306198,0.0176688,0.06,0.0241587,0.0155592,0.06,0.017658,0.0134496,0.06,0.0130644,0.012168,0.06,0.0095166,0.0112752,0.06,0.0081,0.0109872,0.06,0,0};
	recoil_auto_machinegun_10outof10[] = {0,0,0,0.06,0.036943,0.020288,0.06,0.034022,0.019632,0.06,0.026843,0.017288,0.06,0.01962,0.014944,0.06,0.014516,0.01352,0.06,0.010574,0.012528,0.06,0.009,0.012208,0.06,0,0};
	recoil_auto_machinegun_prone_1outof10[] = {0,0,0,0.06,0.0036943,0.0010144,0.06,0.0034022,0.0009816,0.06,0.0026843,0.0008644,0.06,0.001962,0.0007472,0.06,0.0014516,0.000676,0.06,0.0010574,0.0003132,0.06,0.0009,0.0006104,0.06,0,0};
	recoil_auto_machinegun_prone_2outof10[] = {0,0,0,0.06,0.0073886,0.0020288,0.06,0.0068044,0.0019632,0.06,0.0053686,0.0017288,0.06,0.003924,0.0014944,0.06,0.0029032,0.001352,0.06,0.0021148,0.0006264,0.06,0.0018,0.0012208,0.06,0,0};
	recoil_auto_machinegun_prone_3outof10[] = {0,0,0,0.06,0.0110829,0.0030432,0.06,0.0102066,0.0029448,0.06,0.0080529,0.0025932,0.06,0.005886,0.0022416,0.06,0.0043548,0.0087096,0.06,0.0031722,0.0009396,0.06,0.0027,0.0018312,0.06,0,0};
	recoil_auto_machinegun_prone_4outof10[] = {0,0,0,0.06,0.0147772,0.0040576,0.06,0.0136088,0.0039264,0.06,0.0107372,0.0034576,0.06,0.007848,0.0029888,0.06,0.0058064,0.0116128,0.06,0.0042296,0.0012528,0.06,0.0036,0.0024416,0.06,0,0};
	recoil_auto_machinegun_prone_5outof10[] = {0,0,0,0.06,0.0184715,0.005072,0.06,0.017011,0.004908,0.06,0.0134215,0.004322,0.06,0.00981,0.003736,0.06,0.007258,0.00338,0.06,0.005287,0.001566,0.06,0.0045,0.003052,0.06,0,0};
	recoil_auto_machinegun_prone_6outof10[] = {0,0,0,0.06,0.0221658,0.0060864,0.06,0.0204132,0.0058896,0.06,0.0161058,0.0051864,0.06,0.011772,0.0044832,0.06,0.0087096,0.004056,0.06,0.0063444,0.0018792,0.06,0.0054,0.0036624,0.06,0,0};
	recoil_auto_machinegun_prone_7outof10[] = {0,0,0,0.06,0.0258601,0.0071008,0.06,0.0238154,0.0068712,0.06,0.0187901,0.0060508,0.06,0.013734,0.0052304,0.06,0.0101612,0.004732,0.06,0.0074018,0.0021924,0.06,0.0063,0.0042728,0.06,0,0};
	recoil_auto_machinegun_prone_8outof10[] = {0,0,0,0.06,0.0295544,0.0081152,0.06,0.0272176,0.0078528,0.06,0.0214744,0.0069152,0.06,0.015696,0.0059776,0.06,0.0116128,0.005408,0.06,0.0084592,0.0025056,0.06,0.0072,0.0048832,0.06,0,0};
	recoil_auto_machinegun_prone_9outof10[] = {0,0,0,0.06,0.0332487,0.0091296,0.06,0.0306198,0.0088344,0.06,0.0241587,0.0077796,0.06,0.017658,0.0067248,0.06,0.0130644,0.006084,0.06,0.0095166,0.0028188,0.06,0.0081,0.0054936,0.06,0,0};
	recoil_auto_machinegun_prone_10outof10[] = {0,0,0,0.06,0.036943,0.010144,0.06,0.034022,0.009816,0.06,0.026843,0.008644,0.06,0.01962,0.007472,0.06,0.014516,0.00676,0.06,0.010574,0.003132,0.06,0.009,0.006104,0.06,0,0};
	recoil_single_pistol_1outof3[] = {0.04,0.00257143,0.0107143,0.01,0.00385714,0,0.045,0,-0.00535714};
	recoil_single_pistol_2outof3[] = {0.04,0.00428571,0.0178571,0.01,0.00642857,0,0.045,0,-0.00892857};
	recoil_single_pistol_3outof3[] = {0.04,0.006,0.025,0.01,0.009,0,0.045,0,-0.0125};
	recoil_single_pistol_prone_1outof3[] = {0.035,0.00228571,0.01,0.01,0.00342857,0,0.045,0,-0.00357143,0.01,0,-0.00357143};
	recoil_single_pistol_prone_2outof3[] = {0.035,0.00342857,0.015,0.01,0.00514286,0,0.045,0,-0.00535714,0.01,0,-0.00535714};
	recoil_single_pistol_prone_3outof3[] = {0.035,0.00457143,0.02,0.01,0.00685714,0,0.045,0,-0.00714286,0.01,0,-0.00714286};
	recoil_recoiless_weapon[] = {0.5,0,0.04};
	recoil_empty[] = {0,0,0};
	class Default;
	class recoil_default: Default
	{
		muzzleOuter[] = {0.3,1.0,0.3,0.2};
		muzzleInner[] = {0,0,0.1,0.1};
		kickBack[] = {0.03,0.06};
		permanent = 0.1;
		temporary = 0.01;
	};
	class recoil_mk20: recoil_default
	{
		muzzleOuter[] = {0.2,0.6,0.2,0.2};
		kickBack[] = {0.01,0.03};
		temporary = 0.01;
	};
	class recoil_mk20c: recoil_default
	{
		muzzleOuter[] = {0.2,0.8,0.3,0.2};
		kickBack[] = {0.02,0.04};
		temporary = 0.015;
	};
	class recoil_trg20: recoil_default
	{
		muzzleOuter[] = {0.2,1.0,0.3,0.3};
		kickBack[] = {0.02,0.04};
		temporary = 0.015;
	};
	class recoil_trg21: recoil_default
	{
		muzzleOuter[] = {0.2,0.8,0.3,0.2};
		kickBack[] = {0.01,0.03};
		temporary = 0.01;
	};
	class recoil_mx: recoil_default
	{
		muzzleOuter[] = {0.3,1.0,0.4,0.3};
		kickBack[] = {0.02,0.04};
		temporary = 0.01;
	};
	class recoil_mxc: recoil_default
	{
		muzzleOuter[] = {0.3,1.2,0.4,0.3};
		kickBack[] = {0.03,0.06};
		temporary = 0.015;
	};
	class recoil_sw: recoil_default
	{
		muzzleOuter[] = {0.3,0.8,0.5,0.2};
		kickBack[] = {0.02,0.04};
		temporary = 0.005;
	};
	class recoil_mxm: recoil_default
	{
		muzzleOuter[] = {0.3,0.8,0.4,0.3};
		kickBack[] = {0.02,0.04};
		temporary = 0.01;
	};
	class recoil_ktb: recoil_default
	{
		muzzleOuter[] = {0.3,1.0,0.3,0.3};
		kickBack[] = {0.02,0.04};
		temporary = 0.01;
	};
	class recoil_ktbc: recoil_default
	{
		muzzleOuter[] = {0.3,1.2,0.3,0.3};
		kickBack[] = {0.03,0.06};
		temporary = 0.015;
	};
	class recoil_smg_01: recoil_default
	{
		muzzleOuter[] = {0.1,0.4,0.2,0.3};
		kickBack[] = {0.01,0.03};
		temporary = 0.01;
	};
	class recoil_smg_02: recoil_default
	{
		muzzleOuter[] = {0.1,0.4,0.2,0.2};
		kickBack[] = {0.01,0.02};
		temporary = 0.01;
	};
	class recoil_pdw: recoil_default
	{
		muzzleOuter[] = {0.2,0.4,0.3,0.3};
		kickBack[] = {0.02,0.04};
		temporary = 0.01;
	};
	class recoil_sdar: recoil_default
	{
		muzzleOuter[] = {0.2,1.0,0.3,0.3};
		kickBack[] = {0.02,0.04};
		temporary = 0.01;
	};
	class recoil_pistol_p07: recoil_default
	{
		muzzleOuter[] = {0.2,1.0,0.2,0.3};
		kickBack[] = {0.03,0.06};
		temporary = 0.03;
	};
	class recoil_pistol_rook40: recoil_default
	{
		muzzleOuter[] = {0.2,1.0,0.2,0.3};
		kickBack[] = {0.03,0.06};
		temporary = 0.02;
	};
	class recoil_pistol_acpc2: recoil_default
	{
		muzzleOuter[] = {0.2,1.5,0.2,0.3};
		kickBack[] = {0.04,0.08};
		temporary = 0.04;
	};
	class recoil_pistol_4five: recoil_default
	{
		muzzleOuter[] = {0.2,1.5,0.2,0.3};
		kickBack[] = {0.04,0.08};
		temporary = 0.06;
	};
	class recoil_pistol_zubr: recoil_default
	{
		muzzleOuter[] = {0.2,1.5,0.2,0.3};
		kickBack[] = {0.04,0.08};
		temporary = 0.08;
	};
	class recoil_pistol_signal: recoil_default
	{
		muzzleOuter[] = {0.2,1.5,0.2,0.3};
		kickBack[] = {0.02,0.04};
		temporary = 0.02;
	};
	class recoil_rpg: recoil_default
	{
		muzzleOuter[] = {0.2,0.3,0.25,0.12};
		kickBack[] = {0.08,0.1};
		temporary = 0.1;
	};
	class recoil_nlaw: recoil_default
	{
		muzzleOuter[] = {0.2,0.3,0.25,0.12};
		kickBack[] = {0.06,0.08};
		temporary = 0.08;
	};
	class recoil_titan_long: recoil_default
	{
		muzzleOuter[] = {0.2,0.3,0.25,0.12};
		kickBack[] = {0.1,0.12};
		temporary = 0.15;
	};
	class recoil_titan_short: recoil_default
	{
		muzzleOuter[] = {0.2,0.3,0.25,0.12};
		kickBack[] = {0.1,0.12};
		temporary = 0.12;
	};
	class recoil_mk200: recoil_default
	{
		muzzleOuter[] = {0.4,0.6,0.6,0.2};
		kickBack[] = {0.03,0.06};
		temporary = 0.005;
	};
	class recoil_zafir: recoil_default
	{
		muzzleOuter[] = {0.5,1.0,0.7,0.3};
		kickBack[] = {0.02,0.08};
		temporary = 0.005;
	};
	class recoil_m320: recoil_default
	{
		muzzleOuter[] = {1.0,3.0,0.5,0.6};
		kickBack[] = {0.08,0.1};
		temporary = 0.02;
	};
	class recoil_gm6: recoil_default
	{
		muzzleOuter[] = {1.4,3.5,0.7,0.8};
		kickBack[] = {0.1,0.12};
		temporary = 0.025;
	};
	class recoil_ebr: recoil_default
	{
		muzzleOuter[] = {0.4,1.5,0.6,0.4};
		kickBack[] = {0.04,0.07};
		temporary = 0.01;
	};
	class recoil_dmr_01: recoil_default
	{
		muzzleOuter[] = {0.5,2.0,0.5,0.5};
		kickBack[] = {0.03,0.08};
		temporary = 0.015;
	};
};
class CfgVehicles
{
	class ThingEffect;
	class Strategic;
	class Static;
	class FxExploGround1: ThingEffect
	{
		author = "$STR_A3_Bohemia_Interactive";
		mapSize = 0.42;
		_generalMacro = "FxExploGround1";
		model = "\A3\Weapons_f\ammo\stone_2";
	};
	class FxExploGround2: ThingEffect
	{
		author = "$STR_A3_Bohemia_Interactive";
		mapSize = 0.46;
		_generalMacro = "FxExploGround2";
		model = "\A3\Weapons_f\ammo\stone_3";
	};
	class FxExploArmor1: ThingEffect
	{
		author = "$STR_A3_Bohemia_Interactive";
		mapSize = 0.47;
		_generalMacro = "FxExploArmor1";
		model = "\A3\Weapons_f\metal_plate";
	};
	class FxExploArmor2: ThingEffect
	{
		author = "$STR_A3_Bohemia_Interactive";
		mapSize = 0.51;
		_generalMacro = "FxExploArmor2";
		model = "\A3\Weapons_f\metal_plate_2";
	};
	class FxExploArmor3: ThingEffect
	{
		author = "$STR_A3_Bohemia_Interactive";
		mapSize = 2.21;
		_generalMacro = "FxExploArmor3";
		model = "\A3\Weapons_f\debris";
	};
	class FxExploArmor4: ThingEffect
	{
		author = "$STR_A3_Bohemia_Interactive";
		mapSize = 0.13;
		_generalMacro = "FxExploArmor4";
		model = "\A3\Weapons_f\fragment";
	};
	class FxCartridge: ThingEffect
	{
		author = "$STR_A3_Bohemia_Interactive";
		mapSize = 0.04;
		_generalMacro = "FxCartridge";
		model = "\A3\Weapons_f\ammo\cartridge";
		submerged = 0;
		submergeSpeed = 0;
		timeToLive = 5;
		disappearAtContact = 1;
		airRotation = 1.5;
	};
	class FxCartridge_Small: ThingEffect
	{
		author = "$STR_A3_Bohemia_Interactive";
		mapSize = 0.03;
		_generalMacro = "FxCartridge_Small";
		model = "\A3\Weapons_f\ammo\cartridge_small";
		submerged = 0;
		submergeSpeed = 0;
		timeToLive = 5;
		disappearAtContact = 1;
		airRotation = 1.5;
	};
	class FxCartridge_9mm: FxCartridge_Small
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "FxCartridge_9mm";
	};
	class FxCartridge_556: FxCartridge
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "FxCartridge_556";
	};
	class FxCartridge_65: FxCartridge
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "FxCartridge_65";
		model = "\A3\weapons_f\ammo\cartridge_65";
	};
	class FxCartridge_65_caseless: FxCartridge
	{
		author = "$STR_A3_Bohemia_Interactive";
		mapSize = 1;
		_generalMacro = "FxCartridge_65_caseless";
		timeToLive = 0;
		model = "\A3\weapons_f\empty";
	};
	class FxCartridge_762: FxCartridge
	{
		author = "$STR_A3_Bohemia_Interactive";
		mapSize = 0.05;
		_generalMacro = "FxCartridge_762";
		model = "\A3\weapons_f\ammo\cartridge_762";
	};
	class FxCartridge_127: FxCartridge
	{
		author = "$STR_A3_Bohemia_Interactive";
		mapSize = 0.11;
		_generalMacro = "FxCartridge_127";
		model = "\A3\weapons_f\ammo\cartridge_127";
	};
	class FxCartridge_slug: FxCartridge
	{
		author = "$STR_A3_Bohemia_Interactive";
		mapSize = 0.07;
		_generalMacro = "FxCartridge_slug";
		model = "\A3\weapons_f\ammo\cartridge_slug";
	};
	class All;
	class LaserTarget: All
	{
		scopeCurator = 0;
		icon = "iconLaserTarget";
		displayName = "$STR_A3_cfgVehicles_LaserTarget0";
		model = "\A3\Weapons_f\laserTgt.p3d";
		weapons[] = {"M2"};
		magazines[] = {};
		threat[] = {0.3,0.3,1.0};
		simulation = "laserTarget";
	};
	class LaserTargetBase: LaserTarget
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "LaserTargetBase";
	};
	class LaserTargetCBase: LaserTargetBase
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "LaserTargetCBase";
		scope = 1;
		side = 3;
	};
	class LaserTargetWBase: LaserTargetBase
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "LaserTargetWBase";
		scope = 1;
		side = 0;
	};
	class LaserTargetEBase: LaserTargetBase
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "LaserTargetEBase";
		scope = 1;
		side = 1;
	};
	class LaserTargetC: LaserTargetCBase
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "LaserTargetC";
		accuracy = 1000;
		weapons[] = {};
		magazines[] = {};
	};
	class LaserTargetW: LaserTargetWBase
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "LaserTargetW";
		accuracy = 1000;
		weapons[] = {};
		magazines[] = {};
	};
	class LaserTargetE: LaserTargetEBase
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "LaserTargetE";
		accuracy = 1000;
		weapons[] = {};
		magazines[] = {};
	};
	class Bomb: Strategic
	{
		author = "$STR_A3_Bohemia_Interactive";
		mapSize = 0.57;
		_generalMacro = "Bomb";
		access = 2;
		scope = 1;
		scopeCurator = 0;
		displayName = "$STR_A3_cfgVehicles_Bomb0";
		model = "\A3\Weapons_f\ammo\shell";
		transportFuel = 50000;
		destrType = "DestructEngine";
	};
	class MineGeneric: Static
	{
		author = "$STR_A3_Bohemia_Interactive";
		mapSize = 0.14;
		_generalMacro = "MineGeneric";
		scope = 0;
		animated = 0;
		side = 4;
		faction = "None";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Explosives";
		vehicleClass = "Mines";
		icon = "iconExplosiveAP";
	};
	class Logic: All
	{
		author = "$STR_A3_Bohemia_Interactive";
		mapSize = 1;
		_generalMacro = "Logic";
		icon = "iconLogic";
		model = "\A3\Weapons_f\empty";
		picture = "pictureLogic";
	};
	class ReammoBox: Strategic
	{
		waterLeakiness = 100;
		animated = 0;
		scope = 0;
		icon = "iconCrate";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		displayName = "$STR_A3_cfgVehicles_ReammoBox0";
		accuracy = 0.2;
		typicalCargo[] = {};
		editorCategory = "EdCat_Supplies";
		vehicleClass = "Ammo";
		destrType = "DestructBuilding";
		class DestructionEffects
		{
			class Light1
			{
				simulation = "light";
				type = "ObjectDestructionLight";
				position = "destructionEffect1";
				intensity = 0.001;
				interval = 1;
				lifeTime = 3;
			};
			class Sound
			{
				simulation = "sound";
				type = "Fire";
				position = "destructionEffect1";
				intensity = 0.15;
				interval = 1;
				lifeTime = 3;
			};
			class Fire1
			{
				simulation = "particles";
				type = "ObjectDestructionFire1";
				position = "destructionEffect1";
				intensity = 0.15;
				interval = 1;
				lifeTime = 3;
			};
			class Fire2
			{
				simulation = "particles";
				type = "ObjectDestructionFire1";
				position = "destructionEffect1";
				intensity = 0.15;
				interval = 1;
				lifeTime = 3;
			};
			class Smoke1
			{
				simulation = "particles";
				type = "ObjectDestructionSmoke";
				position = "destructionEffect1";
				intensity = 0.15;
				interval = 1;
				lifeTime = 3.2;
			};
			class Smoke2
			{
				simulation = "particles";
				type = "ObjectDestructionSmoke";
				position = "destructionEffect1";
				intensity = 0.15;
				interval = 1;
				lifeTime = 3.4;
			};
			class Smoke3
			{
				simulation = "particles";
				type = "ObjectDestructionSmoke";
				position = "destructionEffect1";
				intensity = 0.125;
				interval = 1;
				lifeTime = 3.5;
			};
			class HouseDestr
			{
				simulation = "destroy";
				type = "DelayedDestructionAmmo";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		maximumLoad = 9999;
		transportMaxWeapons = 5000;
		transportMaxMagazines = 20000;
		transportMaxBackpacks = 1;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		supplyRadius = 1.4;
		cost = 0;
		armor = 200;
		mapSize = 2;
	};
	class WeaponHolder: ReammoBox
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "WeaponHolder";
		scopeCurator = 0;
		model = "\A3\Weapons_f\dummyweapon.p3d";
		accuracy = 0.2;
		class TransportMagazines{};
		forceSupply = 1;
		showWeaponCargo = 1;
		transportMaxMagazines = 1e+09;
		transportMaxWeapons = 1e+09;
		displayName = "$STR_cfgVehicles_WeaponHolder0";
		destrType = "DestructNo";
		transportMaxBackpacks = 0;
		isGround = 1;
		icon = "iconObject_1x1";
	};
	class WeaponHolder_Single_F: WeaponHolder
	{
		author = "$STR_A3_Bohemia_Interactive";
		mapSize = 1.39;
		_generalMacro = "WeaponHolder_Single_F";
		scope = 1;
		model = "\A3\Weapons_f\dummyweapon_single.p3d";
	};
	class ContainerSupply: WeaponHolder
	{
		author = "$STR_A3_Bohemia_Interactive";
		mapSize = 5.18;
		_generalMacro = "ContainerSupply";
		scope = 1;
		showWeaponCargo = 0;
		forceSupply = 0;
	};
	class placed_chemlight_green: All
	{
		author = "$STR_A3_Bohemia_Interactive";
		mapSize = 0.15;
		_generalMacro = "placed_chemlight_green";
		scope = 1;
		scopeCurator = 0;
		animated = 0;
		side = 4;
		faction = "None";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Chemlights";
		vehicleClass = "mines";
		icon = "iconExplosiveAP";
		simulation = "house";
		ammo = "chemlight_green";
		displayName = "$STR_A3_CFGMAGAZINES_CHEMLIGHT0";
		picture = "\A3\Weapons_F\Data\placeholder_co.paa";
		model = "\A3\Weapons_f\chemlight\chemlight_green_item";
	};
	class placed_chemlight_red: placed_chemlight_green
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "placed_chemlight_red";
		ammo = "chemlight_red";
		displayName = "$STR_A3_CFGMAGAZINES_CHEMLIGHT_RED0";
		model = "\A3\Weapons_f\chemlight\chemlight_red_item";
	};
	class placed_chemlight_yellow: placed_chemlight_green
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "placed_chemlight_yellow";
		ammo = "chemlight_yellow";
		displayName = "$STR_A3_CFGMAGAZINES_CHEMLIGHT_YELLOW0";
		model = "\A3\Weapons_f\chemlight\chemlight_yellow_item";
	};
	class placed_chemlight_blue: placed_chemlight_green
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "placed_chemlight_blue";
		ammo = "chemlight_blue";
		displayName = "$STR_A3_CFGMAGAZINES_CHEMLIGHT_BLUE0";
		model = "\A3\Weapons_f\chemlight\chemlight_blue_item";
	};
	class thing;
	class test_EmptyObjectForBubbles: thing
	{
		author = "$STR_A3_Bohemia_Interactive";
		mapSize = 1;
		_generalMacro = "test_EmptyObjectForBubbles";
		scope = 1;
		animated = 0;
		side = 4;
		faction = "None";
		editorCategory = "EdCat_TEST";
		editorSubcategory = "EdSubcat_TEST";
		vehicleClass = "Emitters";
		simulation = "thing";
		icon = "iconExplosiveAP";
		displayName = "$STR_A3_cfgVehicles_test_EmptyObjectForBubbles0";
		picture = "\A3\weapons_f\ammoBoxes\data\ui\map_AmmoBox_F_CA.paa";
		model = "\A3\Weapons_F\empty.p3d";
		class EventHandlers
		{
			init = "(_this select 0) call compile preprocessFile ""\A3\weapons_f\data\scripts\bubbles.sqf"";";
			deleted = "{deleteVehicle _x} forEach (_this select 0 getVariable [""effects"",[]])";
		};
	};
	class test_EmptyObjectForFireBig: test_EmptyObjectForBubbles
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "test_EmptyObjectForFireBig";
		displayName = "$STR_A3_cfgVehicles_test_EmptyObjectForFireBig0";
		class EventHandlers
		{
			init = "(_this select 0) call compile preprocessFile ""\A3\weapons_f\data\scripts\fire.sqf"";";
			deleted = "{deleteVehicle _x} forEach (_this select 0 getVariable [""effects"",[]])";
		};
	};
	class test_EmptyObjectForSmoke: test_EmptyObjectForBubbles
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "test_EmptyObjectForSmoke";
		displayName = "$STR_A3_cfgVehicles_test_EmptyObjectForSmoke0";
		class EventHandlers
		{
			init = "(_this select 0) call compile preprocessFile ""\A3\weapons_f\data\scripts\smoke.sqf"";";
			deleted = "{deleteVehicle _x} forEach (_this select 0 getVariable [""effects"",[]])";
		};
	};
	class WeaponHolder_Single_limited_item_F: WeaponHolder_Single_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "WeaponHolder_Single_limited_item_F";
		transportMaxItems = 1;
		transportMaxMagazines = 0;
		transportMaxWeapons = 0;
		model = "\A3\Weapons_F_EPA\DummyItem_Single.p3d";
	};
	class WeaponHolder_Single_limited_magazine_F: WeaponHolder_Single_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "WeaponHolder_Single_limited_magazine_F";
		transportMaxItems = 0;
		transportMaxMagazines = 1;
		transportMaxWeapons = 0;
		model = "\A3\Weapons_F_EPA\DummyMagazine_Single.p3d";
	};
	class WeaponHolder_Single_limited_weapon_F: WeaponHolder_Single_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "WeaponHolder_Single_limited_weapon_F";
		transportMaxItems = 0;
		transportMaxMagazines = 0;
		transportMaxWeapons = 1;
		model = "\A3\Weapons_F_EPA\DummyWeapon_Single.p3d";
	};
	class NVG_TargetBase: All
	{
		author = "$STR_A3_Bohemia_Interactive";
		mapSize = 1;
		_generalMacro = "NVG_TargetBase";
		displayName = "$STR_A3_cfgVehicles_NVG_TargetBase0";
		model = "\A3\Weapons_F\empty.p3d";
		simulation = "nvmarker";
		class NVGMarker
		{
			diffuse[] = {0.1,0.1,0.1};
			ambient[] = {0.01,0.01,0.01};
			brightness = 0.15;
			name = "pozicni blik";
			drawLight = 1;
			drawLightSize = 0.005;
			drawLightCenterSize = 0.005;
			activeLight = 0;
			blinking = 1;
			dayLight = 0;
			onlyInNvg = 1;
			useFlare = 0;
		};
		type = 1;
		cost = 1e+15;
		armor = 500;
		threat[] = {0.3,0.3,1.0};
		weapons[] = {};
		magazines[] = {};
		nvTarget = 1;
		irTarget = 0;
		destrType = "DestructEngine";
		brightness = 0.02;
	};
	class NVG_TargetCBase: NVG_TargetBase
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "NVG_TargetCBase";
		side = 3;
		model = "\A3\Weapons_F\empty.p3d";
	};
	class NVG_TargetWBase: NVG_TargetBase
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "NVG_TargetWBase";
		side = 0;
		model = "\A3\Weapons_F\empty.p3d";
	};
	class NVG_TargetEBase: NVG_TargetBase
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "NVG_TargetEBase";
		side = 1;
		model = "\A3\Weapons_F\empty.p3d";
	};
	class NVG_TargetGBase: NVG_TargetBase
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "NVG_TargetGBase";
		side = 2;
		model = "\A3\Weapons_F\empty.p3d";
	};
	class NVG_TargetC: NVG_TargetCBase
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "NVG_TargetC";
		scope = 1;
		accuracy = 1000;
	};
	class NVG_TargetW: NVG_TargetWBase
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "NVG_TargetW";
		scope = 1;
		accuracy = 1000;
	};
	class NVG_TargetE: NVG_TargetEBase
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "NVG_TargetE";
		scope = 1;
		accuracy = 1000;
	};
	class NVG_TargetG: NVG_TargetGBase
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "NVG_TargetG";
		scope = 1;
		accuracy = 1000;
	};
	class placed_B_IR_grenade: All
	{
		author = "$STR_A3_Bohemia_Interactive";
		mapSize = 1;
		_generalMacro = "placed_B_IR_grenade";
		scope = 2;
		animated = 0;
		side = -1;
		faction = "None";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Explosives";
		vehicleClass = "mines";
		icon = "iconExplosiveAP";
		ammo = "B_IRStrobe";
		displayName = "$STR_A3_CfgMagazines_B_IR_Grenade0";
		picture = "\A3\Weapons_F\Data\placeholder_co.paa";
		model = "\A3\Weapons_F_EPB\Ammo\B_IRstrobe_F.p3d";
	};
	class placed_O_IR_grenade: placed_B_IR_grenade
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "placed_O_IR_grenade";
		ammo = "O_IRStrobe";
		displayName = "$STR_A3_CfgMagazines_O_IR_Grenade0";
		model = "\A3\Weapons_F_EPB\Ammo\O_IRstrobe_F.p3d";
	};
	class placed_I_IR_grenade: placed_B_IR_grenade
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "placed_I_IR_grenade";
		ammo = "I_IRStrobe";
		displayName = "$STR_A3_CfgMagazines_I_IR_Grenade0";
		model = "\A3\Weapons_F_EPB\Ammo\I_IRstrobe_F.p3d";
	};
	class Weapon_Base_F: WeaponHolder
	{
		author = "$STR_A3_Bohemia_Interactive";
		mapSize = 1.39;
		_generalMacro = "Weapon_Base_F";
		model = "\A3\Weapons_f\DummyWeapon_Single.p3d";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
	};
	class Pistol_Base_F: WeaponHolder
	{
		author = "$STR_A3_Bohemia_Interactive";
		mapSize = 1.39;
		_generalMacro = "Pistol_Base_F";
		model = "\A3\Weapons_F\DummyPistol_Single.p3d";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Pistols";
	};
	class Launcher_Base_F: WeaponHolder
	{
		author = "$STR_A3_Bohemia_Interactive";
		mapSize = 1.39;
		_generalMacro = "Launcher_Base_F";
		model = "\A3\Weapons_F\DummyLauncher_Single.p3d";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Launchers";
	};
	class Item_Base_F: WeaponHolder
	{
		author = "$STR_A3_Bohemia_Interactive";
		mapSize = 5.18;
		_generalMacro = "Item_Base_F";
		model = "\A3\Weapons_F\DummyItem.p3d";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_InventoryItems";
	};
	class Headgear_Base_F: WeaponHolder
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Headgear_Base_F";
		model = "\A3\Weapons_F\DummyHeadgear.p3d";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
	};
	class Vest_Base_F: WeaponHolder
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Vest_Base_F";
		model = "\A3\Weapons_F\DummyVest.p3d";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Vests";
	};
	class Item_ItemWatch: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_cfgWeapons_ItemWatch0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_InventoryItems";
		vehicleClass = "Items";
		model = "\A3\Weapons_F\DummyItemHorizontal.p3d";
		class TransportItems
		{
			class ItemWatch
			{
				name = "ItemWatch";
				count = 1;
			};
		};
	};
	class Item_ItemCompass: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_cfgWeapons_ItemCompass0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_InventoryItems";
		vehicleClass = "Items";
		model = "\A3\Weapons_F\DummyItemHorizontal.p3d";
		class TransportItems
		{
			class ItemCompass
			{
				name = "ItemCompass";
				count = 1;
			};
		};
	};
	class Item_ItemGPS: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_cfgWeapons_ItemGPS0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_InventoryItems";
		vehicleClass = "Items";
		model = "\A3\Weapons_F\DummyItemHorizontal.p3d";
		class TransportItems
		{
			class ItemGPS
			{
				name = "ItemGPS";
				count = 1;
			};
		};
	};
	class Item_ItemRadio: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_cfgWeapons_ItemRadio0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_InventoryItems";
		vehicleClass = "Items";
		model = "\A3\Weapons_F\DummyItemHorizontal.p3d";
		class TransportItems
		{
			class ItemRadio
			{
				name = "ItemRadio";
				count = 1;
			};
		};
	};
	class Item_ItemMap: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_cfgWeapons_ItemMap0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_InventoryItems";
		vehicleClass = "Items";
		model = "\A3\Weapons_F\DummyItemHorizontal.p3d";
		class TransportItems
		{
			class ItemMap
			{
				name = "ItemMap";
				count = 1;
			};
		};
	};
	class Item_MineDetector: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_cfgweapons_minedetector0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_InventoryItems";
		vehicleClass = "Items";
		model = "\A3\Weapons_F\DummyItemHorizontal.p3d";
		class TransportItems
		{
			class MineDetector
			{
				name = "MineDetector";
				count = 1;
			};
		};
	};
	class Item_Binocular: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_DN_BINOCULAR";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_InventoryItems";
		vehicleClass = "Items";
		model = "\A3\Weapons_F\DummyBinoc.p3d";
		class TransportItems
		{
			class Binocular
			{
				name = "Binocular";
				count = 1;
			};
		};
	};
	class Item_Rangefinder: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_cfgWeapons_Rangefinder0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_InventoryItems";
		vehicleClass = "Items";
		model = "\A3\Weapons_F\DummyBinoc.p3d";
		class TransportItems
		{
			class Rangefinder
			{
				name = "Rangefinder";
				count = 1;
			};
		};
	};
	class Item_NVGoggles: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_cfgweapons_nvg_brown0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_InventoryItems";
		vehicleClass = "Items";
		model = "\A3\Weapons_F\DummyNVG.p3d";
		class TransportItems
		{
			class NVGoggles
			{
				name = "NVGoggles";
				count = 1;
			};
		};
	};
	class Item_NVGoggles_OPFOR: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_cfgweapons_nvg_black0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_InventoryItems";
		vehicleClass = "Items";
		model = "\A3\Weapons_F\DummyNVG.p3d";
		class TransportItems
		{
			class NVGoggles_OPFOR
			{
				name = "NVGoggles_OPFOR";
				count = 1;
			};
		};
	};
	class Item_NVGoggles_INDEP: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_cfgweapons_nvg_green0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_InventoryItems";
		vehicleClass = "Items";
		model = "\A3\Weapons_F\DummyNVG.p3d";
		class TransportItems
		{
			class NVGoggles_INDEP
			{
				name = "NVGoggles_INDEP";
				count = 1;
			};
		};
	};
	class Item_FirstAidKit: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_cfgWeapons_FirstAidKit0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_InventoryItems";
		vehicleClass = "Items";
		model = "\A3\Weapons_F\DummyItemHorizontal.p3d";
		class TransportItems
		{
			class FirstAidKit
			{
				name = "FirstAidKit";
				count = 1;
			};
		};
	};
	class Item_Medikit: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_cfgWeapons_Medikit0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_InventoryItems";
		vehicleClass = "Items";
		class TransportItems
		{
			class Medikit
			{
				name = "Medikit";
				count = 1;
			};
		};
	};
	class Item_ToolKit: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_cfgWeapons_ToolKit0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_InventoryItems";
		vehicleClass = "Items";
		class TransportItems
		{
			class ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
		};
	};
	class Weapon_launch_NLAW_F: Launcher_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgWeapons_launch_NLAW0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Launchers";
		vehicleClass = "WeaponsSecondary";
		class TransportWeapons
		{
			class launch_NLAW_F
			{
				weapon = "launch_NLAW_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class NLAW_F
			{
				magazine = "NLAW_F";
				count = 1;
			};
		};
	};
	class Weapon_launch_RPG32_F: Launcher_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgWeapons_launch_LAW0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Launchers";
		vehicleClass = "WeaponsSecondary";
		class TransportWeapons
		{
			class launch_RPG32_F
			{
				weapon = "launch_RPG32_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class RPG32_F
			{
				magazine = "RPG32_F";
				count = 1;
			};
		};
	};
	class Weapon_srifle_EBR_F: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgWeapons_srifle_ABR0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_SniperRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class srifle_EBR_F
			{
				weapon = "srifle_EBR_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 20Rnd_762x51_Mag
			{
				magazine = "20Rnd_762x51_Mag";
				count = 1;
			};
		};
	};
	class Weapon_srifle_GM6_F: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgWeapons_srifle_GM60";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_SniperRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class srifle_GM6_F
			{
				weapon = "srifle_GM6_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 5Rnd_127x108_Mag
			{
				magazine = "5Rnd_127x108_Mag";
				count = 1;
			};
		};
	};
	class Weapon_srifle_LRR_F: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgWeapons_srifle_LRR0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_SniperRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class srifle_LRR_F
			{
				weapon = "srifle_LRR_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 7Rnd_408_Mag
			{
				magazine = "7Rnd_408_Mag";
				count = 1;
			};
		};
	};
	class Weapon_LMG_Mk200_F: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgWeapons_LMG_Mk2000";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_MachineGuns";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class LMG_Mk200_F
			{
				weapon = "LMG_Mk200_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 200Rnd_65x39_cased_Box
			{
				magazine = "200Rnd_65x39_cased_Box";
				count = 1;
			};
		};
	};
	class Weapon_hgun_P07_F: Pistol_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgWeapons_hgun_P070";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Pistols";
		vehicleClass = "WeaponsHandguns";
		class TransportWeapons
		{
			class hgun_P07_F
			{
				weapon = "hgun_P07_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 16Rnd_9x21_Mag
			{
				magazine = "16Rnd_9x21_Mag";
				count = 1;
			};
		};
	};
	class Weapon_hgun_Rook40_F: Pistol_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_CfgWeapons_hgun_Rook40_F0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Pistols";
		vehicleClass = "WeaponsHandguns";
		class TransportWeapons
		{
			class hgun_Rook40_F
			{
				weapon = "hgun_Rook40_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 16Rnd_9x21_Mag
			{
				magazine = "16Rnd_9x21_Mag";
				count = 1;
			};
		};
	};
	class Weapon_arifle_Katiba_F: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgWeapons_arifle_Katiba_F0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class arifle_Katiba_F
			{
				weapon = "arifle_Katiba_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 30Rnd_65x39_caseless_green
			{
				magazine = "30Rnd_65x39_caseless_green";
				count = 1;
			};
		};
	};
	class Weapon_arifle_Katiba_C_F: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgWeapons_arifle_Katiba_C_F0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class arifle_Katiba_C_F
			{
				weapon = "arifle_Katiba_C_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 30Rnd_65x39_caseless_green
			{
				magazine = "30Rnd_65x39_caseless_green";
				count = 1;
			};
		};
	};
	class Weapon_arifle_Katiba_GL_F: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgWeapons_arifle_Katiba_GL_F0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class arifle_Katiba_GL_F
			{
				weapon = "arifle_Katiba_GL_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 30Rnd_65x39_caseless_green
			{
				magazine = "30Rnd_65x39_caseless_green";
				count = 1;
			};
		};
	};
	class Weapon_arifle_MXC_F: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgWeapons_arifle_XMC0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class arifle_MXC_F
			{
				weapon = "arifle_MXC_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 30Rnd_65x39_caseless_mag
			{
				magazine = "30Rnd_65x39_caseless_mag";
				count = 1;
			};
		};
	};
	class Weapon_arifle_MXC_Black_F: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgWeapons_arifle_MXC_Black_F0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class arifle_MXC_Black_F
			{
				weapon = "arifle_MXC_Black_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 30Rnd_65x39_caseless_black_mag
			{
				magazine = "30Rnd_65x39_caseless_black_mag";
				count = 1;
			};
		};
	};
	class Weapon_arifle_MX_F: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgWeapons_arifle_XMX0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class arifle_MX_F
			{
				weapon = "arifle_MX_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 30Rnd_65x39_caseless_mag
			{
				magazine = "30Rnd_65x39_caseless_mag";
				count = 1;
			};
		};
	};
	class Weapon_arifle_MX_Black_F: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgWeapons_arifle_MX_Black_F0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class arifle_MX_Black_F
			{
				weapon = "arifle_MX_Black_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 30Rnd_65x39_caseless_black_mag
			{
				magazine = "30Rnd_65x39_caseless_black_mag";
				count = 1;
			};
		};
	};
	class Weapon_arifle_MX_GL_F: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgWeapons_arifle_XMX_GL0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class arifle_MX_GL_F
			{
				weapon = "arifle_MX_GL_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 30Rnd_65x39_caseless_mag
			{
				magazine = "30Rnd_65x39_caseless_mag";
				count = 1;
			};
		};
	};
	class Weapon_arifle_MX_GL_Black_F: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgWeapons_arifle_MX_GL_Black_F0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class arifle_MX_GL_Black_F
			{
				weapon = "arifle_MX_GL_Black_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 30Rnd_65x39_caseless_black_mag
			{
				magazine = "30Rnd_65x39_caseless_black_mag";
				count = 1;
			};
		};
	};
	class Weapon_arifle_MX_SW_F: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgWeapons_arifle_XM_LSW0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_MachineGuns";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class arifle_MX_SW_F
			{
				weapon = "arifle_MX_SW_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 100Rnd_65x39_caseless_mag_Tracer
			{
				magazine = "100Rnd_65x39_caseless_mag_Tracer";
				count = 1;
			};
		};
	};
	class Weapon_arifle_MX_SW_Black_F: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgWeapons_arifle_MX_SW_Black_F0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_MachineGuns";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class arifle_MX_SW_Black_F
			{
				weapon = "arifle_MX_SW_Black_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 100Rnd_65x39_caseless_black_mag_tracer
			{
				magazine = "100Rnd_65x39_caseless_black_mag_tracer";
				count = 1;
			};
		};
	};
	class Weapon_arifle_MXM_F: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgWeapons_arifle_XMM0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class arifle_MXM_F
			{
				weapon = "arifle_MXM_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 30Rnd_65x39_caseless_mag
			{
				magazine = "30Rnd_65x39_caseless_mag";
				count = 1;
			};
		};
	};
	class Weapon_arifle_MXM_Black_F: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgWeapons_arifle_MXM_Black_F0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class arifle_MXM_Black_F
			{
				weapon = "arifle_MXM_Black_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 30Rnd_65x39_caseless_black_mag
			{
				magazine = "30Rnd_65x39_caseless_black_mag";
				count = 1;
			};
		};
	};
	class Weapon_arifle_SDAR_F: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgWeapons_arifle_SDAR0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class arifle_SDAR_F
			{
				weapon = "arifle_SDAR_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 20Rnd_556x45_UW_mag
			{
				magazine = "20Rnd_556x45_UW_mag";
				count = 1;
			};
		};
	};
	class Weapon_arifle_TRG21_F: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgWeapons_arifle_TRG210";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class arifle_TRG21_F
			{
				weapon = "arifle_TRG21_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 1;
			};
		};
	};
	class Weapon_arifle_TRG20_F: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgWeapons_arifle_TRG200";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class arifle_TRG20_F
			{
				weapon = "arifle_TRG20_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 1;
			};
		};
	};
	class Weapon_arifle_TRG21_GL_F: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgWeapons_arifle_TRG21_GL0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class arifle_TRG21_GL_F
			{
				weapon = "arifle_TRG21_GL_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 1;
			};
		};
	};
	class Item_Laserdesignator: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_cfgWeapons_Laserdesignator0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_InventoryItems";
		vehicleClass = "Items";
		model = "\A3\Weapons_F\DummyBinoc.p3d";
		class TransportItems
		{
			class Laserdesignator
			{
				name = "Laserdesignator";
				count = 1;
			};
		};
	};
	class Weapon_launch_B_Titan_F: Launcher_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CFGWEAPONS_LAUNCH_MPRL_F1";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Launchers";
		vehicleClass = "WeaponsSecondary";
		faction = "BLU_F";
		author = "$STR_A3_Bohemia_Interactive";
		class TransportWeapons
		{
			class launch_B_Titan_F
			{
				weapon = "launch_B_Titan_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class Titan_AA
			{
				magazine = "Titan_AA";
				count = 1;
			};
		};
	};
	class Weapon_launch_I_Titan_F: Weapon_launch_B_Titan_F
	{
		displayName = "$STR_A3_CFGWEAPONS_LAUNCH_MPRL_F3";
		faction = "IND_F";
		author = "$STR_A3_Bohemia_Interactive";
		class TransportWeapons
		{
			class launch_I_Titan_F
			{
				weapon = "launch_I_Titan_F";
				count = 1;
			};
		};
	};
	class Weapon_launch_O_Titan_F: Weapon_launch_B_Titan_F
	{
		displayName = "$STR_A3_CFGWEAPONS_LAUNCH_MPRL_F2";
		faction = "OPF_F";
		author = "$STR_A3_Bohemia_Interactive";
		class TransportWeapons
		{
			class launch_O_Titan_F
			{
				weapon = "launch_O_Titan_F";
				count = 1;
			};
		};
	};
	class Weapon_launch_launch_B_Titan_short_F: Launcher_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CFGWEAPONS_LAUNCH_MPRL_SHORT_F1";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Launchers";
		vehicleClass = "WeaponsSecondary";
		faction = "BLU_F";
		author = "$STR_A3_Bohemia_Interactive";
		class TransportWeapons
		{
			class launch_B_Titan_short_F
			{
				weapon = "launch_B_Titan_short_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class Titan_AT
			{
				magazine = "Titan_AT";
				count = 1;
			};
		};
	};
	class Weapon_launch_I_Titan_short_F: Weapon_launch_launch_B_Titan_short_F
	{
		displayName = "$STR_A3_CFGWEAPONS_LAUNCH_MPRL_SHORT_F3";
		faction = "IND_F";
		author = "$STR_A3_Bohemia_Interactive";
		class TransportWeapons
		{
			class launch_I_Titan_short_F
			{
				weapon = "launch_I_Titan_short_F";
				count = 1;
			};
		};
	};
	class Weapon_launch_O_Titan_short_F: Weapon_launch_launch_B_Titan_short_F
	{
		displayName = "$STR_A3_CFGWEAPONS_LAUNCH_MPRL_SHORT_F2";
		faction = "OPF_F";
		author = "$STR_A3_Bohemia_Interactive";
		class TransportWeapons
		{
			class launch_O_Titan_short_F
			{
				weapon = "launch_O_Titan_short_F";
				count = 1;
			};
		};
	};
	class Weapon_LMG_Zafir_F: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgWeapons_LMG_Zafir_F0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_MachineGuns";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class LMG_Zafir_F
			{
				weapon = "LMG_Zafir_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 150Rnd_762x54_Box
			{
				magazine = "150Rnd_762x54_Box";
				count = 1;
			};
		};
	};
	class Weapon_hgun_ACPC2_F: Pistol_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgWeapons_hgun_ACPC2_F0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Pistols";
		vehicleClass = "WeaponsHandguns";
		class TransportWeapons
		{
			class hgun_ACPC2_F
			{
				weapon = "hgun_ACPC2_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 9Rnd_45ACP_Mag
			{
				magazine = "9Rnd_45ACP_Mag";
				count = 1;
			};
		};
	};
	class Weapon_arifle_Mk20_F: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CFGWEAPONS_ARIFLE_MK20_CAMO";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class arifle_Mk20_F
			{
				weapon = "arifle_Mk20_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 1;
			};
		};
	};
	class Weapon_arifle_Mk20_plain_F: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgWeapons_arifle_Mk200";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class arifle_Mk20_plain_F
			{
				weapon = "arifle_Mk20_plain_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 1;
			};
		};
	};
	class Weapon_arifle_Mk20C_F: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CFGWEAPONS_ARIFLE_MK20C_CAMO";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class arifle_Mk20C_F
			{
				weapon = "arifle_Mk20C_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 1;
			};
		};
	};
	class Weapon_arifle_Mk20C_plain_F: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CFGWEAPONS_ARIFLE_MK20C0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class arifle_Mk20C_plain_F
			{
				weapon = "arifle_Mk20C_plain_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 1;
			};
		};
	};
	class Weapon_arifle_Mk20_GL_F: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CFGWEAPONS_AFRILE_MK20_GL_CAMO";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class arifle_Mk20_GL_F
			{
				weapon = "arifle_Mk20_GL_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 1;
			};
		};
	};
	class Weapon_arifle_Mk20_GL_plain_F: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgWeapons_arifle_Mk20_GL0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class arifle_Mk20_GL_plain_F
			{
				weapon = "arifle_Mk20_GL_plain_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 1;
			};
		};
	};
	class Weapon_SMG_01_F: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgWeapons_SMG_010";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_SubMachineGuns";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class SMG_01_F
			{
				weapon = "SMG_01_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 30Rnd_45ACP_Mag_SMG_01
			{
				magazine = "30Rnd_45ACP_Mag_SMG_01";
				count = 1;
			};
		};
	};
	class Weapon_SMG_02_F: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgWeapons_SMG_020";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_SubMachineGuns";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class SMG_02_F
			{
				weapon = "SMG_02_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 30Rnd_9x21_Green_Mag
			{
				magazine = "30Rnd_9x21_Green_Mag";
				count = 1;
			};
		};
	};
	class Weapon_srifle_DMR_01_F: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgWeapons_srifle_DMR_01_F0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_SniperRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class srifle_DMR_01_F
			{
				weapon = "srifle_DMR_01_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 10Rnd_762x54_Mag
			{
				magazine = "10Rnd_762x54_Mag";
				count = 1;
			};
		};
	};
	class Weapon_hgun_Pistol_heavy_01_F: Pistol_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgWeapons_hgun_Pistol_heavy_01_F0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Pistols";
		vehicleClass = "WeaponsHandguns";
		class TransportWeapons
		{
			class hgun_Pistol_heavy_01_F
			{
				weapon = "hgun_Pistol_heavy_01_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 11Rnd_45ACP_Mag
			{
				magazine = "11Rnd_45ACP_Mag";
				count = 1;
			};
		};
	};
	class Weapon_hgun_Pistol_heavy_02_F: Pistol_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgWeapons_hgun_Pistol_heavy_02_F0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Pistols";
		vehicleClass = "WeaponsHandguns";
		class TransportWeapons
		{
			class hgun_Pistol_heavy_02_F
			{
				weapon = "hgun_Pistol_heavy_02_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 6Rnd_45ACP_Cylinder
			{
				magazine = "6Rnd_45ACP_Cylinder";
				count = 1;
			};
		};
	};
	class Weapon_hgun_PDW2000_F: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CFGWEAPONS_HGUN_PDW20000";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_SubMachineGuns";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hgun_PDW2000_F
			{
				weapon = "hgun_PDW2000_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 30Rnd_9x21_Yellow_Mag
			{
				magazine = "30Rnd_9x21_Yellow_Mag";
				count = 1;
			};
		};
	};
	class Item_U_BasicBody: Item_Base_F
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "$STR_A3_Underwear1";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_BasicBody
			{
				name = "U_BasicBody";
				count = 1;
			};
		};
	};
	class Item_U_B_CombatUniform_mcam: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_Combat_fatigues";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_B_CombatUniform_mcam
			{
				name = "U_B_CombatUniform_mcam";
				count = 1;
			};
		};
	};
	class Item_U_B_CombatUniform_mcam_tshirt: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_Combat_fatigues_tee";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_B_CombatUniform_mcam_tshirt
			{
				name = "U_B_CombatUniform_mcam_tshirt";
				count = 1;
			};
		};
	};
	class Item_U_B_CombatUniform_mcam_vest: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_Recon_fatigues";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_B_CombatUniform_mcam_vest
			{
				name = "U_B_CombatUniform_mcam_vest";
				count = 1;
			};
		};
	};
	class Item_U_B_GhillieSuit: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_Ghillie_suit";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_B_GhillieSuit
			{
				name = "U_B_GhillieSuit";
				count = 1;
			};
		};
	};
	class Item_U_B_HeliPilotCoveralls: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_HELIPILOT_COVERALLS_NATO_0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_B_HeliPilotCoveralls
			{
				name = "U_B_HeliPilotCoveralls";
				count = 1;
			};
		};
	};
	class Item_U_B_Wetsuit: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_U_B_Wetsuit0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_B_Wetsuit
			{
				name = "U_B_Wetsuit";
				count = 1;
			};
		};
	};
	class Item_U_O_CombatUniform_ocamo: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_Iran_Fatigues_hex";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_O_CombatUniform_ocamo
			{
				name = "U_O_CombatUniform_ocamo";
				count = 1;
			};
		};
	};
	class Item_U_O_GhillieSuit: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_Ghillie_suit_Iran";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_O_GhillieSuit
			{
				name = "U_O_GhillieSuit";
				count = 1;
			};
		};
	};
	class Item_U_O_PilotCoveralls: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_Pilot_coveralls_Iran";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_O_PilotCoveralls
			{
				name = "U_O_PilotCoveralls";
				count = 1;
			};
		};
	};
	class Item_U_O_Wetsuit: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_U_OI_Wetsuit0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_O_Wetsuit
			{
				name = "U_O_Wetsuit";
				count = 1;
			};
		};
	};
	class Item_U_C_Poloshirt_blue: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_COMMONER_CLOTHES_BLUE_0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_C_Poloshirt_blue
			{
				name = "U_C_Poloshirt_blue";
				count = 1;
			};
		};
	};
	class Item_U_C_Poloshirt_burgundy: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_COMMONER_CLOTHES_BURGUNDY_0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_C_Poloshirt_burgundy
			{
				name = "U_C_Poloshirt_burgundy";
				count = 1;
			};
		};
	};
	class Item_U_C_Poloshirt_stripped: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_COMMONER_CLOTHES_STRIPED_0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_C_Poloshirt_stripped
			{
				name = "U_C_Poloshirt_stripped";
				count = 1;
			};
		};
	};
	class Item_U_C_Poloshirt_tricolour: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_COMMONER_CLOTHES_TRICOLOR_0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_C_Poloshirt_tricolour
			{
				name = "U_C_Poloshirt_tricolour";
				count = 1;
			};
		};
	};
	class Item_U_C_Poloshirt_salmon: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_COMMONER_CLOTHES_SALMON_0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_C_Poloshirt_salmon
			{
				name = "U_C_Poloshirt_salmon";
				count = 1;
			};
		};
	};
	class Item_U_C_Poloshirt_redwhite: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_COMMONER_CLOTHES_REDWHITE_0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_C_Poloshirt_redwhite
			{
				name = "U_C_Poloshirt_redwhite";
				count = 1;
			};
		};
	};
	class Item_U_I_G_resistanceLeader_F: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_UNIFORM_STAVROU0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_I_G_resistanceLeader_F
			{
				name = "U_I_G_resistanceLeader_F";
				count = 1;
			};
		};
	};
	class Item_U_B_Protagonist_VR: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_VRSUIT_NATO_0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_B_Protagonist_VR
			{
				name = "U_B_Protagonist_VR";
				count = 1;
			};
		};
	};
	class Item_U_O_Protagonist_VR: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_VRSUIT_CSAT_0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_O_Protagonist_VR
			{
				name = "U_O_Protagonist_VR";
				count = 1;
			};
		};
	};
	class Item_U_I_Protagonist_VR: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_VRSUIT_AAF_0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_I_Protagonist_VR
			{
				name = "U_I_Protagonist_VR";
				count = 1;
			};
		};
	};
	class Item_U_I_G_Story_Protagonist_F: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_UNIFORM_KERRY0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_I_G_Story_Protagonist_F
			{
				name = "U_I_G_Story_Protagonist_F";
				count = 1;
			};
		};
	};
	class Item_U_C_Commoner1_1: Item_Base_F
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "$STR_A3_common_clothes0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_C_Commoner1_1
			{
				name = "U_C_Commoner1_1";
				count = 1;
			};
		};
	};
	class Item_U_C_Commoner1_2: Item_Base_F
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "$STR_A3_common_clothes1";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_C_Commoner1_2
			{
				name = "U_C_Commoner1_2";
				count = 1;
			};
		};
	};
	class Item_U_C_Commoner1_3: Item_Base_F
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "$STR_A3_common_clothes2";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_C_Commoner1_3
			{
				name = "U_C_Commoner1_3";
				count = 1;
			};
		};
	};
	class Item_U_Rangemaster: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_rangemaster_suit0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_Rangemaster
			{
				name = "U_Rangemaster";
				count = 1;
			};
		};
	};
	class Vest_V_Rangemaster_belt: Vest_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_V_Rangemaster_belt0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Vests";
		vehicleClass = "ItemsVests";
		class TransportItems
		{
			class V_Rangemaster_belt
			{
				name = "V_Rangemaster_belt";
				count = 1;
			};
		};
	};
	class Vest_V_BandollierB_khk: Vest_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_V_BandollierB_khk0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Vests";
		vehicleClass = "ItemsVests";
		class TransportItems
		{
			class V_BandollierB_khk
			{
				name = "V_BandollierB_khk";
				count = 1;
			};
		};
	};
	class Vest_V_BandollierB_cbr: Vest_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_V_BandollierB_cbr0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Vests";
		vehicleClass = "ItemsVests";
		class TransportItems
		{
			class V_BandollierB_cbr
			{
				name = "V_BandollierB_cbr";
				count = 1;
			};
		};
	};
	class Vest_V_BandollierB_rgr: Vest_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_V_BandollierB_rgr0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Vests";
		vehicleClass = "ItemsVests";
		class TransportItems
		{
			class V_BandollierB_rgr
			{
				name = "V_BandollierB_rgr";
				count = 1;
			};
		};
	};
	class Vest_V_BandollierB_blk: Vest_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_V_BandollierB_blk0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Vests";
		vehicleClass = "ItemsVests";
		class TransportItems
		{
			class V_BandollierB_blk
			{
				name = "V_BandollierB_blk";
				count = 1;
			};
		};
	};
	class Vest_V_PlateCarrier1_rgr: Vest_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_V_PlateCarrier1_rgr0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Vests";
		vehicleClass = "ItemsVests";
		class TransportItems
		{
			class V_PlateCarrier1_rgr
			{
				name = "V_PlateCarrier1_rgr";
				count = 1;
			};
		};
	};
	class Vest_V_PlateCarrier2_rgr: Vest_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_V_PlateCarrier2_rgr0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Vests";
		vehicleClass = "ItemsVests";
		class TransportItems
		{
			class V_PlateCarrier2_rgr
			{
				name = "V_PlateCarrier2_rgr";
				count = 1;
			};
		};
	};
	class Vest_V_PlateCarrier2_blk: Vest_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_V_PLATECARRIER2_BLK0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Vests";
		vehicleClass = "ItemsVests";
		class TransportItems
		{
			class V_PlateCarrier2_blk
			{
				name = "V_PlateCarrier2_blk";
				count = 1;
			};
		};
	};
	class Vest_V_Chestrig_khk: Vest_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_V_Chestrig_khk0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Vests";
		vehicleClass = "ItemsVests";
		class TransportItems
		{
			class V_Chestrig_khk
			{
				name = "V_Chestrig_khk";
				count = 1;
			};
		};
	};
	class Vest_V_Chestrig_rgr: Vest_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_V_Chestrig_rgr0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Vests";
		vehicleClass = "ItemsVests";
		class TransportItems
		{
			class V_Chestrig_rgr
			{
				name = "V_Chestrig_rgr";
				count = 1;
			};
		};
	};
	class Vest_V_Chestrig_blk: Vest_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_V_ChestrigF_blk0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Vests";
		vehicleClass = "ItemsVests";
		class TransportItems
		{
			class V_Chestrig_blk
			{
				name = "V_Chestrig_blk";
				count = 1;
			};
		};
	};
	class Vest_V_TacVest_khk: Vest_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_V_TacVest_khk0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Vests";
		vehicleClass = "ItemsVests";
		class TransportItems
		{
			class V_TacVest_khk
			{
				name = "V_TacVest_khk";
				count = 1;
			};
		};
	};
	class Vest_V_TacVest_brn: Vest_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_V_TacVest_brn0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Vests";
		vehicleClass = "ItemsVests";
		class TransportItems
		{
			class V_TacVest_brn
			{
				name = "V_TacVest_brn";
				count = 1;
			};
		};
	};
	class Vest_V_TacVest_oli: Vest_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_V_TacVest_oli0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Vests";
		vehicleClass = "ItemsVests";
		class TransportItems
		{
			class V_TacVest_oli
			{
				name = "V_TacVest_oli";
				count = 1;
			};
		};
	};
	class Vest_V_TacVest_blk: Vest_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_V_TacVest_blk0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Vests";
		vehicleClass = "ItemsVests";
		class TransportItems
		{
			class V_TacVest_blk
			{
				name = "V_TacVest_blk";
				count = 1;
			};
		};
	};
	class Vest_V_HarnessO_brn: Vest_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_V_HarnessO_brn0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Vests";
		vehicleClass = "ItemsVests";
		class TransportItems
		{
			class V_HarnessO_brn
			{
				name = "V_HarnessO_brn";
				count = 1;
			};
		};
	};
	class Vest_V_HarnessOGL_brn: Vest_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_V_HarnessOGL_brn0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Vests";
		vehicleClass = "ItemsVests";
		class TransportItems
		{
			class V_HarnessOGL_brn
			{
				name = "V_HarnessOGL_brn";
				count = 1;
			};
		};
	};
	class Vest_V_RebreatherB: Vest_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_cfgvests_rebreather_nato0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Vests";
		vehicleClass = "ItemsVests";
		class TransportItems
		{
			class V_RebreatherB
			{
				name = "V_RebreatherB";
				count = 1;
			};
		};
	};
	class Vest_V_RebreatherIR: Vest_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_cfgvests_rebreather_csat0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Vests";
		vehicleClass = "ItemsVests";
		class TransportItems
		{
			class V_RebreatherIR
			{
				name = "V_RebreatherIR";
				count = 1;
			};
		};
	};
	class Vest_V_I_G_resistanceLeader_F: Vest_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_V_I_G_RESISTANCELEADER_F0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Vests";
		vehicleClass = "ItemsVests";
		class TransportItems
		{
			class V_I_G_resistanceLeader_F
			{
				name = "V_I_G_resistanceLeader_F";
				count = 1;
			};
		};
	};
	class Headgear_H_HelmetB: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_HelmetB0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Helmets";
		vehicleClass = "ItemsHeadgear";
		class TransportItems
		{
			class H_HelmetB
			{
				name = "H_HelmetB";
				count = 1;
			};
		};
	};
	class Headgear_H_HelmetB_camo: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_HelmetB_camo0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Helmets";
		vehicleClass = "ItemsHeadgear";
		class TransportItems
		{
			class H_HelmetB_camo
			{
				name = "H_HelmetB_camo";
				count = 1;
			};
		};
	};
	class Headgear_H_Booniehat_khk: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_Booniehat_khk0_boot";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
		vehicleClass = "ItemsHeadgear";
		class TransportItems
		{
			class H_Booniehat_khk
			{
				name = "H_Booniehat_khk";
				count = 1;
			};
		};
	};
	class Headgear_H_Booniehat_oli: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_Booniehat_oli0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
		vehicleClass = "ItemsHeadgear";
		class TransportItems
		{
			class H_Booniehat_oli
			{
				name = "H_Booniehat_oli";
				count = 1;
			};
		};
	};
	class Headgear_H_Booniehat_mcamo: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_Booniehat_mcamo0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
		vehicleClass = "ItemsHeadgear";
		class TransportItems
		{
			class H_Booniehat_mcamo
			{
				name = "H_Booniehat_mcamo";
				count = 1;
			};
		};
	};
	class Headgear_H_HelmetB_light: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_HelmetB_light0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Helmets";
		vehicleClass = "ItemsHeadgear";
		class TransportItems
		{
			class H_HelmetB_light
			{
				name = "H_HelmetB_light";
				count = 1;
			};
		};
	};
	class Headgear_H_Cap_red: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_Cap_red0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
		vehicleClass = "ItemsHeadgear";
		model = "\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class H_Cap_red
			{
				name = "H_Cap_red";
				count = 1;
			};
		};
	};
	class Headgear_H_Cap_blu: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_Cap_blu0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
		vehicleClass = "ItemsHeadgear";
		model = "\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class H_Cap_blu
			{
				name = "H_Cap_blu";
				count = 1;
			};
		};
	};
	class Headgear_H_Cap_oli: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_Cap_oli0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
		vehicleClass = "ItemsHeadgear";
		model = "\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class H_Cap_oli
			{
				name = "H_Cap_oli";
				count = 1;
			};
		};
	};
	class Headgear_H_Cap_headphones: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_H_Cap_headphones0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
		vehicleClass = "ItemsHeadgear";
		model = "\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class H_Cap_headphones
			{
				name = "H_Cap_headphones";
				count = 1;
			};
		};
	};
	class Headgear_H_PilotHelmetHeli_B: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_PilotHelmetHeli_B0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Helmets";
		vehicleClass = "ItemsHeadgear";
		class TransportItems
		{
			class H_PilotHelmetHeli_B
			{
				name = "H_PilotHelmetHeli_B";
				count = 1;
			};
		};
	};
	class Headgear_H_PilotHelmetHeli_O: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_PilotHelmetHeli_O0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Helmets";
		vehicleClass = "ItemsHeadgear";
		class TransportItems
		{
			class H_PilotHelmetHeli_O
			{
				name = "H_PilotHelmetHeli_O";
				count = 1;
			};
		};
	};
	class Headgear_H_HelmetO_ocamo: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_HelmetO_ocamo0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Helmets";
		vehicleClass = "ItemsHeadgear";
		class TransportItems
		{
			class H_HelmetO_ocamo
			{
				name = "H_HelmetO_ocamo";
				count = 1;
			};
		};
	};
	class Headgear_H_HelmetLeaderO_ocamo: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_HelmetLeaderO_ocamo0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Helmets";
		vehicleClass = "ItemsHeadgear";
		class TransportItems
		{
			class H_HelmetLeaderO_ocamo
			{
				name = "H_HelmetLeaderO_ocamo";
				count = 1;
			};
		};
	};
	class Headgear_H_MilCap_ocamo: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_MilCap_ocamo0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
		vehicleClass = "ItemsHeadgear";
		model = "\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class H_MilCap_ocamo
			{
				name = "H_MilCap_ocamo";
				count = 1;
			};
		};
	};
	class Headgear_H_MilCap_mcamo: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_MilCap_mcamo0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
		vehicleClass = "ItemsHeadgear";
		model = "\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class H_MilCap_mcamo
			{
				name = "H_MilCap_mcamo";
				count = 1;
			};
		};
	};
	class Item_U_B_CombatUniform_mcam_worn: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_combat_fatigues_worn";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_B_CombatUniform_mcam_worn
			{
				name = "U_B_CombatUniform_mcam_worn";
				count = 1;
			};
		};
	};
	class Item_U_B_CombatUniform_wdl: Item_Base_F
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "$STR_A3_Combat_fatigues";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_B_CombatUniform_wdl
			{
				name = "U_B_CombatUniform_wdl";
				count = 1;
			};
		};
	};
	class Item_U_B_CombatUniform_wdl_tshirt: Item_Base_F
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "$STR_A3_Combat_fatigues_tee";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_B_CombatUniform_wdl_tshirt
			{
				name = "U_B_CombatUniform_wdl_tshirt";
				count = 1;
			};
		};
	};
	class Item_U_B_CombatUniform_wdl_vest: Item_Base_F
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "$STR_A3_Recon_fatigues";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_B_CombatUniform_wdl_vest
			{
				name = "U_B_CombatUniform_wdl_vest";
				count = 1;
			};
		};
	};
	class Item_U_B_CombatUniform_sgg: Item_Base_F
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "$STR_A3_Combat_fatigues";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_B_CombatUniform_sgg
			{
				name = "U_B_CombatUniform_sgg";
				count = 1;
			};
		};
	};
	class Item_U_B_CombatUniform_sgg_tshirt: Item_Base_F
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "$STR_A3_Combat_fatigues_tee";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_B_CombatUniform_sgg_tshirt
			{
				name = "U_B_CombatUniform_sgg_tshirt";
				count = 1;
			};
		};
	};
	class Item_U_B_CombatUniform_sgg_vest: Item_Base_F
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "$STR_A3_Recon_fatigues";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_B_CombatUniform_sgg_vest
			{
				name = "U_B_CombatUniform_sgg_vest";
				count = 1;
			};
		};
	};
	class Item_U_B_SpecopsUniform_sgg: Item_Base_F
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "$STR_A3_Specop_fatigues";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_B_SpecopsUniform_sgg
			{
				name = "U_B_SpecopsUniform_sgg";
				count = 1;
			};
		};
	};
	class Item_U_B_PilotCoveralls: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_Pilot_coveralls";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_B_PilotCoveralls
			{
				name = "U_B_PilotCoveralls";
				count = 1;
			};
		};
	};
	class Item_U_O_CombatUniform_oucamo: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_Iran_fatigues_urban";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_O_CombatUniform_oucamo
			{
				name = "U_O_CombatUniform_oucamo";
				count = 1;
			};
		};
	};
	class Item_U_O_SpecopsUniform_ocamo: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_Recon_fatigues_hex";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_O_SpecopsUniform_ocamo
			{
				name = "U_O_SpecopsUniform_ocamo";
				count = 1;
			};
		};
	};
	class Item_U_O_SpecopsUniform_blk: Item_Base_F
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "$STR_A3_recon_fatigues_black";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_O_SpecopsUniform_blk
			{
				name = "U_O_SpecopsUniform_blk";
				count = 1;
			};
		};
	};
	class Item_U_O_OfficerUniform_ocamo: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_officer_uniform";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_O_OfficerUniform_ocamo
			{
				name = "U_O_OfficerUniform_ocamo";
				count = 1;
			};
		};
	};
	class Item_U_I_CombatUniform: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_combat_fatigues_haf0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_I_CombatUniform
			{
				name = "U_I_CombatUniform";
				count = 1;
			};
		};
	};
	class Item_U_I_CombatUniform_tshirt: Item_Base_F
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "$STR_A3_combat_fatigues_haf_tee";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_I_CombatUniform_tshirt
			{
				name = "U_I_CombatUniform_tshirt";
				count = 1;
			};
		};
	};
	class Item_U_I_CombatUniform_shortsleeve: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_combat_fatigues_haf1";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_I_CombatUniform_shortsleeve
			{
				name = "U_I_CombatUniform_shortsleeve";
				count = 1;
			};
		};
	};
	class Item_U_I_pilotCoveralls: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_pilot_coveralls_haf";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_I_pilotCoveralls
			{
				name = "U_I_pilotCoveralls";
				count = 1;
			};
		};
	};
	class Item_U_I_HeliPilotCoveralls: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_HELIPILOT_COVERALLS_AAF_0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_I_HeliPilotCoveralls
			{
				name = "U_I_HeliPilotCoveralls";
				count = 1;
			};
		};
	};
	class Item_U_I_GhillieSuit: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_ghillie_suit_haf";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_I_GhillieSuit
			{
				name = "U_I_GhillieSuit";
				count = 1;
			};
		};
	};
	class Item_U_I_OfficerUniform: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_combat_fatigues_haf_tee";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_I_OfficerUniform
			{
				name = "U_I_OfficerUniform";
				count = 1;
			};
		};
	};
	class Item_U_I_Wetsuit: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_U_IA_Wetsuit0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_I_Wetsuit
			{
				name = "U_I_Wetsuit";
				count = 1;
			};
		};
	};
	class Item_U_Competitor: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_Characters_F_Beta_0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_Competitor
			{
				name = "U_Competitor";
				count = 1;
			};
		};
	};
	class Item_U_NikosBody: Item_Base_F
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "$STR_A3_NIKOS_CLOTHES_0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_NikosBody
			{
				name = "U_NikosBody";
				count = 1;
			};
		};
	};
	class Item_U_MillerBody: Item_Base_F
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "$STR_A3_COMBAT_FATIGUES_MILLER_0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_MillerBody
			{
				name = "U_MillerBody";
				count = 1;
			};
		};
	};
	class Item_U_KerryBody: Item_Base_F
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "$STR_A3_COMBAT_FATIGUES_KERRY_0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_KerryBody
			{
				name = "U_KerryBody";
				count = 1;
			};
		};
	};
	class Item_U_OrestesBody: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_jacket_shorts";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_OrestesBody
			{
				name = "U_OrestesBody";
				count = 1;
			};
		};
	};
	class Item_U_AttisBody: Item_Base_F
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "$STR_A3_underwear4";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_AttisBody
			{
				name = "U_AttisBody";
				count = 1;
			};
		};
	};
	class Item_U_AntigonaBody: Item_Base_F
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "$STR_A3_underwear5";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_AntigonaBody
			{
				name = "U_AntigonaBody";
				count = 1;
			};
		};
	};
	class Item_U_OI_Scientist: Item_Base_F
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "$STR_A3_scientist_suit";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_OI_Scientist
			{
				name = "U_OI_Scientist";
				count = 1;
			};
		};
	};
	class Vest_V_BandollierB_oli: Vest_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_V_BANDOLLIERB_OLI0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Vests";
		vehicleClass = "ItemsVests";
		class TransportItems
		{
			class V_BandollierB_oli
			{
				name = "V_BandollierB_oli";
				count = 1;
			};
		};
	};
	class Vest_V_PlateCarrier1_blk: Vest_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_V_PlateCarrier1_blk0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Vests";
		vehicleClass = "ItemsVests";
		class TransportItems
		{
			class V_PlateCarrier1_blk
			{
				name = "V_PlateCarrier1_blk";
				count = 1;
			};
		};
	};
	class Vest_V_Chestrig_oli: Vest_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_ChestrigF_oli";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Vests";
		vehicleClass = "ItemsVests";
		class TransportItems
		{
			class V_Chestrig_oli
			{
				name = "V_Chestrig_oli";
				count = 1;
			};
		};
	};
	class Vest_V_TacVest_camo: Vest_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_V_TacVest_camo0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Vests";
		vehicleClass = "ItemsVests";
		class TransportItems
		{
			class V_TacVest_camo
			{
				name = "V_TacVest_camo";
				count = 1;
			};
		};
	};
	class Vest_V_TacVest_blk_POLICE: Vest_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_V_TacVest_blk_POLICE0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Vests";
		vehicleClass = "ItemsVests";
		class TransportItems
		{
			class V_TacVest_blk_POLICE
			{
				name = "V_TacVest_blk_POLICE";
				count = 1;
			};
		};
	};
	class Vest_V_TacVestIR_blk: Vest_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_V_TacVestIR_blk0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Vests";
		vehicleClass = "ItemsVests";
		class TransportItems
		{
			class V_TacVestIR_blk
			{
				name = "V_TacVestIR_blk";
				count = 1;
			};
		};
	};
	class Vest_V_HarnessO_gry: Vest_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_V_HarnessO_gry0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Vests";
		vehicleClass = "ItemsVests";
		class TransportItems
		{
			class V_HarnessO_gry
			{
				name = "V_HarnessO_gry";
				count = 1;
			};
		};
	};
	class Vest_V_HarnessOGL_gry: Vest_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_V_HarnessOGL_gry0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Vests";
		vehicleClass = "ItemsVests";
		class TransportItems
		{
			class V_HarnessOGL_gry
			{
				name = "V_HarnessOGL_gry";
				count = 1;
			};
		};
	};
	class Vest_V_PlateCarrierIA1_dgtl: Vest_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_V_PlateCarrierIA1_dgtl0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Vests";
		vehicleClass = "ItemsVests";
		class TransportItems
		{
			class V_PlateCarrierIA1_dgtl
			{
				name = "V_PlateCarrierIA1_dgtl";
				count = 1;
			};
		};
	};
	class Vest_V_PlateCarrierIA2_dgtl: Vest_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_V_PlateCarrierIA2_dgtl0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Vests";
		vehicleClass = "ItemsVests";
		class TransportItems
		{
			class V_PlateCarrierIA2_dgtl
			{
				name = "V_PlateCarrierIA2_dgtl";
				count = 1;
			};
		};
	};
	class Vest_V_RebreatherIA: Vest_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_cfgvests_rebreather_aaf0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Vests";
		vehicleClass = "ItemsVests";
		class TransportItems
		{
			class V_RebreatherIA
			{
				name = "V_RebreatherIA";
				count = 1;
			};
		};
	};
	class Headgear_H_Booniehat_tan: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_Booniehat_tan0_boot";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
		vehicleClass = "ItemsHeadgear";
		model = "\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class H_Booniehat_tan
			{
				name = "H_Booniehat_tan";
				count = 1;
			};
		};
	};
	class Headgear_H_Booniehat_dgtl: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_Booniehat_dgtl0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
		vehicleClass = "ItemsHeadgear";
		model = "\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class H_Booniehat_dgtl
			{
				name = "H_Booniehat_dgtl";
				count = 1;
			};
		};
	};
	class Headgear_H_Booniehat_khk_hs: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_Booniehat_khk_hs0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
		vehicleClass = "ItemsHeadgear";
		model = "\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class H_Booniehat_khk_hs
			{
				name = "H_Booniehat_khk_hs";
				count = 1;
			};
		};
	};
	class Headgear_H_HelmetSpecB: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_HelmetSpecB0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Helmets";
		vehicleClass = "ItemsHeadgear";
		class TransportItems
		{
			class H_HelmetSpecB
			{
				name = "H_HelmetSpecB";
				count = 1;
			};
		};
	};
	class Headgear_H_HelmetSpecB_paint1: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_HelmetSpecB_paint10";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Helmets";
		vehicleClass = "ItemsHeadgear";
		class TransportItems
		{
			class H_HelmetSpecB_paint1
			{
				name = "H_HelmetSpecB_paint1";
				count = 1;
			};
		};
	};
	class Headgear_H_HelmetSpecB_paint2: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_HelmetSpecB_paint20";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Helmets";
		vehicleClass = "ItemsHeadgear";
		class TransportItems
		{
			class H_HelmetSpecB_paint2
			{
				name = "H_HelmetSpecB_paint2";
				count = 1;
			};
		};
	};
	class Headgear_H_HelmetSpecB_blk: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_HelmetSpecB_blk0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Helmets";
		vehicleClass = "ItemsHeadgear";
		class TransportItems
		{
			class H_HelmetSpecB_blk
			{
				name = "H_HelmetSpecB_blk";
				count = 1;
			};
		};
	};
	class Headgear_H_HelmetSpecB_snakeskin: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_HELMETSPECB_SNAKE0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Helmets";
		vehicleClass = "ItemsHeadgear";
		class TransportItems
		{
			class H_HelmetSpecB_snakeskin
			{
				name = "H_HelmetSpecB_snakeskin";
				count = 1;
			};
		};
	};
	class Headgear_H_HelmetSpecB_sand: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_HELMETSPECB_SAND0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Helmets";
		vehicleClass = "ItemsHeadgear";
		class TransportItems
		{
			class H_HelmetSpecB_sand
			{
				name = "H_HelmetSpecB_sand";
				count = 1;
			};
		};
	};
	class Headgear_H_HelmetIA: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_HelmetIA0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Helmets";
		vehicleClass = "ItemsHeadgear";
		class TransportItems
		{
			class H_HelmetIA
			{
				name = "H_HelmetIA";
				count = 1;
			};
		};
	};
	class Headgear_H_Cap_tan: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_Cap_tan0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
		vehicleClass = "ItemsHeadgear";
		model = "\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class H_Cap_tan
			{
				name = "H_Cap_tan";
				count = 1;
			};
		};
	};
	class Headgear_H_Cap_blk: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_Cap_blk0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
		vehicleClass = "ItemsHeadgear";
		model = "\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class H_Cap_blk
			{
				name = "H_Cap_blk";
				count = 1;
			};
		};
	};
	class Headgear_H_Cap_blk_CMMG: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_Cap_blk_CMMG0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
		vehicleClass = "ItemsHeadgear";
		model = "\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class H_Cap_blk_CMMG
			{
				name = "H_Cap_blk_CMMG";
				count = 1;
			};
		};
	};
	class Headgear_H_Cap_brn_SPECOPS: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_Cap_brn_SPECOPS0_boot";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
		vehicleClass = "ItemsHeadgear";
		model = "\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class H_Cap_brn_SPECOPS
			{
				name = "H_Cap_brn_SPECOPS";
				count = 1;
			};
		};
	};
	class Headgear_H_Cap_tan_specops_US: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_Cap_tan_specops_US0_boot";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
		vehicleClass = "ItemsHeadgear";
		model = "\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class H_Cap_tan_specops_US
			{
				name = "H_Cap_tan_specops_US";
				count = 1;
			};
		};
	};
	class Headgear_H_Cap_khaki_specops_UK: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_Cap_khaki_specops_UK0_boot";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
		vehicleClass = "ItemsHeadgear";
		model = "\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class H_Cap_khaki_specops_UK
			{
				name = "H_Cap_khaki_specops_UK";
				count = 1;
			};
		};
	};
	class Headgear_H_Cap_grn: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_Cap_grn0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
		vehicleClass = "ItemsHeadgear";
		model = "\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class H_Cap_grn
			{
				name = "H_Cap_grn";
				count = 1;
			};
		};
	};
	class Headgear_H_Cap_grn_BI: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_Cap_grn_BI0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
		vehicleClass = "ItemsHeadgear";
		model = "\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class H_Cap_grn_BI
			{
				name = "H_Cap_grn_BI";
				count = 1;
			};
		};
	};
	class Headgear_H_Cap_blk_Raven: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_Cap_blk_Raven0_boot";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
		vehicleClass = "ItemsHeadgear";
		model = "\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class H_Cap_blk_Raven
			{
				name = "H_Cap_blk_Raven";
				count = 1;
			};
		};
	};
	class Headgear_H_Cap_blk_ION: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_Cap_blk_ION0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
		vehicleClass = "ItemsHeadgear";
		model = "\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class H_Cap_blk_ION
			{
				name = "H_Cap_blk_ION";
				count = 1;
			};
		};
	};
	class Headgear_H_Cap_oli_hs: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_Cap_oli_hs0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
		vehicleClass = "ItemsHeadgear";
		model = "\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class H_Cap_oli_hs
			{
				name = "H_Cap_oli_hs";
				count = 1;
			};
		};
	};
	class Headgear_H_Cap_press: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_Cap_press0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
		vehicleClass = "ItemsHeadgear";
		model = "\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class H_Cap_press
			{
				name = "H_Cap_press";
				count = 1;
			};
		};
	};
	class Headgear_H_Cap_usblack: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_Cap_usblack0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
		vehicleClass = "ItemsHeadgear";
		model = "\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class H_Cap_usblack
			{
				name = "H_Cap_usblack";
				count = 1;
			};
		};
	};
	class Headgear_H_Cap_surfer: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_Cap_surfer0_boot";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
		vehicleClass = "ItemsHeadgear";
		model = "\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class H_Cap_surfer
			{
				name = "H_Cap_surfer";
				count = 1;
			};
		};
	};
	class Headgear_H_Cap_police: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_Cap_police0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
		vehicleClass = "ItemsHeadgear";
		model = "\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class H_Cap_police
			{
				name = "H_Cap_police";
				count = 1;
			};
		};
	};
	class Headgear_H_HelmetCrew_B: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_HelmetCrewB0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Helmets";
		vehicleClass = "ItemsHeadgear";
		class TransportItems
		{
			class H_HelmetCrew_B
			{
				name = "H_HelmetCrew_B";
				count = 1;
			};
		};
	};
	class Headgear_H_HelmetCrew_O: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_HelmetCrew_O0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Helmets";
		vehicleClass = "ItemsHeadgear";
		class TransportItems
		{
			class H_HelmetCrew_O
			{
				name = "H_HelmetCrew_O";
				count = 1;
			};
		};
	};
	class Headgear_H_HelmetCrew_I: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_HelmetCrewIA0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Helmets";
		vehicleClass = "ItemsHeadgear";
		class TransportItems
		{
			class H_HelmetCrew_I
			{
				name = "H_HelmetCrew_I";
				count = 1;
			};
		};
	};
	class Headgear_H_PilotHelmetFighter_B: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_PilotHelmetFighter_B0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Helmets";
		vehicleClass = "ItemsHeadgear";
		class TransportItems
		{
			class H_PilotHelmetFighter_B
			{
				name = "H_PilotHelmetFighter_B";
				count = 1;
			};
		};
	};
	class Headgear_H_PilotHelmetFighter_O: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_PilotHelmetFighter_OI0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Helmets";
		vehicleClass = "ItemsHeadgear";
		class TransportItems
		{
			class H_PilotHelmetFighter_O
			{
				name = "H_PilotHelmetFighter_O";
				count = 1;
			};
		};
	};
	class Headgear_H_PilotHelmetFighter_I: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_PilotHelmetFighter_IA0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Helmets";
		vehicleClass = "ItemsHeadgear";
		class TransportItems
		{
			class H_PilotHelmetFighter_I
			{
				name = "H_PilotHelmetFighter_I";
				count = 1;
			};
		};
	};
	class Headgear_H_PilotHelmetHeli_I: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_PilotHelmetHeli_IA0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Helmets";
		vehicleClass = "ItemsHeadgear";
		class TransportItems
		{
			class H_PilotHelmetHeli_I
			{
				name = "H_PilotHelmetHeli_I";
				count = 1;
			};
		};
	};
	class Headgear_H_CrewHelmetHeli_B: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_CrewHelmetHeli_B0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Helmets";
		vehicleClass = "ItemsHeadgear";
		class TransportItems
		{
			class H_CrewHelmetHeli_B
			{
				name = "H_CrewHelmetHeli_B";
				count = 1;
			};
		};
	};
	class Headgear_H_CrewHelmetHeli_O: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_CrewHelmetHeli_O0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Helmets";
		vehicleClass = "ItemsHeadgear";
		class TransportItems
		{
			class H_CrewHelmetHeli_O
			{
				name = "H_CrewHelmetHeli_O";
				count = 1;
			};
		};
	};
	class Headgear_H_CrewHelmetHeli_I: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_CrewHelmetHeli_IA0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Helmets";
		vehicleClass = "ItemsHeadgear";
		class TransportItems
		{
			class H_CrewHelmetHeli_I
			{
				name = "H_CrewHelmetHeli_I";
				count = 1;
			};
		};
	};
	class Headgear_H_HelmetO_oucamo: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_HelmetO_oucamo0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Helmets";
		vehicleClass = "ItemsHeadgear";
		class TransportItems
		{
			class H_HelmetO_oucamo
			{
				name = "H_HelmetO_oucamo";
				count = 1;
			};
		};
	};
	class Headgear_H_HelmetLeaderO_oucamo: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_HelmetLeaderO_mcamo_urban0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Helmets";
		vehicleClass = "ItemsHeadgear";
		class TransportItems
		{
			class H_HelmetLeaderO_oucamo
			{
				name = "H_HelmetLeaderO_oucamo";
				count = 1;
			};
		};
	};
	class Headgear_H_HelmetSpecO_ocamo: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_HelmetSpecO_ocamo0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Helmets";
		vehicleClass = "ItemsHeadgear";
		class TransportItems
		{
			class H_HelmetSpecO_ocamo
			{
				name = "H_HelmetSpecO_ocamo";
				count = 1;
			};
		};
	};
	class Headgear_H_HelmetSpecO_blk: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_HelmetSpecO_blk0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Helmets";
		vehicleClass = "ItemsHeadgear";
		class TransportItems
		{
			class H_HelmetSpecO_blk
			{
				name = "H_HelmetSpecO_blk";
				count = 1;
			};
		};
	};
	class Headgear_H_MilCap_gry: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_MilCap_gry0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
		vehicleClass = "ItemsHeadgear";
		model = "\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class H_MilCap_gry
			{
				name = "H_MilCap_gry";
				count = 1;
			};
		};
	};
	class Headgear_H_MilCap_dgtl: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_MilCap_dgtl0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
		vehicleClass = "ItemsHeadgear";
		model = "\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class H_MilCap_dgtl
			{
				name = "H_MilCap_dgtl";
				count = 1;
			};
		};
	};
	class Headgear_H_MilCap_blue: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_MilCap_blue0_boot";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
		vehicleClass = "ItemsHeadgear";
		model = "\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class H_MilCap_blue
			{
				name = "H_MilCap_blue";
				count = 1;
			};
		};
	};
	class Headgear_H_Bandanna_surfer: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_Bandanna_surfer0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
		vehicleClass = "ItemsHeadgear";
		model = "\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class H_Bandanna_surfer
			{
				name = "H_Bandanna_surfer";
				count = 1;
			};
		};
	};
	class Headgear_H_Bandanna_khk: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_Bandanna_khk0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
		vehicleClass = "ItemsHeadgear";
		model = "\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class H_Bandanna_khk
			{
				name = "H_Bandanna_khk";
				count = 1;
			};
		};
	};
	class Headgear_H_Bandanna_khk_hs: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_Bandanna_khk_hs0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
		vehicleClass = "ItemsHeadgear";
		model = "\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class H_Bandanna_khk_hs
			{
				name = "H_Bandanna_khk_hs";
				count = 1;
			};
		};
	};
	class Headgear_H_Bandanna_cbr: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_Bandanna_cbr0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
		vehicleClass = "ItemsHeadgear";
		model = "\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class H_Bandanna_cbr
			{
				name = "H_Bandanna_cbr";
				count = 1;
			};
		};
	};
	class Headgear_H_Bandanna_sgg: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_Bandanna_sgg0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
		vehicleClass = "ItemsHeadgear";
		model = "\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class H_Bandanna_sgg
			{
				name = "H_Bandanna_sgg";
				count = 1;
			};
		};
	};
	class Headgear_H_Bandanna_sand: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_Bandanna_sand0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
		vehicleClass = "ItemsHeadgear";
		model = "\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class H_Bandanna_sand
			{
				name = "H_Bandanna_sand";
				count = 1;
			};
		};
	};
	class Headgear_H_Bandanna_gry: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_Bandanna_gry0_boot";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
		vehicleClass = "ItemsHeadgear";
		model = "\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class H_Bandanna_gry
			{
				name = "H_Bandanna_gry";
				count = 1;
			};
		};
	};
	class Headgear_H_Bandanna_camo: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_Bandanna_camo0_boot";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
		vehicleClass = "ItemsHeadgear";
		model = "\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class H_Bandanna_camo
			{
				name = "H_Bandanna_camo";
				count = 1;
			};
		};
	};
	class Headgear_H_Bandanna_mcamo: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_Bandanna_mcamo0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
		vehicleClass = "ItemsHeadgear";
		model = "\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class H_Bandanna_mcamo
			{
				name = "H_Bandanna_mcamo";
				count = 1;
			};
		};
	};
	class Headgear_H_Bandanna_surfer_blk: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_Bandanna_surfer_blk0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
		vehicleClass = "ItemsHeadgear";
		model = "\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class H_Bandanna_surfer_blk
			{
				name = "H_Bandanna_surfer_blk";
				count = 1;
			};
		};
	};
	class Headgear_H_Bandanna_surfer_grn: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_Bandanna_surfer_grn0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
		vehicleClass = "ItemsHeadgear";
		model = "\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class H_Bandanna_surfer_grn
			{
				name = "H_Bandanna_surfer_grn";
				count = 1;
			};
		};
	};
	class Headgear_H_Bandanna_blu: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_Bandanna_blu0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
		vehicleClass = "ItemsHeadgear";
		model = "\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class H_Bandanna_blu
			{
				name = "H_Bandanna_blu";
				count = 1;
			};
		};
	};
	class Headgear_H_Shemag_olive: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_Shemag_olive0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
		vehicleClass = "ItemsHeadgear";
		class TransportItems
		{
			class H_Shemag_olive
			{
				name = "H_Shemag_olive";
				count = 1;
			};
		};
	};
	class Headgear_H_Shemag_olive_hs: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_Shemag_olive_hs0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
		vehicleClass = "ItemsHeadgear";
		class TransportItems
		{
			class H_Shemag_olive_hs
			{
				name = "H_Shemag_olive_hs";
				count = 1;
			};
		};
	};
	class Headgear_H_ShemagOpen_khk: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_ShemagOpen_khk0_boot";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
		vehicleClass = "ItemsHeadgear";
		class TransportItems
		{
			class H_ShemagOpen_khk
			{
				name = "H_ShemagOpen_khk";
				count = 1;
			};
		};
	};
	class Headgear_H_ShemagOpen_tan: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_ShemagOpen_tan0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
		vehicleClass = "ItemsHeadgear";
		class TransportItems
		{
			class H_ShemagOpen_tan
			{
				name = "H_ShemagOpen_tan";
				count = 1;
			};
		};
	};
	class Headgear_H_Beret_blk: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_Beret_blk0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
		vehicleClass = "ItemsHeadgear";
		model = "\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class H_Beret_blk
			{
				name = "H_Beret_blk";
				count = 1;
			};
		};
	};
	class Headgear_H_Beret_02: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_Beret_020";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
		vehicleClass = "ItemsHeadgear";
		model = "\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class H_Beret_02
			{
				name = "H_Beret_02";
				count = 1;
			};
		};
	};
	class Headgear_H_Beret_Colonel: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_Beret_Colonel0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
		vehicleClass = "ItemsHeadgear";
		model = "\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class H_Beret_Colonel
			{
				name = "H_Beret_Colonel";
				count = 1;
			};
		};
	};
	class Headgear_H_Watchcap_blk: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_Watchcap_blk0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
		vehicleClass = "ItemsHeadgear";
		model = "\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class H_Watchcap_blk
			{
				name = "H_Watchcap_blk";
				count = 1;
			};
		};
	};
	class Headgear_H_Watchcap_cbr: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_Watchcap_cbr0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
		vehicleClass = "ItemsHeadgear";
		model = "\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class H_Watchcap_cbr
			{
				name = "H_Watchcap_cbr";
				count = 1;
			};
		};
	};
	class Headgear_H_Watchcap_khk: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_Watchcap_khk0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
		vehicleClass = "ItemsHeadgear";
		model = "\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class H_Watchcap_khk
			{
				name = "H_Watchcap_khk";
				count = 1;
			};
		};
	};
	class Headgear_H_Watchcap_camo: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_Watchcap_camo0_boot";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
		vehicleClass = "ItemsHeadgear";
		model = "\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class H_Watchcap_camo
			{
				name = "H_Watchcap_camo";
				count = 1;
			};
		};
	};
	class Headgear_H_StrawHat: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_StrawHat0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
		vehicleClass = "ItemsHeadgear";
		model = "\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class H_StrawHat
			{
				name = "H_StrawHat";
				count = 1;
			};
		};
	};
	class Headgear_H_StrawHat_dark: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_StrawHat_dark0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
		vehicleClass = "ItemsHeadgear";
		model = "\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class H_StrawHat_dark
			{
				name = "H_StrawHat_dark";
				count = 1;
			};
		};
	};
	class Headgear_H_Hat_blue: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_Hat_blue0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
		vehicleClass = "ItemsHeadgear";
		model = "\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class H_Hat_blue
			{
				name = "H_Hat_blue";
				count = 1;
			};
		};
	};
	class Headgear_H_Hat_brown: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_Hat_brown0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
		vehicleClass = "ItemsHeadgear";
		model = "\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class H_Hat_brown
			{
				name = "H_Hat_brown";
				count = 1;
			};
		};
	};
	class Headgear_H_Hat_camo: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_Hat_camo0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
		vehicleClass = "ItemsHeadgear";
		model = "\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class H_Hat_camo
			{
				name = "H_Hat_camo";
				count = 1;
			};
		};
	};
	class Headgear_H_Hat_grey: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_Hat_grey0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
		vehicleClass = "ItemsHeadgear";
		model = "\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class H_Hat_grey
			{
				name = "H_Hat_grey";
				count = 1;
			};
		};
	};
	class Headgear_H_Hat_checker: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_Hat_checker0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
		vehicleClass = "ItemsHeadgear";
		model = "\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class H_Hat_checker
			{
				name = "H_Hat_checker";
				count = 1;
			};
		};
	};
	class Headgear_H_Hat_tan: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_Hat_tan0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
		vehicleClass = "ItemsHeadgear";
		model = "\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class H_Hat_tan
			{
				name = "H_Hat_tan";
				count = 1;
			};
		};
	};
	class Item_U_IG_Guerilla1_1: Item_Base_F
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "$STR_A3_guerilla_smocks0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_IG_Guerilla1_1
			{
				name = "U_IG_Guerilla1_1";
				count = 1;
			};
		};
	};
	class Item_U_IG_Guerilla2_1: Item_Base_F
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "$STR_A3_guerilla_smocks0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_IG_Guerilla2_1
			{
				name = "U_IG_Guerilla2_1";
				count = 1;
			};
		};
	};
	class Item_U_IG_Guerilla2_2: Item_Base_F
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "$STR_A3_guerilla_smocks0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_IG_Guerilla2_2
			{
				name = "U_IG_Guerilla2_2";
				count = 1;
			};
		};
	};
	class Item_U_IG_Guerilla2_3: Item_Base_F
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "$STR_A3_guerilla_smocks0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_IG_Guerilla2_3
			{
				name = "U_IG_Guerilla2_3";
				count = 1;
			};
		};
	};
	class Item_U_IG_Guerilla3_1: Item_Base_F
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "$STR_A3_guerilla_smocks0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_IG_Guerilla3_1
			{
				name = "U_IG_Guerilla3_1";
				count = 1;
			};
		};
	};
	class Item_U_IG_Guerilla3_2: Item_Base_F
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "$STR_A3_guerilla_smocks0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_IG_Guerilla3_2
			{
				name = "U_IG_Guerilla3_2";
				count = 1;
			};
		};
	};
	class Item_U_IG_leader: Item_Base_F
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "$STR_A3_guerilla_smocks0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_IG_leader
			{
				name = "U_IG_leader";
				count = 1;
			};
		};
	};
	class Item_U_BG_Guerilla1_1: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_guerilla_smocks0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_BG_Guerilla1_1
			{
				name = "U_BG_Guerilla1_1";
				count = 1;
			};
		};
	};
	class Item_U_BG_Guerilla2_1: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_guerilla_smocks0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_BG_Guerilla2_1
			{
				name = "U_BG_Guerilla2_1";
				count = 1;
			};
		};
	};
	class Item_U_BG_Guerilla2_2: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_guerilla_smocks0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_BG_Guerilla2_2
			{
				name = "U_BG_Guerilla2_2";
				count = 1;
			};
		};
	};
	class Item_U_BG_Guerilla2_3: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_guerilla_smocks0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_BG_Guerilla2_3
			{
				name = "U_BG_Guerilla2_3";
				count = 1;
			};
		};
	};
	class Item_U_BG_Guerilla3_1: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_guerilla_smocks0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_BG_Guerilla3_1
			{
				name = "U_BG_Guerilla3_1";
				count = 1;
			};
		};
	};
	class Item_U_BG_Guerilla3_2: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_guerilla_smocks0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_BG_Guerilla3_2
			{
				name = "U_BG_Guerilla3_2";
				count = 1;
			};
		};
	};
	class Item_U_BG_leader: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_guerilla_smocks0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_BG_leader
			{
				name = "U_BG_leader";
				count = 1;
			};
		};
	};
	class Item_U_OG_Guerilla1_1: Item_Base_F
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "$STR_A3_guerilla_smocks0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_OG_Guerilla1_1
			{
				name = "U_OG_Guerilla1_1";
				count = 1;
			};
		};
	};
	class Item_U_OG_Guerilla2_1: Item_Base_F
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "$STR_A3_guerilla_smocks0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_OG_Guerilla2_1
			{
				name = "U_OG_Guerilla2_1";
				count = 1;
			};
		};
	};
	class Item_U_OG_Guerilla2_2: Item_Base_F
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "$STR_A3_guerilla_smocks0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_OG_Guerilla2_2
			{
				name = "U_OG_Guerilla2_2";
				count = 1;
			};
		};
	};
	class Item_U_OG_Guerilla2_3: Item_Base_F
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "$STR_A3_guerilla_smocks0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_OG_Guerilla2_3
			{
				name = "U_OG_Guerilla2_3";
				count = 1;
			};
		};
	};
	class Item_U_OG_Guerilla3_1: Item_Base_F
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "$STR_A3_guerilla_smocks0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_OG_Guerilla3_1
			{
				name = "U_OG_Guerilla3_1";
				count = 1;
			};
		};
	};
	class Item_U_OG_Guerilla3_2: Item_Base_F
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "$STR_A3_guerilla_smocks0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_OG_Guerilla3_2
			{
				name = "U_OG_Guerilla3_2";
				count = 1;
			};
		};
	};
	class Item_U_OG_leader: Item_Base_F
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "$STR_A3_guerilla_smocks0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_OG_leader
			{
				name = "U_OG_leader";
				count = 1;
			};
		};
	};
	class Item_U_C_Poor_1: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_Worn_clothes0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_C_Poor_1
			{
				name = "U_C_Poor_1";
				count = 1;
			};
		};
	};
	class Item_U_C_Poor_2: Item_Base_F
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "$STR_A3_Worn_clothes0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_C_Poor_2
			{
				name = "U_C_Poor_2";
				count = 1;
			};
		};
	};
	class Item_U_C_Scavenger_1: Item_Base_F
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "$STR_A3_Scavenger_clothes_light";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_C_Scavenger_1
			{
				name = "U_C_Scavenger_1";
				count = 1;
			};
		};
	};
	class Item_U_C_Scavenger_2: Item_Base_F
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "$STR_A3_scavenger_clothes_dark";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_C_Scavenger_2
			{
				name = "U_C_Scavenger_2";
				count = 1;
			};
		};
	};
	class Item_U_C_Farmer: Item_Base_F
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "$STR_A3_farmer_clothes";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_C_Farmer
			{
				name = "U_C_Farmer";
				count = 1;
			};
		};
	};
	class Item_U_C_Fisherman: Item_Base_F
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "$STR_A3_fishing_clothes";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_C_Fisherman
			{
				name = "U_C_Fisherman";
				count = 1;
			};
		};
	};
	class Item_U_C_WorkerOveralls: Item_Base_F
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "$STR_A3_worker_clothes";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_C_WorkerOveralls
			{
				name = "U_C_WorkerOveralls";
				count = 1;
			};
		};
	};
	class Item_U_C_FishermanOveralls: Item_Base_F
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "$STR_A3_fishing_overalls";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_C_FishermanOveralls
			{
				name = "U_C_FishermanOveralls";
				count = 1;
			};
		};
	};
	class Item_U_C_WorkerCoveralls: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_worker_overalls";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_C_WorkerCoveralls
			{
				name = "U_C_WorkerCoveralls";
				count = 1;
			};
		};
	};
	class Item_U_C_HunterBody_grn: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_HUNTING_CLOTHES_0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_C_HunterBody_grn
			{
				name = "U_C_HunterBody_grn";
				count = 1;
			};
		};
	};
	class Item_U_C_HunterBody_brn: Item_Base_F
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "$STR_A3_hunting_clothes_brown";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_C_HunterBody_brn
			{
				name = "U_C_HunterBody_brn";
				count = 1;
			};
		};
	};
	class Item_U_C_Commoner2_1: Item_Base_F
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "$STR_A3_common_clothes3";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_C_Commoner2_1
			{
				name = "U_C_Commoner2_1";
				count = 1;
			};
		};
	};
	class Item_U_C_Commoner2_2: Item_Base_F
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "$STR_A3_common_clothes4";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_C_Commoner2_2
			{
				name = "U_C_Commoner2_2";
				count = 1;
			};
		};
	};
	class Item_U_C_Commoner2_3: Item_Base_F
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "$STR_A3_common_clothes5";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_C_Commoner2_3
			{
				name = "U_C_Commoner2_3";
				count = 1;
			};
		};
	};
	class Item_U_C_PriestBody: Item_Base_F
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "$STR_A3_clerical_robes";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_C_PriestBody
			{
				name = "U_C_PriestBody";
				count = 1;
			};
		};
	};
	class Item_U_C_Poor_shorts_1: Item_Base_F
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "$STR_A3_worn_shorts0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_C_Poor_shorts_1
			{
				name = "U_C_Poor_shorts_1";
				count = 1;
			};
		};
	};
	class Item_U_C_Poor_shorts_2: Item_Base_F
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "$STR_A3_worn_shorts1";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_C_Poor_shorts_2
			{
				name = "U_C_Poor_shorts_2";
				count = 1;
			};
		};
	};
	class Item_U_C_Commoner_shorts: Item_Base_F
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "$STR_A3_common_shorts";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_C_Commoner_shorts
			{
				name = "U_C_Commoner_shorts";
				count = 1;
			};
		};
	};
	class Item_U_C_ShirtSurfer_shorts: Item_Base_F
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "$STR_A3_surfer_outfit0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_C_ShirtSurfer_shorts
			{
				name = "U_C_ShirtSurfer_shorts";
				count = 1;
			};
		};
	};
	class Item_U_C_TeeSurfer_shorts_1: Item_Base_F
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "$STR_A3_surfer_outfit1";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_C_TeeSurfer_shorts_1
			{
				name = "U_C_TeeSurfer_shorts_1";
				count = 1;
			};
		};
	};
	class Item_U_C_TeeSurfer_shorts_2: Item_Base_F
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "$STR_A3_surfer_outfit2";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_C_TeeSurfer_shorts_2
			{
				name = "U_C_TeeSurfer_shorts_2";
				count = 1;
			};
		};
	};
	class Item_B_UavTerminal: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CFGWeapons_Items_UAVTerminal1";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_InventoryItems";
		vehicleClass = "Items";
		faction = "BLU_F";
		author = "$STR_A3_Bohemia_Interactive";
		model = "a3\Weapons_F\DummyItemHorizontal";
		class TransportItems
		{
			class B_UavTerminal
			{
				name = "B_UavTerminal";
				count = 1;
			};
		};
	};
	class Item_O_UavTerminal: Item_B_UavTerminal
	{
		displayName = "$STR_A3_CFGWeapons_Items_UAVTerminal2";
		faction = "OPF_F";
		author = "$STR_A3_Bohemia_Interactive";
		class TransportItems
		{
			class O_UavTerminal
			{
				name = "O_UavTerminal";
				count = 1;
			};
		};
	};
	class Item_I_UavTerminal: Item_B_UavTerminal
	{
		displayName = "$STR_A3_CFGWeapons_Items_UAVTerminal3";
		faction = "IND_F";
		author = "$STR_A3_Bohemia_Interactive";
		class TransportItems
		{
			class I_UavTerminal
			{
				name = "I_UavTerminal";
				count = 1;
			};
		};
	};
	class Item_muzzle_snds_H: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_cfgWeapons_muzzle_snds_H0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubcategory = "EdSubcat_FrontSlot";
		vehicleClass = "WeaponAccessories";
		class TransportItems
		{
			class muzzle_snds_H
			{
				name = "muzzle_snds_H";
				count = 1;
			};
		};
	};
	class Item_muzzle_snds_L: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_cfgWeapons_muzzle_snds_L0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubcategory = "EdSubcat_FrontSlot";
		vehicleClass = "WeaponAccessories";
		class TransportItems
		{
			class muzzle_snds_L
			{
				name = "muzzle_snds_L";
				count = 1;
			};
		};
	};
	class Item_muzzle_snds_M: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_cfgWeapons_muzzle_snds_M0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubcategory = "EdSubcat_FrontSlot";
		vehicleClass = "WeaponAccessories";
		class TransportItems
		{
			class muzzle_snds_M
			{
				name = "muzzle_snds_M";
				count = 1;
			};
		};
	};
	class Item_muzzle_snds_B: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_cfgWeapons_muzzle_snds_B0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubcategory = "EdSubcat_FrontSlot";
		vehicleClass = "WeaponAccessories";
		class TransportItems
		{
			class muzzle_snds_B
			{
				name = "muzzle_snds_B";
				count = 1;
			};
		};
	};
	class Item_muzzle_snds_H_MG: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_cfgWeapons_muzzle_snds_H_MG0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubcategory = "EdSubcat_FrontSlot";
		vehicleClass = "WeaponAccessories";
		class TransportItems
		{
			class muzzle_snds_H_MG
			{
				name = "muzzle_snds_H_MG";
				count = 1;
			};
		};
	};
	class Item_optic_Arco: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_cfgWeapons_optic_Arco0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubcategory = "EdSubcat_TopSlot_Optics";
		vehicleClass = "WeaponAccessories";
		class TransportItems
		{
			class optic_Arco
			{
				name = "optic_Arco";
				count = 1;
			};
		};
	};
	class Item_optic_Hamr: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_cfgWeapons_optic_Hamr0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubcategory = "EdSubcat_TopSlot_Optics";
		vehicleClass = "WeaponAccessories";
		class TransportItems
		{
			class optic_Hamr
			{
				name = "optic_Hamr";
				count = 1;
			};
		};
	};
	class Item_optic_Aco: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_cfgWeapons_optic_Aco0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubcategory = "EdSubcat_TopSlot_Collimators";
		vehicleClass = "WeaponAccessories";
		class TransportItems
		{
			class optic_Aco
			{
				name = "optic_Aco";
				count = 1;
			};
		};
	};
	class Item_optic_ACO_grn: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_cfgWeapons_optic_ACO_grn0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubcategory = "EdSubcat_TopSlot_Collimators";
		vehicleClass = "WeaponAccessories";
		class TransportItems
		{
			class optic_ACO_grn
			{
				name = "optic_ACO_grn";
				count = 1;
			};
		};
	};
	class Item_optic_Aco_smg: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_cfgWeapons_optic_Aco_smg0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubcategory = "EdSubcat_TopSlot_Collimators";
		vehicleClass = "WeaponAccessories";
		class TransportItems
		{
			class optic_Aco_smg
			{
				name = "optic_Aco_smg";
				count = 1;
			};
		};
	};
	class Item_optic_ACO_grn_smg: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_cfgWeapons_optic_ACO_grn_smg0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubcategory = "EdSubcat_TopSlot_Collimators";
		vehicleClass = "WeaponAccessories";
		class TransportItems
		{
			class optic_ACO_grn_smg
			{
				name = "optic_ACO_grn_smg";
				count = 1;
			};
		};
	};
	class Item_optic_Holosight: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_cfgWeapons_optic_Holosight0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubcategory = "EdSubcat_TopSlot_Collimators";
		vehicleClass = "WeaponAccessories";
		class TransportItems
		{
			class optic_Holosight
			{
				name = "optic_Holosight";
				count = 1;
			};
		};
	};
	class Item_optic_Holosight_smg: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_cfgWeapons_optic_Holosight_smg0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubcategory = "EdSubcat_TopSlot_Collimators";
		vehicleClass = "WeaponAccessories";
		class TransportItems
		{
			class optic_Holosight_smg
			{
				name = "optic_Holosight_smg";
				count = 1;
			};
		};
	};
	class Item_optic_SOS: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_cfgWeapons_optic_SOS0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubcategory = "EdSubcat_TopSlot_Optics";
		vehicleClass = "WeaponAccessories";
		class TransportItems
		{
			class optic_SOS
			{
				name = "optic_SOS";
				count = 1;
			};
		};
	};
	class Item_acc_flashlight: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_cfgWeapons_acc_flashlight0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubcategory = "EdSubcat_SideSlot";
		vehicleClass = "WeaponAccessories";
		class TransportItems
		{
			class acc_flashlight
			{
				name = "acc_flashlight";
				count = 1;
			};
		};
	};
	class Item_acc_pointer_IR: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_cfgWeapons_acc_pointer_IR0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubcategory = "EdSubcat_SideSlot";
		vehicleClass = "WeaponAccessories";
		class TransportItems
		{
			class acc_pointer_IR
			{
				name = "acc_pointer_IR";
				count = 1;
			};
		};
	};
	class Item_acc_flashlight_pistol: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_cfgweapons_acc_pistol_flashlight0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubcategory = "EdSubcat_SideSlot";
		vehicleClass = "WeaponAccessories";
		model = "\A3\Weapons_F\DummyItemHorizontal.p3d";
		class TransportItems
		{
			class acc_flashlight_pistol
			{
				name = "acc_flashlight_pistol";
				count = 1;
			};
		};
	};
	class Item_optic_MRCO: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_cfgWeapons_optic_Valdada0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubcategory = "EdSubcat_TopSlot_Optics";
		vehicleClass = "WeaponAccessories";
		class TransportItems
		{
			class optic_MRCO
			{
				name = "optic_MRCO";
				count = 1;
			};
		};
	};
	class Item_muzzle_snds_acp: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_cfgWeapons_muzzle_snds_acp0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubcategory = "EdSubcat_FrontSlot";
		vehicleClass = "WeaponAccessories";
		class TransportItems
		{
			class muzzle_snds_acp
			{
				name = "muzzle_snds_acp";
				count = 1;
			};
		};
	};
	class Item_optic_DMS: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CFGWEAPONS_ACC_DMS0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubcategory = "EdSubcat_TopSlot_Optics";
		vehicleClass = "WeaponAccessories";
		class TransportItems
		{
			class optic_DMS
			{
				name = "optic_DMS";
				count = 1;
			};
		};
	};
	class Item_optic_Yorris: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_cfgWeapons_optic_Yorris0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubcategory = "EdSubcat_TopSlot_Collimators";
		vehicleClass = "WeaponAccessories";
		class TransportItems
		{
			class optic_Yorris
			{
				name = "optic_Yorris";
				count = 1;
			};
		};
	};
	class Item_optic_MRD: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_cfgWeapons_optic_MRD0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubcategory = "EdSubcat_TopSlot_Collimators";
		vehicleClass = "WeaponAccessories";
		class TransportItems
		{
			class optic_MRD
			{
				name = "optic_MRD";
				count = 1;
			};
		};
	};
	class Item_optic_NVS: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_cfgWeapons_optic_NVS0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubcategory = "EdSubcat_TopSlot_Optics";
		vehicleClass = "WeaponAccessories";
		class TransportItems
		{
			class optic_NVS
			{
				name = "optic_NVS";
				count = 1;
			};
		};
	};
	class Item_optic_Nightstalker: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_cfgWeapons_optic_Nightstalker0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubcategory = "EdSubcat_TopSlot_Optics";
		vehicleClass = "WeaponAccessories";
		class TransportItems
		{
			class optic_Nightstalker
			{
				name = "optic_Nightstalker";
				count = 1;
			};
		};
	};
	class Item_optic_tws: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_cfgWeapons_optic_tws0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubcategory = "EdSubcat_TopSlot_Optics";
		vehicleClass = "WeaponAccessories";
		class TransportItems
		{
			class optic_tws
			{
				name = "optic_tws";
				count = 1;
			};
		};
	};
	class Item_optic_tws_mg: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_cfgWeapons_optic_tws_mg0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubcategory = "EdSubcat_TopSlot_Optics";
		vehicleClass = "WeaponAccessories";
		class TransportItems
		{
			class optic_tws_mg
			{
				name = "optic_tws_mg";
				count = 1;
			};
		};
	};
	class Item_optic_LRPS: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_cfgWeapons_optic_LRPS0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubcategory = "EdSubcat_TopSlot_Optics";
		vehicleClass = "WeaponAccessories";
		class TransportItems
		{
			class optic_LRPS
			{
				name = "optic_LRPS";
				count = 1;
			};
		};
	};
	class Item_U_B_CTRG_1: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_combat_uniform_csat_1";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_B_CTRG_1
			{
				name = "U_B_CTRG_1";
				count = 1;
			};
		};
	};
	class Item_U_B_CTRG_2: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_combat_uniform_csat_2";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_B_CTRG_2
			{
				name = "U_B_CTRG_2";
				count = 1;
			};
		};
	};
	class Item_U_B_CTRG_3: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_combat_uniform_csat_3";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_B_CTRG_3
			{
				name = "U_B_CTRG_3";
				count = 1;
			};
		};
	};
	class Item_U_B_survival_uniform: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_survival_fatigues_F0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_B_survival_uniform
			{
				name = "U_B_survival_uniform";
				count = 1;
			};
		};
	};
	class Vest_V_PlateCarrier_Kerry: Vest_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_V_PlateCarrier1_rgr_V_PlateCarrier_Kerry0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Vests";
		vehicleClass = "ItemsVests";
		class TransportItems
		{
			class V_PlateCarrier_Kerry
			{
				name = "V_PlateCarrier_Kerry";
				count = 1;
			};
		};
	};
	class Vest_V_PlateCarrierL_CTRG: Vest_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_V_PlateCarrierL_CTRG0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Vests";
		vehicleClass = "ItemsVests";
		class TransportItems
		{
			class V_PlateCarrierL_CTRG
			{
				name = "V_PlateCarrierL_CTRG";
				count = 1;
			};
		};
	};
	class Vest_V_PlateCarrierH_CTRG: Vest_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_V_PlateCarrierH_CTRG0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Vests";
		vehicleClass = "ItemsVests";
		class TransportItems
		{
			class V_PlateCarrierH_CTRG
			{
				name = "V_PlateCarrierH_CTRG";
				count = 1;
			};
		};
	};
	class Headgear_H_HelmetB_grass: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_HelmetB_grass0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Helmets";
		vehicleClass = "ItemsHeadgear";
		class TransportItems
		{
			class H_HelmetB_grass
			{
				name = "H_HelmetB_grass";
				count = 1;
			};
		};
	};
	class Headgear_H_HelmetB_snakeskin: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_HelmetB_snakeskin0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Helmets";
		vehicleClass = "ItemsHeadgear";
		class TransportItems
		{
			class H_HelmetB_snakeskin
			{
				name = "H_HelmetB_snakeskin";
				count = 1;
			};
		};
	};
	class Headgear_H_HelmetB_desert: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_HelmetB_desert0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Helmets";
		vehicleClass = "ItemsHeadgear";
		class TransportItems
		{
			class H_HelmetB_desert
			{
				name = "H_HelmetB_desert";
				count = 1;
			};
		};
	};
	class Headgear_H_HelmetB_black: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_HelmetB_black0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Helmets";
		vehicleClass = "ItemsHeadgear";
		class TransportItems
		{
			class H_HelmetB_black
			{
				name = "H_HelmetB_black";
				count = 1;
			};
		};
	};
	class Headgear_H_HelmetB_sand: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_HelmetB_sand0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Helmets";
		vehicleClass = "ItemsHeadgear";
		class TransportItems
		{
			class H_HelmetB_sand
			{
				name = "H_HelmetB_sand";
				count = 1;
			};
		};
	};
	class Headgear_H_HelmetB_light_grass: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_HelmetB_light_H_HelmetB_light_grass0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Helmets";
		vehicleClass = "ItemsHeadgear";
		class TransportItems
		{
			class H_HelmetB_light_grass
			{
				name = "H_HelmetB_light_grass";
				count = 1;
			};
		};
	};
	class Headgear_H_HelmetB_light_snakeskin: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_HelmetB_light_snakeskin0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Helmets";
		vehicleClass = "ItemsHeadgear";
		class TransportItems
		{
			class H_HelmetB_light_snakeskin
			{
				name = "H_HelmetB_light_snakeskin";
				count = 1;
			};
		};
	};
	class Headgear_H_HelmetB_light_desert: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_HelmetB_light_desert0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Helmets";
		vehicleClass = "ItemsHeadgear";
		class TransportItems
		{
			class H_HelmetB_light_desert
			{
				name = "H_HelmetB_light_desert";
				count = 1;
			};
		};
	};
	class Headgear_H_HelmetB_light_black: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_HelmetB_light_black0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Helmets";
		vehicleClass = "ItemsHeadgear";
		class TransportItems
		{
			class H_HelmetB_light_black
			{
				name = "H_HelmetB_light_black";
				count = 1;
			};
		};
	};
	class Headgear_H_HelmetB_light_sand: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_HelmetB_light_black_sand0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Helmets";
		vehicleClass = "ItemsHeadgear";
		class TransportItems
		{
			class H_HelmetB_light_sand
			{
				name = "H_HelmetB_light_sand";
				count = 1;
			};
		};
	};
	class Weapon_Empty: Weapon_Base_F
	{
		scope = 1;
		displayName = "$STR_EMPTY";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons{};
		class TransportMagazines{};
		author = "$STR_A3_Bohemia_Interactive";
		forceSupply = 0;
	};
};
class CfgNonAIVehicles
{
	class ProxyLeftHand;
	class ProxyDalekohled_Proxy: ProxyLeftHand{};
	class ProxyBinoculars: ProxyLeftHand{};
	class ProxyDriver;
	class ProxyParasutista: ProxyDriver{};
	class ProxyFlag;
	class ProxyPlane_Flag_F: ProxyFlag
	{
		model = "\A3\Air_F\Data\Plane_Flag_F";
	};
	class ProxyPlane_Flag_big_F: ProxyFlag
	{
		model = "\A3\Air_F\Data\Plane_Flag_big_F";
	};
	class ProxyGoggles;
	class ProxyNVG_Proxy: ProxyGoggles
	{
		scope = 2;
		model = "\A3\Weapons_f\binocular\NVG_Proxy";
	};
	class ProxyNVG: ProxyGoggles
	{
		scope = 2;
		model = "\A3\Weapons_f\binocular\NVG_Proxy";
	};
	class ProxyNVG_Head: ProxyGoggles
	{
		model = "\A3\Weapons_f\binocular\NVG_Head";
	};
	class ProxyNVG_Head_Big: ProxyGoggles
	{
		model = "\A3\Weapons_f\binocular\NVG_Head_Big";
	};
	class ProxyNVG_Head_R: ProxyGoggles
	{
		model = "\A3\Weapons_f\binocular\NVG_Head_R";
	};
	class ProxyNVG_Head_C: ProxyGoggles
	{
		model = "\A3\Weapons_f\binocular\NVG_Head_C";
	};
	class ProxyNVG_Head_S: ProxyGoggles
	{
		model = "\A3\Weapons_f\binocular\NVG_Head_S";
	};
	class ProxyWeapon;
	class ProxyMagazineSlot: ProxyWeapon
	{
		model = "";
		simulation = "magazine";
	};
	class ProxyRadio_proxy: ProxyWeapon
	{
		simulation = "proxyradio";
	};
	class ProxyHeadGear_proxy: ProxyWeapon
	{
		simulation = "proxyheadgear";
	};
	class ProxyMissile_AT_03_F: ProxyWeapon
	{
		model = "\A3\Weapons_F\Ammo\Missile_AT_03_F";
		simulation = "maverickweapon";
	};
	class ProxyBomb_01_F: ProxyWeapon
	{
		model = "\A3\Weapons_F\Ammo\Bomb_01_F";
		simulation = "maverickweapon";
	};
	class ProxyBomb_02_F: ProxyWeapon
	{
		model = "\A3\Weapons_F\Ammo\Bomb_02_F";
		simulation = "maverickweapon";
	};
	class ProxyMissile_AA_02_F: ProxyWeapon
	{
		model = "\A3\Weapons_F\Ammo\Missile_AA_02_F";
		simulation = "maverickweapon";
	};
	class ProxyMissile_AT_02_F: ProxyWeapon
	{
		model = "\A3\Weapons_F\Ammo\Missile_AT_02_F";
		simulation = "maverickweapon";
	};
	class ProxyBomb_03_F: ProxyWeapon
	{
		model = "\A3\Weapons_F_EPC\Ammo\Bomb_03_F.p3d";
		simulation = "maverickweapon";
	};
	class ProxyBomb_04_F: ProxyWeapon
	{
		model = "\A3\Weapons_F_EPC\Ammo\Bomb_04_F.p3d";
		simulation = "maverickweapon";
	};
	class ProxyMissile_AA_03_F: ProxyWeapon
	{
		model = "\A3\Weapons_F_EPC\Ammo\Missile_AA_03_F.p3d";
		simulation = "maverickweapon";
	};
	class ProxyMissile_AA_04_F: ProxyWeapon
	{
		model = "\A3\Weapons_F_EPC\Ammo\Missile_AA_04_F.p3d";
		simulation = "maverickweapon";
	};
	class ProxyMissile_AGM_01_F: ProxyWeapon
	{
		model = "\A3\Weapons_F_EPC\Ammo\Missile_AGM_01_F.p3d";
		simulation = "maverickweapon";
	};
	class ProxyMissile_AGM_02_F: ProxyWeapon
	{
		model = "\A3\Weapons_F_EPC\Ammo\Missile_AGM_02_F.p3d";
		simulation = "maverickweapon";
	};
	class ProxyRocket_03_AP_F: ProxyWeapon
	{
		model = "\A3\Weapons_F_EPC\Ammo\Rocket_03_AP_F.p3d";
		simulation = "maverickweapon";
	};
	class ProxyRocket_03_FL_F: ProxyWeapon
	{
		model = "\A3\Weapons_F_EPC\Ammo\Rocket_03_FL_F.p3d";
		simulation = "maverickweapon";
	};
	class ProxyRocket_03_HE_F: ProxyWeapon
	{
		model = "\A3\Weapons_F_EPC\Ammo\Rocket_03_HE_F.p3d";
		simulation = "maverickweapon";
	};
	class ProxyRocket_04_AP_F: ProxyWeapon
	{
		model = "\A3\Weapons_F_EPC\Ammo\Rocket_04_AP_F.p3d";
		simulation = "maverickweapon";
	};
	class ProxyRocket_04_FL_F: ProxyWeapon
	{
		model = "\A3\Weapons_F_EPC\Ammo\Rocket_04_FL_F.p3d";
		simulation = "maverickweapon";
	};
	class ProxyRocket_04_HE_F: ProxyWeapon
	{
		model = "\A3\Weapons_F_EPC\Ammo\Rocket_04_HE_F.p3d";
		simulation = "maverickweapon";
	};
	class ProxyPylonPod_3x_Missile_AGM_02_F: ProxyWeapon
	{
		model = "\A3\Weapons_F\DynamicLoadout\PylonPod_1x_Missile_AGM_02_F.p3d";
		simulation = "pylonpod";
	};
};
class CfgMagazineWells
{
	class AK_545x39
	{
		BI_Magazines[] = {"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Tracer_F","30Rnd_545x39_Mag_Tracer_Green_F"};
	};
	class AK_762x39
	{
		BI_Magazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Tracer_F","30Rnd_762x39_Mag_Tracer_Green_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_Tracer_F"};
	};
	class STANAG_556x45
	{
		BI_Magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand_green","30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_Tracer_Red","30Rnd_556x45_Stanag_Sand_Tracer_Green","30Rnd_556x45_Stanag_Sand_Tracer_Yellow"};
	};
	class STANAG_556x45_Large
	{
		BI_Magazines[] = {"150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_Tracer_F","150Rnd_556x45_Drum_Sand_Mag_F","150Rnd_556x45_Drum_Sand_Mag_Tracer_F","150Rnd_556x45_Drum_Green_Mag_F","150Rnd_556x45_Drum_Green_Mag_Tracer_F"};
	};
	class M249_556x45
	{
		BI_Magazines[] = {"200Rnd_556x45_Box_F","200Rnd_556x45_Box_Red_F","200Rnd_556x45_Box_Tracer_F","200Rnd_556x45_Box_Tracer_Red_F"};
	};
	class MX_65x39
	{
		BI_Magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_khaki_mag_Tracer","30Rnd_65x39_caseless_black_mag_Tracer"};
	};
	class MX_65x39_Large
	{
		BI_Magazines[] = {"100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_khaki_mag","100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_mag_tracer","100Rnd_65x39_caseless_khaki_mag_tracer","100Rnd_65x39_caseless_black_mag_tracer"};
	};
	class Katiba_65x39
	{
		BI_Magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer"};
	};
	class Mk200_65x39
	{
		BI_Magazines[] = {"200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box_Tracer","200Rnd_65x39_cased_Box_Red","200Rnd_65x39_cased_Box_Tracer_Red"};
	};
	class CTAR_580x42
	{
		BI_Magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_Tracer_F"};
	};
	class CTAR_580x42_Large
	{
		BI_Magazines[] = {"100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_Tracer_F","100Rnd_580x42_hex_Mag_F","100Rnd_580x42_hex_Mag_Tracer_F","100Rnd_580x42_ghex_Mag_F","100Rnd_580x42_ghex_Mag_Tracer_F"};
	};
	class M14_762x51
	{
		BI_Magazines[] = {"20Rnd_762x51_Mag"};
	};
	class UGL_40x36
	{
		BI_Magazines[] = {"1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
	};
	class 3UGL_40x36
	{
		BI_Magazines[] = {"3Rnd_HE_Grenade_shell","3Rnd_UGL_FlareWhite_F","3Rnd_UGL_FlareGreen_F","3Rnd_UGL_FlareRed_F","3Rnd_UGL_FlareYellow_F","3Rnd_UGL_FlareCIR_F","3Rnd_Smoke_Grenade_shell","3Rnd_SmokeRed_Grenade_shell","3Rnd_SmokeGreen_Grenade_shell","3Rnd_SmokeYellow_Grenade_shell","3Rnd_SmokePurple_Grenade_shell","3Rnd_SmokeBlue_Grenade_shell","3Rnd_SmokeOrange_Grenade_shell"};
	};
	class Rahim_762x54
	{
		BI_Magazines[] = {"10Rnd_762x54_Mag"};
	};
	class ACPC2_45ACP
	{
		BI_Magazines[] = {"9Rnd_45ACP_Mag"};
	};
	class Pistol_9x21
	{
		BI_Magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_red_Mag","16Rnd_9x21_green_Mag","16Rnd_9x21_yellow_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Red_Mag","30Rnd_9x21_Yellow_Mag","30Rnd_9x21_Green_Mag"};
	};
	class PistolHeavy_01_45ACP
	{
		BI_Magazines[] = {"11Rnd_45ACP_Mag"};
	};
	class Cylinder_45ACP
	{
		BI_Magazines[] = {"6Rnd_45ACP_Cylinder"};
	};
	class MAR10_338
	{
		BI_Magazines[] = {"10Rnd_338_Mag"};
	};
	class M320_408
	{
		BI_Magazines[] = {"7Rnd_408_Mag"};
	};
	class GM6_127x108
	{
		BI_Magazines[] = {"5Rnd_127x108_Mag","5Rnd_127x108_APDS_Mag"};
	};
	class ASP1_127x54
	{
		BI_Magazines[] = {"10Rnd_127x54_Mag"};
	};
	class SPMG_338
	{
		BI_Magazines[] = {"130Rnd_338_Mag"};
	};
	class Cyrus_93
	{
		BI_Magazines[] = {"10Rnd_93x64_DMR_05_Mag"};
	};
	class RPG7
	{
		BI_Magazines[] = {"RPG7_F"};
	};
	class RPG32
	{
		BI_Magazines[] = {"RPG32_F","RPG32_HE_F"};
	};
	class Titan_Long
	{
		BI_Magazines[] = {"Titan_AA"};
	};
	class Titan_Short
	{
		BI_Magazines[] = {"Titan_AT","Titan_AP"};
	};
	class NLAW
	{
		BI_Magazines[] = {"NLAW_F"};
	};
};
class SlotInfo;
class CowsSlot: SlotInfo
{
	linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
	displayName = "$STR_A3_CowsSlot0";
	compatibleItems[] = {"optic_Nightstalker","optic_tws","optic_tws_mg","optic_NVS","optic_DMS","optic_LRPS","optic_SOS","optic_MRCO","optic_Arco","optic_aco","optic_ACO_grn","optic_aco_smg","optic_ACO_grn_smg","optic_hamr","optic_Holosight","optic_Holosight_smg"};
	iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
	iconPinpoint = "Bottom";
};
class MuzzleSlot: SlotInfo
{
	linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
	displayName = "$str_a3_cfgweapons_abr_base_f_weaponslotsinfo_muzzleslot0";
	compatibleItems[] = {};
	iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
	iconPinpoint = "Center";
};
class PointerSlot: SlotInfo
{
	linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
	displayName = "$STR_A3_PointerSlot0";
	compatibleItems[] = {"acc_flashlight","acc_pointer_IR"};
	iconPicture = "\A3\Weapons_F\Data\UI\attachment_side.paa";
	iconPinpoint = "Center";
};
class UnderBarrelSlot: SlotInfo
{
	linkProxy = "\A3\Data_F_Mark\Proxies\Weapon_Slots\UNDERBARREL";
	compatibleItems[] = {"bipod_01_F_snd","bipod_01_F_blk","bipod_01_F_mtp","bipod_02_F_blk","bipod_02_F_tan","bipod_02_F_hex","bipod_03_F_blk","bipod_03_F_oli"};
	iconPicture = "\A3\Weapons_F_Mark\Data\UI\attachment_under.paa";
	iconPinpoint = "Bottom";
};
class CowsSlot_Rail: CowsSlot
{
	class compatibleItems
	{
		optic_Nightstalker = 1;
		optic_tws = 1;
		optic_tws_mg = 1;
		optic_NVS = 1;
		optic_DMS = 1;
		optic_LRPS = 1;
		optic_ams = 1;
		optic_AMS_snd = 1;
		optic_AMS_khk = 1;
		optic_KHS_blk = 1;
		optic_KHS_tan = 1;
		optic_KHS_hex = 1;
		optic_KHS_old = 1;
		optic_SOS = 1;
		optic_MRCO = 1;
		optic_Arco = 1;
		optic_aco = 1;
		optic_ACO_grn = 1;
		optic_aco_smg = 1;
		optic_ACO_grn_smg = 1;
		optic_hamr = 1;
		optic_Holosight = 1;
		optic_Holosight_smg = 1;
		optic_Hamr_khk_F = 1;
		optic_SOS_khk_F = 1;
		optic_Arco_ghex_F = 1;
		optic_Arco_blk_F = 1;
		optic_DMS_ghex_F = 1;
		optic_ERCO_blk_F = 1;
		optic_ERCO_khk_F = 1;
		optic_ERCO_snd_F = 1;
		optic_LRPS_ghex_F = 1;
		optic_LRPS_tna_F = 1;
		optic_Holosight_blk_F = 1;
		optic_Holosight_khk_F = 1;
		optic_Holosight_smg_blk_F = 1;
		optic_Holosight_smg_khk_F = 1;
		optic_DMS_weathered_F = 1;
		optic_DMS_weathered_Kir_F = 1;
		optic_Arco_lush_F = 1;
		optic_Arco_arid_F = 1;
		optic_Arco_AK_blk_F = 1;
		optic_Arco_AK_lush_F = 1;
		optic_Arco_AK_arid_F = 1;
		optic_Holosight_lush_F = 1;
		optic_Holosight_arid_F = 1;
	};
};
class CowsSlot_Rail_Pistol: CowsSlot
{
	class compatibleItems
	{
		optic_Yorris = 1;
	};
};
class CowsSlot_Pistol: CowsSlot
{
	class compatibleItems
	{
		optic_MRD = 1;
		optic_MRD_black = 1;
	};
};
class CowsSlot_Dovetail: CowsSlot
{
	class compatibleItems{};
};
class CowsSlot_Dovetail_SVD: CowsSlot
{
	class compatibleItems{};
};
class CowsSlot_Dovetail_RPG: CowsSlot
{
	class compatibleItems{};
};
class CowsSlot_MSBS65: CowsSlot_Rail
{
	class compatibleItems: compatibleItems
	{
		optic_ico_01_f = 1;
		optic_ico_01_black_f = 1;
		optic_ico_01_sand_f = 1;
		optic_ico_01_camo_f = 1;
	};
};
class MuzzleSlot_45ACP: MuzzleSlot
{
	class compatibleItems
	{
		muzzle_snds_acp = 1;
	};
};
class MuzzleSlot_9mm: MuzzleSlot
{
	class compatibleItems
	{
		muzzle_snds_L = 1;
	};
};
class MuzzleSlot_556: MuzzleSlot
{
	class compatibleItems
	{
		muzzle_snds_M = 1;
		muzzle_snds_m_khk_F = 1;
		muzzle_snds_m_snd_F = 1;
	};
};
class MuzzleSlot_65: MuzzleSlot
{
	class compatibleItems
	{
		muzzle_snds_h = 1;
		muzzle_snds_h_khk_F = 1;
		muzzle_snds_h_snd_F = 1;
		muzzle_snds_H_SW = 1;
		muzzle_snds_65_TI_blk_F = 1;
		muzzle_snds_65_TI_hex_F = 1;
		muzzle_snds_65_TI_ghex_F = 1;
	};
};
class MuzzleSlot_762: MuzzleSlot
{
	class compatibleItems
	{
		muzzle_snds_B = 1;
		muzzle_snds_B_khk_F = 1;
		muzzle_snds_B_snd_F = 1;
		muzzle_snds_B_lush_F = 1;
		muzzle_snds_B_arid_F = 1;
	};
};
class MuzzleSlot_338: MuzzleSlot
{
	class compatibleItems
	{
		muzzle_snds_338_black = 1;
		muzzle_snds_338_green = 1;
		muzzle_snds_338_sand = 1;
	};
};
class MuzzleSlot_93: MuzzleSlot
{
	class compatibleItems
	{
		muzzle_snds_93mmg = 1;
		muzzle_snds_93mmg_tan = 1;
	};
};
class MuzzleSlot_57: MuzzleSlot
{
	class compatibleItems
	{
		muzzle_snds_570 = 1;
	};
};
class MuzzleSlot_58: MuzzleSlot
{
	class compatibleItems
	{
		muzzle_snds_58_blk_F = 1;
		muzzle_snds_58_wdm_F = 1;
		muzzle_snds_58_ghex_F = 1;
		muzzle_snds_58_hex_F = 1;
	};
};
class MuzzleSlot_545R: MuzzleSlot
{
	class compatibleItems{};
};
class MuzzleSlot_762R: MuzzleSlot
{
	class compatibleItems{};
};
class MuzzleSlot_65MG: MuzzleSlot_65
{
	class compatibleItems: compatibleItems
	{
		muzzle_snds_H_SW = 1;
		muzzle_snds_H_MG = 1;
		muzzle_snds_H_MG_blk_F = 1;
		muzzle_snds_H_MG_khk_F = 1;
	};
};
class UnderBarrelSlot_rail: UnderBarrelSlot
{
	class compatibleItems
	{
		bipod_01_F_snd = 1;
		bipod_01_F_blk = 1;
		bipod_01_F_mtp = 1;
		bipod_01_F_khk = 1;
		bipod_02_F_blk = 1;
		bipod_02_F_tan = 1;
		bipod_02_F_hex = 1;
		bipod_02_F_lush = 1;
		bipod_02_F_arid = 1;
		bipod_03_F_blk = 1;
		bipod_03_F_oli = 1;
	};
};
class PointerSlot_Rail: PointerSlot
{
	class compatibleItems
	{
		acc_flashlight = 1;
		acc_pointer_IR = 1;
	};
};
class PointerSlot_Pistol: PointerSlot
{
	class compatibleItems
	{
		acc_flashlight_pistol = 1;
	};
};
class PointerSlot_Launcher: PointerSlot
{
	class compatibleItems
	{
		acc_flashlight = 1;
		acc_pointer_IR = 1;
	};
};
class RscObject;
class RscTitles
{
	class binocular
	{
		idd = -1;
		movingEnable = 0;
		duration = 1000;
		class objects
		{
			class binocular: RscObject
			{
				model = "\A3\weapons_f\reticle\optics_binoculars.p3d";
				idc = -1;
				position[] = {0,0,0.053};
				direction[] = {"sin 0","sin 180 * cos 0","cos 180 * cos 0"};
				up[] = {0,"cos 180","-sin 180"};
			};
		};
	};
};
class CfgWeapons
{
	class Default;
	class MGunCore;
	class CannonCore;
	class LauncherCore;
	class RocketPods: LauncherCore
	{
		scope = 1;
		cursor = "EmptyCursor";
		cursorAim = "rocket";
		type = 65536;
		reloadTime = 0.2;
		magazineReloadTime = 0.2;
		minRange = 50;
		minRangeProbab = 0.1;
		midRange = 600;
		midRangeProbab = 0.25;
		maxRange = 2500;
		maxRangeProbab = 0.05;
		canLock = 2;
		weaponLockDelay = 3.0;
		nameSound = "rockets";
		textureType = "semi";
		aiDispersionCoefY = 0.5;
		aiDispersionCoefX = 0.5;
	};
	class MGun: MGunCore
	{
		type = 65536;
		cursor = "EmptyCursor";
		cursoraim = "mg";
		displayName = "";
		nameSound = "mgun";
		reloadTime = 0.25;
		autoFire = 1;
		reloadAction = "ManActReloadMagazine";
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons_static\Static_HMG\reload_static_HMG",10.0,1,20};
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\HMG_050\HMG_050_01",1.5848932,1,2100};
			begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\HMG_050\HMG_050_02",1.5848932,1,2100};
			begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\HMG_050\HMG_050_03",1.5848932,1,2100};
			soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
		};
		soundContinuous = 0;
		initSpeed = 0;
		flash = "gunfire";
		flashSize = 0.5;
		optics = 0;
		textureType = "fullAuto";
	};
	class M2: MGun
	{
		scope = 1;
	};
	class LMG_RCWS: MGun
	{
		class GunClouds{};
		bullet1[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_01",0.2818383,1,10};
		bullet2[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_02",0.2818383,1,10};
		bullet3[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_03",0.2818383,1,10};
		bullet4[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_04",0.2818383,1,10};
		bullet5[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Dirt_01",0.2818383,1,10};
		bullet6[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Dirt_02",0.2818383,1,10};
		bullet7[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Dirt_03",0.2818383,1,10};
		bullet8[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Dirt_04",0.2818383,1,10};
		bullet9[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Grass_01",0.2818383,1,10};
		bullet10[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Grass_02",0.2818383,1,10};
		bullet11[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Grass_03",0.2818383,1,10};
		bullet12[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Grass_04",0.2818383,1,10};
		soundBullet[] = {"bullet1",0.08,"bullet2",0.084,"bullet3",0.084,"bullet4",0.084,"bullet5",0.093,"bullet6",0.093,"bullet7",0.074,"bullet8",0.074,"bullet9",0.084,"bullet10",0.085,"bullet11",0.083,"bullet12",0.083};
		class GunParticles
		{
			class effect1
			{
				positionName = "usti hlavne2";
				directionName = "konec hlavne2";
				effectName = "MachineGunCloud";
			};
		};
		scope = 1;
		displayName = "$STR_A3_LMG_RCWS0";
		magazines[] = {"200Rnd_65x39_Belt","200Rnd_65x39_Belt_Tracer_Red","200Rnd_65x39_Belt_Tracer_Green","200Rnd_65x39_Belt_Tracer_Yellow","2000Rnd_65x39_Belt","2000Rnd_65x39_Belt_Green","2000Rnd_65x39_Belt_Yellow","1000Rnd_65x39_Belt","1000Rnd_65x39_Belt_Green","1000Rnd_65x39_Belt_Yellow","2000Rnd_65x39_Belt_Tracer_Red","2000Rnd_65x39_Belt_Tracer_Green","2000Rnd_65x39_Belt_Tracer_Yellow","1000Rnd_65x39_Belt_Tracer_Red","1000Rnd_65x39_Belt_Tracer_Green","1000Rnd_65x39_Belt_Tracer_Yellow","2000Rnd_65x39_Belt_Tracer_Green_Splash","2000Rnd_65x39_Belt_Tracer_Yellow_Splash"};
		magazineReloadTime = 20;
		modes[] = {"manual","close","short","medium","far"};
		canLock = 0;
		ballisticsComputer = "2 + 16";
		FCSMaxLeadSpeed = 0;
		FCSZeroingDelay = 1;
		maxZeroing = 1500;
		aiDispersionCoefY = 3;
		aiDispersionCoefX = 3;
		class manual: MGun
		{
			displayName = "$STR_A3_LMG_RCWS0";
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				closure1[] = {"A3\sounds_f\weapons\closure\sfx7",0.56234133,1,40};
				closure2[] = {"A3\sounds_f\weapons\closure\sfx8",0.56234133,1,40};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\LMG_65mm\LMG_65mm_turret_01",1.0,1,2100};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\LMG_65mm\LMG_65mm_turret_02",1.0,1,2100};
				begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\LMG_65mm\LMG_65mm_turret_03",1.0,1,2100};
				soundBegin[] = {"begin1",0.34,"begin2",0.33,"begin3",0.33};
			};
			soundContinuous = 0;
			soundBurst = 0;
			reloadTime = 0.075;
			dispersion = 0.0016;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 1;
			midRangeProbab = 0.01;
			maxRange = 2;
			maxRangeProbab = 0.01;
		};
		class close: manual
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 8;
			burstRangeMax = 16;
			aiRateOfFire = 0.5;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.8;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.2;
		};
		class short: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 6;
			burstRangeMax = 12;
			aiRateOfFire = 1;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 150;
			minRange = 20;
			minRangeProbab = 0.7;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.2;
		};
		class medium: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 3;
			burstRangeMax = 12;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 250;
			minRange = 150;
			minRangeProbab = 0.7;
			midRange = 600;
			midRangeProbab = 0.65;
			maxRange = 800;
			maxRangeProbab = 0.1;
		};
		class far: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 3;
			burstRangeMax = 8;
			aiRateOfFire = 4;
			aiRateOfFireDispersion = 4;
			aiRateOfFireDistance = 600;
			minRange = 600;
			minRangeProbab = 0.65;
			midRange = 800;
			midRangeProbab = 0.4;
			maxRange = 1200;
			maxRangeProbab = 0.1;
		};
	};
	class LMG_65mm_body: LMG_RCWS
	{
		class manual: MGun
		{
			displayName = "$STR_A3_LMG_RCWS0";
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				closure1[] = {"A3\sounds_f\weapons\closure\sfx7",0.56234133,1,40};
				closure2[] = {"A3\sounds_f\weapons\closure\sfx8",0.56234133,1,40};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\LMG_65mm\LMG_65mm_body_01",1.0,1,2100};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\LMG_65mm\LMG_65mm_body_02",1.0,1,2100};
				begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\LMG_65mm\LMG_65mm_body_03",1.0,1,2100};
				soundBegin[] = {"begin1",0.34,"begin2",0.33,"begin3",0.33};
			};
			soundBurst = 0;
			reloadTime = 0.075;
			dispersion = 0.0016;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 1;
			midRangeProbab = 0.01;
			maxRange = 2;
			maxRangeProbab = 0.01;
		};
		class close: manual
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 8;
			burstRangeMax = 16;
			aiRateOfFire = 0.5;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.8;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.2;
		};
		class short: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 6;
			burstRangeMax = 12;
			aiRateOfFire = 1;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 150;
			minRange = 20;
			minRangeProbab = 0.7;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.2;
		};
		class medium: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 3;
			burstRangeMax = 12;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 250;
			minRange = 150;
			minRangeProbab = 0.7;
			midRange = 600;
			midRangeProbab = 0.65;
			maxRange = 800;
			maxRangeProbab = 0.1;
		};
		class far: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 3;
			burstRangeMax = 8;
			aiRateOfFire = 4;
			aiRateOfFireDispersion = 4;
			aiRateOfFireDistance = 600;
			minRange = 600;
			minRangeProbab = 0.65;
			midRange = 800;
			midRangeProbab = 0.4;
			maxRange = 1200;
			maxRangeProbab = 0.1;
		};
	};
	class LMG_M200: LMG_RCWS
	{
		displayName = "$STR_A3_LMG_M2000";
	};
	class LMG_M200_body: LMG_M200
	{
		magazineReloadTime = 10;
		ballisticsComputer = "2 + 16";
		FCSMaxLeadSpeed = 30.5556;
		FCSZeroingDelay = 1;
		maxZeroing = 1500;
		class manual: MGun
		{
			displayName = "$STR_A3_LMG_RCWS0";
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				closure1[] = {"A3\sounds_f\weapons\closure\sfx7",0.56234133,1,40};
				closure2[] = {"A3\sounds_f\weapons\closure\sfx8",0.56234133,1,40};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\LMG_65mm\LMG_65mm_body_01",1.0,1,2100};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\LMG_65mm\LMG_65mm_body_02",1.0,1,2100};
				begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\LMG_65mm\LMG_65mm_body_03",1.0,1,2100};
				soundBegin[] = {"begin1",0.34,"begin2",0.33,"begin3",0.33};
			};
			soundBurst = 0;
			reloadTime = 0.075;
			dispersion = 0.0016;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 1;
			midRangeProbab = 0.01;
			maxRange = 2;
			maxRangeProbab = 0.01;
		};
		class close: manual
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 8;
			burstRangeMax = 16;
			aiRateOfFire = 0.5;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.8;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.2;
		};
		class short: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 6;
			burstRangeMax = 12;
			aiRateOfFire = 1;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 150;
			minRange = 20;
			minRangeProbab = 0.7;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.2;
		};
		class medium: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 3;
			burstRangeMax = 12;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 250;
			minRange = 150;
			minRangeProbab = 0.7;
			midRange = 600;
			midRangeProbab = 0.65;
			maxRange = 800;
			maxRangeProbab = 0.1;
		};
		class far: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 3;
			burstRangeMax = 8;
			aiRateOfFire = 4;
			aiRateOfFireDispersion = 4;
			aiRateOfFireDistance = 600;
			minRange = 600;
			minRangeProbab = 0.65;
			midRange = 800;
			midRangeProbab = 0.4;
			maxRange = 1200;
			maxRangeProbab = 0.1;
		};
	};
	class LMG_Minigun: LMG_RCWS
	{
		displayName = "$STR_A3_LMG_Minigun0";
		magazineReloadTime = 15;
		ballisticsComputer = 2;
		aiDispersionCoefY = 0.5;
		aiDispersionCoefX = 0.5;
		class gunParticles
		{
			class effect1
			{
				positionName = "machinegun_eject_pos";
				directionName = "machinegun_eject_dir";
				effectName = "MachineGunCartridge1";
			};
			class effect2
			{
				positionName = "machinegun_end";
				directionName = "machinegun_beg";
				effectName = "MachineGun1";
			};
		};
		class manual: MGun
		{
			displayName = "$STR_A3_LMG_Minigun0";
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\LMG_Minigun_65mm\LMG_minigun_65mm_01",1.0,1,2000};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\LMG_Minigun_65mm\LMG_minigun_65mm_02",1.0,1.1,2000};
				begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\LMG_Minigun_65mm\LMG_minigun_65mm_03",1.0,0.9,2000};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				closure1[] = {"A3\sounds_f\weapons\gatling\gatling_rotation_short_2",0.31622776,1,20};
				closure2[] = {"A3\sounds_f\weapons\gatling\gatling_rotation_short_3",0.31622776,1,20};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			soundContinuous = 0;
			soundBurst = 0;
			multiplier = 3;
			reloadTime = 0.0333333;
			dispersion = 0.0115;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 1;
			midRangeProbab = 0.01;
			maxRange = 2;
			maxRangeProbab = 0.01;
		};
		class close: manual
		{
			soundBurst = 0;
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 12;
			burstRangeMax = 42;
			aiRateOfFire = 0.5;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.7;
			midRange = 100;
			midRangeProbab = 0.75;
			maxRange = 300;
			maxRangeProbab = 0.2;
		};
		class short: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 8;
			burstRangeMax = 36;
			aiRateOfFire = 1;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 150;
			minRange = 100;
			minRangeProbab = 0.75;
			midRange = 300;
			midRangeProbab = 0.75;
			maxRange = 600;
			maxRangeProbab = 0.2;
		};
		class medium: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 8;
			burstRangeMax = 30;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 300;
			minRange = 300;
			minRangeProbab = 0.75;
			midRange = 600;
			midRangeProbab = 0.65;
			maxRange = 800;
			maxRangeProbab = 0.1;
		};
		class far: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 8;
			burstRangeMax = 12;
			aiRateOfFire = 4;
			aiRateOfFireDispersion = 4;
			aiRateOfFireDistance = 800;
			minRange = 800;
			minRangeProbab = 0.65;
			midRange = 1000;
			midRangeProbab = 0.3;
			maxRange = 1500;
			maxRangeProbab = 0.05;
		};
	};
	class LMG_Minigun_heli: LMG_Minigun
	{
		showAimCursorInternal = 0;
		class manual: manual
		{
			displayName = "$STR_A3_LMG_Minigun0";
		};
		class close: manual
		{
			soundBurst = 0;
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 12;
			burstRangeMax = 42;
			aiRateOfFire = 0.5;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.7;
			midRange = 100;
			midRangeProbab = 0.75;
			maxRange = 300;
			maxRangeProbab = 0.2;
		};
		class short: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 8;
			burstRangeMax = 36;
			aiRateOfFire = 1;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 150;
			minRange = 100;
			minRangeProbab = 0.75;
			midRange = 300;
			midRangeProbab = 0.75;
			maxRange = 600;
			maxRangeProbab = 0.2;
		};
		class medium: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 8;
			burstRangeMax = 30;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 300;
			minRange = 300;
			minRangeProbab = 0.75;
			midRange = 600;
			midRangeProbab = 0.65;
			maxRange = 800;
			maxRangeProbab = 0.1;
		};
		class far: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 8;
			burstRangeMax = 12;
			aiRateOfFire = 4;
			aiRateOfFireDispersion = 4;
			aiRateOfFireDistance = 800;
			minRange = 800;
			minRangeProbab = 0.65;
			midRange = 1000;
			midRangeProbab = 0.3;
			maxRange = 1500;
			maxRangeProbab = 0.05;
		};
	};
	class HMG_127: LMG_RCWS
	{
		displayName = "$STR_A3_HMG_1270";
		scope = 1;
		magazines[] = {"500Rnd_127x99_mag","500Rnd_127x99_mag_Tracer_Red","500Rnd_127x99_mag_Tracer_Green","500Rnd_127x99_mag_Tracer_Yellow","200Rnd_127x99_mag","200Rnd_127x99_mag_Tracer_Red","200Rnd_127x99_mag_Tracer_Green","200Rnd_127x99_mag_Tracer_Yellow","100Rnd_127x99_mag","100Rnd_127x99_mag_Tracer_Red","100Rnd_127x99_mag_Tracer_Green","100Rnd_127x99_mag_Tracer_Yellow"};
		maxZeroing = 2000;
		class GunParticles
		{
			class effect1
			{
				positionName = "usti hlavne";
				directionName = "konec hlavne";
				effectName = "MachineGunCloud";
			};
		};
		showAimCursorInternal = 0;
		class manual: MGun
		{
			displayName = "12.7mm HMG";
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\HMG_127mm\HMG_127mm_01",1.5848932,1,2100};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\HMG_127mm\HMG_127mm_02",1.5848932,1,2100};
				begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\HMG_127mm\HMG_127mm_03",1.5848932,1,2100};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				closure1[] = {"A3\Sounds_F\weapons\Closure\sfx10",0.63095737,1,20};
				closure2[] = {"A3\sounds_f\weapons\closure\sfx11",0.63095737,1.2,20};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			soundContinuous = 0;
			soundBurst = 0;
			reloadTime = 0.1;
			dispersion = 0.0012;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 1;
			midRangeProbab = 0.01;
			maxRange = 2;
			maxRangeProbab = 0.01;
		};
		class close: manual
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 8;
			burstRangeMax = 16;
			aiRateOfFire = 0.5;
			aiRateOfFireDispersion = 1.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.7;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 200;
			maxRangeProbab = 0.2;
		};
		class short: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 6;
			burstRangeMax = 16;
			aiRateOfFire = 1;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 150;
			minRange = 100;
			minRangeProbab = 0.7;
			midRange = 400;
			midRangeProbab = 0.75;
			maxRange = 800;
			maxRangeProbab = 0.2;
		};
		class medium: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 4;
			burstRangeMax = 12;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 400;
			minRange = 400;
			minRangeProbab = 0.75;
			midRange = 800;
			midRangeProbab = 0.7;
			maxRange = 1500;
			maxRangeProbab = 0.1;
		};
		class far: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 3;
			burstRangeMax = 12;
			aiRateOfFire = 4;
			aiRateOfFireDispersion = 4;
			aiRateOfFireDistance = 800;
			minRange = 800;
			minRangeProbab = 0.6;
			midRange = 1500;
			midRangeProbab = 0.25;
			maxRange = 2000;
			maxRangeProbab = 0.05;
		};
	};
	class HMG_127_APC: HMG_127
	{
		class GunParticles
		{
			class effect1
			{
				positionName = "usti hlavne2";
				directionName = "konec hlavne2";
				effectName = "MachineGunCloud";
			};
		};
	};
	class HMG_127_UGV: HMG_127
	{
		class GunParticles
		{
			class effect1
			{
				positionName = "usti hlavne2";
				directionName = "konec hlavne2";
				effectName = "MachineGunCloud";
			};
		};
	};
	class HMG_01: HMG_127
	{
		displayName = "$STR_A3_HMG_Mk300";
		showAimCursorInternal = 1;
		class GunParticles
		{
			class effect1
			{
				positionName = "usti hlavne2";
				directionName = "konec hlavne2";
				effectName = "MachineGunCloud";
			};
			class effect2
			{
				positionName = "machinegun_eject_pos";
				directionName = "machinegun_eject_dir";
				effectName = "MachineGunCartridge1";
			};
		};
		class manual: manual
		{
			reloadTime = 0.12;
			dispersion = 0.00096;
		};
		class close: manual
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 8;
			burstRangeMax = 16;
			aiRateOfFire = 0.5;
			aiRateOfFireDispersion = 1.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.7;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 200;
			maxRangeProbab = 0.2;
		};
		class short: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 6;
			burstRangeMax = 16;
			aiRateOfFire = 1;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 150;
			minRange = 100;
			minRangeProbab = 0.7;
			midRange = 400;
			midRangeProbab = 0.75;
			maxRange = 800;
			maxRangeProbab = 0.2;
		};
		class medium: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 4;
			burstRangeMax = 12;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 400;
			minRange = 400;
			minRangeProbab = 0.75;
			midRange = 800;
			midRangeProbab = 0.7;
			maxRange = 1500;
			maxRangeProbab = 0.1;
		};
		class far: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 3;
			burstRangeMax = 12;
			aiRateOfFire = 4;
			aiRateOfFireDispersion = 4;
			aiRateOfFireDistance = 800;
			minRange = 800;
			minRangeProbab = 0.6;
			midRange = 1500;
			midRangeProbab = 0.25;
			maxRange = 2000;
			maxRangeProbab = 0.05;
		};
	};
	class HMG_static: HMG_01
	{
		magazineReloadTime = 10;
		class manual: manual
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_static\Static_HMG\static_HMG_01",1.7782794,1,2100};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_static\Static_HMG\static_HMG_02",1.7782794,1,2100};
				begin3[] = {"A3\Sounds_F\arsenal\weapons_static\Static_HMG\static_HMG_03",1.7782794,1,2100};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				closure1[] = {"A3\Sounds_F\weapons\Closure\sfx10",0.63095737,1,20};
				closure2[] = {"A3\sounds_f\weapons\closure\sfx11",0.63095737,1.2,20};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			soundContinuous = 0;
			soundBurst = 0;
		};
		class close: manual
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 8;
			burstRangeMax = 16;
			aiRateOfFire = 0.5;
			aiRateOfFireDispersion = 1.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.7;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 200;
			maxRangeProbab = 0.2;
		};
		class short: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 6;
			burstRangeMax = 16;
			aiRateOfFire = 1;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 150;
			minRange = 100;
			minRangeProbab = 0.7;
			midRange = 400;
			midRangeProbab = 0.75;
			maxRange = 800;
			maxRangeProbab = 0.2;
		};
		class medium: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 4;
			burstRangeMax = 12;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 400;
			minRange = 400;
			minRangeProbab = 0.75;
			midRange = 800;
			midRangeProbab = 0.7;
			maxRange = 1500;
			maxRangeProbab = 0.1;
		};
		class far: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 3;
			burstRangeMax = 12;
			aiRateOfFire = 4;
			aiRateOfFireDispersion = 4;
			aiRateOfFireDistance = 800;
			minRange = 800;
			minRangeProbab = 0.6;
			midRange = 1500;
			midRangeProbab = 0.25;
			maxRange = 2000;
			maxRangeProbab = 0.05;
		};
	};
	class HMG_M2: HMG_01
	{
		displayName = "$STR_A3_HMG_M20";
		magazines[] = {"100Rnd_127x99_mag","100Rnd_127x99_mag_Tracer_Red","100Rnd_127x99_mag_Tracer_Green","100Rnd_127x99_mag_Tracer_Yellow"};
		magazineReloadTime = 10;
		ballisticsComputer = 2;
		aiDispersionCoefY = 5;
		aiDispersionCoefX = 6;
		class GunParticles
		{
			class effect1
			{
				positionName = "usti hlavne";
				directionName = "konec hlavne";
				effectName = "MachineGunCloud";
			};
			class effect2
			{
				positionName = "nabojnicestart";
				directionName = "nabojniceend";
				effectName = "MachineGunEject";
			};
			class effect3
			{
				positionName = "nabojnicestart";
				directionName = "nabojniceend";
				effectName = "MachineGunCartridge2";
			};
		};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons_static\Static_HMG\reload_static_HMG",10.0,1,20};
		class manual: manual
		{
			dispersion = 0.00144;
			reloadTime = 0.1;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				soundsetshot[] = {"HMG050_Shot_SoundSet","HMG050_tail_SoundSet"};
			};
			soundContinuous = 0;
			soundBurst = 0;
		};
		class close: manual
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 6;
			burstRangeMax = 20;
			aiRateOfFire = 0.5;
			aiRateOfFireDispersion = 1.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.7;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 200;
			maxRangeProbab = 0.2;
		};
		class short: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 6;
			burstRangeMax = 16;
			aiRateOfFire = 1;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 150;
			minRange = 100;
			minRangeProbab = 0.7;
			midRange = 300;
			midRangeProbab = 0.75;
			maxRange = 600;
			maxRangeProbab = 0.2;
		};
		class medium: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 4;
			burstRangeMax = 12;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 300;
			minRange = 300;
			minRangeProbab = 0.75;
			midRange = 600;
			midRangeProbab = 0.7;
			maxRange = 800;
			maxRangeProbab = 0.2;
		};
		class far: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 3;
			burstRangeMax = 12;
			aiRateOfFire = 4;
			aiRateOfFireDispersion = 4;
			aiRateOfFireDistance = 600;
			minRange = 600;
			minRangeProbab = 0.65;
			midRange = 1000;
			midRangeProbab = 0.25;
			maxRange = 1500;
			maxRangeProbab = 0.05;
		};
	};
	class HMG_M2_Mounted: HMG_M2
	{
		type = 1;
		class GunParticles
		{
			class effect1
			{
				positionName = "usti hlavne";
				directionName = "konec hlavne";
				effectName = "MachineGunCloud";
			};
			class effect2
			{
				positionName = "nabojnicestart";
				directionName = "nabojniceend";
				effectName = "MachineGunEject";
			};
			class effect3
			{
				positionName = "case_eject_pos";
				directionName = "case_eject_dir";
				effectName = "MachineGunCartridge2";
			};
		};
	};
	class HMG_NSVT: HMG_127
	{
		displayName = "$STR_A3_HMG_NSVT0";
		magazines[] = {"450Rnd_127x108_Ball","150Rnd_127x108_Ball","50Rnd_127x108_Ball"};
		magazineReloadTime = 10;
		class GunParticles
		{
			class effect1
			{
				positionName = "usti hlavne2";
				directionName = "konec hlavne2";
				effectName = "MachineGunCloud";
			};
		};
		showAimCursorInternal = 0;
		class manual: manual
		{
			reloadTime = 0.075;
			dispersion = 0.00144;
		};
		class close: manual
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 8;
			burstRangeMax = 16;
			aiRateOfFire = 0.5;
			aiRateOfFireDispersion = 1.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.7;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 200;
			maxRangeProbab = 0.2;
		};
		class short: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 6;
			burstRangeMax = 16;
			aiRateOfFire = 1;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 150;
			minRange = 100;
			minRangeProbab = 0.7;
			midRange = 400;
			midRangeProbab = 0.75;
			maxRange = 800;
			maxRangeProbab = 0.2;
		};
		class medium: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 4;
			burstRangeMax = 12;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 400;
			minRange = 400;
			minRangeProbab = 0.75;
			midRange = 800;
			midRangeProbab = 0.7;
			maxRange = 1500;
			maxRangeProbab = 0.1;
		};
		class far: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 3;
			burstRangeMax = 12;
			aiRateOfFire = 4;
			aiRateOfFireDispersion = 4;
			aiRateOfFireDistance = 800;
			minRange = 800;
			minRangeProbab = 0.6;
			midRange = 1500;
			midRangeProbab = 0.25;
			maxRange = 2000;
			maxRangeProbab = 0.05;
		};
	};
	class SmokeLauncher: MGun
	{
		scope = 2;
		displayName = "$STR_A3_SmokeLauncher0";
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			soundSetShot[] = {"UGL_shot_SoundSet","UGL_Tail_SoundSet","UGL_InteriorTail_SoundSet"};
		};
		magazines[] = {"SmokeLauncherMag","SmokeLauncherMag_Single","SmokeLauncherMag_boat"};
		reloadTime = 3;
		magazineReloadTime = 60;
		canLock = 0;
		autoFire = 0;
		simulation = "cmlauncher";
		showToPlayer = 1;
		minRange = 0;
		maxRange = 10000;
		textureType = "semi";
	};
	class FlareLauncher: SmokeLauncher
	{
		scope = 2;
		displayName = "$STR_A3_cfgWeapons_FlareLauncher0";
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"A3\sounds_f\weapons\Flare_Gun\flaregun_1",0.56234133,1,200};
			soundBegin[] = {"begin1",1};
		};
		magazines[] = {"FlareLauncherMag"};
		reloadTime = 0.2;
		magazineReloadTime = 0.2;
		canLock = 0;
		autoFire = 0;
	};
	class CMFlareLauncher: SmokeLauncher
	{
		scope = 2;
		displayName = "$STR_A3_CMFlareLauncher0";
		magazines[] = {"60Rnd_CMFlareMagazine","120Rnd_CMFlareMagazine","240Rnd_CMFlareMagazine","60Rnd_CMFlare_Chaff_Magazine","120Rnd_CMFlare_Chaff_Magazine","240Rnd_CMFlare_Chaff_Magazine","192Rnd_CMFlare_Chaff_Magazine","168Rnd_CMFlare_Chaff_Magazine","300Rnd_CMFlare_Chaff_Magazine"};
		magazineReloadTime = 0.2;
		simulation = "cmlauncher";
		modes[] = {"Burst","Single","AIBurst"};
		class Single: Mode_SemiAuto
		{
			displayName = "$STR_A3_CMFlareLauncher_weapon_mode_Single_name";
			reloadTime = 0.05;
			burst = 1;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\weapons\HMG\HMG_grenade",1.0,1,300};
				soundBegin[] = {"begin1",1};
			};
			showToPlayer = 1;
			multiplier = 2;
			soundBurst = 0;
			dispersion = 0.4;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 1;
			midRangeProbab = 0.01;
			maxRange = 2;
			maxRangeProbab = 0.01;
		};
		class Burst: Mode_Burst
		{
			displayName = "$STR_A3_CMFlareLauncher_weapon_mode_Burst_name";
			reloadTime = 0.2;
			burst = 5;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\weapons\HMG\HMG_grenade",1.0,1,300};
				soundBegin[] = {"begin1",1};
			};
			showToPlayer = 1;
			multiplier = 2;
			soundBurst = 0;
			dispersion = 0.4;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 1;
			midRangeProbab = 0.01;
			maxRange = 2;
			maxRangeProbab = 0.01;
		};
		class AIBurst: Burst
		{
			burst = 3;
			burstRangeMax = 7;
			showToPlayer = 0;
			soundBurst = 0;
			minRange = 100;
			minRangeProbab = 1;
			midRange = 1000;
			midRangeProbab = 1;
			maxRange = 25000;
			maxRangeProbab = 1;
		};
	};
	class CMFlareLauncher_Singles: CMFlareLauncher
	{
		class Single: Single
		{
			burst = 2;
			reloadTime = 0.1;
			multiplier = 1;
		};
		class Burst: Burst
		{
			multiplier = 1;
			reloadTime = 0.1;
			burst = 10;
		};
		class AIBurst: AIBurst
		{
			multiplier = 1;
			reloadTime = 0.1;
			burst = 6;
			burstRangeMax = 14;
		};
	};
	class CMFlareLauncher_Triples: CMFlareLauncher
	{
		class Single: Single
		{
			multiplier = 3;
		};
		class Burst: Burst
		{
			multiplier = 3;
			reloadTime = 0.25;
			burst = 4;
		};
		class AIBurst: AIBurst
		{
			multiplier = 3;
			reloadTime = 0.25;
			burst = 2;
			burstRangeMax = 6;
		};
	};
	class M134_minigun: MGunCore
	{
		scope = 1;
		displayName = "$STR_A3_M134_minigun0";
		cursor = "EmptyCursor";
		cursorAim = "mg";
		magazines[] = {"5000Rnd_762x51_Belt","5000Rnd_762x51_Yellow_Belt"};
		magazineReloadTime = 15;
		canLock = 0;
		modes[] = {"HighROF","LowROF","close","short","medium","far"};
		weight = 40;
		type = 65536;
		aiDispersionCoefY = 0.5;
		aiDispersionCoefX = 0.5;
		class GunParticles
		{
			class FirstEffect
			{
				effectName = "MachineGun1";
				positionName = "z_gunL_muzzle";
				directionName = "z_gunL_chamber";
			};
			class SecondEffect
			{
				effectName = "MachineGun1";
				positionName = "z_gunR_muzzle";
				directionName = "z_gunR_chamber";
			};
			class effect1
			{
				positionName = "machinegun_eject_pos";
				directionName = "machinegun_eject_dir";
				effectName = "MachineGunCartridge";
			};
			class effect2
			{
				positionName = "machinegun_eject_2_pos";
				directionName = "machinegun_eject_2_dir";
				effectName = "MachineGunCartridge";
			};
		};
		class LowROF: Mode_FullAuto
		{
			displayName = "$STR_A3_M134_minigun0";
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\gatling_762mm\762mm_01_burst",3.9810717,1,1300,{2,36879}};
				soundBegin[] = {"begin1",1};
			};
			soundContinuous = 1;
			flash = "gunfire";
			flashSize = 0.1;
			recoil = "Empty";
			ffMagnitude = 0.5;
			ffFrequency = 11;
			ffCount = 6;
			reloadTime = 0.0333333;
			dispersion = 0.0092;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 1;
			midRangeProbab = 0.01;
			maxRange = 2;
			maxRangeProbab = 0.01;
			showToPlayer = 0;
			multiplier = 1;
		};
		class HighROF: LowROF
		{
			displayName = "$STR_A3_M134_minigun0";
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\gatling_762mm\762mm_01_burst",2.5118864,1,1500,{2,36879}};
				soundBegin[] = {"begin1",1};
			};
			showToPlayer = 1;
			multiplier = 3;
		};
		class close: HighROF
		{
			soundBurst = 0;
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 12;
			burstRangeMax = 42;
			aiRateOfFire = 0.5;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.7;
			midRange = 100;
			midRangeProbab = 0.75;
			maxRange = 300;
			maxRangeProbab = 0.2;
		};
		class short: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 8;
			burstRangeMax = 36;
			aiRateOfFire = 1;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 150;
			minRange = 100;
			minRangeProbab = 0.75;
			midRange = 300;
			midRangeProbab = 0.75;
			maxRange = 600;
			maxRangeProbab = 0.2;
		};
		class medium: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 8;
			burstRangeMax = 30;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 300;
			minRange = 300;
			minRangeProbab = 0.75;
			midRange = 600;
			midRangeProbab = 0.65;
			maxRange = 800;
			maxRangeProbab = 0.1;
		};
		class far: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 8;
			burstRangeMax = 12;
			aiRateOfFire = 4;
			aiRateOfFireDispersion = 4;
			aiRateOfFireDistance = 800;
			minRange = 800;
			minRangeProbab = 0.65;
			midRange = 1000;
			midRangeProbab = 0.3;
			maxRange = 1500;
			maxRangeProbab = 0.05;
		};
	};
	class mortar_82mm: CannonCore
	{
		scope = 1;
		displayname = "$STR_A3_mortar_82mm0";
		nameSound = "CannonCore";
		cursor = "mortar";
		cursorAim = "EmptyCursor";
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_01",1.2589254,1,250};
			begin2[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_02",1.2589254,1,250};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
		};
		reloadSound[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar",1.0,1,20};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_magazine_Mortar",1.0,1,20};
		soundServo[] = {"",0.0001,1.0};
		reloadTime = 1.8;
		magazineReloadTime = 5;
		autoReload = 1;
		canLock = 0;
		magazines[] = {"8Rnd_82mm_Mo_shells","8Rnd_82mm_Mo_Flare_white","8Rnd_82mm_Mo_Smoke_white","8Rnd_82mm_Mo_guided","8Rnd_82mm_Mo_LG"};
		ballisticsComputer = 2;
		class GunParticles
		{
			class FirstEffect
			{
				effectName = "MortarFired";
				positionName = "Usti Hlavne";
				directionName = "Konec Hlavne";
			};
		};
		modes[] = {"Single1","Single2","Single3","Burst1","Burst2","Burst3"};
		class Single1: Mode_SemiAuto
		{
			displayName = "$STR_A3_mortar_82mm_Single10";
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_01",1.2589254,1,250};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_02",1.2589254,1,250};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			reloadSound[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar",1.0,1,20};
			reloadTime = 1.8;
			artilleryDispersion = 1.9;
			artilleryCharge = 0.35;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 1;
			midRangeProbab = 0.01;
			maxRange = 2;
			maxRangeProbab = 0.01;
		};
		class Single2: Single1
		{
			displayName = "$STR_A3_mortar_82mm_Single20";
			artilleryCharge = 0.7;
		};
		class Single3: Single1
		{
			displayName = "$STR_A3_mortar_82mm_Single30";
			artilleryCharge = 1;
		};
		class Burst1: Mode_Burst
		{
			showToPlayer = 0;
			displayName = "$STR_A3_mortar_82mm_Burst10";
			burst = 4;
			aiBurstTerminable = 1;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_01",1.2589254,1,250};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_02",1.2589254,1,250};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			reloadSound[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar",1.0,1,20};
			soundServo[] = {"",0.0001,1.0};
			soundBurst = 0;
			reloadTime = 1.8;
			artilleryDispersion = 2.2;
			artilleryCharge = 0.35;
			minRange = 60;
			minRangeProbab = 0.5;
			midRange = 290;
			midRangeProbab = 0.7;
			maxRange = 665;
			maxRangeProbab = 0.5;
		};
		class Burst2: Burst1
		{
			showToPlayer = 0;
			displayName = "$STR_A3_mortar_82mm_Burst20";
			artilleryCharge = 0.7;
			minRange = 230;
			minRangeProbab = 0.4;
			midRange = 1175;
			midRangeProbab = 0.6;
			maxRange = 2660;
			maxRangeProbab = 0.4;
		};
		class Burst3: Burst1
		{
			showToPlayer = 0;
			displayName = "$STR_A3_mortar_82mm_Burst30";
			artilleryCharge = 1;
			minRange = 540;
			minRangeProbab = 0.3;
			midRange = 2355;
			midRangeProbab = 0.4;
			maxRange = 5500;
			maxRangeProbab = 0.3;
		};
	};
	class MissileLauncher: LauncherCore
	{
		scope = 1;
		type = 65536;
		reloadTime = 0.5;
		nameSound = "MissileLauncher";
		cursor = "EmptyCursor";
		cursorAim = "missile";
		textureType = "fullAuto";
	};
	class weapon_VLSBase: MissileLauncher
	{
		cursor = "EmptyCursor";
		cursorAim = "missile";
		showAimCursorInternal = 0;
		reloadTime = 10;
		magazineReloadTime = 120;
		canLock = 2;
		weaponLockDelay = 5.0;
		weaponLockSystem = 0;
		cmImmunity = 1;
		modes[] = {"Cruise"};
		class Cruise: MissileLauncher
		{
			displayName = "$STR_A3_firemode_terrain0";
			textureType = "terrain";
			reloadTime = 10;
			burst = 1;
			burstRangeMax = 2;
			sounds[] = {"StandardSound"};
			aiRateOfFire = 200;
			aiRateOfFireDispersion = -180;
			aiRateOfFireDistance = 32000;
			minRange = 500;
			minRangeProbab = 0.5;
			midRange = 2000;
			midRangeProbab = 1;
			maxRange = 32000;
			maxRangeProbab = 1;
		};
		nameSound = "MissileLauncher";
		sounds[] = {"StandardSound"};
		class GunParticles
		{
			class FirstEffect
			{
				effectName = "MLRSFired";
				positionName = "Konec hlavne";
				directionName = "Usti hlavne";
			};
		};
	};
	class missiles_DAGR: RocketPods
	{
		displayName = "$STR_A3_missiles_DAGR0";
		magazines[] = {"24Rnd_PG_missiles","12Rnd_PG_missiles","PylonRack_12Rnd_PG_missiles"};
		modes[] = {"Far_AI","Medium_AI","Burst"};
		canLock = 2;
		weaponLockDelay = 3.0;
		weaponLockSystem = 2;
		cmImmunity = 0.3;
		lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.56234133,1};
		lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",0.56234133,2.5};
		cursor = "EmptyCursor";
		cursorAim = "missile";
		showAimCursorInternal = 1;
		holdsterAnimValue = 1;
		class Far_AI: RocketPods
		{
			displayName = "$STR_A3_missiles_DAGR0";
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\weapons\Rockets\new_rocket_7",1.7782794,1.2,1600};
				soundBegin[] = {"begin1",1};
			};
			autoFire = 0;
			dispersion = 0.015;
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 1;
			aiRateOfFire = 3;
			aiRateOfFireDispersion = 3;
			aiRateOfFireDistance = 1000;
			minRange = 600;
			minRangeProbab = 0.9;
			midRange = 3000;
			midRangeProbab = 0.9;
			maxRange = 5000;
			maxRangeProbab = 0.3;
		};
		class Medium_AI: Far_AI
		{
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 2;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 400;
			minRange = 300;
			minRangeProbab = 0.2;
			midRange = 600;
			midRangeProbab = 0.9;
			maxRange = 3000;
			maxRangeProbab = 0.3;
		};
		class Burst: RocketPods
		{
			displayName = "$STR_A3_missiles_DAGR0";
			burst = 1;
			soundContinuous = 0;
			autoFire = 0;
			reloadTime = 0.08;
			dispersion = 0.015;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 1;
			midRangeProbab = 0.01;
			maxRange = 2;
			maxRangeProbab = 0.01;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\weapons\Rockets\new_rocket_7",1.7782794,1.2,1600};
				soundBegin[] = {"begin1",1};
			};
			textureType = "semi";
		};
	};
	class missiles_DAR: RocketPods
	{
		displayName = "$STR_A3_missiles_dar0";
		magazines[] = {"24Rnd_missiles","12Rnd_missiles","PylonRack_12Rnd_missiles"};
		modes[] = {"Far_AI","Medium_AI","Burst"};
		canLock = 0;
		weaponLockDelay = 0.0;
		cursor = "EmptyCursor";
		cursorAim = "rocket";
		holdsterAnimValue = 1;
		weight = 80;
		class Far_AI: RocketPods
		{
			displayName = "$STR_A3_missiles_dar0";
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\weapons\Rockets\new_rocket_8",1.7782794,1.2,1600};
				soundBegin[] = {"begin1",1};
			};
			autoFire = 0;
			reloadTime = 0.08;
			dispersion = 0.015;
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 4;
			aiRateOfFire = 4;
			aiRateOfFireDispersion = 4;
			aiRateOfFireDistance = 1000;
			minRange = 1000;
			minRangeProbab = 0.7;
			midRange = 1500;
			midRangeProbab = 0.7;
			maxRange = 3200;
			maxRangeProbab = 0.1;
		};
		class Medium_AI: Far_AI
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 6;
			aiRateOfFire = 3;
			aiRateOfFireDispersion = 3;
			aiRateOfFireDistance = 1000;
			minRange = 400;
			minRangeProbab = 0.1;
			midRange = 800;
			midRangeProbab = 0.7;
			maxRange = 1200;
			maxRangeProbab = 0.75;
		};
		class Burst: RocketPods
		{
			displayName = "$STR_A3_missiles_dar0";
			burst = 1;
			soundContinuous = 0;
			autoFire = 1;
			reloadTime = 0.08;
			dispersion = 0.015;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 1;
			midRangeProbab = 0.01;
			maxRange = 2;
			maxRangeProbab = 0.01;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\weapons\Rockets\new_rocket_8",1.7782794,1.2,1600};
				soundBegin[] = {"begin1",1};
			};
			textureType = "fullAuto";
		};
	};
	class GMG_F: MGun
	{
		reloadTime = 0.171429;
		dispersion = 0.005;
		magazineReloadTime = 10;
		autoReload = 1;
		aiRateOfFire = 4;
		aiRateOfFireDistance = 500;
		minRange = 8;
		minRangeProbab = 0.6;
		midRange = 500;
		midRangeProbab = 0.7;
		maxRange = 1500;
		maxRangeProbab = 0.1;
		canLock = 0;
		ballisticsComputer = "2 + 16";
		FCSMaxLeadSpeed = 0;
		FCSZeroingDelay = 1;
		maxZeroing = 1500;
		autoFire = 1;
		cursor = "EmptyCursor";
		cursorAim = "gl";
	};
	class GMG_20mm: GMG_F
	{
		scope = 1;
		displayName = "$STR_A3_GMG_20mm0";
		magazines[] = {"200Rnd_20mm_G_belt","40Rnd_20mm_g_belt"};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons_static\Static_GMG\reload_static_GMG",0.8912509,1,20};
		class GunClouds{};
		class GunParticles
		{
			class effect1
			{
				positionName = "usti hlavne3";
				directionName = "konec hlavne3";
				effectName = "GrenadeLauncherCloud";
			};
		};
		maxZeroing = 2000;
		modes[] = {"manual","close","short","medium","far"};
		class manual: GMG_F
		{
			displayName = "$STR_A3_GMG_20mm0";
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_static\Static_GMG\GMG_01",1.1220185,1.0,1200};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_static\Static_GMG\GMG_02",1.1220185,1.0,1200};
				begin3[] = {"A3\Sounds_F\arsenal\weapons_static\Static_GMG\GMG_03",1.1220185,1.0,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			soundContinuous = 0;
			soundBurst = 0;
			reloadTime = 0.24;
			dispersion = 0.0038;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 1;
			midRangeProbab = 0.01;
			maxRange = 2;
			maxRangeProbab = 0.01;
		};
		class close: manual
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 6;
			aiRateOfFire = 1;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 50;
			minRange = 16;
			minRangeProbab = 0.1;
			midRange = 200;
			midRangeProbab = 0.5;
			maxRange = 400;
			maxRangeProbab = 0.2;
		};
		class short: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 5;
			aiRateOfFire = 1;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 200;
			minRange = 200;
			minRangeProbab = 0.5;
			midRange = 400;
			midRangeProbab = 0.7;
			maxRange = 800;
			maxRangeProbab = 0.7;
		};
		class medium: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 5;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 700;
			minRange = 700;
			minRangeProbab = 0.7;
			midRange = 1000;
			midRangeProbab = 0.8;
			maxRange = 1500;
			maxRangeProbab = 0.75;
		};
		class far: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 3;
			aiRateOfFire = 4;
			aiRateOfFireDispersion = 4;
			aiRateOfFireDistance = 1000;
			minRange = 1000;
			minRangeProbab = 0.8;
			midRange = 1500;
			midRangeProbab = 0.75;
			maxRange = 2000;
			maxRangeProbab = 0.1;
		};
	};
	class GMG_40mm: GMG_F
	{
		scope = 1;
		displayName = "$STR_A3_GMG_40mm0";
		magazines[] = {"200Rnd_40mm_G_belt","96Rnd_40mm_G_belt","64Rnd_40mm_G_belt","32Rnd_40mm_G_belt"};
		magazineReloadTime = 20;
		showAimCursorInternal = 0;
		modes[] = {"manual","close","short","medium","far"};
		class manual: GMG_F
		{
			displayName = "$STR_A3_GMG_40mm0";
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_static\Static_GMG\GMG_01",1.1220185,1.0,1200};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_static\Static_GMG\GMG_02",1.1220185,1.0,1200};
				begin3[] = {"A3\Sounds_F\arsenal\weapons_static\Static_GMG\GMG_03",1.1220185,1.0,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			soundContinuous = 0;
			soundBurst = 0;
			dispersion = 0.005;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 1;
			midRangeProbab = 0.01;
			maxRange = 2;
			maxRangeProbab = 0.01;
		};
		class close: manual
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 6;
			aiRateOfFire = 1;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 50;
			minRange = 16;
			minRangeProbab = 0.1;
			midRange = 100;
			midRangeProbab = 0.5;
			maxRange = 200;
			maxRangeProbab = 0.2;
		};
		class short: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 5;
			aiRateOfFire = 1;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 150;
			minRange = 100;
			minRangeProbab = 0.5;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.75;
		};
		class medium: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 5;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 400;
			minRange = 400;
			minRangeProbab = 0.75;
			midRange = 800;
			midRangeProbab = 0.8;
			maxRange = 1200;
			maxRangeProbab = 0.75;
		};
		class far: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 3;
			aiRateOfFire = 4;
			aiRateOfFireDispersion = 4;
			aiRateOfFireDistance = 1000;
			minRange = 1000;
			minRangeProbab = 0.77;
			midRange = 1200;
			midRangeProbab = 0.75;
			maxRange = 1500;
			maxRangeProbab = 0.1;
		};
		class GunParticles
		{
			class effect1
			{
				positionName = "usti hlavne";
				directionName = "konec hlavne";
				effectName = "GrenadeLauncherCloud";
			};
		};
	};
	class Laserdesignator_mounted: Default
	{
		scope = 2;
		cursor = "laserDesignator";
		cursorAim = "EmptyCursor";
		cursorAimOn = "CursorAimOn";
		opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
		displayName = "$STR_A3_Laserdesignator_mounted0";
		magazines[] = {"Laserbatteries"};
		Laser = 1;
		canLock = 0;
		showAimCursorInternal = 0;
		canShootInWater = 1;
		aiRateOfFire = 1;
		aiRateOfFireDistance = 10;
		minRange = 0;
		minRangeProbab = 0.01;
		midRange = 1;
		midRangeProbab = 0.01;
		maxRange = 2;
		maxRangeProbab = 0.01;
	};
	class Laserdesignator_vehicle: Laserdesignator_mounted
	{
		cursor = "EmptyCursor";
		cursorAim = "laserDesignator";
	};
	class Laserdesignator_pilotCamera: Laserdesignator_mounted
	{
		cursor = "EmptyCursor";
		cursorAimOn = "EmptyCursor";
	};
	class autocannon_Base_F: CannonCore
	{
		scope = 1;
		cursor = "EmptyCursor";
		cursorAim = "cannon";
		showAimCursorInternal = 0;
		nameSound = "cannon";
		sound[] = {"A3\sounds_f\dummysound",2.5118864,1,1800};
		soundContinuous = 0;
		reloadTime = 0.3;
		aiRateOfFire = 0.6;
		magazineReloadTime = 20;
		autoReload = 1;
		canLock = 0;
		ballisticsComputer = "2 + 16";
		FCSMaxLeadSpeed = 30.5556;
		FCSZeroingDelay = 1;
		autoFire = 1;
		modes[] = {"player","close","short","medium","far"};
		shotFromTurret = 1;
		class GunParticles
		{
			class Effect
			{
				effectName = "AutoCannonFired";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
			class Shell
			{
				positionName = "shell_eject_pos";
				directionName = "shell_eject_dir";
				effectName = "HeavyGunCartridge1";
			};
		};
		class player: Mode_FullAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_01",1.9952624,1,1500};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_02",1.9952624,1,1500};
				begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_03",1.9952624,1,1500};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			soundContinuous = 0;
			reloadTime = 0.3;
			dispersion = 0.0009;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 1;
			midRangeProbab = 0.01;
			maxRange = 2;
			maxRangeProbab = 0.01;
		};
		class close: player
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 3;
			burstRangeMax = 6;
			aiRateOfFire = 1;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 200;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 400;
			midRangeProbab = 0.7;
			maxRange = 800;
			maxRangeProbab = 0.8;
		};
		class short: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 5;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 600;
			minRange = 600;
			minRangeProbab = 0.75;
			midRange = 800;
			midRangeProbab = 0.8;
			maxRange = 1200;
			maxRangeProbab = 0.8;
		};
		class medium: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 3;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 3;
			aiRateOfFireDistance = 1000;
			minRange = 1000;
			minRangeProbab = 0.8;
			midRange = 1500;
			midRangeProbab = 0.8;
			maxRange = 2000;
			maxRangeProbab = 0.7;
		};
		class far: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 1;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 4;
			aiRateOfFireDistance = 1800;
			minRange = 1800;
			minRangeProbab = 0.74;
			midRange = 2400;
			midRangeProbab = 0.65;
			maxRange = 3000;
			maxRangeProbab = 0.05;
		};
	};
	class autocannon_40mm_CTWS: autocannon_Base_F
	{
		displayName = "$STR_A3_autocannon_40mm_CTWS0";
		muzzles[] = {"HE","AP"};
		class HE: autocannon_Base_F
		{
			displayName = "$STR_A3_autocannon_40mm_CTWS0";
			magazines[] = {"60Rnd_40mm_GPR_shells","60Rnd_40mm_GPR_Tracer_Red_shells","60Rnd_40mm_GPR_Tracer_Green_shells","60Rnd_40mm_GPR_Tracer_Yellow_shells"};
			class player: player
			{
				dispersion = 0.0015;
				sounds[] = {"StandardSound"};
				class StandardSound
				{
					begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_40mm\autocannon_40mm_body_01",1.9952624,1,1500};
					begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_40mm\autocannon_40mm_body_02",1.9952624,1,1500};
					begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_40mm\autocannon_40mm_body_03",1.9952624,1,1500};
					soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				};
			};
			class close: player
			{
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 3;
				burstRangeMax = 6;
				aiRateOfFire = 1;
				aiRateOfFireDispersion = 2;
				aiRateOfFireDistance = 200;
				minRange = 0;
				minRangeProbab = 0.1;
				midRange = 400;
				midRangeProbab = 0.7;
				maxRange = 800;
				maxRangeProbab = 0.8;
			};
			class short: close
			{
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 1;
				burstRangeMax = 5;
				aiRateOfFire = 2;
				aiRateOfFireDispersion = 2;
				aiRateOfFireDistance = 600;
				minRange = 600;
				minRangeProbab = 0.75;
				midRange = 800;
				midRangeProbab = 0.8;
				maxRange = 1200;
				maxRangeProbab = 0.8;
			};
			class medium: close
			{
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 1;
				burstRangeMax = 3;
				aiRateOfFire = 2;
				aiRateOfFireDispersion = 3;
				aiRateOfFireDistance = 1000;
				minRange = 1000;
				minRangeProbab = 0.8;
				midRange = 1500;
				midRangeProbab = 0.8;
				maxRange = 2000;
				maxRangeProbab = 0.7;
			};
			class far: close
			{
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 1;
				burstRangeMax = 1;
				aiRateOfFire = 2;
				aiRateOfFireDispersion = 4;
				aiRateOfFireDistance = 1800;
				minRange = 1800;
				minRangeProbab = 0.74;
				midRange = 2400;
				midRangeProbab = 0.65;
				maxRange = 3000;
				maxRangeProbab = 0.05;
			};
		};
		class AP: autocannon_Base_F
		{
			displayName = "$STR_A3_autocannon_40mm_CTWS0";
			magazines[] = {"40Rnd_40mm_APFSDS_shells","40Rnd_40mm_APFSDS_Tracer_Red_shells","40Rnd_40mm_APFSDS_Tracer_Green_shells","40Rnd_40mm_APFSDS_Tracer_Yellow_shells"};
			class player: player
			{
				dispersion = 0.0009;
				sounds[] = {"StandardSound"};
				class StandardSound
				{
					begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_40mm\autocannon_40mm_body_01",1.9952624,1,1500};
					begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_40mm\autocannon_40mm_body_02",1.9952624,1,1500};
					begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_40mm\autocannon_40mm_body_03",1.9952624,1,1500};
					soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				};
			};
			class close: player
			{
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 3;
				burstRangeMax = 6;
				aiRateOfFire = 1;
				aiRateOfFireDispersion = 2;
				aiRateOfFireDistance = 200;
				minRange = 0;
				minRangeProbab = 0.1;
				midRange = 400;
				midRangeProbab = 0.7;
				maxRange = 800;
				maxRangeProbab = 0.8;
			};
			class short: close
			{
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 1;
				burstRangeMax = 5;
				aiRateOfFire = 2;
				aiRateOfFireDispersion = 2;
				aiRateOfFireDistance = 600;
				minRange = 600;
				minRangeProbab = 0.75;
				midRange = 800;
				midRangeProbab = 0.8;
				maxRange = 1200;
				maxRangeProbab = 0.8;
			};
			class medium: close
			{
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 1;
				burstRangeMax = 3;
				aiRateOfFire = 2;
				aiRateOfFireDispersion = 3;
				aiRateOfFireDistance = 1000;
				minRange = 1000;
				minRangeProbab = 0.8;
				midRange = 1500;
				midRangeProbab = 0.8;
				maxRange = 2000;
				maxRangeProbab = 0.7;
			};
			class far: close
			{
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 1;
				burstRangeMax = 1;
				aiRateOfFire = 2;
				aiRateOfFireDispersion = 4;
				aiRateOfFireDistance = 1800;
				minRange = 1800;
				minRangeProbab = 0.74;
				midRange = 2400;
				midRangeProbab = 0.65;
				maxRange = 3000;
				maxRangeProbab = 0.05;
			};
		};
	};
	class autocannon_30mm_CTWS: autocannon_Base_F
	{
		displayName = "$STR_A3_GATLING_30MM_CTWS0";
		muzzles[] = {"HE","AP"};
		class HE: autocannon_Base_F
		{
			displayName = "$STR_A3_GATLING_30MM_CTWS0";
			magazines[] = {"140Rnd_30mm_MP_shells","140Rnd_30mm_MP_shells_Tracer_Red","140Rnd_30mm_MP_shells_Tracer_Green","140Rnd_30mm_MP_shells_Tracer_Yellow"};
			magazineReloadTime = 40;
			class player: player
			{
				dispersion = 0.0018;
			};
			class close: player
			{
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 3;
				burstRangeMax = 6;
				aiRateOfFire = 1;
				aiRateOfFireDispersion = 2;
				aiRateOfFireDistance = 200;
				minRange = 0;
				minRangeProbab = 0.1;
				midRange = 400;
				midRangeProbab = 0.7;
				maxRange = 800;
				maxRangeProbab = 0.8;
			};
			class short: close
			{
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 1;
				burstRangeMax = 5;
				aiRateOfFire = 2;
				aiRateOfFireDispersion = 2;
				aiRateOfFireDistance = 600;
				minRange = 600;
				minRangeProbab = 0.75;
				midRange = 800;
				midRangeProbab = 0.8;
				maxRange = 1200;
				maxRangeProbab = 0.8;
			};
			class medium: close
			{
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 1;
				burstRangeMax = 3;
				aiRateOfFire = 2;
				aiRateOfFireDispersion = 3;
				aiRateOfFireDistance = 1000;
				minRange = 1000;
				minRangeProbab = 0.8;
				midRange = 1500;
				midRangeProbab = 0.8;
				maxRange = 2000;
				maxRangeProbab = 0.7;
			};
			class far: close
			{
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 1;
				burstRangeMax = 1;
				aiRateOfFire = 2;
				aiRateOfFireDispersion = 4;
				aiRateOfFireDistance = 1800;
				minRange = 1800;
				minRangeProbab = 0.74;
				midRange = 2400;
				midRangeProbab = 0.65;
				maxRange = 3000;
				maxRangeProbab = 0.05;
			};
		};
		class AP: autocannon_Base_F
		{
			displayName = "$STR_A3_GATLING_30MM_CTWS0";
			magazines[] = {"60Rnd_30mm_APFSDS_shells","60Rnd_30mm_APFSDS_shells_Tracer_Red","60Rnd_30mm_APFSDS_shells_Tracer_Green","60Rnd_30mm_APFSDS_shells_Tracer_Yellow"};
			magazineReloadTime = 40;
			class player: player
			{
				dispersion = 0.00108;
			};
			class close: player
			{
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 3;
				burstRangeMax = 6;
				aiRateOfFire = 1;
				aiRateOfFireDispersion = 2;
				aiRateOfFireDistance = 200;
				minRange = 0;
				minRangeProbab = 0.1;
				midRange = 400;
				midRangeProbab = 0.7;
				maxRange = 800;
				maxRangeProbab = 0.8;
			};
			class short: close
			{
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 1;
				burstRangeMax = 5;
				aiRateOfFire = 2;
				aiRateOfFireDispersion = 2;
				aiRateOfFireDistance = 600;
				minRange = 600;
				minRangeProbab = 0.75;
				midRange = 800;
				midRangeProbab = 0.8;
				maxRange = 1200;
				maxRangeProbab = 0.8;
			};
			class medium: close
			{
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 1;
				burstRangeMax = 3;
				aiRateOfFire = 2;
				aiRateOfFireDispersion = 3;
				aiRateOfFireDistance = 1000;
				minRange = 1000;
				minRangeProbab = 0.8;
				midRange = 1500;
				midRangeProbab = 0.8;
				maxRange = 2000;
				maxRangeProbab = 0.7;
			};
			class far: close
			{
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 1;
				burstRangeMax = 1;
				aiRateOfFire = 2;
				aiRateOfFireDispersion = 4;
				aiRateOfFireDistance = 1800;
				minRange = 1800;
				minRangeProbab = 0.74;
				midRange = 2400;
				midRangeProbab = 0.65;
				maxRange = 3000;
				maxRangeProbab = 0.05;
			};
		};
	};
	class gatling_20mm: CannonCore
	{
		scope = 1;
		displayName = "$STR_A3_GATLING_20MM0";
		nameSound = "cannon";
		cursor = "EmptyCursor";
		cursorAim = "mg";
		showAimCursorInternal = 0;
		magazines[] = {"2000Rnd_20mm_shells","1000Rnd_20mm_shells","300Rnd_20mm_shells","PylonWeapon_300Rnd_20mm_shells"};
		canLock = 0;
		ballisticsComputer = "1 + 2 + 16";
		FCSMaxLeadSpeed = 30.5556;
		FCSZeroingDelay = 0.5;
		maxZeroing = 2500;
		aiDispersionCoefY = 0.5;
		aiDispersionCoefX = 0.5;
		modes[] = {"manual","close","short","medium","far"};
		class GunParticles
		{
			class Effect
			{
				effectName = "MachineGun1";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};
		class manual: CannonCore
		{
			displayName = "$STR_A3_GATLING_20MM0";
			autoFire = 1;
			textureType = "fullAuto";
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\gatling_20mm\20mm_01_burst",1.7782794,1,1300,{2,35740}};
				soundBegin[] = {"begin1",1};
			};
			soundContinuous = 1;
			soundBurst = 0;
			reloadTime = 0.04;
			dispersion = 0.0055;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 1;
			midRangeProbab = 0.01;
			maxRange = 2;
			maxRangeProbab = 0.01;
		};
		class close: manual
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 16;
			burstRangeMax = 37;
			aiRateOfFire = 0.5;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 50;
			midRangeProbab = 0.65;
			maxRange = 400;
			maxRangeProbab = 0.75;
		};
		class short: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 12;
			burstRangeMax = 32;
			aiRateOfFire = 1;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 200;
			minRange = 200;
			minRangeProbab = 0.65;
			midRange = 400;
			midRangeProbab = 0.75;
			maxRange = 1000;
			maxRangeProbab = 0.7;
		};
		class medium: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 12;
			burstRangeMax = 28;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 800;
			minRange = 800;
			minRangeProbab = 0.7;
			midRange = 1400;
			midRangeProbab = 0.4;
			maxRange = 1800;
			maxRangeProbab = 0.15;
		};
		class far: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 9;
			burstRangeMax = 20;
			aiRateOfFire = 4;
			aiRateOfFireDispersion = 4;
			aiRateOfFireDistance = 1400;
			minRange = 1400;
			minRangeProbab = 0.5;
			midRange = 1800;
			midRangeProbab = 0.15;
			maxRange = 2500;
			maxRangeProbab = 0.05;
		};
	};
	class gatling_30mm_base: CannonCore
	{
		scope = 0;
		displayName = "$STR_A3_GATLING_30MM0";
		nameSound = "cannon";
		burst = 5;
		reloadTime = 0.02;
		autoFire = 1;
		magazines[] = {"250Rnd_30mm_HE_shells","250Rnd_30mm_HE_shells_Tracer_Red","250Rnd_30mm_HE_shells_Tracer_Green","250Rnd_30mm_APDS_shells","250Rnd_30mm_APDS_shells_Tracer_Red","250Rnd_30mm_APDS_shells_Tracer_Green","250Rnd_30mm_APDS_shells_Tracer_Yellow"};
		modes[] = {"LowROF","close","short","medium","far"};
		shotFromTurret = 1;
		cursor = "EmptyCursor";
		cursorAim = "mg";
		canLock = 0;
		ballisticsComputer = "1 + 2 + 16";
		FCSMaxLeadSpeed = 30.5556;
		FCSZeroingDelay = 0.5;
		maxZeroing = 2500;
		aiDispersionCoefY = 0.5;
		aiDispersionCoefX = 0.5;
		class GunParticles
		{
			class Effect
			{
				effectName = "MachineGun2";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};
		class LowROF: Mode_FullAuto
		{
			displayName = "$STR_A3_GATLING_30MM_LOWROF0";
			burst = 5;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\gatling_30mm\30mm_02_burst",5.6234136,1,1500,{2,45447}};
				soundBegin[] = {"begin1",1};
			};
			soundContinuous = 1;
			flash = "gunfire";
			flashSize = 0.1;
			recoil = "Empty";
			ffMagnitude = 0.5;
			ffFrequency = 11;
			ffCount = 6;
			reloadTime = 0.08;
			dispersion = 0.0044;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 1;
			midRangeProbab = 0.01;
			maxRange = 2;
			maxRangeProbab = 0.01;
		};
		class close: LowROF
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 16;
			burstRangeMax = 37;
			aiRateOfFire = 0.5;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 50;
			midRangeProbab = 0.65;
			maxRange = 400;
			maxRangeProbab = 0.75;
		};
		class near: close{};
		class short: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 12;
			burstRangeMax = 32;
			aiRateOfFire = 1;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 200;
			minRange = 200;
			minRangeProbab = 0.65;
			midRange = 400;
			midRangeProbab = 0.75;
			maxRange = 1000;
			maxRangeProbab = 0.7;
		};
		class medium: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 12;
			burstRangeMax = 28;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 800;
			minRange = 800;
			minRangeProbab = 0.7;
			midRange = 1400;
			midRangeProbab = 0.4;
			maxRange = 1800;
			maxRangeProbab = 0.15;
		};
		class far: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 9;
			burstRangeMax = 20;
			aiRateOfFire = 4;
			aiRateOfFireDispersion = 4;
			aiRateOfFireDistance = 1400;
			minRange = 1400;
			minRangeProbab = 0.5;
			midRange = 1800;
			midRangeProbab = 0.15;
			maxRange = 2500;
			maxRangeProbab = 0.05;
		};
	};
	class gatling_30mm: gatling_30mm_base
	{
		scope = 1;
		muzzles[] = {"HE","AP"};
		class HE: gatling_30mm_base
		{
			magazines[] = {"250Rnd_30mm_HE_shells","250Rnd_30mm_HE_shells_Tracer_Red","250Rnd_30mm_HE_shells_Tracer_Green"};
			class LowROF: LowROF
			{
				dispersion = 0.0066;
			};
		};
		class AP: gatling_30mm_base
		{
			magazines[] = {"250Rnd_30mm_APDS_shells","250Rnd_30mm_APDS_shells_Tracer_Red","250Rnd_30mm_APDS_shells_Tracer_Green","250Rnd_30mm_APDS_shells_Tracer_Yellow"};
		};
	};
	class missiles_ASRAAM: MissileLauncher
	{
		displayName = "$STR_A3_missiles_ASRAAM0";
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F\weapons\Rockets\missile_2",1.1220185,1.3,1000};
			soundBegin[] = {"begin1",1};
		};
		lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.56234133,1};
		lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",0.56234133,2.5};
		reloadTime = 0.1;
		magazineReloadTime = 0.1;
		magazines[] = {"2Rnd_AAA_missiles","2Rnd_AAA_missiles_MI02","2Rnd_AAA_missiles_MI06","4Rnd_AAA_missiles","4Rnd_AAA_missiles_MI02","PylonRack_1Rnd_AAA_missiles","PylonMissile_1Rnd_AAA_missiles"};
		holdsterAnimValue = 1;
		weaponLockDelay = 3.0;
		weaponLockSystem = 2;
		cmImmunity = 0.6;
		textureType = "semi";
		showAimCursorInternal = 0;
		minRange = 200;
		minRangeProbab = 0.25;
		midRange = 1250;
		midRangeProbab = 0.95;
		maxRange = 6000;
		maxRangeProbab = 0.85;
	};
	class missiles_SCALPEL: RocketPods
	{
		autoFire = 0;
		displayName = "$STR_A3_missiles_SCALPEL0";
		magazines[] = {"2Rnd_LG_scalpel","8Rnd_LG_scalpel","6Rnd_LG_scalpel","PylonRack_1Rnd_LG_scalpel","PylonMissile_1Rnd_LG_scalpel","PylonRack_3Rnd_LG_scalpel","PylonRack_4Rnd_LG_scalpel"};
		aiRateOfFire = 5.0;
		aiRateOfFireDistance = 500;
		nameSound = "MissileLauncher";
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F\weapons\Rockets\missile_1",1.1220185,1.3,1000};
			soundBegin[] = {"begin1",1};
		};
		lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.56234133,1};
		lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",0.56234133,2.5};
		cursor = "EmptyCursor";
		cursorAim = "missile";
		showAimCursorInternal = 0;
		weaponLockDelay = 3.0;
		weaponLockSystem = 2;
		cmImmunity = 0.4;
		textureType = "semi";
		modes[] = {"TopDown"};
		class TopDown: RocketPods
		{
			textureType = "topDown";
			displayName = "$STR_A3_missiles_SCALPEL0";
			reloadTime = 0.1;
			magazineReloadTime = 0.1;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\weapons\Rockets\missile_1",1.1220185,1.3,1000};
				soundBegin[] = {"begin1",1};
			};
			lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.56234133,1};
			lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",0.56234133,2.5};
			aiRateOfFire = 5.0;
			aiRateOfFireDistance = 500;
			showToPlayer = 1;
			minRange = 400;
			minRangeProbab = 0.2;
			midRange = 800;
			midRangeProbab = 0.96;
			maxRange = 6000;
			maxRangeProbab = 0.92;
		};
	};
	class missiles_titan: MissileLauncher
	{
		displayName = "$STR_A3_missiles_titan0";
		showAimCursorInternal = 0;
		magazineReloadTime = 30;
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\reload_Missile_Launcher",0.8912509,1,10};
		lockingTargetSound[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Locking_Titan",0.56234133,1};
		lockedTargetSound[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Locked_Titan",0.56234133,2.5};
		magazines[] = {"2Rnd_GAT_missiles","2Rnd_GAT_missiles_O","5Rnd_GAT_missiles","4Rnd_GAA_missiles","4Rnd_Titan_long_missiles","4Rnd_Titan_long_missiles_O"};
		weaponLockDelay = 3.0;
		weaponLockSystem = 2;
		cmImmunity = 0.5;
		modes[] = {"Player","TopDown"};
		class Player: MissileLauncher
		{
			textureType = "semi";
			reloadTime = 1;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Titan",1.4125376,1,1100};
				soundBegin[] = {"begin1",1};
			};
			minRange = 100;
			minRangeProbab = 0.5;
			midRange = 600;
			midRangeProbab = 0.85;
			maxRange = 5000;
			maxRangeProbab = 0.9;
		};
		class TopDown: Player
		{
			textureType = "topDown";
			displayName = "Top-down";
			minRange = 200;
			minRangeProbab = 0.4;
			midRange = 1000;
			midRangeProbab = 0.9;
			maxRange = 5000;
			maxRangeProbab = 0.95;
		};
	};
	class missiles_titan_AA: missiles_titan
	{
		magazines[] = {"4Rnd_GAA_missiles","4Rnd_Titan_long_missiles","4Rnd_Titan_long_missiles_O"};
		magazineReloadTime = 50;
		cmImmunity = 0.6;
		class Player: Player
		{
			minRange = 100;
			minRangeProbab = 0.3;
			midRange = 1500;
			midRangeProbab = 0.9;
			maxRange = 6000;
			maxRangeProbab = 0.9;
		};
	};
	class missiles_titan_static: missiles_titan
	{
		magazines[] = {"1Rnd_GAT_missiles","1Rnd_GAA_missiles"};
		magazineReloadTime = 8;
		showAimCursorInternal = 1;
	};
	class rockets_Skyfire: RocketPods
	{
		displayName = "$STR_A3_rockets_Skyfire0";
		magazines[] = {"14Rnd_80mm_rockets","38Rnd_80mm_rockets","PylonRack_19Rnd_Rocket_Skyfire"};
		canLock = 0;
		ballisticsComputer = 8;
		modes[] = {"Far_AI","Medium_AI","Close_AI","Burst"};
		class Far_AI: RocketPods
		{
			displayName = "$STR_A3_missiles_dar0";
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\weapons\Rockets\missile_2",1.1220185,1,1100};
				soundBegin[] = {"begin1",1};
			};
			autoFire = 0;
			reloadTime = 0.08;
			dispersion = 0.025;
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 4;
			aiRateOfFire = 4;
			aiRateOfFireDispersion = 4;
			aiRateOfFireDistance = 1000;
			minRange = 1000;
			minRangeProbab = 0.7;
			midRange = 1500;
			midRangeProbab = 0.7;
			maxRange = 3200;
			maxRangeProbab = 0.1;
		};
		class Medium_AI: Far_AI
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 6;
			aiRateOfFire = 3;
			aiRateOfFireDispersion = 3;
			aiRateOfFireDistance = 1000;
			minRange = 400;
			minRangeProbab = 0.1;
			midRange = 800;
			midRangeProbab = 0.7;
			maxRange = 1200;
			maxRangeProbab = 0.75;
		};
		class Close_AI: Far_AI
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 42;
			aiRateOfFire = 0.5;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.4;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.2;
		};
		class Burst: RocketPods
		{
			displayName = "$STR_A3_rockets_Skyfire_Burst0";
			textureType = "fullAuto";
			autoFire = 1;
			burst = 1;
			reloadTime = 0.08;
			dispersion = 0.025;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 1;
			midRangeProbab = 0.01;
			maxRange = 2;
			maxRangeProbab = 0.01;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\weapons\Rockets\missile_2",1.1220185,1,1100};
				soundBegin[] = {"begin1",1};
			};
			soundContinuous = 0;
		};
	};
	class LMG_Minigun2: LMG_Minigun
	{
		class GunParticles
		{
			class effect1
			{
				positionName = "machinegun2_eject_pos";
				directionName = "machinegun2_eject_dir";
				effectName = "MachineGunCartridge1";
			};
			class effect2
			{
				positionName = "machinegun2_end";
				directionName = "machinegun2_beg";
				effectName = "MachineGun1";
			};
		};
	};
	class LMG_Minigun_Transport: LMG_Minigun
	{
		class GunParticles
		{
			class effect1
			{
				positionName = "machinegun_eject_pos";
				directionName = "machinegun_eject_dir";
				effectName = "MachineGunCartridgeShort1";
			};
			class effect2
			{
				positionName = "machinegun_end";
				directionName = "machinegun_beg";
				effectName = "MachineGun1";
			};
		};
	};
	class LMG_Minigun_Transport2: LMG_Minigun_Transport
	{
		class GunParticles
		{
			class effect1
			{
				positionName = "machinegun2_eject_pos";
				directionName = "machinegun2_eject_dir";
				effectName = "MachineGunCartridgeShort1";
			};
			class effect2
			{
				positionName = "machinegun2_end";
				directionName = "machinegun2_beg";
				effectName = "MachineGun1";
			};
		};
	};
	class SEARCHLIGHT: MGun
	{
		scope = 1;
		displayName = "$STR_A3_cfgWeapons_SEARCHLIGHT0";
		cursorAim = "EmptyCursor";
		cursor = "EmptyCursor";
	};
	class cannon_120mm: CannonCore
	{
		scope = 1;
		displayName = "$STR_A3_cannon_120mm0";
		cursor = "EmptyCursor";
		cursorAim = "cannon";
		showAimCursorInternal = 0;
		nameSound = "cannon";
		reloadSound[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_120mm\Cannon_120mm_Reload_01",2.5118864,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_120mm\Cannon_120mm_Reload_01",2.5118864,1,10};
		magazines[] = {"32Rnd_120mm_APFSDS_shells","32Rnd_120mm_APFSDS_shells_Tracer_Red","32Rnd_120mm_APFSDS_shells_Tracer_Green","32Rnd_120mm_APFSDS_shells_Tracer_Yellow","30Rnd_120mm_APFSDS_shells","30Rnd_120mm_APFSDS_shells_Tracer_Red","30Rnd_120mm_APFSDS_shells_Tracer_Green","30Rnd_120mm_APFSDS_shells_Tracer_Yellow","28Rnd_120mm_APFSDS_shells","28Rnd_120mm_APFSDS_shells_Tracer_Red","28Rnd_120mm_APFSDS_shells_Tracer_Green","28Rnd_120mm_APFSDS_shells_Tracer_Yellow","24Rnd_120mm_APFSDS_shells","24Rnd_120mm_APFSDS_shells_Tracer_Red","24Rnd_120mm_APFSDS_shells_Tracer_Green","24Rnd_120mm_APFSDS_shells_Tracer_Yellow","20Rnd_120mm_APFSDS_shells","20Rnd_120mm_APFSDS_shells_Tracer_Red","20Rnd_120mm_APFSDS_shells_Tracer_Green","20Rnd_120mm_APFSDS_shells_Tracer_Yellow","12Rnd_120mm_APFSDS_shells","12Rnd_120mm_APFSDS_shells_Tracer_Red","12Rnd_120mm_APFSDS_shells_Tracer_Green","12Rnd_120mm_APFSDS_shells_Tracer_Yellow","20Rnd_120mm_HEAT_MP","20Rnd_120mm_HEAT_MP_T_Red","20Rnd_120mm_HEAT_MP_T_Green","20Rnd_120mm_HEAT_MP_T_Yellow","12Rnd_120mm_HEAT_MP","12Rnd_120mm_HEAT_MP_T_Red","12Rnd_120mm_HEAT_MP_T_Green","12Rnd_120mm_HEAT_MP_T_Yellow","8Rnd_120mm_HEAT_MP","8Rnd_120mm_HEAT_MP_T_Red","8Rnd_120mm_HEAT_MP_T_Green","8Rnd_120mm_HEAT_MP_T_Yellow","30Rnd_120mm_HE_shells","30Rnd_120mm_HE_shells_Tracer_Red","30Rnd_120mm_HE_shells_Tracer_Green","30Rnd_120mm_HE_shells_Tracer_Yellow","16Rnd_120mm_HE_shells","16Rnd_120mm_HE_shells_Tracer_Red","16Rnd_120mm_HE_shells_Tracer_Green","16Rnd_120mm_HE_shells_Tracer_Yellow","14Rnd_120mm_HE_shells","14Rnd_120mm_HE_shells_Tracer_Red","14Rnd_120mm_HE_shells_Tracer_Green","14Rnd_120mm_HE_shells_Tracer_Yellow","12Rnd_120mm_HE_shells","12Rnd_120mm_HE_shells_Tracer_Red","12Rnd_120mm_HE_shells_Tracer_Green","12Rnd_120mm_HE_shells_Tracer_Yellow","8Rnd_120mm_HE_shells","8Rnd_120mm_HE_shells_Tracer_Red","8Rnd_120mm_HE_shells_Tracer_Green","8Rnd_120mm_HE_shells_Tracer_Yellow","4Rnd_120mm_cannon_missiles","4Rnd_120mm_LG_cannon_missiles"};
		reloadTime = 6;
		magazineReloadTime = 6;
		autoReload = 1;
		canLock = 0;
		ballisticsComputer = "2 + 16";
		FCSMaxLeadSpeed = 25;
		FCSZeroingDelay = 1;
		aiDispersionCoefY = 2;
		aiDispersionCoefX = 2;
		autoFire = 0;
		modes[] = {"player","topDown","close","short","medium","far"};
		class GunParticles
		{
			class FirstEffect
			{
				effectName = "CannonFired";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};
		class player: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_120mm\slammer_120mm_distant",3.1622777,1,1500};
				soundBegin[] = {"begin1",1};
			};
			soundContinuous = 0;
			reloadTime = 6;
			magazineReloadTime = 6;
			autoReload = 1;
			autoFire = 0;
			dispersion = 0.00057;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 1;
			midRangeProbab = 0.01;
			maxRange = 2;
			maxRangeProbab = 0.01;
		};
		class TopDown: player
		{
			textureType = "topDown";
			displayName = "$STR_A3_FireMode_TopDown0";
			minRange = 150;
			minRangeProbab = 0.4;
			midRange = 400;
			midRangeProbab = 0.95;
			maxRange = 8000;
			maxRangeProbab = 0.95;
		};
		class close: player
		{
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 1;
			aiRateOfFire = 6;
			aiRateOfFireDispersion = 0.5;
			aiRateOfFireDistance = 500;
			minRange = 5;
			minRangeProbab = 0.1;
			midRange = 500;
			midRangeProbab = 0.8;
			maxRange = 1000;
			maxRangeProbab = 0.85;
		};
		class short: close
		{
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 1;
			aiRateOfFire = 6;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 1000;
			minRange = 500;
			minRangeProbab = 0.3;
			midRange = 1000;
			midRangeProbab = 0.85;
			maxRange = 1500;
			maxRangeProbab = 0.85;
		};
		class medium: close
		{
			dispersion = 0.0007125;
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 1;
			aiRateOfFire = 8;
			aiRateOfFireDispersion = 4;
			aiRateOfFireDistance = 1250;
			minRange = 1000;
			minRangeProbab = 0.6;
			midRange = 1500;
			midRangeProbab = 0.85;
			maxRange = 2000;
			maxRangeProbab = 0.8;
		};
		class far: close
		{
			dispersion = 0.0007125;
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 1;
			aiRateOfFire = 10;
			aiRateOfFireDispersion = 8;
			aiRateOfFireDistance = 1500;
			minRange = 1500;
			minRangeProbab = 0.75;
			midRange = 2000;
			midRangeProbab = 0.8;
			maxRange = 3500;
			maxRangeProbab = 0.05;
		};
	};
	class cannon_125mm: CannonCore
	{
		scope = 1;
		displayName = "$STR_A3_cannon_125mm0";
		cursor = "EmptyCursor";
		cursorAim = "cannon";
		showAimCursorInternal = 0;
		nameSound = "cannon";
		reloadSound[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_125mm\Cannon_125mm_Reload_01",2.5118864,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_125mm\Cannon_125mm_Reload_01",2.5118864,1,10};
		magazines[] = {"24Rnd_125mm_APFSDS","24Rnd_125mm_APFSDS_T_Red","24Rnd_125mm_APFSDS_T_Green","24Rnd_125mm_APFSDS_T_Yellow","20Rnd_125mm_APFSDS","20Rnd_125mm_APFSDS_T_Red","20Rnd_125mm_APFSDS_T_Green","20Rnd_125mm_APFSDS_T_Yellow","16Rnd_125mm_APFSDS","16Rnd_125mm_APFSDS_T_Red","16Rnd_125mm_APFSDS_T_Green","16Rnd_125mm_APFSDS_T_Yellow","12Rnd_125mm_HEAT","12Rnd_125mm_HEAT_T_Red","12Rnd_125mm_HEAT_T_Green","12Rnd_125mm_HEAT_T_Yellow","12Rnd_125mm_HE","12Rnd_125mm_HE_T_Red","12Rnd_125mm_HE_T_Green","12Rnd_125mm_HE_T_Yellow","8Rnd_125mm_HE","8Rnd_125mm_HE_T_Red","8Rnd_125mm_HE_T_Green","8Rnd_125mm_HE_T_Yellow","4Rnd_125mm_cannon_missiles"};
		reloadTime = 6;
		magazineReloadTime = 6;
		autoReload = 1;
		canLock = 0;
		ballisticsComputer = "2 + 16";
		FCSMaxLeadSpeed = 25;
		FCSZeroingDelay = 1;
		aiDispersionCoefY = 2;
		aiDispersionCoefX = 2;
		autoFire = 0;
		modes[] = {"player","close","short","medium","far"};
		class GunParticles
		{
			class FirstEffect
			{
				effectName = "CannonFired";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};
		class player: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_125mm\varsuk_125mm_distant",3.1622777,1,1500};
				soundBegin[] = {"begin1",1};
			};
			soundContinuous = 0;
			reloadTime = 6;
			magazineReloadTime = 6;
			autoReload = 1;
			autoFire = 0;
			dispersion = 0.00068;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 1;
			midRangeProbab = 0.01;
			maxRange = 2;
			maxRangeProbab = 0.01;
		};
		class close: player
		{
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 1;
			aiRateOfFire = 6;
			aiRateOfFireDispersion = 0.5;
			aiRateOfFireDistance = 500;
			minRange = 5;
			minRangeProbab = 0.1;
			midRange = 500;
			midRangeProbab = 0.8;
			maxRange = 1000;
			maxRangeProbab = 0.85;
		};
		class short: close
		{
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 1;
			aiRateOfFire = 6;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 1000;
			minRange = 500;
			minRangeProbab = 0.3;
			midRange = 1000;
			midRangeProbab = 0.85;
			maxRange = 1500;
			maxRangeProbab = 0.85;
		};
		class medium: close
		{
			dispersion = 0.00085;
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 1;
			aiRateOfFire = 8;
			aiRateOfFireDispersion = 4;
			aiRateOfFireDistance = 1250;
			minRange = 1000;
			minRangeProbab = 0.6;
			midRange = 1500;
			midRangeProbab = 0.85;
			maxRange = 2000;
			maxRangeProbab = 0.8;
		};
		class far: close
		{
			dispersion = 0.00085;
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 1;
			aiRateOfFire = 10;
			aiRateOfFireDispersion = 8;
			aiRateOfFireDistance = 1500;
			minRange = 1500;
			minRangeProbab = 0.75;
			midRange = 2000;
			midRangeProbab = 0.8;
			maxRange = 3500;
			maxRangeProbab = 0.05;
		};
	};
	class cannon_105mm: CannonCore
	{
		scope = 1;
		displayName = "$STR_A3_cannon_105mm0";
		cursor = "EmptyCursor";
		cursorAim = "cannon";
		showAimCursorInternal = 0;
		nameSound = "cannon";
		reloadSound[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_105mm\Cannon_105mm_Reload_01",2.5118864,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_105mm\Cannon_105mm_Reload_01",2.5118864,1,10};
		magazines[] = {"40Rnd_105mm_APFSDS","40Rnd_105mm_APFSDS_T_Red","40Rnd_105mm_APFSDS_T_Green","40Rnd_105mm_APFSDS_T_Yellow","20Rnd_105mm_HEAT_MP","20Rnd_105mm_HEAT_MP_T_Red","20Rnd_105mm_HEAT_MP_T_Green","20Rnd_105mm_HEAT_MP_T_Yellow"};
		reloadTime = 5;
		magazineReloadTime = 5;
		autoReload = 1;
		canLock = 0;
		ballisticsComputer = "2 + 16";
		FCSMaxLeadSpeed = 25;
		FCSZeroingDelay = 1;
		aiDispersionCoefY = 2;
		aiDispersionCoefX = 2;
		autoFire = 0;
		modes[] = {"player","close","short","medium","far"};
		class GunParticles
		{
			class FirstEffect
			{
				effectName = "CannonFired";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};
		class player: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_105mm\slammer_105mm_distant",3.1622777,1,1500};
				soundBegin[] = {"begin1",1};
			};
			soundContinuous = 0;
			reloadTime = 5;
			magazineReloadTime = 5;
			autoReload = 1;
			autoFire = 0;
			dispersion = 0.0006;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 1;
			midRangeProbab = 0.01;
			maxRange = 2;
			maxRangeProbab = 0.01;
		};
		class close: player
		{
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 1;
			aiRateOfFire = 6;
			aiRateOfFireDispersion = 0.5;
			aiRateOfFireDistance = 500;
			minRange = 5;
			minRangeProbab = 0.1;
			midRange = 500;
			midRangeProbab = 0.8;
			maxRange = 1000;
			maxRangeProbab = 0.85;
		};
		class short: close
		{
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 1;
			aiRateOfFire = 6;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 1000;
			minRange = 500;
			minRangeProbab = 0.3;
			midRange = 1000;
			midRangeProbab = 0.85;
			maxRange = 1500;
			maxRangeProbab = 0.85;
		};
		class medium: close
		{
			dispersion = 0.00075;
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 1;
			aiRateOfFire = 8;
			aiRateOfFireDispersion = 4;
			aiRateOfFireDistance = 1250;
			minRange = 1000;
			minRangeProbab = 0.6;
			midRange = 1500;
			midRangeProbab = 0.85;
			maxRange = 2000;
			maxRangeProbab = 0.8;
		};
		class far: close
		{
			dispersion = 0.00075;
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 1;
			aiRateOfFire = 10;
			aiRateOfFireDispersion = 8;
			aiRateOfFireDistance = 1500;
			minRange = 1500;
			minRangeProbab = 0.75;
			midRange = 2000;
			midRangeProbab = 0.8;
			maxRange = 3500;
			maxRangeProbab = 0.05;
		};
	};
	class gatling_25mm: CannonCore
	{
		scope = 1;
		displayName = "$STR_A3_gatling_25mm0";
		nameSound = "cannon";
		cursor = "EmptyCursor";
		cursorAim = "mg";
		magazines[] = {"1000Rnd_25mm_shells","300Rnd_25mm_shells"};
		canLock = 0;
		modes[] = {"manual","close","short","medium","far"};
		class manual: CannonCore
		{
			displayName = "$STR_A3_gatling_25mm_manual0";
			autoFire = 1;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\weapons\30mm\30mm_st_02",1.9952624,1,1500};
				soundBegin[] = {"begin1",1};
			};
			soundContinuous = 0;
			showToPlayer = 1;
			burst = 1;
			textureType = "fullAuto";
			reloadTime = 0.01;
			dispersion = 0.0055;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 1;
			midRangeProbab = 0.01;
			maxRange = 2;
			maxRangeProbab = 0.01;
		};
		class close: manual
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 12;
			burstRangeMax = 28;
			aiRateOfFire = 0.5;
			aiRateOfFireDispersion = 0.5;
			aiRateOfFireDistance = 200;
			minRange = 1;
			minRangeProbab = 0.1;
			midRange = 100;
			midRangeProbab = 0.75;
			maxRange = 400;
			maxRangeProbab = 0.85;
		};
		class short: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 18;
			burstRangeMax = 42;
			aiRateOfFire = 1;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 300;
			minRange = 200;
			minRangeProbab = 0.3;
			midRange = 400;
			midRangeProbab = 0.85;
			maxRange = 750;
			maxRangeProbab = 0.85;
		};
		class medium: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 18;
			burstRangeMax = 42;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 800;
			minRange = 600;
			minRangeProbab = 0.6;
			midRange = 750;
			midRangeProbab = 0.85;
			maxRange = 1250;
			maxRangeProbab = 0.6;
		};
		class far: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 18;
			burstRangeMax = 42;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 3;
			aiRateOfFireDistance = 1200;
			minRange = 1000;
			minRangeProbab = 0.7;
			midRange = 1250;
			midRangeProbab = 0.6;
			maxRange = 2500;
			maxRangeProbab = 0.1;
		};
	};
	class autocannon_35mm: CannonCore
	{
		scope = 1;
		displayName = "$STR_A3_autocannon_35mm0";
		nameSound = "cannon";
		cursor = "EmptyCursor";
		cursorAim = "mg";
		magazines[] = {"680Rnd_35mm_AA_shells","680Rnd_35mm_AA_shells_Tracer_Red","680Rnd_35mm_AA_shells_Tracer_Green","680Rnd_35mm_AA_shells_Tracer_Yellow"};
		magazineReloadTime = 20;
		modes[] = {"manual","close","short","medium","far"};
		canLock = 0;
		ballisticsComputer = "2 + 4";
		class GunParticles
		{
			class FirstEffect
			{
				effectName = "MachineGun1";
				positionName = "Usti hlavne 1";
				directionName = "Konec hlavne 1";
			};
			class SecondEffect
			{
				effectName = "MachineGun1";
				positionName = "Usti hlavne 2";
				directionName = "Konec hlavne 2";
			};
		};
		class manual: CannonCore
		{
			displayName = "$STR_A3_autocannon_35mm_manual0";
			textureType = "fullAuto";
			autoFire = 1;
			burst = 2;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\autocannon_35mm\autocannon_35mm_01",1.7782794,1,2000};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\autocannon_35mm\autocannon_35mm_02",1.7782794,1,2000};
				begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\autocannon_35mm\autocannon_35mm_03",1.7782794,1,2000};
				soundBegin[] = {"begin1",33,"begin2",33,"begin3",33};
			};
			soundContinuous = 0;
			soundBurst = 0;
			reloadTime = 0.0545455;
			dispersion = 0.0045;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 1;
			midRangeProbab = 0.01;
			maxRange = 2;
			maxRangeProbab = 0.01;
		};
		class close: manual
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 12;
			burstRangeMax = 28;
			aiRateOfFire = 0.5;
			aiRateOfFireDispersion = 0.5;
			aiRateOfFireDistance = 200;
			minRange = 1;
			minRangeProbab = 0.1;
			midRange = 100;
			midRangeProbab = 0.75;
			maxRange = 400;
			maxRangeProbab = 0.85;
		};
		class short: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 18;
			burstRangeMax = 42;
			aiRateOfFire = 1;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 300;
			minRange = 200;
			minRangeProbab = 0.3;
			midRange = 400;
			midRangeProbab = 0.85;
			maxRange = 750;
			maxRangeProbab = 0.85;
		};
		class medium: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 18;
			burstRangeMax = 42;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 800;
			minRange = 600;
			minRangeProbab = 0.6;
			midRange = 750;
			midRangeProbab = 0.85;
			maxRange = 1250;
			maxRangeProbab = 0.6;
		};
		class far: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 18;
			burstRangeMax = 42;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 3;
			aiRateOfFireDistance = 1200;
			minRange = 1000;
			minRangeProbab = 0.7;
			midRange = 1250;
			midRangeProbab = 0.6;
			maxRange = 2500;
			maxRangeProbab = 0.1;
		};
	};
	class mortar_155mm_AMOS: CannonCore
	{
		scope = 1;
		displayName = "$STR_A3_mortar_120mm_AMOS0";
		nameSound = "cannon";
		cursor = "mortar";
		cursorAim = "EmptyCursor";
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_155mm\sochor_155mm_distant",2.5118864,1,1500};
			soundBegin[] = {"begin1",1};
		};
		reloadSound[] = {"A3\Sounds_F\vehicles\armor\noises\reload_tank_cannon_2",31.622778,1,15};
		reloadTime = 7;
		magazineReloadTime = 7;
		autoReload = 1;
		canLock = 0;
		magazines[] = {"32Rnd_155mm_Mo_shells","32Rnd_155mm_Mo_shells_O","6Rnd_155mm_Mo_smoke","6Rnd_155mm_Mo_smoke_O","2Rnd_155mm_Mo_guided","4Rnd_155mm_Mo_guided","4Rnd_155mm_Mo_guided_O","2Rnd_155mm_Mo_LG","4Rnd_155mm_Mo_LG","4Rnd_155mm_Mo_LG_O","6Rnd_155mm_Mo_mine","6Rnd_155mm_Mo_mine_O","2Rnd_155mm_Mo_Cluster","2Rnd_155mm_Mo_Cluster_O","6Rnd_155mm_Mo_AT_mine","6Rnd_155mm_Mo_AT_mine_O"};
		modes[] = {"Single1","Single2","Single3","Single4","Single5","Burst1","Burst2","Burst3","Burst4","Burst5"};
		class GunParticles
		{
			class Effect1
			{
				effectName = "ArtilleryFired1";
				positionName = "Usti hlavne3";
				directionName = "Konec hlavne3";
			};
			class Effect2
			{
				effectName = "ArtilleryFiredL";
				positionName = "Usti hlavne";
				directionName = "Usti hlavne b";
			};
			class Effect3
			{
				effectName = "ArtilleryFiredR";
				positionName = "Usti hlavne";
				directionName = "Usti hlavne b";
			};
		};
		class Single1: Mode_SemiAuto
		{
			displayName = "$STR_A3_mortar_120mm_AMOS_Single10";
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_155mm\sochor_155mm_distant",2.5118864,1,1500};
				soundBegin[] = {"begin1",1};
			};
			reloadSound[] = {"A3\sounds_f\dummysound",1.0,1,20};
			reloadTime = 8;
			artilleryDispersion = 3.2;
			artilleryCharge = 0.19;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 1;
			midRangeProbab = 0.01;
			maxRange = 2;
			maxRangeProbab = 0.01;
		};
		class Single2: Single1
		{
			displayName = "$STR_A3_mortar_120mm_AMOS_Single20";
			artilleryCharge = 0.3;
		};
		class Single3: Single1
		{
			displayName = "$STR_A3_mortar_120mm_AMOS_Single30";
			artilleryCharge = 0.48;
		};
		class Single4: Single1
		{
			displayName = "$STR_A3_mortar_120mm_AMOS_Single40";
			artilleryCharge = 0.8;
		};
		class Single5: Single1
		{
			displayName = "$STR_A3_mortar_120mm_AMOS_Single50";
			artilleryCharge = 1;
		};
		class Burst1: Mode_Burst
		{
			showToPlayer = 0;
			displayName = "$STR_A3_mortar_120mm_AMOS_Burst10";
			burst = 6;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_155mm\sochor_155mm_distant",2.5118864,1,1500};
				soundBegin[] = {"begin1",1};
			};
			reloadSound[] = {"A3\sounds_f\dummysound",1.0,1,20};
			soundBurst = 0;
			reloadTime = 6;
			minRange = 800;
			minRangeProbab = 0.5;
			midRange = 1500;
			midRangeProbab = 0.7;
			maxRange = 2000;
			maxRangeProbab = 0.5;
			artilleryDispersion = 5.3;
			artilleryCharge = 0.19;
		};
		class Burst2: Burst1
		{
			showToPlayer = 0;
			displayName = "$STR_A3_mortar_120mm_AMOS_Burst20";
			minRange = 2000;
			minRangeProbab = 0.4;
			midRange = 3000;
			midRangeProbab = 0.6;
			maxRange = 5200;
			maxRangeProbab = 0.4;
			artilleryCharge = 0.3;
		};
		class Burst3: Burst1
		{
			showToPlayer = 0;
			displayName = "$STR_A3_mortar_120mm_AMOS_Burst30";
			minRange = 5200;
			minRangeProbab = 0.3;
			midRange = 8000;
			midRangeProbab = 0.4;
			maxRange = 13300;
			maxRangeProbab = 0.3;
			artilleryCharge = 0.48;
		};
		class Burst4: Burst1
		{
			showToPlayer = 0;
			displayName = "$STR_A3_mortar_120mm_AMOS_Burst40";
			minRange = 14600;
			minRangeProbab = 0.2;
			midRange = 25000;
			midRangeProbab = 0.3;
			maxRange = 37000;
			maxRangeProbab = 0.2;
			artilleryCharge = 0.8;
		};
		class Burst5: Burst1
		{
			showToPlayer = 0;
			displayName = "$STR_A3_mortar_120mm_AMOS_Burst50";
			minRange = 25000;
			minRangeProbab = 0.1;
			midRange = 40000;
			midRangeProbab = 0.2;
			maxRange = 58000;
			maxRangeProbab = 0.1;
			artilleryCharge = 1;
		};
	};
	class missiles_Zephyr: MissileLauncher
	{
		displayName = "$STR_A3_missiles_Zephyr0";
		reloadTime = 1;
		sounds[] = {"StandardSound"};
		lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.56234133,1};
		lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",0.56234133,2.5};
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F\weapons\Rockets\titan_1",2.5118864,1,1100};
			soundBegin[] = {"begin1",1};
		};
		magazines[] = {"4Rnd_GAA_missiles","PylonRack_1Rnd_GAA_missiles","PylonMissile_1Rnd_GAA_missiles"};
		aiRateOfFire = 5.0;
		aiRateOfFireDistance = 4000;
		weaponLockDelay = 1.5;
		weaponLockSystem = 8;
		cmImmunity = 0.6;
		textureType = "semi";
		showAimCursorInternal = 0;
		minRange = 500;
		minRangeProbab = 0.2;
		midRange = 3750;
		midRangeProbab = 0.925;
		maxRange = 10000;
		maxRangeProbab = 1.0;
	};
	class weapon_LGBLauncherBase: RocketPods
	{
		nameSound = "";
		textureType = "semi";
		cursorAim = "bomb";
		showAimCursorInternal = 0;
		aiRateOfFire = 15.0;
		aiRateOfFireDistance = 1000;
		canLock = 0;
		ballisticsComputer = 8;
		weaponLockDelay = 0.1;
		weaponLockSystem = 4;
		cmImmunity = 0.3;
		salvo = 1;
		modes[] = {"LoalAltitude"};
		class LoalAltitude: RocketPods
		{
			textureType = "LOAL";
			displayName = "LOAL";
			minRange = 300;
			minRangeProbab = 0.4;
			midRange = 1000;
			midRangeProbab = 0.95;
			maxRange = 8000;
			maxRangeProbab = 0.9;
		};
	};
	class GBU12BombLauncher: weapon_LGBLauncherBase
	{
		displayName = "$STR_DN_GBU12";
		magazines[] = {"2Rnd_GBU12_LGB","2Rnd_GBU12_LGB_MI10"};
		class LoalAltitude: LoalAltitude
		{
			displayName = "$STR_DN_GBU12";
		};
	};
	class GBU12BombLauncher_Plane_Fighter_03_F: GBU12BombLauncher{};
	class Bomb_04_Plane_CAS_01_F: weapon_LGBLauncherBase
	{
		displayName = "$STR_A3_CFGMAGAZINES_GBU120";
		magazines[] = {"4Rnd_Bomb_04_F","PylonMissile_1Rnd_Bomb_04_F"};
		holdsterAnimValue = 6;
		class LoalAltitude: LoalAltitude
		{
			displayName = "$STR_A3_CFGMAGAZINES_GBU120";
		};
	};
	class Bomb_03_Plane_CAS_02_F: Bomb_04_Plane_CAS_01_F
	{
		displayName = "$STR_A3_Bomb_03_F0";
		magazines[] = {"2Rnd_Bomb_03_F","PylonMissile_1Rnd_Bomb_03_F"};
		class LoalAltitude: LoalAltitude
		{
			displayName = "$STR_A3_Bomb_03_F0";
		};
	};
	class Mk82BombLauncher: RocketPods
	{
		displayName = "$STR_DN_MK82LAUNCHER";
		nameSound = "";
		magazines[] = {"2Rnd_Mk82","2Rnd_Mk82_MI08","PylonMissile_1Rnd_Mk82_F"};
		aiRateOfFire = 5.0;
		aiRateOfFireDistance = 500;
		cursorAim = "bomb";
		showAimCursorInternal = 0;
		textureType = "semi";
		canLock = 0;
		ballisticsComputer = 8;
		salvo = 1;
		minRange = 300;
		minRangeProbab = 0.4;
		midRange = 600;
		midRangeProbab = 0.85;
		maxRange = 4000;
		maxRangeProbab = 0.8;
	};
	class rockets_230mm_GAT: RocketPods
	{
		class gunClouds{};
		displayName = "$STR_A3_CFGMAGAZINES_12RND_230MM_ROCKETS0";
		magazines[] = {"12Rnd_230mm_rockets","12Rnd_230mm_rockets_cluster"};
		magazineReloadTime = 90;
		sounds[] = {"StandardSound"};
		cursorAim = "EmptyCursor";
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F\weapons\Rockets\Titan_2",1.7782794,1,1500};
			soundBegin[] = {"begin1",1};
		};
		class GunParticles
		{
			class FirstEffect
			{
				effectName = "MLRSFired";
				positionName = "Konec hlavne";
				directionName = "Usti hlavne";
			};
		};
		modes[] = {"Mode_1","Mode_2","Mode_3","Mode_4","Mode_5","Mode_6","Mode_7","Mode_8","Mode_9","Mode_10","Mode_11","Mode_12","Mode_13","Mode_14","Mode_15","Mode_16"};
		class Close: RocketPods
		{
			displayName = "$STR_A3_rockets_230mm_GAT_Close0";
			minRange = 800;
			minRangeProbab = 0.15;
			midRange = 2500;
			midRangeProbab = 0.65;
			maxRange = 4600;
			maxRangeProbab = 0.05;
			reloadTime = 0.8;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\weapons\Rockets\Titan_2",1.7782794,1,1500};
				soundBegin[] = {"begin1",1};
			};
			burst = 1;
			autoFire = 0;
			artilleryDispersion = 0.5;
			artilleryCharge = 0.25;
			soundBurst = 0;
			aiRateOfFire = 0.8;
			aiRateOfFireDistance = 2500;
		};
		class Medium: Close
		{
			displayName = "$STR_A3_rockets_230mm_GAT_Medium0";
			minRange = 3100;
			minRangeProbab = 0.15;
			midRange = 12000;
			midRangeProbab = 0.55;
			maxRange = 18400;
			maxRangeProbab = 0.05;
			artilleryDispersion = 0.5;
			artilleryCharge = 0.5;
			aiRateOfFire = 1.8;
			aiRateOfFireDistance = 12000;
		};
		class Far: Close
		{
			displayName = "$STR_A3_rockets_230mm_GAT_Far0";
			minRange = 7100;
			minRangeProbab = 0.15;
			midRange = 25000;
			midRangeProbab = 0.45;
			maxRange = 40000;
			maxRangeProbab = 0.05;
			artilleryDispersion = 0.5;
			artilleryCharge = 0.75;
			aiRateOfFire = 4.0;
			aiRateOfFireDistance = 25000;
		};
		class Full: Close
		{
			displayName = "$STR_A3_rockets_230mm_GAT_Full0";
			minRange = 12800;
			minRangeProbab = 0.15;
			midRange = 45000;
			midRangeProbab = 0.35;
			maxRange = 80000;
			maxRangeProbab = 0.05;
			artilleryDispersion = 0.5;
			artilleryCharge = 1.0;
			aiRateOfFire = 8.0;
			aiRateOfFireDistance = 45000;
		};
		class Mode_1: Close
		{
			displayName = "1000m-1300m";
			artilleryCharge = 0.135;
			minRange = 1000;
			minRangeProbab = 0.15;
			midRange = 1150;
			midRangeProbab = 0.65;
			maxRange = 1300;
			maxRangeProbab = 0.05;
		};
		class Mode_2: Close
		{
			displayName = "1300m-1700m";
			artilleryCharge = 0.153;
			minRange = 1300;
			minRangeProbab = 0.15;
			midRange = 1500;
			midRangeProbab = 0.65;
			maxRange = 1700;
			maxRangeProbab = 0.05;
		};
		class Mode_3: Close
		{
			displayName = "1700m-2200m";
			artilleryCharge = 0.175;
			minRange = 1700;
			minRangeProbab = 0.15;
			midRange = 1950;
			midRangeProbab = 0.65;
			maxRange = 2200;
			maxRangeProbab = 0.05;
		};
		class Mode_4: Close
		{
			displayName = "2200m-2900m";
			artilleryCharge = 0.2;
			minRange = 2200;
			minRangeProbab = 0.15;
			midRange = 2550;
			midRangeProbab = 0.65;
			maxRange = 2900;
			maxRangeProbab = 0.05;
		};
		class Mode_5: Close
		{
			displayName = "2900m-3800m";
			artilleryCharge = 0.228;
			minRange = 2900;
			minRangeProbab = 0.15;
			midRange = 3350;
			midRangeProbab = 0.65;
			maxRange = 3800;
			maxRangeProbab = 0.05;
		};
		class Mode_6: Close
		{
			displayName = "3800m-5000m";
			artilleryCharge = 0.261;
			minRange = 3800;
			minRangeProbab = 0.15;
			midRange = 4400;
			midRangeProbab = 0.65;
			maxRange = 5000;
			maxRangeProbab = 0.05;
		};
		class Mode_7: Close
		{
			displayName = "5000m-6600m";
			artilleryCharge = 0.3;
			minRange = 5000;
			minRangeProbab = 0.15;
			midRange = 5800;
			midRangeProbab = 0.65;
			maxRange = 6600;
			maxRangeProbab = 0.05;
		};
		class Mode_8: Close
		{
			displayName = "6600m-8500m";
			artilleryCharge = 0.341;
			minRange = 6600;
			minRangeProbab = 0.15;
			midRange = 7550;
			midRangeProbab = 0.65;
			maxRange = 8500;
			maxRangeProbab = 0.05;
		};
		class Mode_9: Close
		{
			displayName = "8500m-11000m";
			artilleryCharge = 0.388;
			minRange = 8500;
			minRangeProbab = 0.15;
			midRange = 9750;
			midRangeProbab = 0.65;
			maxRange = 11000;
			maxRangeProbab = 0.05;
		};
		class Mode_10: Close
		{
			displayName = "11000m-14000m";
			artilleryCharge = 0.44;
			minRange = 11000;
			minRangeProbab = 0.15;
			midRange = 12500;
			midRangeProbab = 0.65;
			maxRange = 14000;
			maxRangeProbab = 0.05;
		};
		class Mode_11: Close
		{
			displayName = "14000m-18000m";
			artilleryCharge = 0.495;
			minRange = 14000;
			minRangeProbab = 0.15;
			midRange = 16000;
			midRangeProbab = 0.65;
			maxRange = 18000;
			maxRangeProbab = 0.05;
		};
		class Mode_12: Close
		{
			displayName = "18000m-23000m";
			artilleryCharge = 0.56;
			minRange = 18000;
			minRangeProbab = 0.15;
			midRange = 20500;
			midRangeProbab = 0.65;
			maxRange = 23000;
			maxRangeProbab = 0.05;
		};
		class Mode_13: Close
		{
			displayName = "23000m-30000m";
			artilleryCharge = 0.639;
			minRange = 23000;
			minRangeProbab = 0.15;
			midRange = 26500;
			midRangeProbab = 0.65;
			maxRange = 30000;
			maxRangeProbab = 0.05;
		};
		class Mode_14: Close
		{
			displayName = "30000m-40000m";
			artilleryCharge = 0.74;
			minRange = 30000;
			minRangeProbab = 0.15;
			midRange = 35000;
			midRangeProbab = 0.65;
			maxRange = 40000;
			maxRangeProbab = 0.05;
		};
		class Mode_15: Close
		{
			displayName = "40000m-52000m";
			artilleryCharge = 0.842;
			minRange = 40000;
			minRangeProbab = 0.15;
			midRange = 46000;
			midRangeProbab = 0.65;
			maxRange = 52000;
			maxRangeProbab = 0.05;
		};
		class Mode_16: Close
		{
			displayName = "52000m-67000m";
			artilleryCharge = 0.96;
			minRange = 52000;
			minRangeProbab = 0.15;
			midRange = 59500;
			midRangeProbab = 0.65;
			maxRange = 67000;
			maxRangeProbab = 0.05;
		};
	};
	class LMG_coax: LMG_RCWS
	{
		displayName = "$STR_A3_cfgweapons_coaxial_mg0";
		magazineReloadTime = 10;
		showAimCursorInternal = 0;
		ballisticsComputer = "2 + 16";
		FCSMaxLeadSpeed = 30.5556;
		FCSZeroingDelay = 1;
		maxZeroing = 1500;
		class GunParticles
		{
			class effect1
			{
				positionName = "usti hlavne3";
				directionName = "konec hlavne3";
				effectName = "MachineGunCloud";
			};
		};
		class manual: MGun
		{
			displayName = "$STR_A3_LMG_RCWS0";
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				closure1[] = {"A3\sounds_f\weapons\closure\sfx7",0.56234133,1,40};
				closure2[] = {"A3\sounds_f\weapons\closure\sfx8",0.56234133,1,40};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\LMG_762mm\LMG_762mm_01",1.0,1,2100};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\LMG_762mm\LMG_762mm_02",1.0,1,2100};
				begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\LMG_762mm\LMG_762mm_03",1.0,1,2100};
				soundBegin[] = {"begin1",0.34,"begin2",0.33,"begin3",0.33};
			};
			soundContinuous = 0;
			soundBurst = 0;
			reloadTime = 0.075;
			dispersion = 0.0016;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 1;
			midRangeProbab = 0.01;
			maxRange = 2;
			maxRangeProbab = 0.01;
		};
		class close: manual
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 8;
			burstRangeMax = 16;
			aiRateOfFire = 0.5;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.8;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.2;
		};
		class short: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 6;
			burstRangeMax = 12;
			aiRateOfFire = 1;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 150;
			minRange = 20;
			minRangeProbab = 0.7;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.2;
		};
		class medium: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 3;
			burstRangeMax = 12;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 250;
			minRange = 150;
			minRangeProbab = 0.7;
			midRange = 600;
			midRangeProbab = 0.65;
			maxRange = 800;
			maxRangeProbab = 0.1;
		};
		class far: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 3;
			burstRangeMax = 8;
			aiRateOfFire = 4;
			aiRateOfFireDispersion = 4;
			aiRateOfFireDistance = 600;
			minRange = 600;
			minRangeProbab = 0.65;
			midRange = 800;
			midRangeProbab = 0.4;
			maxRange = 1200;
			maxRangeProbab = 0.1;
		};
		magazines[] = {"200Rnd_762x51_Belt","1000Rnd_762x51_Belt","2000Rnd_762x51_Belt","200Rnd_762x51_Belt_Red","200Rnd_762x51_Belt_Green","200Rnd_762x51_Belt_Yellow","1000Rnd_762x51_Belt_Red","1000Rnd_762x51_Belt_Green","1000Rnd_762x51_Belt_Yellow","2000Rnd_762x51_Belt_Red","2000Rnd_762x51_Belt_Green","2000Rnd_762x51_Belt_Yellow","200Rnd_762x51_Belt_T_Red","200Rnd_762x51_Belt_T_Green","200Rnd_762x51_Belt_T_Yellow","1000Rnd_762x51_Belt_T_Red","1000Rnd_762x51_Belt_T_Green","1000Rnd_762x51_Belt_T_Yellow","2000Rnd_762x51_Belt_T_Red","2000Rnd_762x51_Belt_T_Green","2000Rnd_762x51_Belt_T_Yellow"};
	};
	class LMG_coax_ext: LMG_coax
	{
		magazineReloadTime = 20;
	};
	class autocannon_30mm: autocannon_30mm_CTWS
	{
		displayName = "$STR_A3_cfgweapons_cannon_30mm";
		magazineReloadTime = 20;
		class HE: HE
		{
			class player: player
			{
				sounds[] = {"StandardSound"};
				class StandardSound
				{
					begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_01",1.9952624,1,1500};
					begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_02",1.9952624,1,1500};
					begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_03",1.9952624,1,1500};
					soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				};
			};
			class close: close
			{
				sounds[] = {"StandardSound"};
				class StandardSound
				{
					begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_01",1.9952624,1,1500};
					begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_02",1.9952624,1,1500};
					begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_03",1.9952624,1,1500};
					soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				};
			};
			class short: short
			{
				sounds[] = {"StandardSound"};
				class StandardSound
				{
					begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_01",1.9952624,1,1500};
					begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_02",1.9952624,1,1500};
					begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_03",1.9952624,1,1500};
					soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				};
			};
			class medium: medium
			{
				sounds[] = {"StandardSound"};
				class StandardSound
				{
					begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_01",1.9952624,1,1500};
					begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_02",1.9952624,1,1500};
					begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_03",1.9952624,1,1500};
					soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				};
			};
			class far: far
			{
				sounds[] = {"StandardSound"};
				class StandardSound
				{
					begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_01",1.9952624,1,1500};
					begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_02",1.9952624,1,1500};
					begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_03",1.9952624,1,1500};
					soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				};
			};
		};
		class AP: AP
		{
			class player: player
			{
				sounds[] = {"StandardSound"};
				class StandardSound
				{
					begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_01",1.9952624,1,1500};
					begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_02",1.9952624,1,1500};
					begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_03",1.9952624,1,1500};
					soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				};
			};
			class close: close
			{
				sounds[] = {"StandardSound"};
				class StandardSound
				{
					begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_01",1.9952624,1,1500};
					begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_02",1.9952624,1,1500};
					begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_03",1.9952624,1,1500};
					soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				};
			};
			class short: short
			{
				sounds[] = {"StandardSound"};
				class StandardSound
				{
					begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_01",1.9952624,1,1500};
					begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_02",1.9952624,1,1500};
					begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_03",1.9952624,1,1500};
					soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				};
			};
			class medium: medium
			{
				sounds[] = {"StandardSound"};
				class StandardSound
				{
					begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_01",1.9952624,1,1500};
					begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_02",1.9952624,1,1500};
					begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_03",1.9952624,1,1500};
					soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				};
			};
			class far: far
			{
				sounds[] = {"StandardSound"};
				class StandardSound
				{
					begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_01",1.9952624,1,1500};
					begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_02",1.9952624,1,1500};
					begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_03",1.9952624,1,1500};
					soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				};
			};
		};
	};
	class cannon_120mm_long: cannon_120mm
	{
		class player: player
		{
			dispersion = 0.0005;
		};
		class close: close
		{
			dispersion = 0.0005;
		};
		class short: short
		{
			dispersion = 0.0005;
		};
		class medium: close
		{
			dispersion = 0.000625;
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 1;
			aiRateOfFire = 8;
			aiRateOfFireDispersion = 4;
			aiRateOfFireDistance = 1250;
			minRange = 1000;
			minRangeProbab = 0.6;
			midRange = 1500;
			midRangeProbab = 0.85;
			maxRange = 2000;
			maxRangeProbab = 0.8;
		};
		class far: close
		{
			dispersion = 0.000625;
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 1;
			aiRateOfFire = 10;
			aiRateOfFireDispersion = 8;
			aiRateOfFireDistance = 1500;
			minRange = 1500;
			minRangeProbab = 0.75;
			midRange = 2000;
			midRangeProbab = 0.8;
			maxRange = 3500;
			maxRangeProbab = 0.05;
		};
	};
	class Twin_Cannon_20mm: gatling_20mm
	{
		displayName = "$STR_A3_twin_cannon_20mm";
		showAimCursorInternal = 0;
		canLock = 0;
		ballisticsComputer = "4 + 8";
		class manual: manual
		{
			displayName = "$STR_A3_twin_cannon_20mm";
			dispersion = 0.003;
		};
	};
	class Twin_Cannon_20mm_gunpod: Twin_Cannon_20mm
	{
		class GunParticles
		{
			class Effect
			{
				effectName = "MachineGun1";
				positionName = "muzzlePos";
				directionName = "muzzleEnd";
			};
		};
	};
	class Gatling_30mm_Plane_CAS_01_F: CannonCore
	{
		scope = 1;
		displayName = "$STR_A3_Gatling_30mm_Plane_CAS_01_F0";
		magazines[] = {"1000Rnd_Gatling_30mm_Plane_CAS_01_F"};
		holdsterAnimValue = 1;
		canLock = 0;
		ballisticsComputer = 8;
		cursor = "EmptyCursor";
		cursorAim = "mg";
		showAimCursorInternal = 0;
		modes[] = {"LowROF","close","short","medium","far"};
		nameSound = "cannon";
		shotFromTurret = 0;
		muzzlePos = "Gatling_muzzleflash";
		muzzleEnd = "Gatling_barrels_end";
		selectionFireAnim = "Gatling_muzzleflash";
		autoFire = 0;
		burst = 20;
		aiDispersionCoefY = 0.5;
		aiDispersionCoefX = 0.5;
		class GunParticles
		{
			class Effect
			{
				effectName = "MachineGun3";
				positionName = "Gatling_barrels_end";
				directionName = "Gatling_barrels_start";
			};
		};
		class LowROF: Mode_FullAuto
		{
			displayName = "$STR_A3_Gatling_30mm_Plane_CAS_01_F0";
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\gatling_30mm\30mm_01_burst",5.6234136,1,1500,{25704,32159}};
				soundBegin[] = {"begin1",1};
			};
			soundContinuous = 1;
			autoFire = 1;
			flash = "gunfire";
			flashSize = 0.1;
			recoil = "Empty";
			ffMagnitude = 0.5;
			ffFrequency = 11;
			ffCount = 6;
			burst = 20;
			showToPlayer = 1;
			reloadTime = 0.03;
			dispersion = 0.0095;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 1;
			midRangeProbab = 0.01;
			maxRange = 2;
			maxRangeProbab = 0.01;
		};
		class close: LowROF
		{
			showToPlayer = 0;
			burst = 33;
			burstRangeMax = 100;
			aiRateOfFire = 1;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 200;
			minRange = 1;
			minRangeProbab = 0.1;
			midRange = 100;
			midRangeProbab = 0.5;
			maxRange = 400;
			maxRangeProbab = 0.85;
		};
		class near: close{};
		class short: close
		{
			showToPlayer = 0;
			burst = 33;
			burstRangeMax = 100;
			aiRateOfFire = 1;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 300;
			minRange = 200;
			minRangeProbab = 0.3;
			midRange = 400;
			midRangeProbab = 0.85;
			maxRange = 750;
			maxRangeProbab = 0.9;
		};
		class medium: close
		{
			showToPlayer = 0;
			burst = 33;
			burstRangeMax = 67;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 800;
			minRange = 600;
			minRangeProbab = 0.6;
			midRange = 750;
			midRangeProbab = 0.9;
			maxRange = 1000;
			maxRangeProbab = 0.75;
		};
		class far: close
		{
			showToPlayer = 0;
			burst = 33;
			burstRangeMax = 67;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 3;
			aiRateOfFireDistance = 1200;
			minRange = 900;
			minRangeProbab = 0.84;
			midRange = 1250;
			midRangeProbab = 0.7;
			maxRange = 1600;
			maxRangeProbab = 0.1;
		};
	};
	class Missile_AA_04_Plane_CAS_01_F: RocketPods
	{
		displayName = "$STR_A3_Missile_AA_04_Plane_CAS_01_F0";
		magazines[] = {"2Rnd_Missile_AA_04_F","PylonRack_1Rnd_Missile_AA_04_F","PylonMissile_1Rnd_Missile_AA_04_F"};
		holdsterAnimValue = 2;
		aiRateOfFire = 5.0;
		aiRateOfFireDistance = 500;
		autoFire = 0;
		cursor = "EmptyCursor";
		cursorAim = "missile";
		showAimCursorInternal = 0;
		nameSound = "MissileLauncher";
		textureType = "fullAuto";
		weaponLockDelay = 3.0;
		weaponLockSystem = 2;
		cmImmunity = 0.5;
		lockingTargetSound[] = {"A3\Sounds_F\weapons\Rockets\locked_1",0.56234133,1};
		lockedTargetSound[] = {"A3\Sounds_F\weapons\Rockets\locked_3",0.56234133,2.5};
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F_EPC\Weapons\missile_epc_3",1.0,1,2000};
			soundBegin[] = {"begin1",1};
		};
		minRange = 160;
		minRangeProbab = 0.25;
		midRange = 1250;
		midRangeProbab = 0.95;
		maxRange = 6000;
		maxRangeProbab = 0.85;
	};
	class Missile_AGM_02_Plane_CAS_01_F: MissileLauncher
	{
		displayName = "$STR_A3_Missile_AGM_02_Plane_CAS_01_F0";
		magazines[] = {"6Rnd_Missile_AGM_02_F","PylonRack_1Rnd_Missile_AGM_02_F","PylonRack_3Rnd_Missile_AGM_02_F"};
		holdsterAnimValue = 3;
		reloadTime = 0.1;
		magazineReloadTime = 0.1;
		showAimCursorInternal = 0;
		textureType = "semi";
		weaponLockDelay = 3.0;
		weaponLockSystem = 2;
		cmImmunity = 0.4;
		lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.56234133,1};
		lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",0.56234133,2.5};
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F_EPC\Weapons\missile_epc_1",1.7782794,1,3500};
			soundBegin[] = {"begin1",1};
		};
		modes[] = {"TopDown"};
		class Direct: MissileLauncher
		{
			textureType = "semi";
			displayName = "$STR_A3_Missile_AGM_02_Plane_CAS_01_F0";
			reloadTime = 0.1;
			magazineReloadTime = 0.1;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F_EPC\Weapons\missile_epc_1",1.7782794,1,3500};
				soundBegin[] = {"begin1",1};
			};
			lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.56234133,1};
			lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",0.56234133,2.5};
			minRange = 360;
			minRangeProbab = 0.4;
			midRange = 1500;
			midRangeProbab = 1.0;
			maxRange = 8000;
			maxRangeProbab = 0.95;
		};
		class TopDown: Direct
		{
			textureType = "topDown";
		};
	};
	class Rocket_04_HE_Plane_CAS_01_F: RocketPods
	{
		displayName = "$STR_A3_Rocket_04_FL_Plane_CAS_01_F0";
		magazines[] = {"7Rnd_Rocket_04_HE_F","PylonRack_7Rnd_Rocket_04_HE_F"};
		canLock = 0;
		ballisticsComputer = 8;
		holdsterAnimValue = 4;
		showAimCursorInternal = 1;
		cursor = "EmptyCursor";
		cursorAim = "rocket";
		modes[] = {"Far_AI","Medium_AI","Close_AI","Burst"};
		class Far_AI: RocketPods
		{
			displayName = "$STR_A3_missiles_dar0";
			lockingTargetSound[] = {"A3\Sounds_F\weapons\Rockets\locked_1",0.56234133,1};
			lockedTargetSound[] = {"A3\Sounds_F\weapons\Rockets\locked_3",0.56234133,2.5};
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F_EPC\Weapons\missile_epc_2",1.9952624,1,3500};
				soundBegin[] = {"begin1",1};
			};
			autoFire = 0;
			salvo = 2;
			reloadTime = 0.2;
			dispersion = 0.015;
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 4;
			aiRateOfFire = 4;
			aiRateOfFireDispersion = 4;
			aiRateOfFireDistance = 1000;
			minRange = 1000;
			minRangeProbab = 0.7;
			midRange = 1500;
			midRangeProbab = 0.7;
			maxRange = 3200;
			maxRangeProbab = 0.1;
		};
		class Medium_AI: Far_AI
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 6;
			aiRateOfFire = 3;
			aiRateOfFireDispersion = 3;
			aiRateOfFireDistance = 1000;
			minRange = 400;
			minRangeProbab = 0.1;
			midRange = 800;
			midRangeProbab = 0.7;
			maxRange = 1200;
			maxRangeProbab = 0.75;
		};
		class Close_AI: Far_AI
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 42;
			aiRateOfFire = 0.5;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.4;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.2;
		};
		class Burst: RocketPods
		{
			displayName = "$STR_A3_Rocket_04_FL_Plane_CAS_01_F0";
			textureType = "fullAuto";
			burst = 1;
			autoFire = 0;
			soundContinuous = 0;
			lockingTargetSound[] = {"A3\Sounds_F\weapons\Rockets\locked_1",0.56234133,1};
			lockedTargetSound[] = {"A3\Sounds_F\weapons\Rockets\locked_3",0.56234133,1.5};
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\weapons\Rockets\missile_1",1.0,1,2000};
				soundBegin[] = {"begin1",1};
			};
			salvo = 2;
			reloadTime = 0.2;
			dispersion = 0.015;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 1;
			midRangeProbab = 0.01;
			maxRange = 2;
			maxRangeProbab = 0.01;
		};
	};
	class Rocket_04_AP_Plane_CAS_01_F: Rocket_04_HE_Plane_CAS_01_F
	{
		displayName = "$STR_A3_Rocket_04_FL_Plane_CAS_01_F0";
		magazines[] = {"7Rnd_Rocket_04_AP_F","PylonRack_7Rnd_Rocket_04_AP_F"};
		holdsterAnimValue = 5;
	};
	class Cannon_30mm_Plane_CAS_02_F: CannonCore
	{
		scope = 1;
		displayName = "$STR_A3_CFGWEAPONS_CANNON_30MM";
		magazines[] = {"500Rnd_Cannon_30mm_Plane_CAS_02_F"};
		holdsterAnimValue = 1;
		canLock = 0;
		ballisticsComputer = 8;
		cursor = "EmptyCursor";
		cursorAim = "mg";
		showAimCursorInternal = 0;
		modes[] = {"LowROF","close","short","medium","far"};
		nameSound = "cannon";
		shotFromTurret = 0;
		muzzlePos = "Cannon_muzzleflash";
		muzzleEnd = "Cannon_barrel_end";
		selectionFireAnim = "Cannon_muzzleflash";
		class GunParticles
		{
			class Effect
			{
				effectName = "MachineGun2";
				positionName = "Cannon_barrel_start";
				directionName = "Cannon_barrel_end";
			};
		};
		class LowROF: Mode_FullAuto
		{
			displayName = "$STR_A3_CFGWEAPONS_CANNON_30MM";
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F_epc\weapons\cas_02_cannon",1.7782794,1,3800};
				soundBegin[] = {"begin1",1};
			};
			soundContinuous = 0;
			flash = "gunfire";
			flashSize = 0.1;
			recoil = "Empty";
			ffMagnitude = 0.5;
			ffFrequency = 11;
			ffCount = 6;
			burst = 10;
			showToPlayer = 1;
			dispersion = 0.003;
			reloadTime = 0.04;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 1;
			midRangeProbab = 0.01;
			maxRange = 2;
			maxRangeProbab = 0.01;
		};
		class close: LowROF
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 12;
			burstRangeMax = 28;
			aiRateOfFire = 0.5;
			aiRateOfFireDispersion = 0.5;
			aiRateOfFireDistance = 200;
			minRange = 1;
			minRangeProbab = 0.1;
			midRange = 100;
			midRangeProbab = 0.75;
			maxRange = 400;
			maxRangeProbab = 0.85;
		};
		class near: close{};
		class short: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 18;
			burstRangeMax = 42;
			aiRateOfFire = 1;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 300;
			minRange = 200;
			minRangeProbab = 0.3;
			midRange = 400;
			midRangeProbab = 0.85;
			maxRange = 750;
			maxRangeProbab = 0.85;
		};
		class medium: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 18;
			burstRangeMax = 42;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 800;
			minRange = 600;
			minRangeProbab = 0.6;
			midRange = 750;
			midRangeProbab = 0.85;
			maxRange = 1250;
			maxRangeProbab = 0.6;
		};
		class far: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 18;
			burstRangeMax = 42;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 3;
			aiRateOfFireDistance = 1200;
			minRange = 1000;
			minRangeProbab = 0.7;
			midRange = 1250;
			midRangeProbab = 0.6;
			maxRange = 2500;
			maxRangeProbab = 0.1;
		};
	};
	class Missile_AA_03_Plane_CAS_02_F: Missile_AA_04_Plane_CAS_01_F
	{
		displayName = "$STR_A3_Missile_AA_03_F0";
		magazines[] = {"2Rnd_Missile_AA_03_F","PylonRack_1Rnd_Missile_AA_03_F","PylonMissile_1Rnd_Missile_AA_03_F"};
	};
	class Missile_AGM_01_Plane_CAS_02_F: Missile_AGM_02_Plane_CAS_01_F
	{
		displayName = "$STR_A3_Missile_AGM_01_F0";
		magazines[] = {"4Rnd_Missile_AGM_01_F","PylonRack_1Rnd_Missile_AGM_01_F"};
		modes[] = {"Direct"};
		class Direct: Direct
		{
			displayName = "$STR_A3_Missile_AGM_01_F0";
		};
	};
	class Rocket_03_HE_Plane_CAS_02_F: Rocket_04_HE_Plane_CAS_01_F
	{
		displayName = "$STR_A3_Rocket_03_FL_F0";
		magazines[] = {"20Rnd_Rocket_03_HE_F","PylonRack_20Rnd_Rocket_03_HE_F"};
		class Far_AI: Far_AI
		{
			dispersion = 0.018;
		};
		class Burst: Burst
		{
			displayName = "$STR_A3_Rocket_03_FL_F0";
			dispersion = 0.018;
		};
	};
	class Rocket_03_AP_Plane_CAS_02_F: Rocket_04_AP_Plane_CAS_01_F
	{
		displayName = "$STR_A3_Rocket_03_FL_F0";
		magazines[] = {"20Rnd_Rocket_03_AP_F","PylonRack_20Rnd_Rocket_03_AP_F"};
		class Far_AI: Far_AI
		{
			dispersion = 0.018;
		};
		class Burst: Burst
		{
			displayName = "$STR_A3_Rocket_03_FL_F0";
			dispersion = 0.018;
		};
	};
	class HMG_127_MBT: HMG_127_APC
	{
		class GunParticles
		{
			class effect1
			{
				positionName = "commander_gun_muzzle_pos";
				directionName = "commander_gun_muzzle_end";
				effectName = "MachineGunCloud";
			};
		};
	};
	class Launcher: LauncherCore
	{
		cursorAim = "EmptyCursor";
		cursor = "rocket";
		textureType = "semi";
		autoAimEnabled = 0;
		opticsDisablePeripherialVision = 1;
		magazines[] = {};
		value = 10;
		nameSound = "atlauncher";
		magazineReloadTime = 12;
		reloadTime = 0;
		initSpeed = 30;
		canLock = 0;
		autoReload = 0;
		ffMagnitude = 0.1;
		ffFrequency = 1;
		ffCount = 1;
		recoil = "LAWSingle";
		aiRateOfFire = 10.0;
		aiRateOfFireDistance = 500;
		optics = 1;
		primary = 0;
		opticsZoomMin = 0.375;
		opticsZoomMax = 1.1;
		opticsZoomInit = 0.75;
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		maxZeroing = 1000;
		minRange = 20;
		minRangeProbab = 0.3;
		midRange = 150;
		midRangeProbab = 0.58;
		maxRange = 500;
		maxRangeProbab = 0.04;
	};
	class Launcher_Base_F: Launcher
	{
		htMin = 1;
		htMax = 460;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		UiPicture = "\A3\Weapons_F\Data\UI\icon_at_CA.paa";
		dexterity = 1.7;
		swayCoef = 0.5;
		reloadAction = "ManActReloadAT";
		recoil = "recoil_default";
		sound[] = {"A3\Sounds_F\weapons\Launcher\rocket_launcher_5",1.0,1,800};
		drySound[] = {"A3\sounds_f\weapons\other\dry6",0.31622776,1,10};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\rockets\titan_reload_final",0.56234133,1,20};
		soundFly[] = {"A3\sounds_f\weapons\rockets\rocket_fly_1",0.31622776,1.5,700};
		weaponPoolAvailable = 1;
		shotPos = "usti hlavne";
		shotEnd = "konec hlavne";
		class WeaponSlotsInfo
		{
			allowedSlots[] = {};
		};
	};
	class GrenadeCore;
	class GrenadeLauncher: Default
	{
		cursorAim = "gl";
		cursor = "EmptyCursor";
		value = 3;
		type = 0;
		displayName = "$STR_A3_cfgWeapons_GrenadeLauncher0";
		reloadTime = 3;
		reloadAction = "ReloadMagazine";
		magazineReloadTime = 1;
		magazines[] = {};
		initSpeed = 75;
		canLock = 0;
		autoReload = 0;
		autoAimEnabled = 0;
		ffMagnitude = 0.1;
		ffFrequency = 1;
		ffCount = 1;
		recoil = "M240Recoil";
		dispersion = 0.00725;
		aiDispersionCoefY = 6;
		maxLeadSpeed = 15;
		optics = 0;
		muzzlePos = "usti granatometu";
		muzzleEnd = "konec granatometu";
		cartridgePos = "";
		cartridgeVel = "";
		minRange = 30;
		minRangeProbab = 0.1;
		midRange = 200;
		midRangeProbab = 0.7;
		maxRange = 400;
		maxRangeProbab = 0.05;
		textureType = "semi";
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;
	};
	class UGL_F: GrenadeLauncher
	{
		displayName = "$STR_A3_cfgweapons_eglm0";
		magazines[] = {"1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
		magazineWell[] = {"UGL_40x36"};
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\UGL\Firemode_ugl",0.31622776,1,5};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\UGL\Reload_UGL",0.56234133,1,10};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\UGL\Dry_ugl",0.56234133,1,10};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\UGL\Closure_UGL",1.0,1,10};
				soundClosure[] = {"closure1",1};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\UGL\UGL_01",0.70794576,1,200};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\UGL\UGL_02",0.70794576,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			recoil = "M240Recoil";
			recoilProne = "M240Recoil";
			minRange = 30;
			minRangeProbab = 0.1;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.05;
		};
		recoil = "recoil_default";
		magazineReloadTime = 0;
		reloadTime = 0.1;
		optics = 1;
		modelOptics = "-";
		cameraDir = "UGL look";
		memoryPointCamera = "UGL eye";
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;
		weaponInfoType = "RscWeaponZeroing";
	};
	class RifleCore: Default{};
	class Rifle: RifleCore
	{
		htMin = 1;
		htMax = 600;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		autoFire = 1;
		reloadAction = "ReloadMagazine";
		soundContinuous = 0;
		optics = 0;
		scope = 1;
		cursor = "arifle";
		cursoraim = "CursorAim";
		value = 4;
		displayName = "$STR_DN_RIFLE";
		nameSound = "rifle";
		reloadTime = 0.15;
		modelOptics = "-";
		sound[] = {};
		opticsFlare = 0;
		autoReload = 0;
		aiDispersionCoefX = 6;
		aiDispersionCoefY = 6;
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		maxLeadSpeed = 23;
		canLock = 0;
		flash = "gunfire";
		flashSize = 0.5;
		dispersion = 0.00029;
		recoil = "assaultRifleBase";
		recoilProne = "assaultRifleBase";
		ffMagnitude = 0.5;
		ffFrequency = 11;
		ffCount = 3;
		weaponPoolAvailable = 1;
		maxZeroing = 1000;
		class WeaponSlotsInfo
		{
			mass = 2;
			class MuzzleSlot: MuzzleSlot{};
			class CowsSlot: CowsSlot{};
			class PointerSlot: PointerSlot{};
			allowedSlots[] = {901};
		};
		zeroingSound[] = {"A3\Sounds_F\arsenal\sfx\shared\zeroing_knob_tick_metal",0.31622776,1,5};
	};
	class Rifle_Base_F: Rifle
	{
		scope = 0;
		discreteDistance[] = {100,200,300,400,500,600};
		discreteDistanceInitIndex = 1;
		weaponInfoType = "RscWeaponZeroing";
		recoil = "recoil_default";
		deployedPivot = "bipod";
		class GunParticles
		{
			class FirstEffect
			{
				effectName = "RifleAssaultCloud";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};
	};
	class Rifle_Short_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			allowedSlots[] = {701,901};
		};
	};
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			allowedSlots[] = {};
		};
	};
	class HandGunBase: Rifle
	{
		type = 2;
		initSpeed = 315;
		dexterity = 2;
		nameSound = "sidearm";
		cursor = "hgun";
		cursoraim = "CursorAim";
		value = 4;
		minRange = 0;
		minRangeProbab = 0.1;
		midRange = 10;
		midRangeProbab = 0.58;
		maxRange = 60;
		maxRangeProbab = 0.04;
	};
	class PistolCore: Default{};
	class Pistol: PistolCore
	{
		htMin = 1;
		htMax = 300;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		autoReload = 0;
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;
		maxZeroing = 100;
		discreteDistance[] = {50};
		discreteDistanceInitIndex = 0;
		magazineReloadTime = 2;
		opticsFlare = 0;
		nameSound = "Pistol";
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		class WeaponSlotsInfo
		{
			class CowsSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				displayName = "$STR_A3_CowsSlot0";
				compatibleItems[] = {"optic_Nightstalker","optic_tws","optic_tws_mg","optic_NVS","optic_DMS","optic_LRPS","optic_SOS","optic_MRCO","optic_Arco","optic_aco","optic_ACO_grn","optic_aco_smg","optic_ACO_grn_smg","optic_hamr","optic_Holosight","optic_Holosight_smg"};
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinpoint = "Bottom";
			};
			allowedSlots[] = {801,701,901};
			holsterOffset = "holster";
			holsterScale = 1;
		};
	};
	class Pistol_Base_F: Pistol
	{
		bullet1[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_01",0.56234133,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_02",0.56234133,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_03",0.56234133,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_04",0.56234133,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_01",0.56234133,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_02",0.56234133,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_03",0.56234133,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_04",0.56234133,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_01",0.56234133,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_02",0.56234133,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_03",0.56234133,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_04",0.56234133,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		optics = 1;
		modelOptics = "-";
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;
		cursor = "hgun";
		cursoraim = "cursorAim";
		minRange = 0;
		minRangeProbab = 0.1;
		midRange = 30;
		midRangeProbab = 0.3;
		maxRange = 50;
		maxRangeProbab = 0.04;
		reloadAction = "GestureReloadPistol";
		recoil = "recoil_default";
		weaponPoolAvailable = 1;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				displayName = "$str_a3_cfgweapons_abr_base_f_weaponslotsinfo_muzzleslot0";
				compatibleItems[] = {"muzzle_snds_L"};
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				iconPinpoint = "Center";
			};
		};
		textureType = "semi";
		class GunParticles
		{
			class FirstEffect
			{
				effectName = "PistolCloud";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};
	};
	class Throw: GrenadeLauncher
	{
		scope = 1;
		autoAimEnabled = 0;
		cursor = "EmptyCursor";
		cursorAim = "throw";
		value = 0;
		type = 0;
		displayName = "$STR_DN_THROW";
		canDrop = 0;
		textureType = "semi";
		magazineReloadTime = 0.0;
		reloadTime = 0.0;
		muzzles[] = {"HandGrenade_Stone","HandGrenadeMuzzle","MiniGrenadeMuzzle","SmokeShellMuzzle","SmokeShellYellowMuzzle","SmokeShellGreenMuzzle","SmokeShellRedMuzzle","SmokeShellPurpleMuzzle","SmokeShellOrangeMuzzle","SmokeShellBlueMuzzle","ChemlightGreenMuzzle","ChemlightRedMuzzle","ChemlightYellowMuzzle","ChemlightBlueMuzzle","IRGrenade"};
		class ThrowMuzzle: GrenadeLauncher
		{
			cursor = "EmptyCursor";
			cursorAim = "throw";
			sound[] = {"",0.00031622776,1};
			reloadSound[] = {"",0.00031622776,1};
			aiDispersionCoefX = 6;
			aiDispersionCoefY = 6;
			reloadTime = 0;
			magazineReloadTime = 2.5;
			enableAttack = 0;
			showEmpty = 0;
			autoReload = 1;
			modelOptics = "";
			minRange = 10;
			minRangeProbab = 0.2;
			midRange = 45;
			midRangeProbab = 0.9;
			maxRange = 60;
			maxRangeProbab = 0.03;
			keepInInventory = 1;
		};
		class HandGrenadeMuzzle: ThrowMuzzle
		{
			magazines[] = {"HandGrenade"};
		};
		class MiniGrenadeMuzzle: ThrowMuzzle
		{
			magazines[] = {"MiniGrenade"};
		};
		class HandGrenade_Stone: ThrowMuzzle
		{
			magazines[] = {"HandGrenade_Stone"};
			displayName = "$STR_DN_STONE";
			minRange = 5;
			minRangeProbab = 0.01;
			midRange = 45;
			midRangeProbab = 0.1;
			maxRange = 80;
			maxRangeProbab = 0.01;
		};
		class SmokeShellMuzzle: ThrowMuzzle
		{
			displayName = "$STR_MN_SMOKE";
			magazines[] = {"SmokeShell"};
		};
		class SmokeShellYellowMuzzle: ThrowMuzzle
		{
			displayName = "$STR_MN_SMOKE";
			magazines[] = {"SmokeShellYellow"};
		};
		class SmokeShellRedMuzzle: ThrowMuzzle
		{
			displayName = "$STR_MN_SMOKE";
			magazines[] = {"SmokeShellRed"};
		};
		class SmokeShellGreenMuzzle: ThrowMuzzle
		{
			displayName = "$STR_MN_SMOKE";
			magazines[] = {"SmokeShellGreen"};
		};
		class SmokeShellPurpleMuzzle: ThrowMuzzle
		{
			displayName = "$STR_MN_SMOKE";
			magazines[] = {"SmokeShellPurple"};
		};
		class SmokeShellBlueMuzzle: ThrowMuzzle
		{
			displayName = "$STR_MN_SMOKE";
			magazines[] = {"SmokeShellBlue"};
		};
		class SmokeShellOrangeMuzzle: ThrowMuzzle
		{
			displayName = "$STR_MN_SMOKE";
			magazines[] = {"SmokeShellOrange"};
		};
		class ChemlightGreenMuzzle: ThrowMuzzle
		{
			displayName = "$STR_cfgWeapons_Throw_ChemlightMuzzle0";
			magazines[] = {"Chemlight_green"};
		};
		class ChemlightRedMuzzle: ChemlightGreenMuzzle
		{
			magazines[] = {"Chemlight_red"};
		};
		class ChemlightYellowMuzzle: ChemlightGreenMuzzle
		{
			magazines[] = {"Chemlight_yellow"};
		};
		class ChemlightBlueMuzzle: ChemlightGreenMuzzle
		{
			magazines[] = {"Chemlight_blue"};
		};
		class IRGrenade: ThrowMuzzle
		{
			displayName = "$STR_A3_cfgWeapons_Throw_IRGrenade0";
			magazines[] = {"B_IR_Grenade","O_IR_Grenade","I_IR_Grenade"};
			cursorSize = 1;
		};
	};
	class Put: Default
	{
		scope = 1;
		value = 0;
		type = 0;
		displayName = "$STR_DN_PUT";
		canDrop = 0;
		muzzles[] = {"TimeBombMuzzle","PipeBombMuzzle","MineMuzzle"};
		class PutMuzzle: Default
		{
			sound[] = {"",0.00031622776,1};
			reloadSound[] = {"",0.00031622776,1};
			enableAttack = 0;
			optics = 0;
			showEmpty = 0;
			canLock = 0;
			primary = 10;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 3;
			midRangeProbab = 0.9;
			maxRange = 15;
			maxRangeProbab = 0.04;
			moveToInternal = 0;
			opticsZoomMin = 0.25;
			opticsZoomMax = 1.25;
			opticsZoomInit = 0.75;
		};
		class TimeBombMuzzle: PutMuzzle
		{
			displayName = "$STR_A3_cfgWeapons_Put_TimeBombMuzzle0";
			magazines[] = {"SatchelCharge_Remote_Mag"};
			enableAttack = 1;
		};
		class PipeBombMuzzle: PutMuzzle
		{
			displayName = "$STR_DN_PIPE_BOMB";
			magazines[] = {"SatchelCharge_Remote_Mag"};
			enableAttack = 1;
		};
		class MineMuzzle: PutMuzzle
		{
			displayName = "$STR_DN_MINE";
			magazines[] = {"ATMine_Range_Mag"};
		};
	};
	class CarHorn: Default
	{
		cursor = "";
		cursorAim = "";
		scope = 1;
		displayName = "$STR_A3_cfgWeapons_CarHorn0";
		reloadTime = 0;
		drySound[] = {"A3\Sounds_F\weapons\horns\MRAP_02_horn_2",1.0,1,200};
		canLock = 0;
		optics = 0;
		enableAttack = 0;
	};
	class BikeHorn: CarHorn
	{
		drySound[] = {"",1.0,1,200};
	};
	class TruckHorn: CarHorn
	{
		drySound[] = {"A3\Sounds_F\weapons\horns\MRAP_02_horn_1",1.0,1,200};
	};
	class TruckHorn2: CarHorn
	{
		drySound[] = {"A3\Sounds_F\weapons\horns\truck_horn_2",1.0,1,250};
	};
	class TruckHorn3: CarHorn
	{
		drySound[] = {"A3\Sounds_F\weapons\horns\truck_horn_3",1.0,1,300};
	};
	class SportCarHorn: CarHorn
	{
		drySound[] = {"A3\Sounds_F\weapons\horns\car_horn_1",1.0,1,150};
	};
	class MiniCarHorn: CarHorn
	{
		drySound[] = {"A3\Sounds_F\weapons\horns\car_horn_2",1.0,1,100};
	};
	class FakeHorn: CarHorn
	{
		displayName = "";
	};
	class ItemCore: Default
	{
		type = 131072;
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		picture = "\A3\Weapons_F\Data\UI\gear_satchel_CA.paa";
		muzzles[] = {};
		class Armory
		{
			disabled = 1;
		};
	};
	class ItemWatch: ItemCore
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "ItemWatch";
		scope = 2;
		displayName = "$STR_A3_cfgWeapons_ItemWatch0";
		simulation = "ItemWatch";
		picture = "\A3\Weapons_F\Data\UI\gear_item_watch_ca.paa";
		model = "\a3\Weapons_F\Ammo\mag_watch.p3d";
		descriptionShort = "$STR_A3_cfgWeapons_ItemWatch1";
		descriptionUse = "$STR_A3_cfgWeapons_Default_ItemWatch0";
		class ItemInfo
		{
			mass = 2;
		};
	};
	class ItemCompass: ItemCore
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "ItemCompass";
		scope = 2;
		displayName = "$STR_A3_cfgWeapons_ItemCompass0";
		descriptionUse = "$STR_A3_cfgWeapons_Default_ItemCompass0";
		simulation = "ItemCompass";
		picture = "\A3\Weapons_F\Data\UI\gear_item_compass_ca.paa";
		model = "\a3\Weapons_F\Ammo\mag_compass.p3d";
		descriptionShort = "$STR_A3_cfgWeapons_ItemCompass1";
		class ItemInfo
		{
			mass = 2;
		};
	};
	class ItemGPS: ItemCore
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "ItemGPS";
		scope = 2;
		displayName = "$STR_A3_cfgWeapons_ItemGPS0";
		descriptionUse = "$STR_A3_cfgWeapons_Default_ItemGPS0";
		simulation = "ItemGPS";
		picture = "\A3\Weapons_F\Data\UI\gear_item_gps_CA.paa";
		model = "\a3\Weapons_F\Ammo\mag_gps.p3d";
		descriptionShort = "$STR_A3_cfgWeapons_ItemGPS1";
		class ItemInfo
		{
			mass = 8;
		};
	};
	class ItemRadio: ItemCore
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "ItemRadio";
		scope = 2;
		displayName = "$STR_A3_cfgWeapons_ItemRadio0";
		simulation = "ItemRadio";
		picture = "\A3\Weapons_F\Data\UI\gear_item_radio_ca.paa";
		model = "\a3\Weapons_F\Ammo\mag_radio.p3d";
		descriptionShort = "$STR_A3_cfgWeapons_ItemRadio1";
		class ItemInfo
		{
			mass = 8;
		};
	};
	class ItemMap: ItemCore
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "ItemMap";
		scope = 2;
		displayName = "$STR_A3_cfgWeapons_ItemMap0";
		descriptionUse = "$STR_A3_cfgWeapons_Default_ItemMap0";
		simulation = "ItemMap";
		picture = "\A3\Weapons_F\Data\UI\gear_item_map_ca.paa";
		model = "\a3\Weapons_F\Ammo\mag_map.p3d";
		descriptionShort = "$STR_A3_cfgWeapons_ItemMap1";
		class ItemInfo
		{
			mass = 2;
		};
	};
	class DetectorCore;
	class MineDetector: DetectorCore
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "MineDetector";
		type = 131072;
		weaponPoolAvailable = 1;
		scope = 2;
		displayName = "$STR_A3_cfgweapons_minedetector0";
		descriptionshort = "$STR_A3_cfgweapons_minedetector1";
		detectRange = 15;
		soundMineDetector[] = {"A3\Sounds_F\sfx\blip1.wss",1,1};
		mineDetectorSoundFrequency = 1;
		mineDetectorPitchStart = 1;
		mineDetectorPitchEnd = 2;
		class ItemInfo
		{
			mass = 20;
		};
		picture = "\A3\Weapons_F\Items\data\UI\gear_MineDetector_CA.paa";
		model = "\a3\Weapons_F\Ammo\mag_minedetector.p3d";
	};
	class Binocular: Default
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Binocular";
		opticsDisablePeripherialVision = 1;
		weaponPoolAvailable = 1;
		scope = 2;
		simulation = "Binocular";
		model = "\A3\Weapons_f\binocular\binoculars_proxy";
		modelOptics = "\A3\weapons_f\reticle\optics_binoculars";
		opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
		visionMode[] = {"Normal"};
		picture = "\A3\Weapons_F\Data\UI\gear_binoculars_CA.paa";
		value = 5;
		type = 4096;
		displayName = "$STR_DN_BINOCULAR";
		nameSound = "binoculars";
		descriptionUse = "$STR_A3_cfgWeapons_Default_Binocular1";
		reloadTime = 0;
		sound[] = {"",0,1};
		canLock = 0;
		optics = 1;
		forceOptics = 0;
		useAsBinocular = 1;
		primary = 0;
		inertia = 0.1;
		swayCoef = 0.34;
		opticsZoomMin = 0.02;
		opticsZoomMax = 0.0625;
		opticsZoomInit = 0.0625;
		minRange = 150;
		midRange = 500;
		maxRange = 2500;
		magazines[] = {};
		class Library
		{
			libTextDesc = "$STR_LIB_BINOCULAR";
		};
		descriptionShort = "$STR_DSS_BINOCULAR";
		class WeaponSlotsInfo
		{
			mass = 10;
		};
	};
	class Rangefinder: Binocular
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Rangefinder";
		scope = 2;
		displayName = "$STR_A3_cfgWeapons_Rangefinder0";
		class Library
		{
			libTextDesc = "$STR_A3_cfgWeapons_Rangefinder_Library0";
		};
		descriptionShort = "$STR_A3_cfgWeapons_Rangefinder1";
		model = "\a3\Weapons_f\Binocular\rangefinder_proxy.p3d";
		modelOptics = "\A3\Weapons_F\Binocular\LRTV_optics.p3d";
		picture = "\A3\Weapons_F\Data\UI\gear_rangefinder_CA.paa";
		opticsZoomMin = 0.01;
		opticsZoomMax = 0.05;
		opticsZoomInit = 0.05;
		distanceZoomMin = 100;
		distanceZoomMax = 2300;
		weaponInfoType = "RscOptics_Rangefinder";
		visionMode[] = {"Normal","NVG"};
		class WeaponSlotsInfo
		{
			mass = 20;
		};
	};
	class NVGoggles: Binocular
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "NVGoggles";
		displayName = "$STR_A3_cfgweapons_nvg_brown0";
		nameSound = "nvgoggles";
		simulation = "NVGoggles";
		showEmpty = 0;
		muzzlePos = "usti hlavne";
		muzzleEnd = "konec hlavne";
		value = 5;
		opticsZoomMin = 1;
		opticsZoomMax = 1;
		modelOptics = "\A3\weapons_f\reticle\optics_night";
		model = "\A3\Weapons_f\binocular\nvg_proxy";
		picture = "\A3\Weapons_F\Data\UI\gear_nvg_CA.paa";
		descriptionUse = "$STR_A3_cfgWeapons_Default_NVGoggles1";
		visionMode[] = {"Normal","NVG"};
		class Library
		{
			libTextDesc = "$STR_LIB_NV_GOGGLES";
		};
		descriptionShort = "$STR_DSS_NV_GOGGLES";
		class ItemInfo
		{
			type = 616;
			uniformModel = "A3\weapons_f\binocular\nvg_proxy.p3d";
			modelOff = "A3\weapons_f\binocular\NVG_proxy_off.p3d";
			mass = 20;
		};
	};
	class NVGoggles_OPFOR: NVGoggles
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "NVGoggles_OPFOR";
		modelOptics = "\A3\weapons_f\reticle\optics_night";
		model = "\A3\Weapons_f\binocular\nvg_proxy_OPFOR";
		picture = "\A3\Weapons_F\Data\UI\gear_nvg_opfor_CA.paa";
		displayName = "$STR_A3_cfgweapons_nvg_black0";
		class ItemInfo: ItemInfo
		{
			uniformModel = "A3\weapons_f\binocular\nvg_proxy_OPFOR.p3d";
			modelOff = "A3\weapons_f\binocular\NVG_proxy_off_OPFOR.p3d";
		};
	};
	class NVGoggles_INDEP: NVGoggles
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "NVGoggles_INDEP";
		modelOptics = "\A3\weapons_f\reticle\optics_night";
		model = "\A3\Weapons_f\binocular\nvg_proxy_INDEP";
		picture = "\A3\Weapons_F\Data\UI\gear_nvg_indep_CA.paa";
		displayName = "$STR_A3_cfgweapons_nvg_green0";
		class ItemInfo: ItemInfo
		{
			uniformModel = "A3\weapons_f\binocular\nvg_proxy_INDEP.p3d";
			modelOff = "A3\weapons_f\binocular\NVG_proxy_off_INDEP.p3d";
		};
	};
	class Integrated_NVG_F: NVGoggles
	{
		scope = 1;
		visionMode[] = {"Normal","NVG"};
		modelOptics = "";
	};
	class Integrated_NVG_TI_0_F: NVGoggles
	{
		scope = 1;
		visionMode[] = {"Normal","NVG","TI"};
		thermalMode[] = {0};
		modelOptics = "";
	};
	class Integrated_NVG_TI_1_F: NVGoggles
	{
		scope = 1;
		visionMode[] = {"Normal","NVG","TI"};
		thermalMode[] = {1};
		modelOptics = "";
	};
	class Laserdesignator: Binocular
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Laserdesignator";
		model = "\A3\Weapons_F_beta\Binocular\ltlm.p3d";
		modelOptics = "\A3\Weapons_F_beta\Binocular\lasermarker_optics";
		opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
		displayName = "$STR_cfgWeapons_Laserdesignator0";
		descriptionUse = "$STR_A3_cfgWeapons_Default_Laserdesignator1";
		picture = "\A3\Weapons_F\Data\UI\gear_lasermarker_CA.paa";
		magazines[] = {"Laserbatteries"};
		cursor = "laserDesignator";
		cursorAim = "EmptyCursor";
		cursorAimOn = "CursorAimOn";
		showSwitchAction = 1;
		simulation = "weapon";
		forceOptics = 0;
		class WeaponSlotsInfo
		{
			mass = 20;
		};
		Laser = 1;
		descriptionShort = "$STR_DSS_Laserdesignator";
		weaponInfoType = "RscOptics_LaserDesignator";
		visionMode[] = {"Normal","NVG","TI"};
		thermalMode[] = {2};
		opticsZoomMin = 0.01;
		opticsZoomMax = 0.05;
		opticsZoomInit = 0.05;
		distanceZoomMin = 100;
		distanceZoomMax = 2300;
		minRange = 150;
		midRange = 500;
		maxRange = 5000;
	};
	class Laserdesignator_02: Laserdesignator{};
	class Laserdesignator_03: Laserdesignator{};
};
class CfgDestructPos
{
	scope = 1;
	class DelayedDestruction;
	class DelayedDestructionAmmo: DelayedDestruction
	{
		timeBeforeHiding = "21";
		hideDuration = "10";
	};
};
class RCWSOptics;
class Optics_Armored
{
	class Wide: RCWSOptics
	{
		initFov = "(36 / 120)";
		minFov = "(36 / 120)";
		maxFov = "(36 / 120)";
		visionMode[] = {"Normal","NVG","TI"};
		thermalMode[] = {2,3};
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MTB_01_w_F.p3d";
		gunnerOpticsEffect[] = {};
	};
	class Medium: Wide
	{
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MTB_01_m_F.p3d";
		initFov = "(150 * 0.05625 / 120)";
		minFov = "(150 * 0.05625 / 120)";
		maxFov = "(150 * 0.05625 / 120)";
	};
	class Narrow: Medium
	{
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MTB_01_n_F.p3d";
		initFov = "(60 * 0.05625 / 120)";
		minFov = "(60 * 0.05625 / 120)";
		maxFov = "(60 * 0.05625 / 120)";
	};
};
class Optics_Commander_01: Optics_Armored
{
	class Wide: Wide
	{
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Commander_01_w_F.p3d";
	};
	class Medium: Medium
	{
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Commander_01_m_F.p3d";
	};
	class Narrow: Narrow
	{
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Commander_01_n_F.p3d";
	};
};
class Optics_Commander_02: Optics_Armored
{
	class Wide: Wide
	{
		thermalMode[] = {0,1};
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Commander_02_w_F.p3d";
	};
	class Medium: Medium
	{
		thermalMode[] = {0,1};
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Commander_02_m_F.p3d";
	};
	class Narrow: Narrow
	{
		thermalMode[] = {0,1};
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Commander_02_n_F.p3d";
	};
};
class Optics_Commander_03: Optics_Commander_02
{
	class Wide: Wide{};
	class Medium: Medium{};
	class Narrow: Narrow{};
};
class Optics_Gunner_MBT_01: Optics_Armored
{
	class Wide: Wide
	{
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MBT_01_w_F.p3d";
	};
	class Medium: Medium
	{
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MBT_01_m_F.p3d";
	};
	class Narrow: Narrow
	{
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MBT_01_n_F.p3d";
	};
};
class Optics_Gunner_MBT_02: Optics_Armored
{
	class Wide: Wide
	{
		thermalMode[] = {0,1};
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_w_F.p3d";
	};
	class Medium: Medium
	{
		thermalMode[] = {0,1};
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_m_F.p3d";
	};
	class Narrow: Narrow
	{
		thermalMode[] = {0,1};
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_n_F.p3d";
	};
};
class Optics_Gunner_MBT_03: Optics_Armored
{
	class Wide: Wide
	{
		initFov = "(24 / 120)";
		minFov = "(24 / 120)";
		maxFov = "(24 / 120)";
		thermalMode[] = {0,1};
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MBT_03_w_F.p3d";
	};
	class Medium: Medium
	{
		initFov = "(120 * 0.05625 / 120)";
		minFov = "(120 * 0.05625 / 120)";
		maxFov = "(120 * 0.05625 / 120)";
		thermalMode[] = {0,1};
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MBT_03_m_F.p3d";
	};
	class Narrow: Narrow
	{
		thermalMode[] = {0,1};
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MBT_03_n_F.p3d";
	};
};
class Optics_Gunner_APC_01: Optics_Armored
{
	class Wide: Wide
	{
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_APC_01_w_F.p3d";
	};
	class Medium: Medium
	{
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_APC_01_m_F.p3d";
	};
	class Narrow: Narrow
	{
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_APC_01_n_F.p3d";
	};
};
class Optics_Gunner_APC_02: Optics_Armored
{
	class Wide: Wide
	{
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_APC_02_w_F.p3d";
	};
	class Medium: Medium
	{
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_APC_02_m_F.p3d";
	};
	class Narrow: Narrow
	{
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_APC_02_n_F.p3d";
	};
};
class Optics_Gunner_APC_03: Optics_Armored
{
	class Wide: Wide
	{
		thermalMode[] = {0,1};
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_APC_03_w_F.p3d";
	};
	class Medium: Medium
	{
		thermalMode[] = {0,1};
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_APC_03_m_F.p3d";
	};
	class Narrow: Narrow
	{
		thermalMode[] = {0,1};
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_APC_03_n_F.p3d";
	};
};
class Optics_Gunner_AAA_01: Optics_Armored
{
	class Wide: Wide
	{
		thermalMode[] = {0,1};
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_AAA_01_w_F.p3d";
	};
	class Medium: Medium
	{
		thermalMode[] = {0,1};
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_AAA_01_m_F.p3d";
	};
	class Narrow: Narrow
	{
		thermalMode[] = {0,1};
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_AAA_01_n_F.p3d";
	};
};
