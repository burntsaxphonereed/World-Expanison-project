class CfgPatches
{
	class ACM_Vespaccia_Main
	{
		units[]=
		{
			"ACM_Ves_Soldier",
			"ACM_Ves_Soldier_SL",
			"ACM_Ves_Soldier_GL",
			"ACM_Ves_Soldier_AT",
			"ACM_Ves_Soldier_AR",
			"ACM_Ves_Soldier_MR",
			"ACM_Ves_Soldier_CLE",
			"ACM_Ves_Soldier_lite",
			"ACM_Ves_Soldier_ATLite",
			"ACM_Ves_Soldier_ATHeavy",
			"ACM_Ves_Soldier_Crewman",
			"ACM_Ves_Soldier_Officer",
			"ACM_Ves_Soldier_Officer_NC",
			"ACM_Ves_Soldier_AA",
			"ACM_Ves_Spec_Soldier",
			"ACM_Ves_Spec_Soldier_TL",
			"ACM_Ves_Spec_Soldier_GL",
			"ACM_Ves_Spec_Soldier_LiteAT",
			"ACM_Ves_Spec_Soldier_AT",
			"ACM_Ves_Spec_Soldier_MisSpec",
			"ACM_Ves_Spec_Soldier_Explspec",
			"ACM_Ves_Spec_Soldier_Marksman",
			"ACM_Ves_Spec_Soldier_Autorifleman",
			"ACM_Ves_Spec_Soldier_JTAC",
			"ACM_Ves_Spec_Soldier_Medic",
			"ACM_Ves_Res_Soldier",
			"ACM_Ves_Res_Soldier_TL",
			"ACM_Ves_Res_Soldier_GL",
			"ACM_Ves_Res_Soldier_LightAT",
			"ACM_Ves_Res_Soldier_AR",
			"ACM_Ves_Res_Soldier_MR",
			"ACM_Ves_Res_Soldier_CLE",
			"ACM_Ves_Res_Soldier_lite",
			"ACM_Ves_Res_Soldier_Officer",
			"ACM_Ves_Res_Soldier_Officer_NC",
			"ACM_Heli_Light_W",
			"ACM_Heli_Light_W_Armed",
			"ACM_Radar_Ves",
			"ACM_SAM_Ves",
			"ACM_Ves_Mortar",
			"ACM_Ves_HMGUP",
			"ACM_Ves_HMG",
			"ACM_Ves_Arty_Turret",
			"ACM_Ves_Static_AA",
			"ACM_Ves_Static_Kornet",
			"ACM_Ves_Static_Metis",
			"ACM_Drone_MQ9",
			"ACM_Ves_Soldier_JetPilot",
			"ACM_Ves_Soldier_Unarmed",
			"ACM_Ves_Soldier_Survivor",
			"ACM_Ves_Soldier_HeliPilot",
			"ACM_Ves_Soldier_Des",
			"ACM_Ves_Soldier_SL_Des",
			"ACM_Ves_Soldier_GL_Des",
			"ACM_Ves_Soldier_AT_Des",
			"ACM_Ves_Soldier_AR_Des",
			"ACM_Ves_Soldier_MR_Des",
			"ACM_Ves_Soldier_CLE_Des",
			"ACM_Ves_Soldier_lite_Des",
			"ACM_Ves_Soldier_ATLite_Des",
			"ACM_Ves_Soldier_ATHeavy_Des",
			"ACM_Ves_Soldier_Crewman_Des",
			"ACM_Ves_Soldier_Officer_Des",
			"ACM_Ves_Soldier_Officer_NC_Des",
			"ACM_Ves_Soldier_AA_Des",
			"ACM_Ves_Soldier_HeliPilot_Des",
			"ACM_Ves_Des_Spec_Soldier",
			"ACM_Ves_Des_Spec_Soldier_TL",
			"ACM_Ves_Des_Spec_Soldier_GL",
			"ACM_Ves_Des_Spec_Soldier_LiteAT",
			"ACM_Ves_Des_Spec_Soldier_AT",
			"ACM_Ves_Des_Spec_Soldier_MisSpec",
			"ACM_Ves_Des_Spec_Soldier_Explspec",
			"ACM_Ves_Des_Spec_Soldier_Marksman",
			"ACM_Ves_Des_Spec_Soldier_Autorifleman",
			"ACM_Ves_Des_Spec_Soldier_JTAC",
			"ACM_Ves_Des_Spec_Soldier_Medic",
			"ACM_Ves_Soldier_Unarmed_Des",
			"ACM_Ves_Soldier_Survivor_Des",
			"ACM_Ves_Mortar_Des",
			"ACM_Ves_HMGUP_Des",
			"ACM_Ves_HMG_Des",
			"ACM_Ves_Arty_Turret_Des",
			"ACM_Ves_Static_AA_Des",
			"ACM_Ves_Static_Kornet_Des",
			"ACM_Ves_Static_Metis_Des",
			"ACM_Ves_Rhib_Des",
			"ACM_Ves_Frigate_Des",
			"ACM_Ves_LCU_Des"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F_Beta",
			"A3_Data_F",
			"ACM_Vespaccia_Clothes"
		};
		author="Anthrax";
	};
};
class cfgFactionClasses
{
	class ACM_I_Ves
	{
		displayName="[CiA] Vespaccian Federal Army";
		side=2;
		priority=1;
		scopeCurator=2;
		icon="\ACM_Vespaccia\flag_vesppaccia_ico_ca.paa";
		flag="\ACM_Vespaccia\flag_vesppaccia_ico_ca.paa";
	};
	class ACM_I_Ves2
	{
		displayName="[CiA] Vespaccian Federal Marine Corps";
		side=2;
		priority=1;
		scopeCurator=2;
		icon="\ACM_Vespaccia\flag_vesppaccia_ico_ca.paa";
		flag="\ACM_Vespaccia\flag_vesppaccia_ico_ca.paa";
	};
};
class CfgEditorSubcategories
{
	class ACM_VES_RES
	{
		displayName="Men (Reservist)";
	};
};
class EventHandlers;
class CfgVehicles
{
	class B_Survivor_F;
	class ACM_Ves_Soldier: B_Survivor_F
	{
		editorPreview="\ACM_Vespaccia\UI\Woodland\ACM_Ves_Soldier.jpg";
		faction="ACM_I_Ves";
		side="2";
		displayname="Rifleman";
		uniformClass="ACM_Vesp_Clothes1_1";
		backpack="";
		weapons[]=
		{
			"CUP_arifle_G36K_VFG_wdl",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"CUP_arifle_G36K_VFG_wdl",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"Chemlight_green",
			"Chemlight_green",
			"CUP_HandGrenade_M67",
			"CUP_HandGrenade_M67",
			"SmokeShell"
		};
		respawnmagazines[]=
		{
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"Chemlight_green",
			"Chemlight_green",
			"CUP_HandGrenade_M67",
			"CUP_HandGrenade_M67",
			"SmokeShell"
		};
		items[]=
		{
			"FirstAidKit"
		};
		respawnitems[]=
		{
			"FirstAidKit"
		};
		linkedItems[]=
		{
			"CUP_V_B_Eagle_SPC_Rifleman",
			"ACM_H_Vesp_6B47_v2",
			"CUP_NVG_PVS15_black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnlinkedItems[]=
		{
			"CUP_V_B_Eagle_SPC_Rifleman",
			"ACM_H_Vesp_6B47_v2",
			"CUP_NVG_PVS15_black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_NATO",
			"CUP_G_ARMY"
		};
		genericNames="NATOMen";
		headgearList[]=
		{
			"ACM_H_Vesp_6B47_v2",
			0.40000001,
			"ACM_H_Vesp_6B47_v2_GogglesClosed",
			0.30000001,
			"ACM_H_Vesp_6B47_v2_GogglesDown",
			0.30000001,
			"ACM_H_Vesp_6B47_v2_GogglesUp",
			0.30000001,
			"ACM_H_Vesp_Boonie",
			0.1,
			"ACM_H_Vesp_Cap",
			0.1
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
		};
	};
	class ACM_Ves_Soldier_Unarmed: ACM_Ves_Soldier
	{
		editorPreview="\ACM_Vespaccia\UI\Woodland\ACM_Ves_Soldier_Unarmed.jpg";
		faction="ACM_I_Ves";
		side="2";
		displayname="Rifleman (Unarmed)";
		uniformClass="ACM_Vesp_Clothes1_1";
		backpack="";
		weapons[]=
		{
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"Chemlight_green",
			"Chemlight_green",
			"CUP_HandGrenade_M67",
			"CUP_HandGrenade_M67",
			"SmokeShell"
		};
		respawnmagazines[]=
		{
			"Chemlight_green",
			"Chemlight_green",
			"CUP_HandGrenade_M67",
			"CUP_HandGrenade_M67",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"CUP_V_B_Eagle_SPC_Rifleman",
			"ACM_H_Vesp_6B47_v2",
			"CUP_NVG_PVS15_black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnlinkedItems[]=
		{
			"CUP_V_B_Eagle_SPC_Rifleman",
			"ACM_H_Vesp_6B47_v2",
			"CUP_NVG_PVS15_black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		headgearList[]=
		{
			"ACM_H_Vesp_6B47_v2",
			0.40000001,
			"ACM_H_Vesp_6B47_v2_GogglesClosed",
			0.30000001,
			"ACM_H_Vesp_6B47_v2_GogglesDown",
			0.30000001,
			"ACM_H_Vesp_6B47_v2_GogglesUp",
			0.30000001,
			"ACM_H_Vesp_Boonie",
			0.1,
			"ACM_H_Vesp_Cap",
			0.1
		};
	};
	class ACM_Ves_Soldier_Survivor: ACM_Ves_Soldier
	{
		editorPreview="\ACM_Vespaccia\UI\Woodland\ACM_Ves_Soldier_Survivor.jpg";
		displayname="Survivor";
		uniformClass="ACM_Vesp_Clothes1_1";
		weapons[]=
		{
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"Chemlight_green",
			"Chemlight_green",
			"CUP_HandGrenade_M67",
			"CUP_HandGrenade_M67",
			"SmokeShell"
		};
		respawnmagazines[]=
		{
			"Chemlight_green",
			"Chemlight_green",
			"CUP_HandGrenade_M67",
			"CUP_HandGrenade_M67",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnlinkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		headgearList[]={};
	};
	class ACM_Ves_Soldier_SL: ACM_Ves_Soldier
	{
		editorPreview="\ACM_Vespaccia\UI\Woodland\ACM_Ves_Soldier_SL.jpg";
		displayname="Squad Leader";
		uniformClass="ACM_Vesp_Clothes4_1";
		linkedItems[]=
		{
			"CUP_V_B_Eagle_SPC_Rifleman",
			"ACM_H_Vesp_6B47_v2",
			"CUP_NVG_PVS15_black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnlinkedItems[]=
		{
			"CUP_V_B_Eagle_SPC_Rifleman",
			"ACM_H_Vesp_6B47_v2",
			"CUP_NVG_PVS15_black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
	};
	class ACM_Ves_Soldier_GL: ACM_Ves_Soldier
	{
		editorPreview="\ACM_Vespaccia\UI\Woodland\ACM_Ves_Soldier_GL.jpg";
		displayname="Grenadier";
		uniformClass="ACM_Vesp_Clothes2_1";
		linkedItems[]=
		{
			"CUP_V_B_Eagle_SPC_GL",
			"ACM_H_Vesp_6B47_v2_GogglesClosed",
			"CUP_NVG_PVS15_black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnlinkedItems[]=
		{
			"CUP_V_B_Eagle_SPC_GL",
			"ACM_H_Vesp_6B47_v2_GogglesClosed",
			"CUP_NVG_PVS15_black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		weapons[]=
		{
			"CUP_arifle_G36K_AG36_wdl",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"CUP_arifle_G36K_AG36_wdl",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_1Rnd_HE_M203",
			"CUP_1Rnd_HE_M203",
			"Chemlight_green",
			"Chemlight_green",
			"CUP_HandGrenade_M67",
			"CUP_HandGrenade_M67",
			"SmokeShell",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_1Rnd_HEDP_M203",
			"CUP_1Rnd_HEDP_M203",
			"CUP_1Rnd_HEDP_M203",
			"CUP_1Rnd_HEDP_M203",
			"CUP_1Rnd_HEDP_M203",
			"CUP_1Rnd_HEDP_M203",
			"CUP_1Rnd_Smoke_M203",
			"CUP_1Rnd_Smoke_M203",
			"CUP_1Rnd_Smoke_M203"
		};
		respawnmagazines[]=
		{
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_1Rnd_HE_M203",
			"CUP_1Rnd_HE_M203",
			"Chemlight_green",
			"Chemlight_green",
			"CUP_HandGrenade_M67",
			"CUP_HandGrenade_M67",
			"SmokeShell",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_1Rnd_HEDP_M203",
			"CUP_1Rnd_HEDP_M203",
			"CUP_1Rnd_HEDP_M203",
			"CUP_1Rnd_HEDP_M203",
			"CUP_1Rnd_HEDP_M203",
			"CUP_1Rnd_HEDP_M203",
			"CUP_1Rnd_Smoke_M203",
			"CUP_1Rnd_Smoke_M203",
			"CUP_1Rnd_Smoke_M203"
		};
	};
	class ACM_Ves_Soldier_AT: ACM_Ves_Soldier
	{
		editorPreview="\ACM_Vespaccia\UI\Woodland\ACM_Ves_Soldier_AT.jpg";
		displayname="Anti-Tank";
		backpack="ACM_Backpack_VES_AT";
		uniformClass="ACM_Vesp_Clothes1_1";
		linkedItems[]=
		{
			"CUP_V_B_Eagle_SPC_AT",
			"ACM_H_Vesp_6B47_v2_GogglesDown",
			"CUP_NVG_PVS15_black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnlinkedItems[]=
		{
			"CUP_V_B_Eagle_SPC_AT",
			"ACM_H_Vesp_6B47_v2_GogglesDown",
			"CUP_NVG_PVS15_black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		weapons[]=
		{
			"CUP_arifle_G36E_wdl",
			"CUP_launch_RPG7V_PGO7V3",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"CUP_arifle_G36E_wdl",
			"CUP_launch_RPG7V_PGO7V3",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"Chemlight_green",
			"Chemlight_green",
			"CUP_HandGrenade_M67",
			"CUP_HandGrenade_M67",
			"SmokeShell",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl"
		};
		respawnmagazines[]=
		{
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"Chemlight_green",
			"Chemlight_green",
			"CUP_HandGrenade_M67",
			"CUP_HandGrenade_M67",
			"SmokeShell",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl"
		};
	};
	class ACM_Ves_Soldier_AR: ACM_Ves_Soldier
	{
		editorPreview="\ACM_Vespaccia\UI\Woodland\ACM_Ves_Soldier_AR.jpg";
		displayname="Automatic Rifleman";
		uniformClass="ACM_Vesp_Clothes3_1";
		linkedItems[]=
		{
			"CUP_V_B_Eagle_SPC_AR",
			"ACM_H_Vesp_6B47_v2",
			"CUP_NVG_PVS15_black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnlinkedItems[]=
		{
			"CUP_V_B_Eagle_SPC_AR",
			"ACM_H_Vesp_6B47_v2",
			"CUP_NVG_PVS15_black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		weapons[]=
		{
			"CUP_arifle_G36A_wdl",
			"CUP_hgun_M9",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"CUP_arifle_G36A_wdl",
			"CUP_hgun_M9",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_100Rnd_556x45_BetaCMag_wdl",
			"CUP_100Rnd_556x45_BetaCMag_wdl",
			"CUP_100Rnd_556x45_BetaCMag_wdl",
			"CUP_100Rnd_556x45_BetaCMag_wdl",
			"CUP_100Rnd_556x45_BetaCMag_wdl",
			"CUP_HandGrenade_M67",
			"CUP_HandGrenade_M67",
			"SmokeShell",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9"
		};
		respawnmagazines[]=
		{
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_100Rnd_556x45_BetaCMag_wdl",
			"CUP_100Rnd_556x45_BetaCMag_wdl",
			"CUP_100Rnd_556x45_BetaCMag_wdl",
			"CUP_100Rnd_556x45_BetaCMag_wdl",
			"CUP_100Rnd_556x45_BetaCMag_wdl",
			"CUP_HandGrenade_M67",
			"CUP_HandGrenade_M67",
			"SmokeShell",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9"
		};
	};
	class ACM_Ves_Soldier_MR: ACM_Ves_Soldier
	{
		editorPreview="\ACM_Vespaccia\UI\Woodland\ACM_Ves_Soldier_MR.jpg";
		displayname="Marksman";
		uniformClass="ACM_Vesp_Clothes2_1";
		linkedItems[]=
		{
			"CUP_V_B_Eagle_SPC_DMR",
			"ACM_H_Vesp_Boonie",
			"CUP_NVG_PVS15_Hide",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnlinkedItems[]=
		{
			"CUP_V_B_Eagle_SPC_DMR",
			"ACM_H_Vesp_Boonie",
			"CUP_NVG_PVS15_Hide",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		weapons[]=
		{
			"ACM_VES_MR_Marksman_G3",
			"CUP_hgun_M9",
			"Rangefinder",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"ACM_VES_MR_Marksman_G3",
			"CUP_hgun_M9",
			"Rangefinder",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_20Rnd_762x51_G3",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_20Rnd_762x51_G3",
			"CUP_20Rnd_762x51_G3",
			"CUP_20Rnd_762x51_G3",
			"CUP_20Rnd_762x51_G3",
			"CUP_20Rnd_762x51_G3",
			"CUP_20Rnd_762x51_G3",
			"CUP_20Rnd_762x51_G3"
		};
		respawnmagazines[]=
		{
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_20Rnd_762x51_G3",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_20Rnd_762x51_G3",
			"CUP_20Rnd_762x51_G3",
			"CUP_20Rnd_762x51_G3",
			"CUP_20Rnd_762x51_G3",
			"CUP_20Rnd_762x51_G3",
			"CUP_20Rnd_762x51_G3",
			"CUP_20Rnd_762x51_G3"
		};
		headgearList[]={};
	};
	class ACM_Ves_Soldier_CLE: ACM_Ves_Soldier
	{
		editorPreview="\ACM_Vespaccia\UI\Woodland\ACM_Ves_Soldier_CLE.jpg";
		displayname="Combat Life Saver";
		backpack="ACM_Backpack_VES_Medic";
		uniformClass="ACM_Vesp_Clothes1_1";
		linkedItems[]=
		{
			"CUP_V_B_Eagle_SPC_Rifleman",
			"ACM_H_Vesp_6B47_v2",
			"CUP_NVG_PVS15_black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnlinkedItems[]=
		{
			"CUP_V_B_Eagle_SPC_Rifleman",
			"ACM_H_Vesp_6B47_v2",
			"CUP_NVG_PVS15_black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		weapons[]=
		{
			"CUP_arifle_G36K_VFG_wdl",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"CUP_arifle_G36K_VFG_wdl",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"Chemlight_green",
			"Chemlight_green",
			"CUP_HandGrenade_M67",
			"CUP_HandGrenade_M67",
			"SmokeShell"
		};
		respawnmagazines[]=
		{
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"Chemlight_green",
			"Chemlight_green",
			"CUP_HandGrenade_M67",
			"CUP_HandGrenade_M67",
			"SmokeShell"
		};
		attendant=1;
	};
	class ACM_Ves_Soldier_lite: ACM_Ves_Soldier
	{
		editorPreview="\ACM_Vespaccia\UI\Woodland\ACM_Ves_Soldier_lite.jpg";
		displayname="Rifleman (Light)";
		uniformClass="ACM_Vesp_Clothes1_1";
		linkedItems[]=
		{
			"CFP_Alice_Vest2",
			"ACM_H_Vesp_Cap",
			"CUP_NVG_PVS15_Hide",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnlinkedItems[]=
		{
			"CFP_Alice_Vest2",
			"ACM_H_Vesp_Cap",
			"CUP_NVG_PVS15_Hide",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		headgearList[]={};
	};
	class ACM_Ves_Soldier_ATLite: ACM_Ves_Soldier
	{
		editorPreview="\ACM_Vespaccia\UI\Woodland\ACM_Ves_Soldier_ATLite.jpg";
		displayname="Rifleman(AT)";
		uniformClass="ACM_Vesp_Clothes1_1";
		weapons[]=
		{
			"CUP_arifle_G36K_VFG_wdl",
			"CUP_launch_RShG2",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"CUP_arifle_G36K_VFG_wdl",
			"CUP_launch_RShG2",
			"Throw",
			"Put"
		};
		linkedItems[]=
		{
			"CUP_V_B_Eagle_SPC_Corpsman",
			"ACM_H_Vesp_6B47_v2_GogglesClosed",
			"CUP_NVG_PVS15_black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnlinkedItems[]=
		{
			"CUP_V_B_Eagle_SPC_Corpsman",
			"ACM_H_Vesp_6B47_v2_GogglesClosed",
			"CUP_NVG_PVS15_black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
	};
	class ACM_Ves_Soldier_ATHeavy: ACM_Ves_Soldier
	{
		editorPreview="\ACM_Vespaccia\UI\Woodland\ACM_Ves_Soldier_ATHeavy.jpg";
		displayname="Anti-Tank Heavy";
		backpack="ACM_Backpack_VES_AT_Heavy";
		uniformClass="ACM_Vesp_Clothes3_1";
		weapons[]=
		{
			"CUP_arifle_G36K_VFG_wdl",
			"launch_O_Vorona_green_F",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"CUP_arifle_G36K_VFG_wdl",
			"launch_O_Vorona_green_F",
			"Throw",
			"Put"
		};
		linkedItems[]=
		{
			"CUP_V_B_Eagle_SPC_MG",
			"ACM_H_Vesp_6B47_v2_GogglesUp",
			"CUP_NVG_PVS15_black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnlinkedItems[]=
		{
			"CUP_V_B_Eagle_SPC_MG",
			"ACM_H_Vesp_6B47_v2_GogglesUp",
			"CUP_NVG_PVS15_black",
			"CUP_NVG_PVS15_black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		magazines[]=
		{
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"Chemlight_green",
			"Chemlight_green",
			"CUP_HandGrenade_M67",
			"CUP_HandGrenade_M67",
			"SmokeShell",
			"Vorona_HEAT"
		};
		respawnmagazines[]=
		{
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"Chemlight_green",
			"Chemlight_green",
			"CUP_HandGrenade_M67",
			"CUP_HandGrenade_M67",
			"SmokeShell",
			"Vorona_HEAT"
		};
	};
	class ACM_Ves_Soldier_Crewman: ACM_Ves_Soldier
	{
		editorPreview="\ACM_Vespaccia\UI\Woodland\ACM_Ves_Soldier_Crewman.jpg";
		displayname="Crewman";
		uniformClass="ACM_Vesp_Clothes2_1";
		weapons[]=
		{
			"CUP_arifle_G36C_VFG_Carry",
			"CUP_hgun_M9",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"CUP_arifle_G36C_VFG_Carry",
			"CUP_hgun_M9",
			"Throw",
			"Put"
		};
		linkedItems[]=
		{
			"CUP_V_B_Eagle_SPC_Crew",
			"H_HelmetCrew_B",
			"CUP_NVG_PVS15_black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnlinkedItems[]=
		{
			"CUP_V_B_Eagle_SPC_Crew",
			"H_HelmetCrew_B",
			"CUP_NVG_PVS15_black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		items[]=
		{
			"FirstAidKit",
			"ToolKit"
		};
		respawnitems[]=
		{
			"FirstAidKit",
			"ToolKit"
		};
		magazines[]=
		{
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9"
		};
		respawnmagazines[]=
		{
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9"
		};
		headgearList[]={};
	};
	class ACM_Ves_Soldier_Officer: ACM_Ves_Soldier
	{
		editorPreview="\ACM_Vespaccia\UI\Woodland\ACM_Ves_Soldier_Officer.jpg";
		displayname="Officer (Combat)";
		uniformClass="ACM_Vesp_Clothes5_1";
		weapons[]=
		{
			"CUP_arifle_G36C_VFG_Carry",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"CUP_arifle_G36C_VFG_Carry",
			"Throw",
			"Put"
		};
		linkedItems[]=
		{
			"CUP_V_B_Eagle_SPC_Officer",
			"ACM_H_Vesp_Cap",
			"G_Aviator",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnlinkedItems[]=
		{
			"CUP_V_B_Eagle_SPC_Officer",
			"ACM_H_Vesp_Cap",
			"G_Aviator",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		magazines[]=
		{
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"Chemlight_green",
			"Chemlight_green",
			"CUP_HandGrenade_M67",
			"CUP_HandGrenade_M67",
			"SmokeShell"
		};
		respawnmagazines[]=
		{
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"Chemlight_green",
			"Chemlight_green",
			"CUP_HandGrenade_M67",
			"CUP_HandGrenade_M67",
			"SmokeShell"
		};
		headgearList[]={};
	};
	class ACM_Ves_Soldier_Officer_NC: ACM_Ves_Soldier
	{
		editorPreview="\ACM_Vespaccia\UI\Woodland\ACM_Ves_Soldier_Officer_NC.jpg";
		displayname="Officer (Non-Combat)";
		uniformClass="ACM_Vesp_Clothes5_1";
		weapons[]=
		{
			"CUP_hgun_M9",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"CUP_hgun_M9",
			"Throw",
			"Put"
		};
		linkedItems[]=
		{
			"CUP_V_O_TK_OfficerBelt2",
			"CFP_Ranger_Beret_Cmdr",
			"G_Aviator",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnlinkedItems[]=
		{
			"CUP_V_O_TK_OfficerBelt2",
			"CFP_Ranger_Beret_Cmdr",
			"G_Aviator",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		magazines[]=
		{
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"Chemlight_green",
			"Chemlight_green",
			"CUP_HandGrenade_M67",
			"SmokeShell",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9"
		};
		respawnmagazines[]=
		{
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"Chemlight_green",
			"Chemlight_green",
			"CUP_HandGrenade_M67",
			"SmokeShell",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9"
		};
		headgearList[]={};
	};
	class ACM_Ves_Soldier_AA: ACM_Ves_Soldier
	{
		editorPreview="\ACM_Vespaccia\UI\Woodland\ACM_Ves_Soldier_AA.jpg";
		displayname="Anti-Air";
		uniformClass="ACM_Vesp_Clothes4_1";
		weapons[]=
		{
			"CUP_arifle_G36K_VFG_wdl",
			"CUP_launch_FIM92Stinger",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"CUP_arifle_G36K_VFG_wdl",
			"CUP_launch_FIM92Stinger",
			"Throw",
			"Put"
		};
		linkedItems[]=
		{
			"CUP_V_B_Eagle_SPC_Corpsman",
			"ACM_H_Vesp_6B47_v2_GogglesClosed",
			"CUP_NVG_PVS15_black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnlinkedItems[]=
		{
			"CUP_V_B_Eagle_SPC_Corpsman",
			"ACM_H_Vesp_6B47_v2_GogglesClosed",
			"CUP_NVG_PVS15_black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		magazines[]=
		{
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl"
		};
		respawnmagazines[]=
		{
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl"
		};
	};
	class ACM_Ves_Soldier_HeliPilot: ACM_Ves_Soldier
	{
		editorPreview="\ACM_Vespaccia\UI\Woodland\ACM_Ves_Soldier_HeliPilot.jpg";
		displayname="Rotary-Pilot";
		uniformClass="ACM_Vesp_Clothes2_1";
		weapons[]=
		{
			"CUP_arifle_G36C_VFG_Carry",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"CUP_arifle_G36C_VFG_Carry",
			"Throw",
			"Put"
		};
		linkedItems[]=
		{
			"CUP_V_B_Eagle_SPC_Empty",
			"H_PilotHelmetHeli_O",
			"CUP_NVG_PVS15_black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnlinkedItems[]=
		{
			"CUP_V_B_Eagle_SPC_Empty",
			"H_PilotHelmetHeli_O",
			"CUP_NVG_PVS15_black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		magazines[]=
		{
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36"
		};
		respawnmagazines[]=
		{
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36"
		};
		headgearList[]={};
	};
	class ACM_Ves_Soldier_JetPilot: ACM_Ves_Soldier
	{
		editorPreview="\ACM_Vespaccia\UI\Woodland\ACM_Ves_Soldier_JetPilot.jpg";
		displayname="Fixed Wing-Pilot";
		uniformClass="CUP_U_I_RACS_PilotOverall";
		weapons[]=
		{
			"CUP_hgun_M9",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"CUP_hgun_M9",
			"Throw",
			"Put"
		};
		linkedItems[]=
		{
			"Aircrew_vest_2_NH",
			"H_PilotHelmetFighter_B",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnlinkedItems[]=
		{
			"Aircrew_vest_2_NH",
			"H_PilotHelmetFighter_B",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		magazines[]=
		{
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"Chemlight_green",
			"Chemlight_green",
			"CUP_HandGrenade_M67",
			"SmokeShell",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9"
		};
		respawnmagazines[]=
		{
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"Chemlight_green",
			"Chemlight_green",
			"CUP_HandGrenade_M67",
			"SmokeShell",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9"
		};
		headgearList[]={};
	};
	class ACM_Ves_Res_Soldier: ACM_Ves_Soldier
	{
		editorPreview="\ACM_Vespaccia\UI\Woodland\ACM_Ves_Res_Soldier.jpg";
		editorSubcategory="ACM_VES_RES";
		displayname="Rifleman";
		uniformClass="ACM_Vesp_Clothes1_1";
		weapons[]=
		{
			"CUP_arifle_G3A3_modern_ris",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"CUP_arifle_G3A3_modern_ris",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"CUP_20Rnd_762x51_G3",
			"CUP_20Rnd_762x51_G3",
			"CUP_20Rnd_762x51_G3",
			"CUP_20Rnd_762x51_G3",
			"CUP_20Rnd_762x51_G3",
			"CUP_20Rnd_762x51_G3",
			"CUP_20Rnd_762x51_G3",
			"CUP_20Rnd_762x51_G3",
			"CUP_20Rnd_762x51_G3",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE"
		};
		respawnmagazines[]=
		{
			"CUP_20Rnd_762x51_G3",
			"CUP_20Rnd_762x51_G3",
			"CUP_20Rnd_762x51_G3",
			"CUP_20Rnd_762x51_G3",
			"CUP_20Rnd_762x51_G3",
			"CUP_20Rnd_762x51_G3",
			"CUP_20Rnd_762x51_G3",
			"CUP_20Rnd_762x51_G3",
			"CUP_20Rnd_762x51_G3",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE"
		};
		linkedItems[]=
		{
			"CUP_V_B_Interceptor_Rifleman_Olive",
			"CUP_H_Ger_M92_GG_CF",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnlinkedItems[]=
		{
			"CUP_V_B_Interceptor_Rifleman_Olive",
			"CUP_H_Ger_M92_GG_CF",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		headgearList[]=
		{
			"CUP_H_Ger_M92",
			0.40000001,
			"CUP_H_Ger_M92_GG_CF",
			0.30000001,
			"CUP_H_Ger_M92_GG",
			0.30000001,
			"CUP_H_Ger_M92_GG_CF",
			0.30000001,
			"CUP_H_Ger_M92_GG_CB",
			0.30000001,
			"ACM_H_Vesp_Boonie",
			0.1,
			"ACM_H_Vesp_Cap",
			0.1
		};
	};
	class ACM_Ves_Res_Soldier_TL: ACM_Ves_Res_Soldier
	{
		editorPreview="\ACM_Vespaccia\UI\Woodland\ACM_Ves_Res_Soldier_TL.jpg";
		displayname="Team Leader";
		uniformClass="ACM_Vesp_Clothes4_1";
		weapons[]=
		{
			"CUP_arifle_G3A3_ris_vfg",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"CUP_arifle_G3A3_ris_vfg",
			"Throw",
			"Put"
		};
		linkedItems[]=
		{
			"CUP_V_B_Interceptor_Rifleman_Olive",
			"CUP_H_Ger_M92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnlinkedItems[]=
		{
			"CUP_V_B_Interceptor_Rifleman_Olive",
			"CUP_H_Ger_M92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
	};
	class ACM_Ves_Res_Soldier_GL: ACM_Ves_Res_Soldier
	{
		editorPreview="\ACM_Vespaccia\UI\Woodland\ACM_Ves_Res_Soldier_GL.jpg";
		displayname="Grenadier";
		uniformClass="ACM_Vesp_Clothes3_1";
		weapons[]=
		{
			"CUP_glaunch_M32",
			"CUP_hgun_M9",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"CUP_glaunch_M32",
			"CUP_hgun_M9",
			"Throw",
			"Put"
		};
		linkedItems[]=
		{
			"CUP_V_B_Interceptor_Grenadier_Olive",
			"CUP_H_Ger_M92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnlinkedItems[]=
		{
			"CUP_V_B_Interceptor_Grenadier_Olive",
			"CUP_H_Ger_M92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		magazines[]=
		{
			"CUP_6Rnd_HE_M203",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_6Rnd_HE_M203",
			"CUP_6Rnd_HE_M203",
			"CUP_6Rnd_HE_M203",
			"CUP_6Rnd_Smoke_M203",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9"
		};
		respawnmagazines[]=
		{
			"CUP_6Rnd_HE_M203",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_6Rnd_HE_M203",
			"CUP_6Rnd_HE_M203",
			"CUP_6Rnd_HE_M203",
			"CUP_6Rnd_Smoke_M203",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9"
		};
	};
	class ACM_Ves_Res_Soldier_LightAT: ACM_Ves_Res_Soldier
	{
		editorPreview="\ACM_Vespaccia\UI\Woodland\ACM_Ves_Res_Soldier_LightAT.jpg";
		displayname="Rifleman (AT)";
		uniformClass="ACM_Vesp_Clothes1_1";
		weapons[]=
		{
			"CUP_arifle_G3A3_modern_ris",
			"CUP_launch_RPG26",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"CUP_arifle_G3A3_modern_ris",
			"CUP_launch_RPG26",
			"Throw",
			"Put"
		};
		linkedItems[]=
		{
			"CUP_V_B_Interceptor_Grenadier_Olive",
			"CUP_H_Ger_M92_GG",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnlinkedItems[]=
		{
			"CUP_V_B_Interceptor_Grenadier_Olive",
			"CUP_H_Ger_M92_GG",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
	};
	class ACM_Ves_Res_Soldier_AR: ACM_Ves_Res_Soldier
	{
		editorPreview="\ACM_Vespaccia\UI\Woodland\ACM_Ves_Res_Soldier_AR.jpg";
		displayname="Automatic Rifleman";
		uniformClass="ACM_Vesp_Clothes3_1";
		weapons[]=
		{
			"LMG_Zafir_F",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"LMG_Zafir_F",
			"Throw",
			"Put"
		};
		linkedItems[]=
		{
			"CUP_V_B_Interceptor_Base_Olive",
			"CUP_H_Ger_M92_GG_CB",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnlinkedItems[]=
		{
			"CUP_V_B_Interceptor_Base_Olive",
			"CUP_H_Ger_M92_GG_CB",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		magazines[]=
		{
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"150Rnd_762x54_Box",
			"150Rnd_762x54_Box",
			"150Rnd_762x54_Box",
			"150Rnd_762x54_Box",
			"150Rnd_762x54_Box",
			"CUP_HandGrenade_M67",
			"CUP_HandGrenade_M67",
			"SmokeShell"
		};
		respawnmagazines[]=
		{
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"150Rnd_762x54_Box",
			"150Rnd_762x54_Box",
			"150Rnd_762x54_Box",
			"150Rnd_762x54_Box",
			"150Rnd_762x54_Box",
			"CUP_HandGrenade_M67",
			"CUP_HandGrenade_M67",
			"SmokeShell"
		};
	};
	class ACM_Ves_Res_Soldier_MR: ACM_Ves_Res_Soldier
	{
		editorPreview="\ACM_Vespaccia\UI\Woodland\ACM_Ves_Res_Soldier_MR.jpg";
		displayname="Marksman";
		uniformClass="ACM_Vesp_Clothes2_1";
		weapons[]=
		{
			"ACM_VES_MR_Marksman_G3_Reserve",
			"CUP_hgun_M9",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"ACM_VES_MR_Marksman_G3_Reserve",
			"CUP_hgun_M9",
			"Throw",
			"Put"
		};
		linkedItems[]=
		{
			"CUP_V_B_Interceptor_Base_Olive",
			"ACM_H_Vesp_Boonie",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnlinkedItems[]=
		{
			"CUP_V_B_Interceptor_Base_Olive",
			"ACM_H_Vesp_Boonie",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		magazines[]=
		{
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_20Rnd_762x51_G3",
			"CUP_20Rnd_762x51_G3",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_20Rnd_762x51_G3"
		};
		respawnmagazines[]=
		{
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_20Rnd_762x51_G3",
			"CUP_20Rnd_762x51_G3",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_20Rnd_762x51_G3"
		};
		headgearList[]={};
	};
	class ACM_Ves_Res_Soldier_CLE: ACM_Ves_Res_Soldier
	{
		editorPreview="\ACM_Vespaccia\UI\Woodland\ACM_Ves_Res_Soldier_CLE.jpg";
		displayname="Combat Life Saver";
		backpack="ACM_Backpack_VES_Medic";
		uniformClass="ACM_Vesp_Clothes2_1";
		weapons[]=
		{
			"CUP_arifle_G3A3_modern_ris",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"CUP_arifle_G3A3_modern_ris",
			"Throw",
			"Put"
		};
		linkedItems[]=
		{
			"CUP_V_B_Interceptor_Rifleman_Olive",
			"CUP_H_Ger_M92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnlinkedItems[]=
		{
			"CUP_V_B_Interceptor_Rifleman_Olive",
			"CUP_H_Ger_M92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		attendant=1;
	};
	class ACM_Ves_Res_Soldier_lite: ACM_Ves_Res_Soldier
	{
		editorPreview="\ACM_Vespaccia\UI\Woodland\ACM_Ves_Res_Soldier_lite.jpg";
		displayname="Rifleman (Light)";
		uniformClass="ACM_Vesp_Clothes2_1";
		weapons[]=
		{
			"CUP_arifle_G3A3_modern_ris",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"CUP_arifle_G3A3_modern_ris",
			"Throw",
			"Put"
		};
		linkedItems[]=
		{
			"CFP_Alice_Vest",
			"ACM_H_Vesp_Cap",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnlinkedItems[]=
		{
			"CFP_Alice_Vest",
			"ACM_H_Vesp_Cap",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		headgearList[]={};
	};
	class ACM_Ves_Res_Soldier_Officer: ACM_Ves_Res_Soldier
	{
		editorPreview="\ACM_Vespaccia\UI\Woodland\ACM_Ves_Res_Soldier_Officer.jpg";
		displayname="Officer (Combat)";
		uniformClass="ACM_Vesp_Clothes5_1";
		weapons[]=
		{
			"CUP_arifle_G3A3_ris",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"CUP_arifle_G3A3_ris",
			"Throw",
			"Put"
		};
		linkedItems[]=
		{
			"V_BandollierB_rgr",
			"ACM_H_Vesp_Cap",
			"G_Aviator",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnlinkedItems[]=
		{
			"V_BandollierB_rgr",
			"ACM_H_Vesp_Cap",
			"G_Aviator",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		headgearList[]={};
	};
	class ACM_Ves_Res_Soldier_Officer_NC: ACM_Ves_Res_Soldier
	{
		editorPreview="\ACM_Vespaccia\UI\Woodland\ACM_Ves_Res_Soldier_Officer_NC.jpg";
		displayname="Officer (Non-Combat)";
		uniformClass="ACM_Vesp_Clothes5_1";
		weapons[]=
		{
			"CUP_hgun_M9",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"CUP_hgun_M9",
			"Throw",
			"Put"
		};
		linkedItems[]=
		{
			"CUP_V_O_TK_OfficerBelt2",
			"CFP_Ranger_Beret_3Btn",
			"G_Aviator",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnlinkedItems[]=
		{
			"CUP_V_O_TK_OfficerBelt2",
			"CFP_Ranger_Beret_3Btn",
			"G_Aviator",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		magazines[]=
		{
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"Chemlight_green",
			"Chemlight_green",
			"CUP_HandGrenade_M67",
			"SmokeShell",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9"
		};
		respawnmagazines[]=
		{
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"Chemlight_green",
			"Chemlight_green",
			"CUP_HandGrenade_M67",
			"SmokeShell",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9"
		};
		headgearList[]={};
	};
	class ACM_Ves_Spec_Soldier: ACM_Ves_Soldier
	{
		editorPreview="\ACM_Vespaccia\UI\Woodland\ACM_Ves_Spec_Soldier.jpg";
		editorSubcategory="EdSubcat_Personnel_SpecialForces";
		displayname="Rifleman";
		uniformClass="ACM_Vesp_Clothes6_1";
		weapons[]=
		{
			"ACM_VES_Spec_Rifleman",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"ACM_VES_Spec_Rifleman",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"Chemlight_green",
			"Chemlight_green",
			"CUP_HandGrenade_M67",
			"CUP_HandGrenade_M67",
			"SmokeShell"
		};
		respawnmagazines[]=
		{
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"Chemlight_green",
			"Chemlight_green",
			"CUP_HandGrenade_M67",
			"CUP_HandGrenade_M67",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"CUP_V_MBSS_PACA_Green",
			"ACM_H_Spec_OpsCore1_1",
			"CFP_ANPVS15_Camo_V3",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnlinkedItems[]=
		{
			"CUP_V_MBSS_PACA_Green",
			"ACM_H_Spec_OpsCore1_1",
			"CFP_ANPVS15_Camo_V3",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		headgearList[]={};
		facewearList[]=
		{
			"G_Bandanna_blk",
			0.2,
			"G_Bandanna_khk",
			0.2,
			"CUP_TK_NeckScarf",
			0.30000001,
			"CFP_Scarfshades_green",
			0.30000001,
			"CFP_Scarfshades_white",
			0.30000001,
			"CFP_Scarfshades_tan",
			0.30000001,
			"CFP_Scarfshades_grey",
			0.30000001,
			"CFP_Oakleys_Clr",
			0.2,
			"CFP_Oakleys_Drk",
			0.2,
			"CFP_Oakleys_Embr",
			0.2,
			"CFP_Scarfbeard_green",
			0.30000001,
			"CFP_Scarfbeard_grey",
			0.30000001,
			"CFP_Scarfbeard_tan",
			0.30000001,
			"CFP_Scarfbeard_white",
			0.30000001,
			"CFP_Scarfbeardshades_green",
			0.30000001,
			"CFP_Scarfbeardshades_grey",
			0.30000001,
			"CFP_Scarfbeardshades_tan",
			0.30000001,
			"CFP_Scarfbeardshades_white",
			0.30000001,
			"CUP_FR_Neckscarf2",
			0.30000001,
			"CFP_Tac_Goggles_Blk_Drk",
			0.2,
			"CFP_Tac_Goggles_Blk_Ylw",
			0.2,
			"CFP_Tac_Goggles_Blk_Clr",
			0.2,
			"CFP_Tac_Goggles_Blk_Drk",
			0.2,
			"CFP_Oakley_Goggles_Blk",
			0.2,
			"CFP_Oakley_Goggles_MCam",
			0.2,
			"CFP_Face_Wear_Blk",
			0.2,
			"CFP_Face_Wear_Spook",
			0.2,
			"CFP_UA_Thermals_Grn",
			0.2,
			"CFP_UA_Thermals_Grn_GPS",
			0.2,
			"CFP_UA_Thermals_Blk",
			0.2,
			"CFP_UA_Thermals_Blk_GPS",
			0.2,
			"CFP_Oakley_Thermals_Gry",
			0.2,
			"CFP_Oakley_Thermals_Blk",
			0.2,
			"CFP_Foretex",
			0.2
		};
	};
	class ACM_Ves_Spec_Soldier_TL: ACM_Ves_Spec_Soldier
	{
		editorPreview="\ACM_Vespaccia\UI\Woodland\ACM_Ves_Spec_Soldier_TL.jpg";
		displayname="Team Leader";
		weapons[]=
		{
			"ACM_VES_Spec_TL",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"ACM_VES_Spec_TL",
			"Throw",
			"Put"
		};
		linkedItems[]=
		{
			"CUP_V_MBSS_PACA2_Green",
			"ACM_H_Spec_OpsCore1_1",
			"CFP_ANPVS15_Camo_V3",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnlinkedItems[]=
		{
			"CUP_V_MBSS_PACA2_Green",
			"ACM_H_Spec_OpsCore1_1",
			"CFP_ANPVS15_Camo_V3",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
	};
	class ACM_Ves_Spec_Soldier_GL: ACM_Ves_Spec_Soldier
	{
		editorPreview="\ACM_Vespaccia\UI\Woodland\ACM_Ves_Spec_Soldier_GL.jpg";
		displayname="Grenadier";
		weapons[]=
		{
			"ACM_VES_Spec_GL",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"ACM_VES_Spec_GL",
			"Throw",
			"Put"
		};
		linkedItems[]=
		{
			"CUP_V_MBSS_PACA2_Green",
			"ACM_H_Spec_OpsCore3_1",
			"CFP_ANPVS15_Camo_V3",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnlinkedItems[]=
		{
			"CUP_V_MBSS_PACA2_Green",
			"ACM_H_Spec_OpsCore3_1",
			"CFP_ANPVS15_Camo_V3",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		magazines[]=
		{
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_1Rnd_HE_M203",
			"CUP_1Rnd_HE_M203",
			"Chemlight_green",
			"Chemlight_green",
			"CUP_HandGrenade_M67",
			"CUP_HandGrenade_M67",
			"SmokeShell",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_1Rnd_HEDP_M203",
			"CUP_1Rnd_HEDP_M203",
			"CUP_1Rnd_HEDP_M203",
			"CUP_1Rnd_HEDP_M203",
			"CUP_1Rnd_HEDP_M203",
			"CUP_1Rnd_HEDP_M203",
			"CUP_1Rnd_Smoke_M203",
			"CUP_1Rnd_Smoke_M203",
			"CUP_1Rnd_Smoke_M203"
		};
		respawnmagazines[]=
		{
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_1Rnd_HE_M203",
			"CUP_1Rnd_HE_M203",
			"Chemlight_green",
			"Chemlight_green",
			"CUP_HandGrenade_M67",
			"CUP_HandGrenade_M67",
			"SmokeShell",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_1Rnd_HEDP_M203",
			"CUP_1Rnd_HEDP_M203",
			"CUP_1Rnd_HEDP_M203",
			"CUP_1Rnd_HEDP_M203",
			"CUP_1Rnd_HEDP_M203",
			"CUP_1Rnd_HEDP_M203",
			"CUP_1Rnd_Smoke_M203",
			"CUP_1Rnd_Smoke_M203",
			"CUP_1Rnd_Smoke_M203"
		};
	};
	class ACM_Ves_Spec_Soldier_LiteAT: ACM_Ves_Spec_Soldier
	{
		editorPreview="\ACM_Vespaccia\UI\Woodland\ACM_Ves_Spec_Soldier_LiteAT.jpg";
		displayname="Rifleman (AT)";
		weapons[]=
		{
			"ACM_VES_Spec_Rifleman",
			"CUP_launch_RPG26",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"ACM_VES_Spec_Rifleman",
			"CUP_launch_RPG26",
			"Throw",
			"Put"
		};
		linkedItems[]=
		{
			"CUP_V_MBSS_PACA_Green",
			"ACM_H_Spec_OpsCore5_1",
			"CFP_ANPVS15_Camo_V3",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnlinkedItems[]=
		{
			"CUP_V_MBSS_PACA_Green",
			"ACM_H_Spec_OpsCore5_1",
			"CFP_ANPVS15_Camo_V3",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
	};
	class ACM_Ves_Spec_Soldier_AT: ACM_Ves_Spec_Soldier
	{
		editorPreview="\ACM_Vespaccia\UI\Woodland\ACM_Ves_Spec_Soldier_AT.jpg";
		backpack="ACM_Backpack_VES_AT_Spec";
		displayname="Anti-Tank";
		weapons[]=
		{
			"ACM_VES_Spec_Rifleman",
			"CUP_launch_Mk153Mod0",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"ACM_VES_Spec_Rifleman",
			"CUP_launch_Mk153Mod0",
			"Throw",
			"Put"
		};
		linkedItems[]=
		{
			"CUP_V_MBSS_PACA2_Green",
			"ACM_H_Spec_OpsCore2_1",
			"CFP_ANPVS15_Camo_V3",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnlinkedItems[]=
		{
			"CUP_V_MBSS_PACA2_Green",
			"ACM_H_Spec_OpsCore2_1",
			"CFP_ANPVS15_Camo_V3",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
	};
	class ACM_Ves_Spec_Soldier_MisSpec: ACM_Ves_Spec_Soldier
	{
		editorPreview="\ACM_Vespaccia\UI\Woodland\ACM_Ves_Spec_Soldier_MisSpec.jpg";
		backpack="ACM_Backpack_VES_AT_Missile";
		displayname="Missile Specialist (AT)";
		weapons[]=
		{
			"ACM_VES_Spec_Rifleman",
			"launch_I_Titan_short_F",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"ACM_VES_Spec_Rifleman",
			"launch_I_Titan_short_F",
			"Throw",
			"Put"
		};
		linkedItems[]=
		{
			"CUP_V_MBSS_PACA2_Green",
			"ACM_H_Spec_OpsCore5_1",
			"CFP_ANPVS15_Camo_V3",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnlinkedItems[]=
		{
			"CUP_V_MBSS_PACA2_Green",
			"ACM_H_Spec_OpsCore5_1",
			"CFP_ANPVS15_Camo_V3",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
	};
	class ACM_Ves_Spec_Soldier_Explspec: ACM_Ves_Spec_Soldier
	{
		editorPreview="\ACM_Vespaccia\UI\Woodland\ACM_Ves_Spec_Soldier_Explspec.jpg";
		backpack="ACM_backpack_Ves_EXPL";
		displayname="Explosives Specialist";
		weapons[]=
		{
			"ACM_VES_Spec_Carbine",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"ACM_VES_Spec_Carbine",
			"Throw",
			"Put"
		};
		linkedItems[]=
		{
			"CUP_V_MBSS_PACA2_Green",
			"ACM_H_Spec_OpsCore4_1",
			"CFP_ANPVS15_Camo_V3",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnlinkedItems[]=
		{
			"CUP_V_MBSS_PACA2_Green",
			"ACM_H_Spec_OpsCore4_1",
			"CFP_ANPVS15_Camo_V3",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		canDeactivateMines="true";
	};
	class ACM_Ves_Spec_Soldier_Marksman: ACM_Ves_Spec_Soldier
	{
		editorPreview="\ACM_Vespaccia\UI\Woodland\ACM_Ves_Spec_Soldier_Marksman.jpg";
		displayname="Marksman";
		weapons[]=
		{
			"srifle_DMR_02_camo_AMS_LP_F",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"srifle_DMR_02_camo_AMS_LP_F",
			"Throw",
			"Put"
		};
		linkedItems[]=
		{
			"V_Chestrig_rgr",
			"ACM_H_Vesp_Boonie",
			"CUP_NVG_PVS15_Hide",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnlinkedItems[]=
		{
			"V_Chestrig_rgr",
			"ACM_H_Vesp_Boonie",
			"CUP_NVG_PVS15_Hide",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		magazines[]=
		{
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag"
		};
		respawnmagazines[]=
		{
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag"
		};
	};
	class ACM_Ves_Spec_Soldier_Autorifleman: ACM_Ves_Spec_Soldier
	{
		editorPreview="\ACM_Vespaccia\UI\Woodland\ACM_Ves_Spec_Soldier_Autorifleman.jpg";
		displayname="Autorifleman";
		weapons[]=
		{
			"ACM_VES_Spec_Auto",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"ACM_VES_Spec_Auto",
			"Throw",
			"Put"
		};
		linkedItems[]=
		{
			"CUP_V_MBSS_PACA_Green",
			"ACM_H_Spec_OpsCore2_1",
			"CFP_ANPVS15_Camo_V3",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnlinkedItems[]=
		{
			"CUP_V_MBSS_PACA_Green",
			"ACM_H_Spec_OpsCore2_1",
			"CFP_ANPVS15_Camo_V3",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		magazines[]=
		{
			"CUP_100Rnd_556x45_BetaCMag_wdl",
			"CUP_100Rnd_556x45_BetaCMag_wdl",
			"CUP_100Rnd_556x45_BetaCMag_wdl",
			"CUP_100Rnd_556x45_BetaCMag_wdl",
			"CUP_100Rnd_556x45_BetaCMag_wdl",
			"CUP_100Rnd_556x45_BetaCMag_wdl",
			"CUP_100Rnd_556x45_BetaCMag_wdl",
			"CUP_100Rnd_556x45_BetaCMag_wdl",
			"CUP_100Rnd_556x45_BetaCMag_wdl"
		};
		respawnmagazines[]=
		{
			"CUP_100Rnd_556x45_BetaCMag_wdl",
			"CUP_100Rnd_556x45_BetaCMag_wdl",
			"CUP_100Rnd_556x45_BetaCMag_wdl",
			"CUP_100Rnd_556x45_BetaCMag_wdl",
			"CUP_100Rnd_556x45_BetaCMag_wdl",
			"CUP_100Rnd_556x45_BetaCMag_wdl",
			"CUP_100Rnd_556x45_BetaCMag_wdl",
			"CUP_100Rnd_556x45_BetaCMag_wdl",
			"CUP_100Rnd_556x45_BetaCMag_wdl"
		};
	};
	class ACM_Ves_Spec_Soldier_JTAC: ACM_Ves_Spec_Soldier
	{
		editorPreview="\ACM_Vespaccia\UI\Woodland\ACM_Ves_Spec_Soldier_JTAC.jpg";
		displayname="JTAC";
		backpack="B_RadioBag_01_black_F";
		weapons[]=
		{
			"ACM_VES_Spec_Rifleman",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"ACM_VES_Spec_Rifleman",
			"Throw",
			"Put"
		};
		linkedItems[]=
		{
			"CUP_V_MBSS_PACA_Green",
			"ACM_H_Spec_OpsCore5_1",
			"CFP_ANPVS15_Camo_V3",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnlinkedItems[]=
		{
			"CUP_V_MBSS_PACA_Green",
			"ACM_H_Spec_OpsCore5_1",
			"CFP_ANPVS15_Camo_V3",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
	};
	class ACM_Ves_Spec_Soldier_Medic: ACM_Ves_Spec_Soldier
	{
		editorPreview="\ACM_Vespaccia\UI\Woodland\ACM_Ves_Spec_Soldier_Medic.jpg";
		displayname="Medic";
		weapons[]=
		{
			"ACM_VES_Spec_Carbine",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"ACM_VES_Spec_Carbine",
			"Throw",
			"Put"
		};
		linkedItems[]=
		{
			"CFP_CarrierRig_Operator_OGA_OD",
			"ACM_H_Spec_OpsCore4_1",
			"CFP_ANPVS15_Camo_V3",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnlinkedItems[]=
		{
			"CFP_CarrierRig_Operator_OGA_OD",
			"ACM_H_Spec_OpsCore4_1",
			"CFP_ANPVS15_Camo_V3",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		backpack="ACM_Backpack_VES_Medic";
		magazines[]=
		{
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"Chemlight_green",
			"Chemlight_green",
			"CUP_HandGrenade_M67",
			"CUP_HandGrenade_M67",
			"SmokeShell"
		};
		respawnmagazines[]=
		{
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"Chemlight_green",
			"Chemlight_green",
			"CUP_HandGrenade_M67",
			"CUP_HandGrenade_M67",
			"SmokeShell"
		};
		attendant=1;
	};
	class ACM_Ves_Soldier_Des: ACM_Ves_Soldier
	{
		editorPreview="\ACM_Vespaccia\UI\Desert\ACM_Ves_Soldier_Des.jpg";
		faction="ACM_I_Ves2";
		displayname="Rifleman";
		uniformClass="ACM_Vesp_Clothes1_2";
		backpack="";
		weapons[]=
		{
			"CUP_arifle_XM8_Carbine_FG",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"CUP_arifle_XM8_Carbine_FG",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"Chemlight_green",
			"Chemlight_green",
			"CUP_HandGrenade_M67",
			"CUP_HandGrenade_M67",
			"SmokeShell"
		};
		respawnmagazines[]=
		{
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"Chemlight_green",
			"Chemlight_green",
			"CUP_HandGrenade_M67",
			"CUP_HandGrenade_M67",
			"SmokeShell"
		};
		items[]=
		{
			"FirstAidKit"
		};
		respawnitems[]=
		{
			"FirstAidKit"
		};
		linkedItems[]=
		{
			"CUP_V_B_Eagle_SPC_Rifleman",
			"ACM_H_Vesp_CSC_6B47_v2",
			"CUP_NVG_PVS15_black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnlinkedItems[]=
		{
			"CUP_V_B_Eagle_SPC_Rifleman",
			"ACM_H_Vesp_CSC_6B47_v2",
			"CUP_NVG_PVS15_black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		headgearList[]=
		{
			"ACM_H_Vesp_CSC_6B47_v2",
			0.40000001,
			"ACM_H_Vesp_CSC_6B47_v2_GogglesClosed",
			0.30000001,
			"ACM_H_Vesp_CSC_6B47_v2_GogglesDown",
			0.30000001,
			"ACM_H_Vesp_CSC_6B47_v2_GogglesUp",
			0.30000001,
			"ACM_H_Vesp_CSC_Boonie",
			0.1,
			"ACM_H_Vesp_CSC_Cap",
			0.1
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
		};
	};
	class ACM_Ves_Soldier_Unarmed_Des: ACM_Ves_Soldier_Des
	{
		editorPreview="\ACM_Vespaccia\UI\Desert\ACM_Ves_Soldier_Unarmed_Des.jpg";
		displayname="Rifleman (Unarmed)";
		weapons[]=
		{
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"Chemlight_green",
			"Chemlight_green",
			"CUP_HandGrenade_M67",
			"CUP_HandGrenade_M67",
			"SmokeShell"
		};
		respawnmagazines[]=
		{
			"Chemlight_green",
			"Chemlight_green",
			"CUP_HandGrenade_M67",
			"CUP_HandGrenade_M67",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"CUP_V_B_Eagle_SPC_Rifleman",
			"ACM_H_Vesp_CSC_6B47_v2",
			"CUP_NVG_PVS15_black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnlinkedItems[]=
		{
			"CUP_V_B_Eagle_SPC_Rifleman",
			"ACM_H_Vesp_CSC_6B47_v2",
			"CUP_NVG_PVS15_black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		headgearList[]=
		{
			"ACM_H_Vesp_CSC_6B47_v2",
			0.40000001,
			"ACM_H_Vesp_CSC_6B47_v2_GogglesClosed",
			0.30000001,
			"ACM_H_Vesp_CSC_6B47_v2_GogglesDown",
			0.30000001,
			"ACM_H_Vesp_CSC_6B47_v2_GogglesUp",
			0.30000001,
			"ACM_H_Vesp_CSC_Boonie",
			0.1,
			"ACM_H_Vesp_CSC_Cap",
			0.1
		};
	};
	class ACM_Ves_Soldier_Survivor_Des: ACM_Ves_Soldier_Des
	{
		editorPreview="\ACM_Vespaccia\UI\Desert\ACM_Ves_Soldier_Survivor_Des.jpg";
		displayname="Survivor";
		weapons[]=
		{
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"Chemlight_green",
			"Chemlight_green",
			"SmokeShell"
		};
		respawnmagazines[]=
		{
			"Chemlight_green",
			"Chemlight_green",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnlinkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		headgearList[]={};
	};
	class ACM_Ves_Soldier_SL_Des: ACM_Ves_Soldier_Des
	{
		editorPreview="\ACM_Vespaccia\UI\Desert\ACM_Ves_Soldier_SL_Des.jpg";
		displayname="Squad Leader";
		uniformClass="ACM_Vesp_Clothes4_2";
		linkedItems[]=
		{
			"CUP_V_B_Eagle_SPC_Rifleman",
			"ACM_H_Vesp_CSC_6B47_v2",
			"CUP_NVG_PVS15_black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnlinkedItems[]=
		{
			"CUP_V_B_Eagle_SPC_Rifleman",
			"ACM_H_Vesp_CSC_6B47_v2",
			"CUP_NVG_PVS15_black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
	};
	class ACM_Ves_Soldier_GL_Des: ACM_Ves_Soldier_Des
	{
		editorPreview="\ACM_Vespaccia\UI\Desert\ACM_Ves_Soldier_GL_Des.jpg";
		displayname="Grenadier";
		uniformClass="ACM_Vesp_Clothes2_2";
		linkedItems[]=
		{
			"CUP_V_B_Eagle_SPC_GL",
			"ACM_H_Vesp_CSC_6B47_v2_GogglesClosed",
			"CUP_NVG_PVS15_black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnlinkedItems[]=
		{
			"CUP_V_B_Eagle_SPC_GL",
			"ACM_H_Vesp_CSC_6B47_v2_GogglesClosed",
			"CUP_NVG_PVS15_black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		weapons[]=
		{
			"CUP_arifle_XM8_Carbine_GL",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"CUP_arifle_XM8_Carbine_GL",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_1Rnd_HE_M203",
			"CUP_1Rnd_HE_M203",
			"Chemlight_green",
			"Chemlight_green",
			"CUP_HandGrenade_M67",
			"CUP_HandGrenade_M67",
			"SmokeShell",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_1Rnd_HEDP_M203",
			"CUP_1Rnd_HEDP_M203",
			"CUP_1Rnd_HEDP_M203",
			"CUP_1Rnd_HEDP_M203",
			"CUP_1Rnd_HEDP_M203",
			"CUP_1Rnd_HEDP_M203",
			"CUP_1Rnd_Smoke_M203",
			"CUP_1Rnd_Smoke_M203",
			"CUP_1Rnd_Smoke_M203"
		};
		respawnmagazines[]=
		{
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_1Rnd_HE_M203",
			"CUP_1Rnd_HE_M203",
			"Chemlight_green",
			"Chemlight_green",
			"CUP_HandGrenade_M67",
			"CUP_HandGrenade_M67",
			"SmokeShell",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_1Rnd_HEDP_M203",
			"CUP_1Rnd_HEDP_M203",
			"CUP_1Rnd_HEDP_M203",
			"CUP_1Rnd_HEDP_M203",
			"CUP_1Rnd_HEDP_M203",
			"CUP_1Rnd_HEDP_M203",
			"CUP_1Rnd_Smoke_M203",
			"CUP_1Rnd_Smoke_M203",
			"CUP_1Rnd_Smoke_M203"
		};
	};
	class ACM_Ves_Soldier_AT_Des: ACM_Ves_Soldier_Des
	{
		editorPreview="\ACM_Vespaccia\UI\Desert\ACM_Ves_Soldier_AT_Des.jpg";
		displayname="Anti-Tank";
		backpack="ACM_Backpack_VES_AT";
		uniformClass="ACM_Vesp_Clothes1_2";
		linkedItems[]=
		{
			"CUP_V_B_Eagle_SPC_AT",
			"ACM_H_Vesp_CSC_6B47_v2_GogglesDown",
			"CUP_NVG_PVS15_black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnlinkedItems[]=
		{
			"CUP_V_B_Eagle_SPC_AT",
			"ACM_H_Vesp_CSC_6B47_v2_GogglesDown",
			"CUP_NVG_PVS15_black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		weapons[]=
		{
			"CUP_arifle_XM8_Compact",
			"CUP_launch_RPG7V_PGO7V3",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"CUP_arifle_XM8_Compact",
			"CUP_launch_RPG7V_PGO7V3",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"Chemlight_green",
			"Chemlight_green",
			"CUP_HandGrenade_M67",
			"CUP_HandGrenade_M67",
			"SmokeShell",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl"
		};
		respawnmagazines[]=
		{
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"Chemlight_green",
			"Chemlight_green",
			"CUP_HandGrenade_M67",
			"CUP_HandGrenade_M67",
			"SmokeShell",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl"
		};
	};
	class ACM_Ves_Soldier_AR_Des: ACM_Ves_Soldier_Des
	{
		editorPreview="\ACM_Vespaccia\UI\Desert\ACM_Ves_Soldier_AR_Des.jpg";
		displayname="Automatic Rifleman";
		uniformClass="ACM_Vesp_Clothes3_2";
		linkedItems[]=
		{
			"CUP_V_B_Eagle_SPC_AR",
			"ACM_H_Vesp_CSC_6B47_v2",
			"CUP_NVG_PVS15_black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnlinkedItems[]=
		{
			"CUP_V_B_Eagle_SPC_AR",
			"ACM_H_Vesp_CSC_6B47_v2",
			"CUP_NVG_PVS15_black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		weapons[]=
		{
			"CUP_arifle_xm8_SAW",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"CUP_arifle_xm8_SAW",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"CUP_100Rnd_556x45_BetaCMag",
			"CUP_100Rnd_556x45_BetaCMag",
			"CUP_HandGrenade_M67",
			"CUP_HandGrenade_M67",
			"SmokeShell",
			"CUP_100Rnd_556x45_BetaCMag",
			"CUP_100Rnd_556x45_BetaCMag",
			"CUP_100Rnd_556x45_BetaCMag",
			"CUP_100Rnd_556x45_BetaCMag",
			"CUP_100Rnd_556x45_BetaCMag"
		};
		respawnmagazines[]=
		{
			"CUP_100Rnd_556x45_BetaCMag",
			"CUP_100Rnd_556x45_BetaCMag",
			"CUP_HandGrenade_M67",
			"CUP_HandGrenade_M67",
			"SmokeShell",
			"CUP_100Rnd_556x45_BetaCMag",
			"CUP_100Rnd_556x45_BetaCMag",
			"CUP_100Rnd_556x45_BetaCMag",
			"CUP_100Rnd_556x45_BetaCMag",
			"CUP_100Rnd_556x45_BetaCMag"
		};
	};
	class ACM_Ves_Soldier_MR_Des: ACM_Ves_Soldier_Des
	{
		editorPreview="\ACM_Vespaccia\UI\Desert\ACM_Ves_Soldier_MR_Des.jpg";
		displayname="Marksman";
		uniformClass="ACM_Vesp_Clothes2_2";
		linkedItems[]=
		{
			"CUP_V_B_Eagle_SPC_DMR",
			"ACM_H_Vesp_CSC_Boonie",
			"CUP_NVG_PVS15_Hide",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnlinkedItems[]=
		{
			"CUP_V_B_Eagle_SPC_DMR",
			"ACM_H_Vesp_CSC_Boonie",
			"CUP_NVG_PVS15_Hide",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		weapons[]=
		{
			"ACM_VES_MR_Marksman_M14",
			"CUP_hgun_M9",
			"Rangefinder",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"ACM_VES_MR_Marksman_M14",
			"CUP_hgun_M9",
			"Rangefinder",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_20Rnd_762x51_DMR",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_20Rnd_762x51_DMR",
			"CUP_20Rnd_762x51_DMR",
			"CUP_20Rnd_762x51_DMR",
			"CUP_20Rnd_762x51_DMR",
			"CUP_20Rnd_762x51_DMR",
			"CUP_20Rnd_762x51_DMR",
			"CUP_15Rnd_9x19_M9"
		};
		respawnmagazines[]=
		{
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_20Rnd_762x51_DMR",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_20Rnd_762x51_DMR",
			"CUP_20Rnd_762x51_DMR",
			"CUP_20Rnd_762x51_DMR",
			"CUP_20Rnd_762x51_DMR",
			"CUP_20Rnd_762x51_DMR",
			"CUP_20Rnd_762x51_DMR",
			"CUP_15Rnd_9x19_M9"
		};
		headgearList[]={};
	};
	class ACM_Ves_Soldier_CLE_Des: ACM_Ves_Soldier_Des
	{
		editorPreview="\ACM_Vespaccia\UI\Desert\ACM_Ves_Soldier_CLE_Des.jpg";
		displayname="Combat Life Saver";
		backpack="ACM_Backpack_VES_Medic";
		uniformClass="ACM_Vesp_Clothes1_2";
		linkedItems[]=
		{
			"CUP_V_B_Eagle_SPC_Rifleman",
			"ACM_H_Vesp_CSC_6B47_v2",
			"CUP_NVG_PVS15_black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnlinkedItems[]=
		{
			"CUP_V_B_Eagle_SPC_Rifleman",
			"ACM_H_Vesp_CSC_6B47_v2",
			"CUP_NVG_PVS15_black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		weapons[]=
		{
			"CUP_arifle_XM8_Carbine_FG",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"CUP_arifle_XM8_Carbine_FG",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"Chemlight_green",
			"Chemlight_green",
			"CUP_HandGrenade_M67",
			"CUP_HandGrenade_M67",
			"SmokeShell"
		};
		respawnmagazines[]=
		{
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"Chemlight_green",
			"Chemlight_green",
			"CUP_HandGrenade_M67",
			"CUP_HandGrenade_M67",
			"SmokeShell"
		};
		attendant=1;
	};
	class ACM_Ves_Soldier_lite_Des: ACM_Ves_Soldier_Des
	{
		editorPreview="\ACM_Vespaccia\UI\Desert\ACM_Ves_Soldier_lite_Des.jpg";
		displayname="Rifleman (Light)";
		uniformClass="ACM_Vesp_Clothes1_2";
		linkedItems[]=
		{
			"CFP_Alice_Vest2",
			"ACM_H_Vesp_CSC_Cap",
			"CUP_NVG_PVS15_Hide",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnlinkedItems[]=
		{
			"CFP_Alice_Vest2",
			"ACM_H_Vesp_CSC_Cap",
			"CUP_NVG_PVS15_Hide",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		headgearList[]={};
	};
	class ACM_Ves_Soldier_ATLite_Des: ACM_Ves_Soldier_Des
	{
		editorPreview="\ACM_Vespaccia\UI\Desert\ACM_Ves_Soldier_ATLite_Des.jpg";
		displayname="Rifleman(AT)";
		uniformClass="ACM_Vesp_Clothes1_2";
		weapons[]=
		{
			"CUP_arifle_XM8_Carbine_FG",
			"CUP_launch_RShG2",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"CUP_arifle_XM8_Carbine_FG",
			"CUP_launch_RShG2",
			"Throw",
			"Put"
		};
		linkedItems[]=
		{
			"CUP_V_B_Eagle_SPC_Corpsman",
			"ACM_H_Vesp_CSC_6B47_v2_GogglesClosed",
			"CUP_NVG_PVS15_black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnlinkedItems[]=
		{
			"CUP_V_B_Eagle_SPC_Corpsman",
			"ACM_H_Vesp_CSC_6B47_v2_GogglesClosed",
			"CUP_NVG_PVS15_black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
	};
	class ACM_Ves_Soldier_ATHeavy_Des: ACM_Ves_Soldier_Des
	{
		editorPreview="\ACM_Vespaccia\UI\Desert\ACM_Ves_Soldier_ATHeavy_Des.jpg";
		displayname="Anti-Tank Heavy";
		backpack="ACM_Backpack_VES_AT_Heavy";
		uniformClass="ACM_Vesp_Clothes3_2";
		weapons[]=
		{
			"CUP_arifle_XM8_Carbine_FG",
			"launch_O_Vorona_brown_F",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"CUP_arifle_XM8_Carbine_FG",
			"launch_O_Vorona_brown_F",
			"Throw",
			"Put"
		};
		linkedItems[]=
		{
			"CUP_V_B_Eagle_SPC_MG",
			"ACM_H_Vesp_CSC_6B47_v2_GogglesUp",
			"CUP_NVG_PVS15_black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnlinkedItems[]=
		{
			"CUP_V_B_Eagle_SPC_MG",
			"ACM_H_Vesp_CSC_6B47_v2_GogglesUp",
			"CUP_NVG_PVS15_black",
			"CUP_NVG_PVS15_black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		magazines[]=
		{
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"Chemlight_green",
			"Chemlight_green",
			"CUP_HandGrenade_M67",
			"CUP_HandGrenade_M67",
			"SmokeShell",
			"Vorona_HEAT"
		};
		respawnmagazines[]=
		{
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"Chemlight_green",
			"Chemlight_green",
			"CUP_HandGrenade_M67",
			"CUP_HandGrenade_M67",
			"SmokeShell",
			"Vorona_HEAT"
		};
	};
	class ACM_Ves_Soldier_Crewman_Des: ACM_Ves_Soldier_Des
	{
		editorPreview="\ACM_Vespaccia\UI\Desert\ACM_Ves_Soldier_Crewman_Des.jpg";
		displayname="Crewman";
		uniformClass="ACM_Vesp_Clothes2_2";
		weapons[]=
		{
			"CUP_arifle_XM8_Carbine_FG",
			"CUP_hgun_M9",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"CUP_arifle_XM8_Carbine_FG",
			"CUP_hgun_M9",
			"Throw",
			"Put"
		};
		linkedItems[]=
		{
			"CUP_V_B_Eagle_SPC_Crew",
			"H_HelmetCrew_B",
			"CUP_NVG_PVS15_black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnlinkedItems[]=
		{
			"CUP_V_B_Eagle_SPC_Crew",
			"H_HelmetCrew_B",
			"CUP_NVG_PVS15_black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		items[]=
		{
			"FirstAidKit",
			"ToolKit"
		};
		respawnitems[]=
		{
			"FirstAidKit",
			"ToolKit"
		};
		magazines[]=
		{
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9"
		};
		respawnmagazines[]=
		{
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9"
		};
		headgearList[]={};
	};
	class ACM_Ves_Soldier_Officer_Des: ACM_Ves_Soldier_Des
	{
		editorPreview="\ACM_Vespaccia\UI\Desert\ACM_Ves_Soldier_Officer_Des.jpg";
		displayname="Officer (Combat)";
		uniformClass="ACM_Vesp_Clothes5_2";
		weapons[]=
		{
			"CUP_arifle_XM8_Carbine_FG",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"CUP_arifle_XM8_Carbine_FG",
			"Throw",
			"Put"
		};
		linkedItems[]=
		{
			"CUP_V_B_Eagle_SPC_Officer",
			"ACM_H_Vesp_CSC_Cap",
			"G_Aviator",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnlinkedItems[]=
		{
			"CUP_V_B_Eagle_SPC_Officer",
			"ACM_H_Vesp_CSC_Cap",
			"G_Aviator",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		magazines[]=
		{
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"Chemlight_green",
			"Chemlight_green",
			"CUP_HandGrenade_M67",
			"CUP_HandGrenade_M67",
			"SmokeShell"
		};
		respawnmagazines[]=
		{
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"Chemlight_green",
			"Chemlight_green",
			"CUP_HandGrenade_M67",
			"CUP_HandGrenade_M67",
			"SmokeShell"
		};
		headgearList[]={};
	};
	class ACM_Ves_Soldier_Officer_NC_Des: ACM_Ves_Soldier_Des
	{
		editorPreview="\ACM_Vespaccia\UI\Desert\ACM_Ves_Soldier_Officer_NC_Des.jpg";
		displayname="Officer (Non-Combat)";
		uniformClass="ACM_Vesp_Clothes5_2";
		weapons[]=
		{
			"CUP_hgun_M9",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"CUP_hgun_M9",
			"Throw",
			"Put"
		};
		linkedItems[]=
		{
			"CUP_V_O_TK_OfficerBelt2",
			"CFP_Ranger_Beret_Cmdr",
			"G_Aviator",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnlinkedItems[]=
		{
			"CUP_V_O_TK_OfficerBelt2",
			"CFP_Ranger_Beret_Cmdr",
			"G_Aviator",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		magazines[]=
		{
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"Chemlight_green",
			"Chemlight_green",
			"CUP_HandGrenade_M67",
			"SmokeShell",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9"
		};
		respawnmagazines[]=
		{
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"Chemlight_green",
			"Chemlight_green",
			"CUP_HandGrenade_M67",
			"SmokeShell",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9"
		};
		headgearList[]={};
	};
	class ACM_Ves_Soldier_AA_Des: ACM_Ves_Soldier_Des
	{
		editorPreview="\ACM_Vespaccia\UI\Desert\ACM_Ves_Soldier_AA_Des.jpg";
		displayname="Anti-Air";
		uniformClass="ACM_Vesp_Clothes4_2";
		weapons[]=
		{
			"CUP_arifle_XM8_Carbine_FG",
			"CUP_launch_FIM92Stinger",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"CUP_arifle_XM8_Carbine_FG",
			"CUP_launch_FIM92Stinger",
			"Throw",
			"Put"
		};
		linkedItems[]=
		{
			"CUP_V_B_Eagle_SPC_Corpsman",
			"ACM_H_Vesp_CSC_6B47_v2_GogglesClosed",
			"CUP_NVG_PVS15_black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnlinkedItems[]=
		{
			"CUP_V_B_Eagle_SPC_Corpsman",
			"ACM_H_Vesp_CSC_6B47_v2_GogglesClosed",
			"CUP_NVG_PVS15_black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		magazines[]=
		{
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl"
		};
		respawnmagazines[]=
		{
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl",
			"CUP_30Rnd_556x45_G36_wdl"
		};
	};
	class ACM_Ves_Soldier_HeliPilot_Des: ACM_Ves_Soldier_Des
	{
		editorPreview="\ACM_Vespaccia\UI\Desert\ACM_Ves_Soldier_HeliPilot_Des.jpg";
		displayname="Rotary-Pilot";
		uniformClass="ACM_Vesp_Clothes2_2";
		weapons[]=
		{
			"CUP_arifle_XM8_Carbine_FG",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"CUP_arifle_XM8_Carbine_FG",
			"Throw",
			"Put"
		};
		linkedItems[]=
		{
			"CUP_V_B_Eagle_SPC_Empty",
			"H_PilotHelmetHeli_O",
			"CUP_NVG_PVS15_black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnlinkedItems[]=
		{
			"CUP_V_B_Eagle_SPC_Empty",
			"H_PilotHelmetHeli_O",
			"CUP_NVG_PVS15_black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		magazines[]=
		{
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36"
		};
		respawnmagazines[]=
		{
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36"
		};
		headgearList[]={};
	};
	class ACM_Ves_Des_Spec_Soldier: ACM_Ves_Spec_Soldier
	{
		editorPreview="\ACM_Vespaccia\UI\Desert\ACM_Ves_Des_Spec_Soldier.jpg";
		faction="ACM_I_Ves2";
		displayname="Rifleman";
		uniformClass="ACM_Vesp_Clothes6_2";
		weapons[]=
		{
			"ACM_VES_Spec_HK_Rifleman",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"ACM_VES_Spec_HK_Rifleman",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"CUP_30Rnd_556x45_PMAG_QP_Tan",
			"CUP_30Rnd_556x45_PMAG_QP_Tan",
			"CUP_30Rnd_556x45_PMAG_QP_Tan",
			"CUP_30Rnd_556x45_PMAG_QP_Tan",
			"CUP_30Rnd_556x45_PMAG_QP_Tan",
			"CUP_30Rnd_556x45_PMAG_QP_Tan",
			"CUP_30Rnd_556x45_PMAG_QP_Tan",
			"CUP_30Rnd_556x45_PMAG_QP_Tan",
			"CUP_30Rnd_556x45_PMAG_QP_Tan",
			"CUP_30Rnd_556x45_PMAG_QP_Tan",
			"CUP_30Rnd_556x45_PMAG_QP_Tan",
			"CUP_30Rnd_556x45_PMAG_QP_Tan",
			"CUP_30Rnd_556x45_PMAG_QP_Tan",
			"CUP_30Rnd_556x45_PMAG_QP_Tan",
			"Chemlight_green",
			"Chemlight_green",
			"CUP_HandGrenade_M67",
			"CUP_HandGrenade_M67",
			"SmokeShell"
		};
		respawnmagazines[]=
		{
			"CUP_30Rnd_556x45_PMAG_QP_Tan",
			"CUP_30Rnd_556x45_PMAG_QP_Tan",
			"CUP_30Rnd_556x45_PMAG_QP_Tan",
			"CUP_30Rnd_556x45_PMAG_QP_Tan",
			"CUP_30Rnd_556x45_PMAG_QP_Tan",
			"CUP_30Rnd_556x45_PMAG_QP_Tan",
			"CUP_30Rnd_556x45_PMAG_QP_Tan",
			"CUP_30Rnd_556x45_PMAG_QP_Tan",
			"CUP_30Rnd_556x45_PMAG_QP_Tan",
			"CUP_30Rnd_556x45_PMAG_QP_Tan",
			"CUP_30Rnd_556x45_PMAG_QP_Tan",
			"CUP_30Rnd_556x45_PMAG_QP_Tan",
			"CUP_30Rnd_556x45_PMAG_QP_Tan",
			"CUP_30Rnd_556x45_PMAG_QP_Tan",
			"Chemlight_green",
			"Chemlight_green",
			"CUP_HandGrenade_M67",
			"CUP_HandGrenade_M67",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"CUP_V_B_RRV_DA1_CB",
			"ACM_H_Spec_OpsCore5_2",
			"CUP_G_Tan_Scarf_Shades",
			"CFP_ANPVS15_Camo_V2",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnlinkedItems[]=
		{
			"CUP_V_MBSS_PACA_Green",
			"ACM_H_Spec_OpsCore1_2",
			"CFP_ANPVS15_Camo_V2",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		headgearList[]={};
		facewearList[]=
		{
			"G_Bandanna_blk",
			0.2,
			"G_Bandanna_khk",
			0.2,
			"CUP_TK_NeckScarf",
			0.30000001,
			"CFP_Scarfshades_green",
			0.30000001,
			"CFP_Scarfshades_white",
			0.30000001,
			"CFP_Scarfshades_tan",
			0.30000001,
			"CFP_Scarfshades_grey",
			0.30000001,
			"CFP_Oakleys_Clr",
			0.2,
			"CFP_Oakleys_Drk",
			0.2,
			"CFP_Oakleys_Embr",
			0.2,
			"CFP_Scarfbeard_green",
			0.30000001,
			"CFP_Scarfbeard_grey",
			0.30000001,
			"CFP_Scarfbeard_tan",
			0.30000001,
			"CFP_Scarfbeard_white",
			0.30000001,
			"CFP_Scarfbeardshades_green",
			0.30000001,
			"CFP_Scarfbeardshades_grey",
			0.30000001,
			"CFP_Scarfbeardshades_tan",
			0.30000001,
			"CFP_Scarfbeardshades_white",
			0.30000001,
			"CUP_FR_Neckscarf2",
			0.30000001,
			"CFP_Tac_Goggles_Blk_Drk",
			0.2,
			"CFP_Tac_Goggles_Blk_Ylw",
			0.2,
			"CFP_Tac_Goggles_Blk_Clr",
			0.2,
			"CFP_Tac_Goggles_Blk_Drk",
			0.2,
			"CFP_Oakley_Goggles_Blk",
			0.2,
			"CFP_Oakley_Goggles_MCam",
			0.2,
			"CFP_Face_Wear_Blk",
			0.2,
			"CFP_Face_Wear_Spook",
			0.2,
			"CFP_UA_Thermals_Grn",
			0.2,
			"CFP_UA_Thermals_Grn_GPS",
			0.2,
			"CFP_UA_Thermals_Blk",
			0.2,
			"CFP_UA_Thermals_Blk_GPS",
			0.2,
			"CFP_Oakley_Thermals_Gry",
			0.2,
			"CFP_Oakley_Thermals_Blk",
			0.2,
			"CFP_Foretex",
			0.2
		};
	};
	class ACM_Ves_Des_Spec_Soldier_TL: ACM_Ves_Des_Spec_Soldier
	{
		editorPreview="\ACM_Vespaccia\UI\Desert\ACM_Ves_Des_Spec_Soldier_TL.jpg";
		displayname="Team Leader";
		weapons[]=
		{
			"ACM_VES_Spec_HK_CQC",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"ACM_VES_Spec_HK_CQC",
			"Throw",
			"Put"
		};
		linkedItems[]=
		{
			"CUP_V_MBSS_PACA2_CB",
			"ACM_H_Spec_OpsCore1_2",
			"CFP_ANPVS15_Camo_V2",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnlinkedItems[]=
		{
			"CUP_V_MBSS_PACA2_CB",
			"ACM_H_Spec_OpsCore1_2",
			"CFP_ANPVS15_Camo_V2",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
	};
	class ACM_Ves_Des_Spec_Soldier_GL: ACM_Ves_Des_Spec_Soldier
	{
		editorPreview="\ACM_Vespaccia\UI\Desert\ACM_Ves_Des_Spec_Soldier_GL.jpg";
		displayname="Grenadier";
		weapons[]=
		{
			"ACM_VES_Spec_HK_GL",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"ACM_VES_Spec_HK_GL",
			"Throw",
			"Put"
		};
		linkedItems[]=
		{
			"CUP_V_B_RRV_DA2_CB",
			"ACM_H_Spec_OpsCore2_2",
			"CFP_ANPVS15_Camo_V2",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnlinkedItems[]=
		{
			"CUP_V_B_RRV_DA2_CB",
			"ACM_H_Spec_OpsCore2_2",
			"CFP_ANPVS15_Camo_V2",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		magazines[]=
		{
			"CUP_30Rnd_556x45_PMAG_QP",
			"CUP_30Rnd_556x45_PMAG_QP",
			"CUP_30Rnd_556x45_PMAG_QP",
			"CUP_1Rnd_HE_M203",
			"CUP_1Rnd_HE_M203",
			"Chemlight_green",
			"Chemlight_green",
			"CUP_HandGrenade_M67",
			"CUP_HandGrenade_M67",
			"SmokeShell",
			"CUP_30Rnd_556x45_PMAG_QP",
			"CUP_30Rnd_556x45_PMAG_QP",
			"CUP_30Rnd_556x45_PMAG_QP",
			"CUP_30Rnd_556x45_PMAG_QP",
			"CUP_30Rnd_556x45_PMAG_QP",
			"CUP_30Rnd_556x45_PMAG_QP",
			"CUP_30Rnd_556x45_PMAG_QP",
			"CUP_30Rnd_556x45_PMAG_QP",
			"CUP_1Rnd_HEDP_M203",
			"CUP_1Rnd_HEDP_M203",
			"CUP_1Rnd_HEDP_M203",
			"CUP_1Rnd_HEDP_M203",
			"CUP_1Rnd_HEDP_M203",
			"CUP_1Rnd_HEDP_M203",
			"CUP_1Rnd_Smoke_M203",
			"CUP_1Rnd_Smoke_M203",
			"CUP_1Rnd_Smoke_M203"
		};
		respawnmagazines[]=
		{
			"CUP_30Rnd_556x45_PMAG_QP",
			"CUP_30Rnd_556x45_PMAG_QP",
			"CUP_30Rnd_556x45_PMAG_QP",
			"CUP_1Rnd_HE_M203",
			"CUP_1Rnd_HE_M203",
			"Chemlight_green",
			"Chemlight_green",
			"CUP_HandGrenade_M67",
			"CUP_HandGrenade_M67",
			"SmokeShell",
			"CUP_30Rnd_556x45_PMAG_QP",
			"CUP_30Rnd_556x45_PMAG_QP",
			"CUP_30Rnd_556x45_PMAG_QP",
			"CUP_30Rnd_556x45_PMAG_QP",
			"CUP_30Rnd_556x45_PMAG_QP",
			"CUP_30Rnd_556x45_PMAG_QP",
			"CUP_30Rnd_556x45_PMAG_QP",
			"CUP_30Rnd_556x45_PMAG_QP",
			"CUP_1Rnd_HEDP_M203",
			"CUP_1Rnd_HEDP_M203",
			"CUP_1Rnd_HEDP_M203",
			"CUP_1Rnd_HEDP_M203",
			"CUP_1Rnd_HEDP_M203",
			"CUP_1Rnd_HEDP_M203",
			"CUP_1Rnd_Smoke_M203",
			"CUP_1Rnd_Smoke_M203",
			"CUP_1Rnd_Smoke_M203"
		};
	};
	class ACM_Ves_Des_Spec_Soldier_LiteAT: ACM_Ves_Des_Spec_Soldier
	{
		editorPreview="\ACM_Vespaccia\UI\Desert\ACM_Ves_Des_Spec_Soldier_LiteAT.jpg";
		displayname="Rifleman (AT)";
		weapons[]=
		{
			"ACM_VES_Spec_HK_Rifleman",
			"CUP_launch_RPG26",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"ACM_VES_Spec_HK_Rifleman",
			"CUP_launch_RPG26",
			"Throw",
			"Put"
		};
		linkedItems[]=
		{
			"CUP_V_MBSS_PACA_CB",
			"ACM_H_Spec_OpsCore4_2",
			"CUP_G_Tan_Scarf_Shades_Beard",
			"CFP_ANPVS15_Camo_V2",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnlinkedItems[]=
		{
			"CUP_V_MBSS_PACA_CB",
			"ACM_H_Spec_OpsCore4_2",
			"CUP_G_Tan_Scarf_Shades_Beard",
			"CFP_ANPVS15_Camo_V2",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
	};
	class ACM_Ves_Des_Spec_Soldier_AT: ACM_Ves_Des_Spec_Soldier
	{
		editorPreview="\ACM_Vespaccia\UI\Desert\ACM_Ves_Des_Spec_Soldier_AT.jpg";
		backpack="ACM_Backpack_VES_AT_Spec";
		displayname="Anti-Tank";
		weapons[]=
		{
			"ACM_VES_Spec_HK_Rifleman",
			"CUP_launch_Mk153Mod0",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"ACM_VES_Spec_HK_Rifleman",
			"CUP_launch_Mk153Mod0",
			"Throw",
			"Put"
		};
		linkedItems[]=
		{
			"CUP_V_MBSS_PACA_CB",
			"ACM_H_Spec_OpsCore2_2",
			"CFP_ANPVS15_Camo_V2",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnlinkedItems[]=
		{
			"CUP_V_MBSS_PACA_CB",
			"ACM_H_Spec_OpsCore2_2",
			"CFP_ANPVS15_Camo_V2",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
	};
	class ACM_Ves_Des_Spec_Soldier_MisSpec: ACM_Ves_Des_Spec_Soldier
	{
		editorPreview="\ACM_Vespaccia\UI\Desert\ACM_Ves_Des_Spec_Soldier_MisSpec.jpg";
		backpack="ACM_Backpack_VES_AT_Missile";
		displayname="Missile Specialist (AT)";
		weapons[]=
		{
			"ACM_VES_Spec_HK_CQC",
			"launch_B_Titan_short_F",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"ACM_VES_Spec_HK_CQC",
			"launch_B_Titan_short_F",
			"Throw",
			"Put"
		};
		linkedItems[]=
		{
			"CUP_V_MBSS_PACA_CB",
			"ACM_H_Spec_OpsCore1_2",
			"CUP_G_ESS_KHK_Scarf_Tan",
			"CFP_ANPVS15_Camo_V2",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnlinkedItems[]=
		{
			"CUP_V_MBSS_PACA_CB",
			"ACM_H_Spec_OpsCore1_2",
			"CUP_G_ESS_KHK_Scarf_Tan",
			"CFP_ANPVS15_Camo_V2",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
	};
	class ACM_Ves_Des_Spec_Soldier_Explspec: ACM_Ves_Des_Spec_Soldier
	{
		editorPreview="\ACM_Vespaccia\UI\Desert\ACM_Ves_Des_Spec_Soldier_Explspec.jpg";
		backpack="ACM_backpack_Ves_EXPL";
		displayname="Explosives Specialist";
		weapons[]=
		{
			"ACM_VES_Spec_HK_Rifleman",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"ACM_VES_Spec_HK_Rifleman",
			"Throw",
			"Put"
		};
		linkedItems[]=
		{
			"CUP_V_MBSS_PACA_CB",
			"ACM_H_Spec_OpsCore3_2",
			"CFP_ANPVS15_Camo_V2",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnlinkedItems[]=
		{
			"CUP_V_MBSS_PACA_CB",
			"ACM_H_Spec_OpsCore3_2",
			"CFP_ANPVS15_Camo_V2",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		canDeactivateMines="true";
	};
	class ACM_Ves_Des_Spec_Soldier_Marksman: ACM_Ves_Des_Spec_Soldier
	{
		editorPreview="\ACM_Vespaccia\UI\Desert\ACM_Ves_Des_Spec_Soldier_Marksman.jpg";
		displayname="Marksman";
		weapons[]=
		{
			"srifle_DMR_02_camo_AMS_LP_F",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"srifle_DMR_02_camo_AMS_LP_F",
			"Throw",
			"Put"
		};
		linkedItems[]=
		{
			"V_Chestrig_khk",
			"ACM_H_Vesp_CSC_Boonie",
			"CFP_UA_Thermals_Grn_GPS",
			"CUP_NVG_PVS15_Hide",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnlinkedItems[]=
		{
			"V_Chestrig_khk",
			"ACM_H_Vesp_CSC_Boonie",
			"CFP_UA_Thermals_Grn_GPS",
			"CUP_NVG_PVS15_Hide",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		magazines[]=
		{
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag"
		};
		respawnmagazines[]=
		{
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag"
		};
	};
	class ACM_Ves_Des_Spec_Soldier_Autorifleman: ACM_Ves_Des_Spec_Soldier
	{
		editorPreview="\ACM_Vespaccia\UI\Desert\ACM_Ves_Des_Spec_Soldier_Autorifleman.jpg";
		displayname="Autorifleman";
		weapons[]=
		{
			"CFP_Negev_Black",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"CFP_Negev_Black",
			"Throw",
			"Put"
		};
		linkedItems[]=
		{
			"CUP_V_B_RRV_DA1_CB",
			"ACM_H_Spec_OpsCore5_2",
			"CUP_G_Tan_Scarf_Shades",
			"CFP_ANPVS15_Camo_V2",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnlinkedItems[]=
		{
			"CUP_V_B_RRV_DA1_CB",
			"ACM_H_Spec_OpsCore5_2",
			"CUP_G_Tan_Scarf_Shades",
			"CFP_ANPVS15_Camo_V2",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		magazines[]=
		{
			"150Rnd_762x54_Box",
			"150Rnd_762x54_Box",
			"150Rnd_762x54_Box"
		};
		respawnmagazines[]=
		{
			"150Rnd_762x54_Box",
			"150Rnd_762x54_Box",
			"150Rnd_762x54_Box"
		};
	};
	class ACM_Ves_Des_Spec_Soldier_JTAC: ACM_Ves_Des_Spec_Soldier
	{
		editorPreview="\ACM_Vespaccia\UI\Desert\ACM_Ves_Des_Spec_Soldier_JTAC.jpg";
		displayname="JTAC";
		backpack="B_RadioBag_01_black_F";
		weapons[]=
		{
			"ACM_VES_Spec_M4a1_sop_Spect",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"ACM_VES_Spec_M4a1_sop_Spect",
			"Throw",
			"Put"
		};
		linkedItems[]=
		{
			"CUP_V_B_RRV_DA1_CB",
			"ACM_H_Spec_OpsCore2_2",
			"CFP_ANPVS15_Camo_V2",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnlinkedItems[]=
		{
			"CUP_V_B_RRV_DA1_CB",
			"ACM_H_Spec_OpsCore2_2",
			"CFP_ANPVS15_Camo_V2",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
	};
	class ACM_Ves_Des_Spec_Soldier_Medic: ACM_Ves_Des_Spec_Soldier
	{
		editorPreview="\ACM_Vespaccia\UI\Desert\ACM_Ves_Des_Spec_Soldier_Medic.jpg";
		displayname="Medic";
		weapons[]=
		{
			"ACM_VES_Spec_M4a1_sop_med",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"ACM_VES_Spec_M4a1_sop_med",
			"Throw",
			"Put"
		};
		linkedItems[]=
		{
			"CFP_CarrierRig_Operator_OGA",
			"ACM_H_Spec_OpsCore4_2",
			"CFP_ANPVS15_Camo_V2",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnlinkedItems[]=
		{
			"CFP_CarrierRig_Operator_OGA",
			"ACM_H_Spec_OpsCore4_2",
			"CFP_ANPVS15_Camo_V2",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		backpack="ACM_Backpack_VES_Medic";
		magazines[]=
		{
			"CUP_30Rnd_556x45_PMAG_QP",
			"CUP_30Rnd_556x45_PMAG_QP",
			"CUP_30Rnd_556x45_PMAG_QP",
			"CUP_30Rnd_556x45_PMAG_QP",
			"CUP_30Rnd_556x45_PMAG_QP",
			"CUP_30Rnd_556x45_PMAG_QP",
			"CUP_30Rnd_556x45_PMAG_QP",
			"CUP_30Rnd_556x45_PMAG_QP",
			"CUP_30Rnd_556x45_PMAG_QP",
			"CUP_30Rnd_556x45_PMAG_QP",
			"CUP_30Rnd_556x45_PMAG_QP",
			"CUP_30Rnd_556x45_PMAG_QP",
			"CUP_30Rnd_556x45_PMAG_QP",
			"Chemlight_green",
			"Chemlight_green",
			"CUP_HandGrenade_M67",
			"CUP_HandGrenade_M67",
			"SmokeShell"
		};
		respawnmagazines[]=
		{
			"CUP_30Rnd_556x45_PMAG_QP",
			"CUP_30Rnd_556x45_PMAG_QP",
			"CUP_30Rnd_556x45_PMAG_QP",
			"CUP_30Rnd_556x45_PMAG_QP",
			"CUP_30Rnd_556x45_PMAG_QP",
			"CUP_30Rnd_556x45_PMAG_QP",
			"CUP_30Rnd_556x45_PMAG_QP",
			"CUP_30Rnd_556x45_PMAG_QP",
			"CUP_30Rnd_556x45_PMAG_QP",
			"CUP_30Rnd_556x45_PMAG_QP",
			"CUP_30Rnd_556x45_PMAG_QP",
			"CUP_30Rnd_556x45_PMAG_QP",
			"CUP_30Rnd_556x45_PMAG_QP",
			"Chemlight_green",
			"Chemlight_green",
			"CUP_HandGrenade_M67",
			"CUP_HandGrenade_M67",
			"SmokeShell"
		};
		attendant=1;
	};
	class CFP_RPGPack_Khaki;
	class ACM_Backpack_VES_AT: CFP_RPGPack_Khaki
	{
		author="Anthrax";
		dlc="CUP_Units";
		scope=1;
		class TransportMagazines
		{
			class _xx_CUP_PG7V_M
			{
				magazine="CUP_PG7V_M";
				count=2;
			};
			class _xx_CUP_OG7_M
			{
				magazine="CUP_OG7_M";
				count=1;
			};
		};
	};
	class B_Kitbag_rgr;
	class ACM_Backpack_VES_Medic: B_Kitbag_rgr
	{
		author="Anthrax";
		dlc="CUP_Units";
		scope=1;
		class TransportItems
		{
			class _xx_Medikit
			{
				name="Medikit";
				count=1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
		};
	};
	class ACM_Backpack_VES_AT_Heavy: B_Kitbag_rgr
	{
		author="Anthrax";
		dlc="CUP_Units";
		scope=1;
		class TransportMagazines
		{
			class _xx_CUP_Vorona_HEAT
			{
				magazine="Vorona_HEAT";
				count=2;
			};
		};
	};
	class ACM_Backpack_VES_AT_Spec: B_Kitbag_rgr
	{
		author="Anthrax";
		dlc="CUP_Units";
		scope=1;
		class TransportMagazines
		{
			class _xx_CUP_SMAW_HEDP_M
			{
				magazine="CUP_SMAW_HEDP_M";
				count=2;
			};
		};
	};
	class ACM_Backpack_VES_AT_Missile: B_Kitbag_rgr
	{
		author="Anthrax";
		dlc="CUP_Units";
		scope=1;
		class TransportMagazines
		{
			class _xx_Titan_AT
			{
				magazine="Titan_AT";
				count=2;
			};
		};
	};
	class ACM_backpack_Ves_EXPL: B_Kitbag_rgr
	{
		author="Anthrax";
		dlc="CUP_Units";
		scope=1;
		class TransportMagazines
		{
			class _xx_ClaymoreDirectionalMine_Remote_Mag
			{
				magazine="ClaymoreDirectionalMine_Remote_Mag";
				count=2;
			};
			class _xx_APERSMineDispenser_Mag
			{
				magazine="APERSMineDispenser_Mag";
				count=1;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine="DemoCharge_Remote_Mag";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
	};
	class CUP_USBasicAmmunitionBox;
	class CUP_USBasicWeaponsBox;
	class CUP_USSpecialWeaponsBox;
	class CUP_USLaunchersBox;
	class CUP_USVehicleBox;
	class ACM_I_Ves_AmmoBox: CUP_USBasicAmmunitionBox
	{
		scope=2;
		author="ALiVE ORBAT CREATOR";
		displayName="Vespaccian Federal Army Ammo Box";
		class TransportMagazines
		{
			class _xx_CUP_30Rnd_556x45_G36_wdl
			{
				magazine="CUP_30Rnd_556x45_G36_wdl";
				count=50;
			};
			class _xx_Chemlight_green
			{
				magazine="Chemlight_green";
				count=50;
			};
			class _xx_CUP_HandGrenade_M67
			{
				magazine="CUP_HandGrenade_M67";
				count=50;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=50;
			};
			class _xx_CUP_1Rnd_HE_M203
			{
				magazine="CUP_1Rnd_HE_M203";
				count=50;
			};
			class _xx_CUP_1Rnd_HEDP_M203
			{
				magazine="CUP_1Rnd_HEDP_M203";
				count=50;
			};
			class _xx_CUP_1Rnd_Smoke_M203
			{
				magazine="CUP_1Rnd_Smoke_M203";
				count=50;
			};
			class _xx_CUP_PG7V_M
			{
				magazine="CUP_PG7V_M";
				count=50;
			};
			class _xx_CUP_OG7_M
			{
				magazine="CUP_OG7_M";
				count=50;
			};
			class _xx_CUP_15Rnd_9x19_M9
			{
				magazine="CUP_15Rnd_9x19_M9";
				count=50;
			};
			class _xx_CUP_HandGrenade_L109A1_HE
			{
				magazine="CUP_HandGrenade_L109A1_HE";
				count=50;
			};
			class _xx_CUP_100Rnd_556x45_BetaCMag_wdl
			{
				magazine="CUP_100Rnd_556x45_BetaCMag_wdl";
				count=50;
			};
			class _xx_CUP_20Rnd_762x51_G3
			{
				magazine="CUP_20Rnd_762x51_G3";
				count=50;
			};
			class _xx_Vorona_HEAT
			{
				magazine="Vorona_HEAT";
				count=50;
			};
			class _xx_CUP_30Rnd_556x45_G36
			{
				magazine="CUP_30Rnd_556x45_G36";
				count=50;
			};
			class _xx_CUP_6Rnd_HE_M203
			{
				magazine="CUP_6Rnd_HE_M203";
				count=50;
			};
			class _xx_CUP_6Rnd_Smoke_M203
			{
				magazine="CUP_6Rnd_Smoke_M203";
				count=50;
			};
			class _xx_150Rnd_762x54_Box
			{
				magazine="150Rnd_762x54_Box";
				count=50;
			};
			class _xx_CUP_SMAW_HEDP_M
			{
				magazine="CUP_SMAW_HEDP_M";
				count=50;
			};
			class _xx_Titan_AT
			{
				magazine="Titan_AT";
				count=50;
			};
			class _xx_ClaymoreDirectionalMine_Remote_Mag
			{
				magazine="ClaymoreDirectionalMine_Remote_Mag";
				count=50;
			};
			class _xx_APERSMineDispenser_Mag
			{
				magazine="APERSMineDispenser_Mag";
				count=50;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine="DemoCharge_Remote_Mag";
				count=50;
			};
			class _xx_10Rnd_338_Mag
			{
				magazine="10Rnd_338_Mag";
				count=50;
			};
		};
	};
	class ACM_I_Ves_WeaponsBox: CUP_USBasicWeaponsBox
	{
		scope=2;
		author="ALiVE ORBAT CREATOR";
		displayName="Vespaccian Federal Army Weapons Box";
		class TransportMagazines
		{
			class _xx_CUP_30Rnd_556x45_G36_wdl
			{
				magazine="CUP_30Rnd_556x45_G36_wdl";
				count=50;
			};
			class _xx_CUP_1Rnd_HE_M203
			{
				magazine="CUP_1Rnd_HE_M203";
				count=50;
			};
			class _xx_CUP_100Rnd_556x45_BetaCMag_wdl
			{
				magazine="CUP_100Rnd_556x45_BetaCMag_wdl";
				count=50;
			};
			class _xx_CUP_15Rnd_9x19_M9
			{
				magazine="CUP_15Rnd_9x19_M9";
				count=50;
			};
			class _xx_CUP_20Rnd_762x51_G3
			{
				magazine="CUP_20Rnd_762x51_G3";
				count=50;
			};
			class _xx_CUP_30Rnd_556x45_G36
			{
				magazine="CUP_30Rnd_556x45_G36";
				count=50;
			};
			class _xx_CUP_6Rnd_HE_M203
			{
				magazine="CUP_6Rnd_HE_M203";
				count=50;
			};
			class _xx_150Rnd_762x54_Box
			{
				magazine="150Rnd_762x54_Box";
				count=50;
			};
			class _xx_10Rnd_338_Mag
			{
				magazine="10Rnd_338_Mag";
				count=50;
			};
		};
		class TransportWeapons
		{
			class _xx_CUP_arifle_G36K_VFG_wdl
			{
				weapon="CUP_arifle_G36K_VFG_wdl";
				count=10;
			};
			class _xx_CUP_arifle_G36K_AG36_wdl
			{
				weapon="CUP_arifle_G36K_AG36_wdl";
				count=10;
			};
			class _xx_CUP_arifle_G36E_wdl
			{
				weapon="CUP_arifle_G36E_wdl";
				count=10;
			};
			class _xx_CUP_arifle_G36A_wdl
			{
				weapon="CUP_arifle_G36A_wdl";
				count=10;
			};
			class _xx_CUP_hgun_M9
			{
				weapon="CUP_hgun_M9";
				count=10;
			};
			class _xx_ACM_VES_MR_Marksman_G3
			{
				weapon="ACM_VES_MR_Marksman_G3";
				count=10;
			};
			class _xx_CUP_arifle_G36C_VFG_Carry
			{
				weapon="CUP_arifle_G36C_VFG_Carry";
				count=10;
			};
			class _xx_CUP_arifle_G3A3_modern_ris
			{
				weapon="CUP_arifle_G3A3_modern_ris";
				count=10;
			};
			class _xx_CUP_arifle_G3A3_ris_vfg
			{
				weapon="CUP_arifle_G3A3_ris_vfg";
				count=10;
			};
			class _xx_CUP_glaunch_M32
			{
				weapon="CUP_glaunch_M32";
				count=10;
			};
			class _xx_LMG_Zafir_F
			{
				weapon="LMG_Zafir_F";
				count=10;
			};
			class _xx_ACM_VES_MR_Marksman_G3_Reserve
			{
				weapon="ACM_VES_MR_Marksman_G3_Reserve";
				count=10;
			};
			class _xx_CUP_arifle_G3A3_ris
			{
				weapon="CUP_arifle_G3A3_ris";
				count=10;
			};
			class _xx_ACM_VES_Spec_Rifleman
			{
				weapon="ACM_VES_Spec_Rifleman";
				count=10;
			};
			class _xx_ACM_VES_Spec_TL
			{
				weapon="ACM_VES_Spec_TL";
				count=10;
			};
			class _xx_ACM_VES_Spec_GL
			{
				weapon="ACM_VES_Spec_GL";
				count=10;
			};
			class _xx_ACM_VES_Spec_Carbine
			{
				weapon="ACM_VES_Spec_Carbine";
				count=10;
			};
			class _xx_srifle_DMR_02_camo_AMS_LP_F
			{
				weapon="srifle_DMR_02_camo_AMS_LP_F";
				count=10;
			};
			class _xx_ACM_VES_Spec_Auto
			{
				weapon="ACM_VES_Spec_Auto";
				count=10;
			};
		};
		class TransportItems
		{
			class _xx_CUP_optic_G36DualOptics_wood
			{
				name="CUP_optic_G36DualOptics_wood";
				count=10;
			};
			class _xx_CUP_optic_G36Optics_wood
			{
				name="CUP_optic_G36Optics_wood";
				count=10;
			};
			class _xx_CUP_optic_SB_3_12x50_PMII_PIP
			{
				name="CUP_optic_SB_3_12x50_PMII_PIP";
				count=10;
			};
			class _xx_CUP_bipod_G3
			{
				name="CUP_bipod_G3";
				count=10;
			};
			class _xx_CUP_optic_G36DualOptics
			{
				name="CUP_optic_G36DualOptics";
				count=10;
			};
			class _xx_CUP_optic_SB_11_4x20_PM
			{
				name="CUP_optic_SB_11_4x20_PM";
				count=10;
			};
			class _xx_CUP_muzzle_snds_M16_camo
			{
				name="CUP_muzzle_snds_M16_camo";
				count=10;
			};
			class _xx_CUP_acc_ANPEQ_15_Top_Flashlight_OD_L
			{
				name="CUP_acc_ANPEQ_15_Top_Flashlight_OD_L";
				count=10;
			};
			class _xx_CUP_optic_HensoldtZO_low_RDS_od
			{
				name="CUP_optic_HensoldtZO_low_RDS_od";
				count=10;
			};
			class _xx_CUP_optic_AIMM_COMPM4_BLK
			{
				name="CUP_optic_AIMM_COMPM4_BLK";
				count=10;
			};
			class _xx_CUP_acc_ANPEQ_15_OD
			{
				name="CUP_acc_ANPEQ_15_OD";
				count=10;
			};
			class _xx_CUP_acc_ANPEQ_15_Flashlight_OD_L
			{
				name="CUP_acc_ANPEQ_15_Flashlight_OD_L";
				count=10;
			};
			class _xx_optic_ACO_grn_smg
			{
				name="optic_ACO_grn_smg";
				count=10;
			};
			class _xx_acc_pointer_IR
			{
				name="acc_pointer_IR";
				count=10;
			};
			class _xx_optic_AMS
			{
				name="optic_AMS";
				count=10;
			};
			class _xx_bipod_01_F_blk
			{
				name="bipod_01_F_blk";
				count=10;
			};
			class _xx_CUP_muzzle_snds_G36_wood
			{
				name="CUP_muzzle_snds_G36_wood";
				count=10;
			};
			class _xx_CUP_optic_G33_HWS_OD
			{
				name="CUP_optic_G33_HWS_OD";
				count=10;
			};
		};
	};
	class ACM_I_Ves_LaunchersBox: CUP_USLaunchersBox
	{
		scope=2;
		author="ALiVE ORBAT CREATOR";
		displayName="Vespaccian Federal Army Launchers Box";
		class TransportMagazines
		{
			class _xx_CUP_PG7V_M
			{
				magazine="CUP_PG7V_M";
				count=5;
			};
			class _xx_CUP_RSHG2_M
			{
				magazine="CUP_RSHG2_M";
				count=5;
			};
			class _xx_Vorona_HEAT
			{
				magazine="Vorona_HEAT";
				count=5;
			};
			class _xx_CUP_Stinger_M
			{
				magazine="CUP_Stinger_M";
				count=5;
			};
			class _xx_CUP_RPG26_M
			{
				magazine="CUP_RPG26_M";
				count=5;
			};
			class _xx_CUP_SMAW_HEDP_M
			{
				magazine="CUP_SMAW_HEDP_M";
				count=5;
			};
			class _xx_Titan_AT
			{
				magazine="Titan_AT";
				count=5;
			};
		};
		class TransportWeapons
		{
			class _xx_CUP_launch_RPG7V_PGO7V3
			{
				weapon="CUP_launch_RPG7V_PGO7V3";
				count=5;
			};
			class _xx_CUP_launch_RShG2_Loaded
			{
				weapon="CUP_launch_RShG2_Loaded";
				count=5;
			};
			class _xx_launch_O_Vorona_green_F
			{
				weapon="launch_O_Vorona_green_F";
				count=5;
			};
			class _xx_CUP_launch_FIM92Stinger_Loaded
			{
				weapon="CUP_launch_FIM92Stinger_Loaded";
				count=5;
			};
			class _xx_CUP_launch_RPG26_Loaded
			{
				weapon="CUP_launch_RPG26_Loaded";
				count=5;
			};
			class _xx_CUP_launch_Mk153Mod0
			{
				weapon="CUP_launch_Mk153Mod0";
				count=5;
			};
			class _xx_launch_I_Titan_short_F
			{
				weapon="launch_I_Titan_short_F";
				count=5;
			};
		};
		class TransportItems
		{
			class _xx_CUP_optic_PGO7V3
			{
				name="CUP_optic_PGO7V3";
				count=5;
			};
		};
	};
	class ACM_I_Ves_UniformBox: CUP_USBasicWeaponsBox
	{
		scope=2;
		author="ALiVE ORBAT CREATOR";
		displayName="Vespaccian Federal Army Uniform Box";
		class TransportWeapons
		{
		};
		class TransportMagazines
		{
		};
		class TransportItems
		{
			class _xx_ACM_Vesp_Clothes1_1
			{
				name="ACM_Vesp_Clothes1_1";
				count=15;
			};
			class _xx_ACM_Vesp_Clothes4_1
			{
				name="ACM_Vesp_Clothes4_1";
				count=15;
			};
			class _xx_ACM_Vesp_Clothes2_1
			{
				name="ACM_Vesp_Clothes2_1";
				count=15;
			};
			class _xx_ACM_Vesp_Clothes3_1
			{
				name="ACM_Vesp_Clothes3_1";
				count=15;
			};
			class _xx_ACM_Vesp_Clothes5_1
			{
				name="ACM_Vesp_Clothes5_1";
				count=15;
			};
			class _xx_CUP_U_I_RACS_PilotOverall
			{
				name="CUP_U_I_RACS_PilotOverall";
				count=15;
			};
			class _xx_ACM_Vesp_Clothes6_1
			{
				name="ACM_Vesp_Clothes6_1";
				count=15;
			};
		};
	};
	class ACM_I_Ves_SupportBox: CUP_USSpecialWeaponsBox
	{
		scope=2;
		author="ALiVE ORBAT CREATOR";
		displayName="Vespaccian Federal Army Support Box";
		class TransportWeapons
		{
		};
		class TransportMagazines
		{
		};
		class TransportItems
		{
			class _xx_CUP_V_B_Eagle_SPC_Rifleman
			{
				name="CUP_V_B_Eagle_SPC_Rifleman";
				count=10;
			};
			class _xx_ACM_H_Vesp_6B47_v2_GogglesUp
			{
				name="ACM_H_Vesp_6B47_v2_GogglesUp";
				count=10;
			};
			class _xx_CUP_NVG_PVS15_black
			{
				name="CUP_NVG_PVS15_black";
				count=10;
			};
			class _xx_ItemMap
			{
				name="ItemMap";
				count=10;
			};
			class _xx_ItemCompass
			{
				name="ItemCompass";
				count=10;
			};
			class _xx_ItemWatch
			{
				name="ItemWatch";
				count=10;
			};
			class _xx_ItemRadio
			{
				name="ItemRadio";
				count=10;
			};
			class _xx_ItemGPS
			{
				name="ItemGPS";
				count=10;
			};
			class _xx_ACM_H_Vesp_6B47_v2_GogglesClosed
			{
				name="ACM_H_Vesp_6B47_v2_GogglesClosed";
				count=10;
			};
			class _xx_CUP_V_B_Eagle_SPC_GL
			{
				name="CUP_V_B_Eagle_SPC_GL";
				count=10;
			};
			class _xx_ACM_H_Vesp_6B47_v2
			{
				name="ACM_H_Vesp_6B47_v2";
				count=10;
			};
			class _xx_CUP_V_B_Eagle_SPC_AT
			{
				name="CUP_V_B_Eagle_SPC_AT";
				count=10;
			};
			class _xx_ACM_H_Vesp_Cap
			{
				name="ACM_H_Vesp_Cap";
				count=10;
			};
			class _xx_ACM_Backpack_VES_AT
			{
				name="ACM_Backpack_VES_AT";
				count=10;
			};
			class _xx_CUP_V_B_Eagle_SPC_AR
			{
				name="CUP_V_B_Eagle_SPC_AR";
				count=10;
			};
			class _xx_ACM_H_Vesp_6B47_v2_GogglesDown
			{
				name="ACM_H_Vesp_6B47_v2_GogglesDown";
				count=10;
			};
			class _xx_Rangefinder
			{
				name="Rangefinder";
				count=10;
			};
			class _xx_CUP_V_B_Eagle_SPC_DMR
			{
				name="CUP_V_B_Eagle_SPC_DMR";
				count=10;
			};
			class _xx_ACM_H_Vesp_Boonie
			{
				name="ACM_H_Vesp_Boonie";
				count=10;
			};
			class _xx_CUP_NVG_PVS15_Hide
			{
				name="CUP_NVG_PVS15_Hide";
				count=10;
			};
			class _xx_ACM_Backpack_VES_Medic
			{
				name="ACM_Backpack_VES_Medic";
				count=10;
			};
			class _xx_CFP_Alice_Vest2
			{
				name="CFP_Alice_Vest2";
				count=10;
			};
			class _xx_CUP_V_B_Eagle_SPC_Corpsman
			{
				name="CUP_V_B_Eagle_SPC_Corpsman";
				count=10;
			};
			class _xx_CUP_V_B_Eagle_SPC_MG
			{
				name="CUP_V_B_Eagle_SPC_MG";
				count=10;
			};
			class _xx_ACM_Backpack_VES_AT_Heavy
			{
				name="ACM_Backpack_VES_AT_Heavy";
				count=10;
			};
			class _xx_CUP_V_B_Eagle_SPC_Crew
			{
				name="CUP_V_B_Eagle_SPC_Crew";
				count=10;
			};
			class _xx_H_HelmetCrew_B
			{
				name="H_HelmetCrew_B";
				count=10;
			};
			class _xx_CUP_V_B_Eagle_SPC_Officer
			{
				name="CUP_V_B_Eagle_SPC_Officer";
				count=10;
			};
			class _xx_G_Aviator
			{
				name="G_Aviator";
				count=10;
			};
			class _xx_CUP_V_O_TK_OfficerBelt2
			{
				name="CUP_V_O_TK_OfficerBelt2";
				count=10;
			};
			class _xx_CFP_Ranger_Beret_Cmdr
			{
				name="CFP_Ranger_Beret_Cmdr";
				count=10;
			};
			class _xx_CUP_V_B_Eagle_SPC_Empty
			{
				name="CUP_V_B_Eagle_SPC_Empty";
				count=10;
			};
			class _xx_H_PilotHelmetHeli_O
			{
				name="H_PilotHelmetHeli_O";
				count=10;
			};
			class _xx_Aircrew_vest_2_NH
			{
				name="Aircrew_vest_2_NH";
				count=10;
			};
			class _xx_H_PilotHelmetFighter_B
			{
				name="H_PilotHelmetFighter_B";
				count=10;
			};
			class _xx_CUP_V_B_Interceptor_Rifleman_Olive
			{
				name="CUP_V_B_Interceptor_Rifleman_Olive";
				count=10;
			};
			class _xx_CUP_H_Ger_M92_GG_CF
			{
				name="CUP_H_Ger_M92_GG_CF";
				count=10;
			};
			class _xx_CUP_H_Ger_M92
			{
				name="CUP_H_Ger_M92";
				count=10;
			};
			class _xx_CUP_V_B_Interceptor_Grenadier_Olive
			{
				name="CUP_V_B_Interceptor_Grenadier_Olive";
				count=10;
			};
			class _xx_CUP_H_Ger_M92_GG_CB
			{
				name="CUP_H_Ger_M92_GG_CB";
				count=10;
			};
			class _xx_CUP_H_Ger_M92_GG
			{
				name="CUP_H_Ger_M92_GG";
				count=10;
			};
			class _xx_CUP_V_B_Interceptor_Base_Olive
			{
				name="CUP_V_B_Interceptor_Base_Olive";
				count=10;
			};
			class _xx_CFP_Alice_Vest
			{
				name="CFP_Alice_Vest";
				count=10;
			};
			class _xx_V_BandollierB_rgr
			{
				name="V_BandollierB_rgr";
				count=10;
			};
			class _xx_CFP_Ranger_Beret_3Btn
			{
				name="CFP_Ranger_Beret_3Btn";
				count=10;
			};
			class _xx_CUP_V_MBSS_PACA_Green
			{
				name="CUP_V_MBSS_PACA_Green";
				count=10;
			};
			class _xx_ACM_H_Spec_OpsCore1_1
			{
				name="ACM_H_Spec_OpsCore1_1";
				count=10;
			};
			class _xx_CFP_ANPVS15_Camo_V3
			{
				name="CFP_ANPVS15_Camo_V3";
				count=10;
			};
			class _xx_CUP_V_MBSS_PACA2_Green
			{
				name="CUP_V_MBSS_PACA2_Green";
				count=10;
			};
			class _xx_ACM_H_Spec_OpsCore3_1
			{
				name="ACM_H_Spec_OpsCore3_1";
				count=10;
			};
			class _xx_ACM_H_Spec_OpsCore5_1
			{
				name="ACM_H_Spec_OpsCore5_1";
				count=10;
			};
			class _xx_ACM_H_Spec_OpsCore2_1
			{
				name="ACM_H_Spec_OpsCore2_1";
				count=10;
			};
			class _xx_ACM_Backpack_VES_AT_Spec
			{
				name="ACM_Backpack_VES_AT_Spec";
				count=10;
			};
			class _xx_ACM_Backpack_VES_AT_Missile
			{
				name="ACM_Backpack_VES_AT_Missile";
				count=10;
			};
			class _xx_ACM_H_Spec_OpsCore4_1
			{
				name="ACM_H_Spec_OpsCore4_1";
				count=10;
			};
			class _xx_ACM_backpack_Ves_EXPL
			{
				name="ACM_backpack_Ves_EXPL";
				count=10;
			};
			class _xx_V_Chestrig_rgr
			{
				name="V_Chestrig_rgr";
				count=10;
			};
			class _xx_B_RadioBag_01_black_F
			{
				name="B_RadioBag_01_black_F";
				count=10;
			};
			class _xx_CFP_CarrierRig_Operator_OGA_OD
			{
				name="CFP_CarrierRig_Operator_OGA_OD";
				count=10;
			};
		};
	};
	class ACM_I_Ves_SupplyBox: CUP_USVehicleBox
	{
		scope=2;
		author="ALiVE ORBAT CREATOR";
		displayName="Vespaccian Federal Army Supply Box";
		class TransportMagazines
		{
			class _xx_CUP_30Rnd_556x45_G36_wdl
			{
				magazine="CUP_30Rnd_556x45_G36_wdl";
				count=50;
			};
			class _xx_Chemlight_green
			{
				magazine="Chemlight_green";
				count=50;
			};
			class _xx_CUP_HandGrenade_M67
			{
				magazine="CUP_HandGrenade_M67";
				count=50;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=50;
			};
			class _xx_CUP_1Rnd_HE_M203
			{
				magazine="CUP_1Rnd_HE_M203";
				count=50;
			};
			class _xx_CUP_1Rnd_HEDP_M203
			{
				magazine="CUP_1Rnd_HEDP_M203";
				count=50;
			};
			class _xx_CUP_1Rnd_Smoke_M203
			{
				magazine="CUP_1Rnd_Smoke_M203";
				count=50;
			};
			class _xx_CUP_PG7V_M
			{
				magazine="CUP_PG7V_M";
				count=50;
			};
			class _xx_CUP_OG7_M
			{
				magazine="CUP_OG7_M";
				count=50;
			};
			class _xx_CUP_15Rnd_9x19_M9
			{
				magazine="CUP_15Rnd_9x19_M9";
				count=50;
			};
			class _xx_CUP_HandGrenade_L109A1_HE
			{
				magazine="CUP_HandGrenade_L109A1_HE";
				count=50;
			};
			class _xx_CUP_100Rnd_556x45_BetaCMag_wdl
			{
				magazine="CUP_100Rnd_556x45_BetaCMag_wdl";
				count=50;
			};
			class _xx_CUP_20Rnd_762x51_G3
			{
				magazine="CUP_20Rnd_762x51_G3";
				count=50;
			};
			class _xx_Vorona_HEAT
			{
				magazine="Vorona_HEAT";
				count=50;
			};
			class _xx_CUP_30Rnd_556x45_G36
			{
				magazine="CUP_30Rnd_556x45_G36";
				count=50;
			};
			class _xx_CUP_6Rnd_HE_M203
			{
				magazine="CUP_6Rnd_HE_M203";
				count=50;
			};
			class _xx_CUP_6Rnd_Smoke_M203
			{
				magazine="CUP_6Rnd_Smoke_M203";
				count=50;
			};
			class _xx_150Rnd_762x54_Box
			{
				magazine="150Rnd_762x54_Box";
				count=50;
			};
			class _xx_CUP_SMAW_HEDP_M
			{
				magazine="CUP_SMAW_HEDP_M";
				count=50;
			};
			class _xx_Titan_AT
			{
				magazine="Titan_AT";
				count=50;
			};
			class _xx_ClaymoreDirectionalMine_Remote_Mag
			{
				magazine="ClaymoreDirectionalMine_Remote_Mag";
				count=50;
			};
			class _xx_APERSMineDispenser_Mag
			{
				magazine="APERSMineDispenser_Mag";
				count=50;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine="DemoCharge_Remote_Mag";
				count=50;
			};
			class _xx_10Rnd_338_Mag
			{
				magazine="10Rnd_338_Mag";
				count=50;
			};
		};
		class TransportWeapons
		{
			class _xx_CUP_arifle_G36K_VFG_wdl
			{
				weapon="CUP_arifle_G36K_VFG_wdl";
				count=10;
			};
			class _xx_CUP_arifle_G36K_AG36_wdl
			{
				weapon="CUP_arifle_G36K_AG36_wdl";
				count=10;
			};
			class _xx_CUP_arifle_G36E_wdl
			{
				weapon="CUP_arifle_G36E_wdl";
				count=10;
			};
			class _xx_CUP_arifle_G36A_wdl
			{
				weapon="CUP_arifle_G36A_wdl";
				count=10;
			};
			class _xx_CUP_hgun_M9
			{
				weapon="CUP_hgun_M9";
				count=10;
			};
			class _xx_ACM_VES_MR_Marksman_G3
			{
				weapon="ACM_VES_MR_Marksman_G3";
				count=10;
			};
			class _xx_CUP_arifle_G36C_VFG_Carry
			{
				weapon="CUP_arifle_G36C_VFG_Carry";
				count=10;
			};
			class _xx_CUP_arifle_G3A3_modern_ris
			{
				weapon="CUP_arifle_G3A3_modern_ris";
				count=10;
			};
			class _xx_CUP_arifle_G3A3_ris_vfg
			{
				weapon="CUP_arifle_G3A3_ris_vfg";
				count=10;
			};
			class _xx_CUP_glaunch_M32
			{
				weapon="CUP_glaunch_M32";
				count=10;
			};
			class _xx_LMG_Zafir_F
			{
				weapon="LMG_Zafir_F";
				count=10;
			};
			class _xx_ACM_VES_MR_Marksman_G3_Reserve
			{
				weapon="ACM_VES_MR_Marksman_G3_Reserve";
				count=10;
			};
			class _xx_CUP_arifle_G3A3_ris
			{
				weapon="CUP_arifle_G3A3_ris";
				count=10;
			};
			class _xx_ACM_VES_Spec_Rifleman
			{
				weapon="ACM_VES_Spec_Rifleman";
				count=10;
			};
			class _xx_ACM_VES_Spec_TL
			{
				weapon="ACM_VES_Spec_TL";
				count=10;
			};
			class _xx_ACM_VES_Spec_GL
			{
				weapon="ACM_VES_Spec_GL";
				count=10;
			};
			class _xx_ACM_VES_Spec_Carbine
			{
				weapon="ACM_VES_Spec_Carbine";
				count=10;
			};
			class _xx_srifle_DMR_02_camo_AMS_LP_F
			{
				weapon="srifle_DMR_02_camo_AMS_LP_F";
				count=10;
			};
			class _xx_ACM_VES_Spec_Auto
			{
				weapon="ACM_VES_Spec_Auto";
				count=10;
			};
			class _xx_CUP_launch_RPG7V_PGO7V3
			{
				weapon="CUP_launch_RPG7V_PGO7V3";
				count=10;
			};
			class _xx_CUP_launch_RShG2_Loaded
			{
				weapon="CUP_launch_RShG2_Loaded";
				count=10;
			};
			class _xx_launch_O_Vorona_green_F
			{
				weapon="launch_O_Vorona_green_F";
				count=10;
			};
			class _xx_CUP_launch_FIM92Stinger_Loaded
			{
				weapon="CUP_launch_FIM92Stinger_Loaded";
				count=10;
			};
			class _xx_CUP_launch_RPG26_Loaded
			{
				weapon="CUP_launch_RPG26_Loaded";
				count=10;
			};
			class _xx_CUP_launch_Mk153Mod0
			{
				weapon="CUP_launch_Mk153Mod0";
				count=10;
			};
			class _xx_launch_I_Titan_short_F
			{
				weapon="launch_I_Titan_short_F";
				count=10;
			};
		};
		class TransportItems
		{
			class _xx_CUP_optic_G36DualOptics_wood
			{
				name="CUP_optic_G36DualOptics_wood";
				count=10;
			};
			class _xx_CUP_optic_G36Optics_wood
			{
				name="CUP_optic_G36Optics_wood";
				count=10;
			};
			class _xx_CUP_optic_SB_3_12x50_PMII_PIP
			{
				name="CUP_optic_SB_3_12x50_PMII_PIP";
				count=10;
			};
			class _xx_CUP_bipod_G3
			{
				name="CUP_bipod_G3";
				count=10;
			};
			class _xx_CUP_optic_G36DualOptics
			{
				name="CUP_optic_G36DualOptics";
				count=10;
			};
			class _xx_CUP_optic_SB_11_4x20_PM
			{
				name="CUP_optic_SB_11_4x20_PM";
				count=10;
			};
			class _xx_CUP_muzzle_snds_M16_camo
			{
				name="CUP_muzzle_snds_M16_camo";
				count=10;
			};
			class _xx_CUP_acc_ANPEQ_15_Top_Flashlight_OD_L
			{
				name="CUP_acc_ANPEQ_15_Top_Flashlight_OD_L";
				count=10;
			};
			class _xx_CUP_optic_HensoldtZO_low_RDS_od
			{
				name="CUP_optic_HensoldtZO_low_RDS_od";
				count=10;
			};
			class _xx_CUP_optic_AIMM_COMPM4_BLK
			{
				name="CUP_optic_AIMM_COMPM4_BLK";
				count=10;
			};
			class _xx_CUP_acc_ANPEQ_15_OD
			{
				name="CUP_acc_ANPEQ_15_OD";
				count=10;
			};
			class _xx_CUP_acc_ANPEQ_15_Flashlight_OD_L
			{
				name="CUP_acc_ANPEQ_15_Flashlight_OD_L";
				count=10;
			};
			class _xx_optic_ACO_grn_smg
			{
				name="optic_ACO_grn_smg";
				count=10;
			};
			class _xx_acc_pointer_IR
			{
				name="acc_pointer_IR";
				count=10;
			};
			class _xx_optic_AMS
			{
				name="optic_AMS";
				count=10;
			};
			class _xx_bipod_01_F_blk
			{
				name="bipod_01_F_blk";
				count=10;
			};
			class _xx_CUP_muzzle_snds_G36_wood
			{
				name="CUP_muzzle_snds_G36_wood";
				count=10;
			};
			class _xx_CUP_optic_G33_HWS_OD
			{
				name="CUP_optic_G33_HWS_OD";
				count=10;
			};
			class _xx_CUP_V_B_Eagle_SPC_Rifleman
			{
				name="CUP_V_B_Eagle_SPC_Rifleman";
				count=10;
			};
			class _xx_ACM_H_Vesp_6B47_v2_GogglesUp
			{
				name="ACM_H_Vesp_6B47_v2_GogglesUp";
				count=10;
			};
			class _xx_CUP_NVG_PVS15_black
			{
				name="CUP_NVG_PVS15_black";
				count=10;
			};
			class _xx_ItemMap
			{
				name="ItemMap";
				count=10;
			};
			class _xx_ItemCompass
			{
				name="ItemCompass";
				count=10;
			};
			class _xx_ItemWatch
			{
				name="ItemWatch";
				count=10;
			};
			class _xx_ItemRadio
			{
				name="ItemRadio";
				count=10;
			};
			class _xx_ItemGPS
			{
				name="ItemGPS";
				count=10;
			};
			class _xx_ACM_H_Vesp_6B47_v2_GogglesClosed
			{
				name="ACM_H_Vesp_6B47_v2_GogglesClosed";
				count=10;
			};
			class _xx_CUP_V_B_Eagle_SPC_GL
			{
				name="CUP_V_B_Eagle_SPC_GL";
				count=10;
			};
			class _xx_ACM_H_Vesp_6B47_v2
			{
				name="ACM_H_Vesp_6B47_v2";
				count=10;
			};
			class _xx_CUP_V_B_Eagle_SPC_AT
			{
				name="CUP_V_B_Eagle_SPC_AT";
				count=10;
			};
			class _xx_ACM_H_Vesp_Cap
			{
				name="ACM_H_Vesp_Cap";
				count=10;
			};
			class _xx_ACM_Backpack_VES_AT
			{
				name="ACM_Backpack_VES_AT";
				count=10;
			};
			class _xx_CUP_V_B_Eagle_SPC_AR
			{
				name="CUP_V_B_Eagle_SPC_AR";
				count=10;
			};
			class _xx_ACM_H_Vesp_6B47_v2_GogglesDown
			{
				name="ACM_H_Vesp_6B47_v2_GogglesDown";
				count=10;
			};
			class _xx_Rangefinder
			{
				name="Rangefinder";
				count=10;
			};
			class _xx_CUP_V_B_Eagle_SPC_DMR
			{
				name="CUP_V_B_Eagle_SPC_DMR";
				count=10;
			};
			class _xx_ACM_H_Vesp_Boonie
			{
				name="ACM_H_Vesp_Boonie";
				count=10;
			};
			class _xx_CUP_NVG_PVS15_Hide
			{
				name="CUP_NVG_PVS15_Hide";
				count=10;
			};
			class _xx_ACM_Backpack_VES_Medic
			{
				name="ACM_Backpack_VES_Medic";
				count=10;
			};
			class _xx_CFP_Alice_Vest2
			{
				name="CFP_Alice_Vest2";
				count=10;
			};
			class _xx_CUP_V_B_Eagle_SPC_Corpsman
			{
				name="CUP_V_B_Eagle_SPC_Corpsman";
				count=10;
			};
			class _xx_CUP_V_B_Eagle_SPC_MG
			{
				name="CUP_V_B_Eagle_SPC_MG";
				count=10;
			};
			class _xx_ACM_Backpack_VES_AT_Heavy
			{
				name="ACM_Backpack_VES_AT_Heavy";
				count=10;
			};
			class _xx_CUP_V_B_Eagle_SPC_Crew
			{
				name="CUP_V_B_Eagle_SPC_Crew";
				count=10;
			};
			class _xx_H_HelmetCrew_B
			{
				name="H_HelmetCrew_B";
				count=10;
			};
			class _xx_CUP_V_B_Eagle_SPC_Officer
			{
				name="CUP_V_B_Eagle_SPC_Officer";
				count=10;
			};
			class _xx_G_Aviator
			{
				name="G_Aviator";
				count=10;
			};
			class _xx_CUP_V_O_TK_OfficerBelt2
			{
				name="CUP_V_O_TK_OfficerBelt2";
				count=10;
			};
			class _xx_CFP_Ranger_Beret_Cmdr
			{
				name="CFP_Ranger_Beret_Cmdr";
				count=10;
			};
			class _xx_CUP_V_B_Eagle_SPC_Empty
			{
				name="CUP_V_B_Eagle_SPC_Empty";
				count=10;
			};
			class _xx_H_PilotHelmetHeli_O
			{
				name="H_PilotHelmetHeli_O";
				count=10;
			};
			class _xx_Aircrew_vest_2_NH
			{
				name="Aircrew_vest_2_NH";
				count=10;
			};
			class _xx_H_PilotHelmetFighter_B
			{
				name="H_PilotHelmetFighter_B";
				count=10;
			};
			class _xx_CUP_V_B_Interceptor_Rifleman_Olive
			{
				name="CUP_V_B_Interceptor_Rifleman_Olive";
				count=10;
			};
			class _xx_CUP_H_Ger_M92_GG_CF
			{
				name="CUP_H_Ger_M92_GG_CF";
				count=10;
			};
			class _xx_CUP_H_Ger_M92
			{
				name="CUP_H_Ger_M92";
				count=10;
			};
			class _xx_CUP_V_B_Interceptor_Grenadier_Olive
			{
				name="CUP_V_B_Interceptor_Grenadier_Olive";
				count=10;
			};
			class _xx_CUP_H_Ger_M92_GG_CB
			{
				name="CUP_H_Ger_M92_GG_CB";
				count=10;
			};
			class _xx_CUP_H_Ger_M92_GG
			{
				name="CUP_H_Ger_M92_GG";
				count=10;
			};
			class _xx_CUP_V_B_Interceptor_Base_Olive
			{
				name="CUP_V_B_Interceptor_Base_Olive";
				count=10;
			};
			class _xx_CFP_Alice_Vest
			{
				name="CFP_Alice_Vest";
				count=10;
			};
			class _xx_V_BandollierB_rgr
			{
				name="V_BandollierB_rgr";
				count=10;
			};
			class _xx_CFP_Ranger_Beret_3Btn
			{
				name="CFP_Ranger_Beret_3Btn";
				count=10;
			};
			class _xx_CUP_V_MBSS_PACA_Green
			{
				name="CUP_V_MBSS_PACA_Green";
				count=10;
			};
			class _xx_ACM_H_Spec_OpsCore1_1
			{
				name="ACM_H_Spec_OpsCore1_1";
				count=10;
			};
			class _xx_CFP_ANPVS15_Camo_V3
			{
				name="CFP_ANPVS15_Camo_V3";
				count=10;
			};
			class _xx_CUP_V_MBSS_PACA2_Green
			{
				name="CUP_V_MBSS_PACA2_Green";
				count=10;
			};
			class _xx_ACM_H_Spec_OpsCore3_1
			{
				name="ACM_H_Spec_OpsCore3_1";
				count=10;
			};
			class _xx_ACM_H_Spec_OpsCore5_1
			{
				name="ACM_H_Spec_OpsCore5_1";
				count=10;
			};
			class _xx_ACM_H_Spec_OpsCore2_1
			{
				name="ACM_H_Spec_OpsCore2_1";
				count=10;
			};
			class _xx_ACM_Backpack_VES_AT_Spec
			{
				name="ACM_Backpack_VES_AT_Spec";
				count=10;
			};
			class _xx_ACM_Backpack_VES_AT_Missile
			{
				name="ACM_Backpack_VES_AT_Missile";
				count=10;
			};
			class _xx_ACM_H_Spec_OpsCore4_1
			{
				name="ACM_H_Spec_OpsCore4_1";
				count=10;
			};
			class _xx_ACM_backpack_Ves_EXPL
			{
				name="ACM_backpack_Ves_EXPL";
				count=10;
			};
			class _xx_V_Chestrig_rgr
			{
				name="V_Chestrig_rgr";
				count=10;
			};
			class _xx_B_RadioBag_01_black_F
			{
				name="B_RadioBag_01_black_F";
				count=10;
			};
			class _xx_CFP_CarrierRig_Operator_OGA_OD
			{
				name="CFP_CarrierRig_Operator_OGA_OD";
				count=10;
			};
			class _xx_ACM_Vesp_Clothes1_1
			{
				name="ACM_Vesp_Clothes1_1";
				count=10;
			};
			class _xx_ACM_Vesp_Clothes4_1
			{
				name="ACM_Vesp_Clothes4_1";
				count=10;
			};
			class _xx_ACM_Vesp_Clothes2_1
			{
				name="ACM_Vesp_Clothes2_1";
				count=10;
			};
			class _xx_ACM_Vesp_Clothes3_1
			{
				name="ACM_Vesp_Clothes3_1";
				count=10;
			};
			class _xx_ACM_Vesp_Clothes5_1
			{
				name="ACM_Vesp_Clothes5_1";
				count=10;
			};
			class _xx_CUP_U_I_RACS_PilotOverall
			{
				name="CUP_U_I_RACS_PilotOverall";
				count=10;
			};
			class _xx_ACM_Vesp_Clothes6_1
			{
				name="ACM_Vesp_Clothes6_1";
				count=10;
			};
			class _xx_CUP_optic_PGO7V3
			{
				name="CUP_optic_PGO7V3";
				count=5;
			};
		};
	};
	class ACM_I_Ves2_AmmoBox: CUP_USBasicAmmunitionBox
	{
		scope=2;
		author="ALiVE ORBAT CREATOR";
		displayName="Vespaccian Federal Marine Corps Ammo Box";
		class TransportMagazines
		{
			class _xx_CUP_30Rnd_556x45_G36_wdl
			{
				magazine="CUP_30Rnd_556x45_G36_wdl";
				count=50;
			};
			class _xx_Chemlight_green
			{
				magazine="Chemlight_green";
				count=50;
			};
			class _xx_CUP_HandGrenade_M67
			{
				magazine="CUP_HandGrenade_M67";
				count=50;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=50;
			};
			class _xx_CUP_1Rnd_HE_M203
			{
				magazine="CUP_1Rnd_HE_M203";
				count=50;
			};
			class _xx_CUP_1Rnd_HEDP_M203
			{
				magazine="CUP_1Rnd_HEDP_M203";
				count=50;
			};
			class _xx_CUP_1Rnd_Smoke_M203
			{
				magazine="CUP_1Rnd_Smoke_M203";
				count=50;
			};
			class _xx_CUP_PG7V_M
			{
				magazine="CUP_PG7V_M";
				count=50;
			};
			class _xx_CUP_OG7_M
			{
				magazine="CUP_OG7_M";
				count=50;
			};
			class _xx_CUP_100Rnd_556x45_BetaCMag
			{
				magazine="CUP_100Rnd_556x45_BetaCMag";
				count=50;
			};
			class _xx_CUP_15Rnd_9x19_M9
			{
				magazine="CUP_15Rnd_9x19_M9";
				count=50;
			};
			class _xx_CUP_HandGrenade_L109A1_HE
			{
				magazine="CUP_HandGrenade_L109A1_HE";
				count=50;
			};
			class _xx_CUP_20Rnd_762x51_DMR
			{
				magazine="CUP_20Rnd_762x51_DMR";
				count=50;
			};
			class _xx_Vorona_HEAT
			{
				magazine="Vorona_HEAT";
				count=50;
			};
			class _xx_CUP_30Rnd_556x45_G36
			{
				magazine="CUP_30Rnd_556x45_G36";
				count=50;
			};
			class _xx_CUP_30Rnd_556x45_PMAG_QP_Tan
			{
				magazine="CUP_30Rnd_556x45_PMAG_QP_Tan";
				count=50;
			};
			class _xx_CUP_30Rnd_556x45_PMAG_QP
			{
				magazine="CUP_30Rnd_556x45_PMAG_QP";
				count=50;
			};
			class _xx_CUP_SMAW_HEDP_M
			{
				magazine="CUP_SMAW_HEDP_M";
				count=50;
			};
			class _xx_Titan_AT
			{
				magazine="Titan_AT";
				count=50;
			};
			class _xx_ClaymoreDirectionalMine_Remote_Mag
			{
				magazine="ClaymoreDirectionalMine_Remote_Mag";
				count=50;
			};
			class _xx_APERSMineDispenser_Mag
			{
				magazine="APERSMineDispenser_Mag";
				count=50;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine="DemoCharge_Remote_Mag";
				count=50;
			};
			class _xx_10Rnd_338_Mag
			{
				magazine="10Rnd_338_Mag";
				count=50;
			};
			class _xx_150Rnd_762x54_Box
			{
				magazine="150Rnd_762x54_Box";
				count=50;
			};
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class ACM_I_Ves2_WeaponsBox: CUP_USBasicWeaponsBox
	{
		scope=2;
		author="ALiVE ORBAT CREATOR";
		displayName="Vespaccian Federal Marine Corps Weapons Box";
		class TransportMagazines
		{
			class _xx_CUP_30Rnd_556x45_G36_wdl
			{
				magazine="CUP_30Rnd_556x45_G36_wdl";
				count=50;
			};
			class _xx_CUP_1Rnd_HE_M203
			{
				magazine="CUP_1Rnd_HE_M203";
				count=50;
			};
			class _xx_CUP_100Rnd_556x45_BetaCMag
			{
				magazine="CUP_100Rnd_556x45_BetaCMag";
				count=50;
			};
			class _xx_CUP_20Rnd_762x51_DMR
			{
				magazine="CUP_20Rnd_762x51_DMR";
				count=50;
			};
			class _xx_CUP_15Rnd_9x19_M9
			{
				magazine="CUP_15Rnd_9x19_M9";
				count=50;
			};
			class _xx_CUP_30Rnd_556x45_G36
			{
				magazine="CUP_30Rnd_556x45_G36";
				count=50;
			};
			class _xx_CUP_30Rnd_556x45_PMAG_QP_Tan
			{
				magazine="CUP_30Rnd_556x45_PMAG_QP_Tan";
				count=50;
			};
			class _xx_CUP_30Rnd_556x45_PMAG_QP
			{
				magazine="CUP_30Rnd_556x45_PMAG_QP";
				count=50;
			};
			class _xx_10Rnd_338_Mag
			{
				magazine="10Rnd_338_Mag";
				count=50;
			};
			class _xx_150Rnd_762x54_Box
			{
				magazine="150Rnd_762x54_Box";
				count=50;
			};
		};
		class TransportWeapons
		{
			class _xx_CUP_arifle_XM8_Carbine_FG
			{
				weapon="CUP_arifle_XM8_Carbine_FG";
				count=10;
			};
			class _xx_CUP_arifle_XM8_Carbine_GL
			{
				weapon="CUP_arifle_XM8_Carbine_GL";
				count=10;
			};
			class _xx_CUP_arifle_XM8_Compact
			{
				weapon="CUP_arifle_XM8_Compact";
				count=10;
			};
			class _xx_CUP_arifle_xm8_SAW
			{
				weapon="CUP_arifle_xm8_SAW";
				count=10;
			};
			class _xx_ACM_VES_MR_Marksman_M14
			{
				weapon="ACM_VES_MR_Marksman_M14";
				count=10;
			};
			class _xx_CUP_hgun_M9
			{
				weapon="CUP_hgun_M9";
				count=10;
			};
			class _xx_ACM_VES_Spec_HK_Rifleman
			{
				weapon="ACM_VES_Spec_HK_Rifleman";
				count=10;
			};
			class _xx_ACM_VES_Spec_HK_CQC
			{
				weapon="ACM_VES_Spec_HK_CQC";
				count=10;
			};
			class _xx_ACM_VES_Spec_HK_GL
			{
				weapon="ACM_VES_Spec_HK_GL";
				count=10;
			};
			class _xx_srifle_DMR_02_camo_AMS_LP_F
			{
				weapon="srifle_DMR_02_camo_AMS_LP_F";
				count=10;
			};
			class _xx_CFP_Negev_Black
			{
				weapon="CFP_Negev_Black";
				count=10;
			};
			class _xx_ACM_VES_Spec_M4a1_sop_Spect
			{
				weapon="ACM_VES_Spec_M4a1_sop_Spect";
				count=10;
			};
			class _xx_ACM_VES_Spec_M4a1_sop_med
			{
				weapon="ACM_VES_Spec_M4a1_sop_med";
				count=10;
			};
		};
		class TransportItems
		{
			class _xx_optic_DMS
			{
				name="optic_DMS";
				count=10;
			};
			class _xx_CUP_muzzle_snds_M16_desert
			{
				name="CUP_muzzle_snds_M16_desert";
				count=10;
			};
			class _xx_CUP_acc_ANPEQ_15_Flashlight_Tan_L
			{
				name="CUP_acc_ANPEQ_15_Flashlight_Tan_L";
				count=10;
			};
			class _xx_CUP_optic_HensoldtZO_low_RDS_desert
			{
				name="CUP_optic_HensoldtZO_low_RDS_desert";
				count=10;
			};
			class _xx_CUP_optic_Elcan_SpecterDR_coyote
			{
				name="CUP_optic_Elcan_SpecterDR_coyote";
				count=10;
			};
			class _xx_acc_pointer_IR
			{
				name="acc_pointer_IR";
				count=10;
			};
			class _xx_optic_AMS
			{
				name="optic_AMS";
				count=10;
			};
			class _xx_bipod_01_F_blk
			{
				name="bipod_01_F_blk";
				count=10;
			};
		};
	};
	class ACM_I_Ves2_LaunchersBox: CUP_USLaunchersBox
	{
		scope=2;
		author="ALiVE ORBAT CREATOR";
		displayName="Vespaccian Federal Marine Corps Launchers Box";
		class TransportMagazines
		{
			class _xx_CUP_PG7V_M
			{
				magazine="CUP_PG7V_M";
				count=5;
			};
			class _xx_CUP_RSHG2_M
			{
				magazine="CUP_RSHG2_M";
				count=5;
			};
			class _xx_Vorona_HEAT
			{
				magazine="Vorona_HEAT";
				count=5;
			};
			class _xx_CUP_Stinger_M
			{
				magazine="CUP_Stinger_M";
				count=5;
			};
			class _xx_CUP_RPG26_M
			{
				magazine="CUP_RPG26_M";
				count=5;
			};
			class _xx_CUP_SMAW_HEDP_M
			{
				magazine="CUP_SMAW_HEDP_M";
				count=5;
			};
			class _xx_Titan_AT
			{
				magazine="Titan_AT";
				count=5;
			};
		};
		class TransportWeapons
		{
			class _xx_CUP_launch_RPG7V_PGO7V3
			{
				weapon="CUP_launch_RPG7V_PGO7V3";
				count=5;
			};
			class _xx_CUP_launch_RShG2_Loaded
			{
				weapon="CUP_launch_RShG2_Loaded";
				count=5;
			};
			class _xx_launch_O_Vorona_brown_F
			{
				weapon="launch_O_Vorona_brown_F";
				count=5;
			};
			class _xx_CUP_launch_FIM92Stinger_Loaded
			{
				weapon="CUP_launch_FIM92Stinger_Loaded";
				count=5;
			};
			class _xx_CUP_launch_RPG26_Loaded
			{
				weapon="CUP_launch_RPG26_Loaded";
				count=5;
			};
			class _xx_CUP_launch_Mk153Mod0
			{
				weapon="CUP_launch_Mk153Mod0";
				count=5;
			};
			class _xx_launch_B_Titan_short_F
			{
				weapon="launch_B_Titan_short_F";
				count=5;
			};
		};
		class TransportItems
		{
			class _xx_CUP_optic_PGO7V3
			{
				name="CUP_optic_PGO7V3";
				count=5;
			};
		};
	};
	class ACM_I_Ves2_UniformBox: CUP_USBasicWeaponsBox
	{
		scope=2;
		author="ALiVE ORBAT CREATOR";
		displayName="Vespaccian Federal Marine Corps Uniform Box";
		class TransportWeapons
		{
		};
		class TransportMagazines
		{
		};
		class TransportItems
		{
			class _xx_ACM_Vesp_Clothes1_2
			{
				name="ACM_Vesp_Clothes1_2";
				count=15;
			};
			class _xx_ACM_Vesp_Clothes4_2
			{
				name="ACM_Vesp_Clothes4_2";
				count=15;
			};
			class _xx_ACM_Vesp_Clothes2_2
			{
				name="ACM_Vesp_Clothes2_2";
				count=15;
			};
			class _xx_ACM_Vesp_Clothes3_2
			{
				name="ACM_Vesp_Clothes3_2";
				count=15;
			};
			class _xx_ACM_Vesp_Clothes5_2
			{
				name="ACM_Vesp_Clothes5_2";
				count=15;
			};
			class _xx_ACM_Vesp_Clothes6_2
			{
				name="ACM_Vesp_Clothes6_2";
				count=15;
			};
		};
	};
	class ACM_I_Ves2_SupportBox: CUP_USSpecialWeaponsBox
	{
		scope=2;
		author="ALiVE ORBAT CREATOR";
		displayName="Vespaccian Federal Marine Corps Support Box";
		class TransportWeapons
		{
		};
		class TransportMagazines
		{
		};
		class TransportItems
		{
			class _xx_CUP_V_B_Eagle_SPC_Rifleman
			{
				name="CUP_V_B_Eagle_SPC_Rifleman";
				count=10;
			};
			class _xx_ACM_H_Vesp_CSC_6B47_v2_GogglesDown
			{
				name="ACM_H_Vesp_CSC_6B47_v2_GogglesDown";
				count=10;
			};
			class _xx_CUP_NVG_PVS15_black
			{
				name="CUP_NVG_PVS15_black";
				count=10;
			};
			class _xx_ItemMap
			{
				name="ItemMap";
				count=10;
			};
			class _xx_ItemCompass
			{
				name="ItemCompass";
				count=10;
			};
			class _xx_ItemWatch
			{
				name="ItemWatch";
				count=10;
			};
			class _xx_ItemRadio
			{
				name="ItemRadio";
				count=10;
			};
			class _xx_ItemGPS
			{
				name="ItemGPS";
				count=10;
			};
			class _xx_ACM_H_Vesp_CSC_6B47_v2_GogglesUp
			{
				name="ACM_H_Vesp_CSC_6B47_v2_GogglesUp";
				count=10;
			};
			class _xx_ACM_H_Vesp_CSC_6B47_v2_GogglesClosed
			{
				name="ACM_H_Vesp_CSC_6B47_v2_GogglesClosed";
				count=10;
			};
			class _xx_CUP_V_B_Eagle_SPC_GL
			{
				name="CUP_V_B_Eagle_SPC_GL";
				count=10;
			};
			class _xx_ACM_H_Vesp_CSC_6B47_v2
			{
				name="ACM_H_Vesp_CSC_6B47_v2";
				count=10;
			};
			class _xx_CUP_V_B_Eagle_SPC_AT
			{
				name="CUP_V_B_Eagle_SPC_AT";
				count=10;
			};
			class _xx_ACM_Backpack_VES_AT
			{
				name="ACM_Backpack_VES_AT";
				count=10;
			};
			class _xx_CUP_V_B_Eagle_SPC_AR
			{
				name="CUP_V_B_Eagle_SPC_AR";
				count=10;
			};
			class _xx_Rangefinder
			{
				name="Rangefinder";
				count=10;
			};
			class _xx_CUP_V_B_Eagle_SPC_DMR
			{
				name="CUP_V_B_Eagle_SPC_DMR";
				count=10;
			};
			class _xx_ACM_H_Vesp_CSC_Boonie
			{
				name="ACM_H_Vesp_CSC_Boonie";
				count=10;
			};
			class _xx_CUP_NVG_PVS15_Hide
			{
				name="CUP_NVG_PVS15_Hide";
				count=10;
			};
			class _xx_ACM_Backpack_VES_Medic
			{
				name="ACM_Backpack_VES_Medic";
				count=10;
			};
			class _xx_CFP_Alice_Vest2
			{
				name="CFP_Alice_Vest2";
				count=10;
			};
			class _xx_ACM_H_Vesp_CSC_Cap
			{
				name="ACM_H_Vesp_CSC_Cap";
				count=10;
			};
			class _xx_CUP_V_B_Eagle_SPC_Corpsman
			{
				name="CUP_V_B_Eagle_SPC_Corpsman";
				count=10;
			};
			class _xx_CUP_V_B_Eagle_SPC_MG
			{
				name="CUP_V_B_Eagle_SPC_MG";
				count=10;
			};
			class _xx_ACM_Backpack_VES_AT_Heavy
			{
				name="ACM_Backpack_VES_AT_Heavy";
				count=10;
			};
			class _xx_CUP_V_B_Eagle_SPC_Crew
			{
				name="CUP_V_B_Eagle_SPC_Crew";
				count=10;
			};
			class _xx_H_HelmetCrew_B
			{
				name="H_HelmetCrew_B";
				count=10;
			};
			class _xx_CUP_V_B_Eagle_SPC_Officer
			{
				name="CUP_V_B_Eagle_SPC_Officer";
				count=10;
			};
			class _xx_G_Aviator
			{
				name="G_Aviator";
				count=10;
			};
			class _xx_CUP_V_O_TK_OfficerBelt2
			{
				name="CUP_V_O_TK_OfficerBelt2";
				count=10;
			};
			class _xx_CFP_Ranger_Beret_Cmdr
			{
				name="CFP_Ranger_Beret_Cmdr";
				count=10;
			};
			class _xx_CUP_V_B_Eagle_SPC_Empty
			{
				name="CUP_V_B_Eagle_SPC_Empty";
				count=10;
			};
			class _xx_H_PilotHelmetHeli_O
			{
				name="H_PilotHelmetHeli_O";
				count=10;
			};
			class _xx_CUP_V_B_RRV_DA1_CB
			{
				name="CUP_V_B_RRV_DA1_CB";
				count=10;
			};
			class _xx_ACM_H_Spec_OpsCore5_2
			{
				name="ACM_H_Spec_OpsCore5_2";
				count=10;
			};
			class _xx_CUP_G_Tan_Scarf_Shades
			{
				name="CUP_G_Tan_Scarf_Shades";
				count=10;
			};
			class _xx_CFP_ANPVS15_Camo_V2
			{
				name="CFP_ANPVS15_Camo_V2";
				count=10;
			};
			class _xx_CUP_V_MBSS_PACA2_CB
			{
				name="CUP_V_MBSS_PACA2_CB";
				count=10;
			};
			class _xx_ACM_H_Spec_OpsCore1_2
			{
				name="ACM_H_Spec_OpsCore1_2";
				count=10;
			};
			class _xx_CUP_V_B_RRV_DA2_CB
			{
				name="CUP_V_B_RRV_DA2_CB";
				count=10;
			};
			class _xx_ACM_H_Spec_OpsCore2_2
			{
				name="ACM_H_Spec_OpsCore2_2";
				count=10;
			};
			class _xx_CUP_V_MBSS_PACA_CB
			{
				name="CUP_V_MBSS_PACA_CB";
				count=10;
			};
			class _xx_ACM_H_Spec_OpsCore4_2
			{
				name="ACM_H_Spec_OpsCore4_2";
				count=10;
			};
			class _xx_CUP_G_Tan_Scarf_Shades_Beard
			{
				name="CUP_G_Tan_Scarf_Shades_Beard";
				count=10;
			};
			class _xx_ACM_Backpack_VES_AT_Spec
			{
				name="ACM_Backpack_VES_AT_Spec";
				count=10;
			};
			class _xx_CUP_G_ESS_KHK_Scarf_Tan
			{
				name="CUP_G_ESS_KHK_Scarf_Tan";
				count=10;
			};
			class _xx_ACM_Backpack_VES_AT_Missile
			{
				name="ACM_Backpack_VES_AT_Missile";
				count=10;
			};
			class _xx_ACM_H_Spec_OpsCore3_2
			{
				name="ACM_H_Spec_OpsCore3_2";
				count=10;
			};
			class _xx_ACM_backpack_Ves_EXPL
			{
				name="ACM_backpack_Ves_EXPL";
				count=10;
			};
			class _xx_V_Chestrig_khk
			{
				name="V_Chestrig_khk";
				count=10;
			};
			class _xx_CFP_UA_Thermals_Grn_GPS
			{
				name="CFP_UA_Thermals_Grn_GPS";
				count=10;
			};
			class _xx_B_RadioBag_01_black_F
			{
				name="B_RadioBag_01_black_F";
				count=10;
			};
			class _xx_CFP_CarrierRig_Operator_OGA
			{
				name="CFP_CarrierRig_Operator_OGA";
				count=10;
			};
		};
	};
	class ACM_I_Ves2_SupplyBox: CUP_USVehicleBox
	{
		scope=2;
		author="ALiVE ORBAT CREATOR";
		displayName="Vespaccian Federal Marine Corps Supply Box";
		class TransportMagazines
		{
			class _xx_CUP_30Rnd_556x45_G36_wdl
			{
				magazine="CUP_30Rnd_556x45_G36_wdl";
				count=50;
			};
			class _xx_Chemlight_green
			{
				magazine="Chemlight_green";
				count=50;
			};
			class _xx_CUP_HandGrenade_M67
			{
				magazine="CUP_HandGrenade_M67";
				count=50;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=50;
			};
			class _xx_CUP_1Rnd_HE_M203
			{
				magazine="CUP_1Rnd_HE_M203";
				count=50;
			};
			class _xx_CUP_1Rnd_HEDP_M203
			{
				magazine="CUP_1Rnd_HEDP_M203";
				count=50;
			};
			class _xx_CUP_1Rnd_Smoke_M203
			{
				magazine="CUP_1Rnd_Smoke_M203";
				count=50;
			};
			class _xx_CUP_PG7V_M
			{
				magazine="CUP_PG7V_M";
				count=50;
			};
			class _xx_CUP_OG7_M
			{
				magazine="CUP_OG7_M";
				count=50;
			};
			class _xx_CUP_100Rnd_556x45_BetaCMag
			{
				magazine="CUP_100Rnd_556x45_BetaCMag";
				count=50;
			};
			class _xx_CUP_15Rnd_9x19_M9
			{
				magazine="CUP_15Rnd_9x19_M9";
				count=50;
			};
			class _xx_CUP_HandGrenade_L109A1_HE
			{
				magazine="CUP_HandGrenade_L109A1_HE";
				count=50;
			};
			class _xx_CUP_20Rnd_762x51_DMR
			{
				magazine="CUP_20Rnd_762x51_DMR";
				count=50;
			};
			class _xx_Vorona_HEAT
			{
				magazine="Vorona_HEAT";
				count=50;
			};
			class _xx_CUP_30Rnd_556x45_G36
			{
				magazine="CUP_30Rnd_556x45_G36";
				count=50;
			};
			class _xx_CUP_30Rnd_556x45_PMAG_QP_Tan
			{
				magazine="CUP_30Rnd_556x45_PMAG_QP_Tan";
				count=50;
			};
			class _xx_CUP_30Rnd_556x45_PMAG_QP
			{
				magazine="CUP_30Rnd_556x45_PMAG_QP";
				count=50;
			};
			class _xx_CUP_SMAW_HEDP_M
			{
				magazine="CUP_SMAW_HEDP_M";
				count=50;
			};
			class _xx_Titan_AT
			{
				magazine="Titan_AT";
				count=50;
			};
			class _xx_ClaymoreDirectionalMine_Remote_Mag
			{
				magazine="ClaymoreDirectionalMine_Remote_Mag";
				count=50;
			};
			class _xx_APERSMineDispenser_Mag
			{
				magazine="APERSMineDispenser_Mag";
				count=50;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine="DemoCharge_Remote_Mag";
				count=50;
			};
			class _xx_10Rnd_338_Mag
			{
				magazine="10Rnd_338_Mag";
				count=50;
			};
			class _xx_150Rnd_762x54_Box
			{
				magazine="150Rnd_762x54_Box";
				count=50;
			};
		};
		class TransportWeapons
		{
			class _xx_CUP_arifle_XM8_Carbine_FG
			{
				weapon="CUP_arifle_XM8_Carbine_FG";
				count=10;
			};
			class _xx_CUP_arifle_XM8_Carbine_GL
			{
				weapon="CUP_arifle_XM8_Carbine_GL";
				count=10;
			};
			class _xx_CUP_arifle_XM8_Compact
			{
				weapon="CUP_arifle_XM8_Compact";
				count=10;
			};
			class _xx_CUP_arifle_xm8_SAW
			{
				weapon="CUP_arifle_xm8_SAW";
				count=10;
			};
			class _xx_ACM_VES_MR_Marksman_M14
			{
				weapon="ACM_VES_MR_Marksman_M14";
				count=10;
			};
			class _xx_CUP_hgun_M9
			{
				weapon="CUP_hgun_M9";
				count=10;
			};
			class _xx_ACM_VES_Spec_HK_Rifleman
			{
				weapon="ACM_VES_Spec_HK_Rifleman";
				count=10;
			};
			class _xx_ACM_VES_Spec_HK_CQC
			{
				weapon="ACM_VES_Spec_HK_CQC";
				count=10;
			};
			class _xx_ACM_VES_Spec_HK_GL
			{
				weapon="ACM_VES_Spec_HK_GL";
				count=10;
			};
			class _xx_srifle_DMR_02_camo_AMS_LP_F
			{
				weapon="srifle_DMR_02_camo_AMS_LP_F";
				count=10;
			};
			class _xx_CFP_Negev_Black
			{
				weapon="CFP_Negev_Black";
				count=10;
			};
			class _xx_ACM_VES_Spec_M4a1_sop_Spect
			{
				weapon="ACM_VES_Spec_M4a1_sop_Spect";
				count=10;
			};
			class _xx_ACM_VES_Spec_M4a1_sop_med
			{
				weapon="ACM_VES_Spec_M4a1_sop_med";
				count=10;
			};
			class _xx_CUP_launch_RPG7V_PGO7V3
			{
				weapon="CUP_launch_RPG7V_PGO7V3";
				count=10;
			};
			class _xx_CUP_launch_RShG2_Loaded
			{
				weapon="CUP_launch_RShG2_Loaded";
				count=10;
			};
			class _xx_launch_O_Vorona_brown_F
			{
				weapon="launch_O_Vorona_brown_F";
				count=10;
			};
			class _xx_CUP_launch_FIM92Stinger_Loaded
			{
				weapon="CUP_launch_FIM92Stinger_Loaded";
				count=10;
			};
			class _xx_CUP_launch_RPG26_Loaded
			{
				weapon="CUP_launch_RPG26_Loaded";
				count=10;
			};
			class _xx_CUP_launch_Mk153Mod0
			{
				weapon="CUP_launch_Mk153Mod0";
				count=10;
			};
			class _xx_launch_B_Titan_short_F
			{
				weapon="launch_B_Titan_short_F";
				count=10;
			};
		};
		class TransportItems
		{
			class _xx_optic_DMS
			{
				name="optic_DMS";
				count=10;
			};
			class _xx_CUP_muzzle_snds_M16_desert
			{
				name="CUP_muzzle_snds_M16_desert";
				count=10;
			};
			class _xx_CUP_acc_ANPEQ_15_Flashlight_Tan_L
			{
				name="CUP_acc_ANPEQ_15_Flashlight_Tan_L";
				count=10;
			};
			class _xx_CUP_optic_HensoldtZO_low_RDS_desert
			{
				name="CUP_optic_HensoldtZO_low_RDS_desert";
				count=10;
			};
			class _xx_CUP_optic_Elcan_SpecterDR_coyote
			{
				name="CUP_optic_Elcan_SpecterDR_coyote";
				count=10;
			};
			class _xx_acc_pointer_IR
			{
				name="acc_pointer_IR";
				count=10;
			};
			class _xx_optic_AMS
			{
				name="optic_AMS";
				count=10;
			};
			class _xx_bipod_01_F_blk
			{
				name="bipod_01_F_blk";
				count=10;
			};
			class _xx_CUP_V_B_Eagle_SPC_Rifleman
			{
				name="CUP_V_B_Eagle_SPC_Rifleman";
				count=10;
			};
			class _xx_ACM_H_Vesp_CSC_6B47_v2_GogglesDown
			{
				name="ACM_H_Vesp_CSC_6B47_v2_GogglesDown";
				count=10;
			};
			class _xx_CUP_NVG_PVS15_black
			{
				name="CUP_NVG_PVS15_black";
				count=10;
			};
			class _xx_ItemMap
			{
				name="ItemMap";
				count=10;
			};
			class _xx_ItemCompass
			{
				name="ItemCompass";
				count=10;
			};
			class _xx_ItemWatch
			{
				name="ItemWatch";
				count=10;
			};
			class _xx_ItemRadio
			{
				name="ItemRadio";
				count=10;
			};
			class _xx_ItemGPS
			{
				name="ItemGPS";
				count=10;
			};
			class _xx_ACM_H_Vesp_CSC_6B47_v2_GogglesUp
			{
				name="ACM_H_Vesp_CSC_6B47_v2_GogglesUp";
				count=10;
			};
			class _xx_ACM_H_Vesp_CSC_6B47_v2_GogglesClosed
			{
				name="ACM_H_Vesp_CSC_6B47_v2_GogglesClosed";
				count=10;
			};
			class _xx_CUP_V_B_Eagle_SPC_GL
			{
				name="CUP_V_B_Eagle_SPC_GL";
				count=10;
			};
			class _xx_ACM_H_Vesp_CSC_6B47_v2
			{
				name="ACM_H_Vesp_CSC_6B47_v2";
				count=10;
			};
			class _xx_CUP_V_B_Eagle_SPC_AT
			{
				name="CUP_V_B_Eagle_SPC_AT";
				count=10;
			};
			class _xx_ACM_Backpack_VES_AT
			{
				name="ACM_Backpack_VES_AT";
				count=10;
			};
			class _xx_CUP_V_B_Eagle_SPC_AR
			{
				name="CUP_V_B_Eagle_SPC_AR";
				count=10;
			};
			class _xx_Rangefinder
			{
				name="Rangefinder";
				count=10;
			};
			class _xx_CUP_V_B_Eagle_SPC_DMR
			{
				name="CUP_V_B_Eagle_SPC_DMR";
				count=10;
			};
			class _xx_ACM_H_Vesp_CSC_Boonie
			{
				name="ACM_H_Vesp_CSC_Boonie";
				count=10;
			};
			class _xx_CUP_NVG_PVS15_Hide
			{
				name="CUP_NVG_PVS15_Hide";
				count=10;
			};
			class _xx_ACM_Backpack_VES_Medic
			{
				name="ACM_Backpack_VES_Medic";
				count=10;
			};
			class _xx_CFP_Alice_Vest2
			{
				name="CFP_Alice_Vest2";
				count=10;
			};
			class _xx_ACM_H_Vesp_CSC_Cap
			{
				name="ACM_H_Vesp_CSC_Cap";
				count=10;
			};
			class _xx_CUP_V_B_Eagle_SPC_Corpsman
			{
				name="CUP_V_B_Eagle_SPC_Corpsman";
				count=10;
			};
			class _xx_CUP_V_B_Eagle_SPC_MG
			{
				name="CUP_V_B_Eagle_SPC_MG";
				count=10;
			};
			class _xx_ACM_Backpack_VES_AT_Heavy
			{
				name="ACM_Backpack_VES_AT_Heavy";
				count=10;
			};
			class _xx_CUP_V_B_Eagle_SPC_Crew
			{
				name="CUP_V_B_Eagle_SPC_Crew";
				count=10;
			};
			class _xx_H_HelmetCrew_B
			{
				name="H_HelmetCrew_B";
				count=10;
			};
			class _xx_CUP_V_B_Eagle_SPC_Officer
			{
				name="CUP_V_B_Eagle_SPC_Officer";
				count=10;
			};
			class _xx_G_Aviator
			{
				name="G_Aviator";
				count=10;
			};
			class _xx_CUP_V_O_TK_OfficerBelt2
			{
				name="CUP_V_O_TK_OfficerBelt2";
				count=10;
			};
			class _xx_CFP_Ranger_Beret_Cmdr
			{
				name="CFP_Ranger_Beret_Cmdr";
				count=10;
			};
			class _xx_CUP_V_B_Eagle_SPC_Empty
			{
				name="CUP_V_B_Eagle_SPC_Empty";
				count=10;
			};
			class _xx_H_PilotHelmetHeli_O
			{
				name="H_PilotHelmetHeli_O";
				count=10;
			};
			class _xx_CUP_V_B_RRV_DA1_CB
			{
				name="CUP_V_B_RRV_DA1_CB";
				count=10;
			};
			class _xx_ACM_H_Spec_OpsCore5_2
			{
				name="ACM_H_Spec_OpsCore5_2";
				count=10;
			};
			class _xx_CUP_G_Tan_Scarf_Shades
			{
				name="CUP_G_Tan_Scarf_Shades";
				count=10;
			};
			class _xx_CFP_ANPVS15_Camo_V2
			{
				name="CFP_ANPVS15_Camo_V2";
				count=10;
			};
			class _xx_CUP_V_MBSS_PACA2_CB
			{
				name="CUP_V_MBSS_PACA2_CB";
				count=10;
			};
			class _xx_ACM_H_Spec_OpsCore1_2
			{
				name="ACM_H_Spec_OpsCore1_2";
				count=10;
			};
			class _xx_CUP_V_B_RRV_DA2_CB
			{
				name="CUP_V_B_RRV_DA2_CB";
				count=10;
			};
			class _xx_ACM_H_Spec_OpsCore2_2
			{
				name="ACM_H_Spec_OpsCore2_2";
				count=10;
			};
			class _xx_CUP_V_MBSS_PACA_CB
			{
				name="CUP_V_MBSS_PACA_CB";
				count=10;
			};
			class _xx_ACM_H_Spec_OpsCore4_2
			{
				name="ACM_H_Spec_OpsCore4_2";
				count=10;
			};
			class _xx_CUP_G_Tan_Scarf_Shades_Beard
			{
				name="CUP_G_Tan_Scarf_Shades_Beard";
				count=10;
			};
			class _xx_ACM_Backpack_VES_AT_Spec
			{
				name="ACM_Backpack_VES_AT_Spec";
				count=10;
			};
			class _xx_CUP_G_ESS_KHK_Scarf_Tan
			{
				name="CUP_G_ESS_KHK_Scarf_Tan";
				count=10;
			};
			class _xx_ACM_Backpack_VES_AT_Missile
			{
				name="ACM_Backpack_VES_AT_Missile";
				count=10;
			};
			class _xx_ACM_H_Spec_OpsCore3_2
			{
				name="ACM_H_Spec_OpsCore3_2";
				count=10;
			};
			class _xx_ACM_backpack_Ves_EXPL
			{
				name="ACM_backpack_Ves_EXPL";
				count=10;
			};
			class _xx_V_Chestrig_khk
			{
				name="V_Chestrig_khk";
				count=10;
			};
			class _xx_CFP_UA_Thermals_Grn_GPS
			{
				name="CFP_UA_Thermals_Grn_GPS";
				count=10;
			};
			class _xx_B_RadioBag_01_black_F
			{
				name="B_RadioBag_01_black_F";
				count=10;
			};
			class _xx_CFP_CarrierRig_Operator_OGA
			{
				name="CFP_CarrierRig_Operator_OGA";
				count=10;
			};
			class _xx_ACM_Vesp_Clothes1_2
			{
				name="ACM_Vesp_Clothes1_2";
				count=10;
			};
			class _xx_ACM_Vesp_Clothes4_2
			{
				name="ACM_Vesp_Clothes4_2";
				count=10;
			};
			class _xx_ACM_Vesp_Clothes2_2
			{
				name="ACM_Vesp_Clothes2_2";
				count=10;
			};
			class _xx_ACM_Vesp_Clothes3_2
			{
				name="ACM_Vesp_Clothes3_2";
				count=10;
			};
			class _xx_ACM_Vesp_Clothes5_2
			{
				name="ACM_Vesp_Clothes5_2";
				count=10;
			};
			class _xx_ACM_Vesp_Clothes6_2
			{
				name="ACM_Vesp_Clothes6_2";
				count=10;
			};
			class _xx_CUP_optic_PGO7V3
			{
				name="CUP_optic_PGO7V3";
				count=5;
			};
		};
	};
	class B_Heli_Light_01_F;
	class ACM_Heli_Light_W: B_Heli_Light_01_F
	{
		author="Anthrax";
		side=2;
		faction="ACM_I_Ves";
		crew="ACM_Ves_Soldier_HeliPilot";
		typicalCargo[]=
		{
			"ACM_Ves_Soldier_HeliPilot"
		};
	};
	class B_Heli_Light_01_dynamicLoadout_F;
	class ACM_Heli_Light_W_Armed: B_Heli_Light_01_dynamicLoadout_F
	{
		author="Anthrax";
		side=2;
		faction="ACM_I_Ves";
		crew="ACM_Ves_Soldier_HeliPilot";
		typicalCargo[]=
		{
			"ACM_Ves_Soldier_HeliPilot"
		};
	};
	class B_Radar_System_01_F;
	class ACM_Radar_Ves: B_Radar_System_01_F
	{
		side=2;
		faction="ACM_I_Ves";
		crew="I_UAV_AI";
		typicalCargo[]=
		{
			"I_UAV_AI"
		};
	};
	class B_SAM_System_03_F;
	class ACM_SAM_Ves: B_SAM_System_03_F
	{
		side=2;
		faction="ACM_I_Ves";
		crew="I_UAV_AI";
		typicalCargo[]=
		{
			"I_UAV_AI"
		};
	};
	class CUP_B_USMC_DYN_MQ9;
	class ACM_Drone_MQ9: CUP_B_USMC_DYN_MQ9
	{
		side=2;
		faction="ACM_I_Ves";
		crew="I_UAV_AI";
		typicalCargo[]=
		{
			"I_UAV_AI"
		};
	};
	class CUP_B_L16A2_BAF_MPT;
	class ACM_Ves_Mortar: CUP_B_L16A2_BAF_MPT
	{
		author="Anthrax";
		side=2;
		faction="ACM_I_Ves";
		crew="ACM_Ves_Soldier_lite";
		typicalCargo[]=
		{
			"ACM_Ves_Soldier_lite"
		};
	};
	class ACM_Ves_Mortar_Des: CUP_B_L16A2_BAF_MPT
	{
		author="Anthrax";
		side=2;
		faction="ACM_I_Ves2";
		crew="ACM_Ves_Soldier_lite_Des";
		typicalCargo[]=
		{
			"ACM_Ves_Soldier_lite_Des"
		};
	};
	class B_G_HMG_02_high_F;
	class ACM_Ves_HMGUP: B_G_HMG_02_high_F
	{
		author="Anthrax";
		side=2;
		faction="ACM_I_Ves";
		crew="ACM_Ves_Soldier_lite";
		typicalCargo[]=
		{
			"ACM_Ves_Soldier_lite"
		};
	};
	class ACM_Ves_HMGUP_Des: B_G_HMG_02_high_F
	{
		author="Anthrax";
		side=2;
		faction="ACM_I_Ves2";
		crew="ACM_Ves_Soldier_lite_Des";
		typicalCargo[]=
		{
			"ACM_Ves_Soldier_lite_Des"
		};
	};
	class B_G_HMG_02_F;
	class ACM_Ves_HMG: B_G_HMG_02_F
	{
		author="Anthrax";
		side=2;
		faction="ACM_I_Ves";
		crew="ACM_Ves_Soldier_lite";
		typicalCargo[]=
		{
			"ACM_Ves_Soldier_lite"
		};
	};
	class ACM_Ves_HMG_Des: B_G_HMG_02_F
	{
		author="Anthrax";
		side=2;
		faction="ACM_I_Ves2";
		crew="ACM_Ves_Soldier_lite_Des";
		typicalCargo[]=
		{
			"ACM_Ves_Soldier_lite_Des"
		};
	};
	class CUP_B_M119_HIL;
	class ACM_Ves_Arty_Turret: CUP_B_M119_HIL
	{
		author="Anthrax";
		side=2;
		faction="ACM_I_Ves";
		crew="ACM_Ves_Soldier_lite";
		typicalCargo[]=
		{
			"ACM_Ves_Soldier_lite"
		};
	};
	class ACM_Ves_Arty_Turret_Des: CUP_B_M119_HIL
	{
		author="Anthrax";
		side=2;
		faction="ACM_I_Ves2";
		crew="ACM_Ves_Soldier_lite_Des";
		typicalCargo[]=
		{
			"ACM_Ves_Soldier_lite_Des"
		};
	};
	class CUP_B_Stinger_AA_pod_Base_USMC;
	class ACM_Ves_Static_AA: CUP_B_Stinger_AA_pod_Base_USMC
	{
		author="Anthrax";
		side=2;
		faction="ACM_I_Ves";
		crew="ACM_Ves_Soldier_lite";
		typicalCargo[]=
		{
			"ACM_Ves_Soldier_lite"
		};
	};
	class ACM_Ves_Static_AA_Des: CUP_B_Stinger_AA_pod_Base_USMC
	{
		author="Anthrax";
		side=2;
		faction="ACM_I_Ves2";
		crew="ACM_Ves_Soldier_lite_Des";
		typicalCargo[]=
		{
			"ACM_Ves_Soldier_lite_Des"
		};
	};
	class CUP_O_Kornet_RU;
	class ACM_Ves_Static_Kornet: CUP_O_Kornet_RU
	{
		author="Anthrax";
		side=2;
		faction="ACM_I_Ves";
		crew="ACM_Ves_Soldier_lite";
		typicalCargo[]=
		{
			"ACM_Ves_Soldier_lite"
		};
	};
	class ACM_Ves_Static_Kornet_Des: CUP_O_Kornet_RU
	{
		author="Anthrax";
		side=2;
		faction="ACM_I_Ves2";
		crew="ACM_Ves_Soldier_lite_Des";
		typicalCargo[]=
		{
			"ACM_Ves_Soldier_lite_Des"
		};
	};
	class CUP_O_Metis_RU;
	class ACM_Ves_Static_Metis: CUP_O_Metis_RU
	{
		author="Anthrax";
		side=2;
		faction="ACM_I_Ves";
		crew="ACM_Ves_Soldier_lite";
		typicalCargo[]=
		{
			"ACM_Ves_Soldier_lite"
		};
	};
	class ACM_Ves_Static_Metis_Des: CUP_O_Metis_RU
	{
		author="Anthrax";
		side=2;
		faction="ACM_I_Ves2";
		crew="ACM_Ves_Soldier_lite_Des";
		typicalCargo[]=
		{
			"ACM_Ves_Soldier_lite_Des"
		};
	};
	class CFP_B_USMC_RHIB_DES_01;
	class ACM_Ves_Rhib_Des: CFP_B_USMC_RHIB_DES_01
	{
		author="Anthrax";
		side=2;
		faction="ACM_I_Ves2";
		crew="ACM_Ves_Soldier_Des";
		typicalCargo[]=
		{
			"ACM_Ves_Soldier_Des"
		};
	};
	class CUP_B_Frigate_ANZAC;
	class ACM_Ves_Frigate_Des: CUP_B_Frigate_ANZAC
	{
		author="Anthrax";
		side=2;
		faction="ACM_I_Ves2";
		crew="ACM_Ves_Soldier_Survivor_Des";
		typicalCargo[]=
		{
			"ACM_Ves_Soldier_Survivor_Des"
		};
		displayName="Woods-Class Frigate";
	};
	class CUP_B_LCU1600_HIL;
	class ACM_Ves_LCU_Des: CUP_B_LCU1600_HIL
	{
		author="Anthrax";
		side=2;
		faction="ACM_I_Ves2";
		crew="ACM_Ves_Soldier_Des";
		typicalCargo[]=
		{
			"ACM_Ves_Soldier_Des"
		};
	};
	class FlagCarrier;
	class Banner_01_base_F;
	class Flag_ACM_Ves: FlagCarrier
	{
		author="Anthrax";
		class SimpleObject
		{
			eden=0;
			animate[]=
			{
				
				{
					"flag",
					0
				}
			};
			hide[]={};
			verticalOffset=3.977;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Flag_AAF_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="Flag (Vespaccia)";
		hiddenSelectionsTextures[]=
		{
			"\A3\Structures_F\Mil\Flags\Data\Mast_mil_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Structures_F\Mil\Flags\Data\Mast_mil.rvmat"
		};
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture '\ACM_Vespaccia\flag_vespaccia_co.paa'";
		};
	};
	class Banner_01_Ves_F: Banner_01_base_F
	{
		author="Anthrax";
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.46900001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Banner_01_NATO_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="Banner (Vespaccia)";
		hiddenSelectionsTextures[]=
		{
			"\ACM_Vespaccia\flag_vespaccia_co.paa"
		};
	};
};
class CfgWeapons
{
	class CUP_arifle_G3A3_ris_vfg_black;
	class ACM_VES_MR_Marksman_G3: CUP_arifle_G3A3_ris_vfg_black
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="CUP_optic_SB_3_12x50_PMII_PIP";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="CUP_bipod_G3";
			};
		};
	};
	class CUP_arifle_G3A3_ris;
	class ACM_VES_MR_Marksman_G3_Reserve: CUP_arifle_G3A3_ris
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="CUP_optic_SB_11_4x20_PM";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="CUP_bipod_G3";
			};
		};
	};
	class CUP_srifle_M14_DMR;
	class ACM_VES_MR_Marksman_M14: CUP_srifle_M14_DMR
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_DMS";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="CUP_bipod_Harris_1A2_L_BLK";
			};
		};
	};
	class CUP_arifle_G36KA3_grip_wdl;
	class ACM_VES_Spec_Rifleman: CUP_arifle_G36KA3_grip_wdl
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="CUP_optic_HensoldtZO_low_RDS_od";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="CUP_acc_ANPEQ_15_Top_Flashlight_OD_L";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="CUP_muzzle_snds_M16_camo";
			};
		};
	};
	class ACM_VES_Spec_TL: ACM_VES_Spec_Rifleman
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="CUP_optic_AIMM_COMPM4_BLK";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="CUP_muzzle_snds_M16_camo";
			};
		};
	};
	class CUP_arifle_G36A3_AG36_wdl;
	class ACM_VES_Spec_GL: CUP_arifle_G36A3_AG36_wdl
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="CUP_optic_HensoldtZO_low_RDS_od";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="CUP_acc_ANPEQ_15_OD";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="CUP_muzzle_snds_M16_camo";
			};
		};
	};
	class CUP_arifle_G36CA3_grip_wdl;
	class ACM_VES_Spec_Carbine: CUP_arifle_G36CA3_grip_wdl
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO_grn_smg";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="CUP_acc_ANPEQ_15_Flashlight_OD_L";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="CUP_muzzle_snds_M16_camo";
			};
		};
	};
	class CUP_arifle_MG36_wdl;
	class ACM_VES_Spec_Auto: CUP_arifle_MG36_wdl
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="CUP_optic_G33_HWS_OD";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="CUP_acc_ANPEQ_15_OD";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="CUP_muzzle_snds_G36_wood";
			};
		};
	};
	class CUP_arifle_HK416_Desert;
	class ACM_VES_Spec_HK_Rifleman: CUP_arifle_HK416_Desert
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="CUP_optic_HensoldtZO_low_RDS_desert";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="CUP_acc_ANPEQ_15_Flashlight_Tan_L";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="CUP_muzzle_snds_M16_desert";
			};
		};
	};
	class CUP_arifle_HK416_CQB_Desert;
	class ACM_VES_Spec_HK_CQC: CUP_arifle_HK416_Desert
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="CUP_optic_HensoldtZO_low_RDS_desert";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="CUP_acc_ANPEQ_15_Flashlight_Tan_L";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="CUP_muzzle_snds_M16_desert";
			};
		};
	};
	class CUP_arifle_HK416_AGL_Desert;
	class ACM_VES_Spec_HK_GL: CUP_arifle_HK416_AGL_Desert
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="CUP_optic_Elcan_SpecterDR_coyote";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="CUP_acc_ANPEQ_15_Flashlight_Tan_L";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="CUP_muzzle_snds_M16_desert";
			};
		};
	};
	class CUP_arifle_M4A1_SOMMOD_Grip_tan;
	class ACM_VES_Spec_M4a1_sop_Spect: CUP_arifle_M4A1_SOMMOD_Grip_tan
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="CUP_optic_Elcan_SpecterDR_coyote";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="CUP_acc_ANPEQ_15_Flashlight_Tan_L";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="CUP_muzzle_snds_M16_desert";
			};
		};
	};
	class ACM_VES_Spec_M4a1_sop_med: CUP_arifle_M4A1_SOMMOD_Grip_tan
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO_grn_smg";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="CUP_acc_ANPEQ_15_Flashlight_Tan_L";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="CUP_muzzle_snds_M16_desert";
			};
		};
	};
};
class CfgGroups
{
	class Indep
	{
		class ACM_I_Ves
		{
			name="[CiA] Vespaccian Federal Army";
			class Infantry
			{
				name="Infantry";
				class i_acmives_infantry_fireteam
				{
					name="Fireteam";
					side=2;
					faction="ACM_I_Ves";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					rarityGroup=0.5;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=2;
						vehicle="ACM_Ves_Soldier_SL";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_ATLite";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_AR";
					};
					class Unit4
					{
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_CLE";
					};
				};
				class i_acmives_infantry_reserve_fireteam
				{
					name="Reserve Fireteam";
					side=2;
					faction="ACM_I_Ves";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					rarityGroup=0.5;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=2;
						vehicle="ACM_Ves_Res_Soldier_TL";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Res_Soldier";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Res_Soldier_LightAT";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Res_Soldier_AR";
					};
					class Unit4
					{
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Res_Soldier_CLE";
					};
				};
				class i_acmives_infantry_assault_squad
				{
					name="Assault Squad";
					side=2;
					faction="ACM_I_Ves";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					rarityGroup=0.5;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=2;
						vehicle="ACM_Ves_Soldier_SL";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_GL";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_AR";
					};
					class Unit4
					{
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_MR";
					};
					class Unit5
					{
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_CLE";
					};
					class Unit6
					{
						position[]={20,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier";
					};
					class Unit7
					{
						position[]={-15,-25,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_AT";
					};
				};
				class i_acmives_infantry_reserve_assault_squad
				{
					name="Reserve Assault Squad";
					side=2;
					faction="ACM_I_Ves";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					rarityGroup=0.5;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=2;
						vehicle="ACM_Ves_Res_Soldier_TL";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Res_Soldier";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Res_Soldier_GL";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Res_Soldier_LightAT";
					};
					class Unit4
					{
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Res_Soldier_AR";
					};
					class Unit5
					{
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Res_Soldier_MR";
					};
					class Unit6
					{
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Res_Soldier_CLE";
					};
					class Unit7
					{
						position[]={20,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Res_Soldier";
					};
				};
				class i_acmives_infantry_sentry
				{
					name="Sentry";
					side=2;
					faction="ACM_I_Ves";
					icon="\A3\ui_f\data\map\markers\nato\n_recon.paa";
					rarityGroup=0.5;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=2;
						vehicle="ACM_Ves_Soldier_MR";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier";
					};
				};
				class i_acmives_infantry_reserve_sentry
				{
					name="Reserve Sentry";
					side=2;
					faction="ACM_I_Ves";
					icon="\A3\ui_f\data\map\markers\nato\n_recon.paa";
					rarityGroup=0.5;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=2;
						vehicle="ACM_Ves_Res_Soldier_MR";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Res_Soldier";
					};
				};
				class i_acmives_infantry_anti_tank_team
				{
					name="Anti-Tank Team";
					side=2;
					faction="ACM_I_Ves";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					rarityGroup=0.5;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=2;
						vehicle="ACM_Ves_Soldier_SL";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_AT";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_AT";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_ATLite";
					};
					class Unit4
					{
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_ATLite";
					};
				};
				class i_acmives_infantry_heavy_anti_tank_team
				{
					name="Heavy Anti-Tank Team";
					side=2;
					faction="ACM_I_Ves";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					rarityGroup=0.5;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=2;
						vehicle="ACM_Ves_Soldier_SL";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_ATHeavy";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_ATHeavy";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_ATLite";
					};
					class Unit4
					{
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_ATLite";
					};
				};
				class i_acmives_infantry_anti_air_team
				{
					name="Anti-Air Team";
					side=2;
					faction="ACM_I_Ves";
					icon="\A3\ui_f\data\map\markers\nato\n_antiair.paa";
					rarityGroup=0.5;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=2;
						vehicle="ACM_Ves_Soldier_SL";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_AA";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_AA";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_AA";
					};
					class Unit4
					{
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_AA";
					};
				};
				class i_acmives_infantry_hq_combat
				{
					name="HQ (Combat)";
					side=2;
					faction="ACM_I_Ves";
					icon="\A3\ui_f\data\map\markers\nato\n_unknown.paa";
					rarityGroup=0.5;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=2;
						vehicle="ACM_Ves_Soldier_Officer";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_Officer";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier";
					};
				};
				class i_acmives_infantry_hq_non_combat
				{
					name="HQ (Non-Combat)";
					side=2;
					faction="ACM_I_Ves";
					icon="\A3\ui_f\data\map\markers\nato\n_unknown.paa";
					rarityGroup=0.5;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=2;
						vehicle="ACM_Ves_Soldier_Officer_NC";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_Officer_NC";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_lite";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_lite";
					};
				};
			};
			class SpecOps
			{
				name="Special Forces";
				class i_acmives_specops_assault_squad
				{
					name="Assault Squad";
					side=2;
					faction="ACM_I_Ves";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					rarityGroup=0.5;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=2;
						vehicle="ACM_Ves_Spec_Soldier_TL";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Spec_Soldier";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Spec_Soldier_GL";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Spec_Soldier_LiteAT";
					};
					class Unit4
					{
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Spec_Soldier_Marksman";
					};
					class Unit5
					{
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Spec_Soldier_Autorifleman";
					};
					class Unit6
					{
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Spec_Soldier_Medic";
					};
					class Unit7
					{
						position[]={20,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Spec_Soldier_AT";
					};
				};
				class i_acmives_specops_anti_armour_squad
				{
					name="Anti-Armour Squad";
					side=2;
					faction="ACM_I_Ves";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					rarityGroup=0.5;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=2;
						vehicle="ACM_Ves_Spec_Soldier_TL";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Spec_Soldier_LiteAT";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Spec_Soldier_AT";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Spec_Soldier_AT";
					};
					class Unit4
					{
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Spec_Soldier_MisSpec";
					};
				};
				class i_acmives_specops_jtac_team
				{
					name="JTAC-Team";
					side=2;
					faction="ACM_I_Ves";
					icon="\A3\ui_f\data\map\markers\nato\n_recon.paa";
					rarityGroup=0.5;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=2;
						vehicle="ACM_Ves_Spec_Soldier_JTAC";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Spec_Soldier_Medic";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Spec_Soldier_Marksman";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Spec_Soldier";
					};
				};
				class i_acmives_specops_fireteam
				{
					name="Fireteam";
					side=2;
					faction="ACM_I_Ves";
					icon="\A3\ui_f\data\map\markers\nato\n_recon.paa";
					rarityGroup=0.5;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=2;
						vehicle="ACM_Ves_Spec_Soldier_TL";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Spec_Soldier";
					};
					class Unit2
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Spec_Soldier_LiteAT";
					};
					class Unit3
					{
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Spec_Soldier_GL";
					};
				};
				class i_acmives_specops_sabotage_group
				{
					name="Sabotage-Group";
					side=2;
					faction="ACM_I_Ves";
					icon="\A3\ui_f\data\map\markers\nato\n_recon.paa";
					rarityGroup=0.5;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=2;
						vehicle="ACM_Ves_Spec_Soldier_TL";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Spec_Soldier_GL";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Spec_Soldier";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Spec_Soldier_Explspec";
					};
					class Unit4
					{
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Spec_Soldier_Autorifleman";
					};
					class Unit5
					{
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Spec_Soldier_Medic";
					};
				};
			};
			class Motorized
			{
				name="Motorized Infantry";
				class i_acmives_motorized_motorized_infantry_lav
				{
					name="Motorized Infantry (LAV)";
					side=2;
					faction="ACM_I_Ves";
					icon="\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";
					rarityGroup=0.5;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=2;
						vehicle="ACM_VES_LAV1";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_SL";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_CLE";
					};
					class Unit4
					{
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_AR";
					};
					class Unit5
					{
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_AT";
					};
					class Unit6
					{
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_GL";
					};
					class Unit7
					{
						position[]={20,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_ATLite";
					};
				};
				class i_acmives_motorized_reinforcements_truck
				{
					name="Reinforcements (Truck)";
					side=2;
					faction="ACM_I_Ves";
					icon="\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";
					rarityGroup=0.5;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=2;
						vehicle="ACM_VES_MTVR";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_SL";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_GL";
					};
					class Unit4
					{
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_AR";
					};
					class Unit5
					{
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_CLE";
					};
					class Unit6
					{
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_ATLite";
					};
					class Unit7
					{
						position[]={20,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_AT";
					};
					class Unit8
					{
						position[]={-20,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_MR";
					};
					class Unit9
					{
						position[]={25,-25,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier";
					};
					class Unit10
					{
						position[]={-25,-25,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier";
					};
					class Unit11
					{
						position[]={30,-30,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier";
					};
					class Unit12
					{
						position[]={-30,-30,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier";
					};
				};
				class i_acmives_motorized_rg_31_patrol
				{
					name="RG-31 Patrol";
					side=2;
					faction="ACM_I_Ves";
					icon="\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";
					rarityGroup=0.5;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=2;
						vehicle="ACM_VES_RG31_Mk19_M2";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_SL";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier";
					};
					class Unit4
					{
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_CLE";
					};
					class Unit5
					{
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_ATLite";
					};
				};
			};
			class Motorized_MTP
			{
				name="Motorized Infantry (MTP)";
			};
			class Support
			{
				name="Support Infantry";
				class i_acmives_support_cls
				{
					name="CLS";
					side=2;
					faction="ACM_I_Ves";
					icon="\A3\ui_f\data\map\markers\nato\n_med.paa";
					rarityGroup=0.5;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=2;
						vehicle="ACM_Ves_Soldier_SL";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_CLE";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_CLE";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_CLE";
					};
					class Unit4
					{
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_AR";
					};
				};
			};
			class Mechanized
			{
				name="Mechanized Infantry";
				class i_acmives_mechanized_mechanized_infantry_m3a9
				{
					name="Mechanized Infantry (M3A9)";
					side=2;
					faction="ACM_I_Ves";
					icon="\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";
					rarityGroup=0.5;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=2;
						vehicle="ACM_VES_BTRK";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_SL";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_ATLite";
					};
					class Unit4
					{
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_CLE";
					};
					class Unit5
					{
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_AR";
					};
					class Unit6
					{
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_GL";
					};
					class Unit7
					{
						position[]={20,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_AT";
					};
				};
				class i_acmives_mechanized_mechanized_infantry_m3a9u
				{
					name="Mechanized Infantry (M3A9U)";
					side=2;
					faction="ACM_I_Ves";
					icon="\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";
					rarityGroup=0.5;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=2;
						vehicle="ACM_VES_BTRKU";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_SL";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_CLE";
					};
					class Unit4
					{
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_AR";
					};
					class Unit5
					{
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_GL";
					};
					class Unit6
					{
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_ATLite";
					};
					class Unit7
					{
						position[]={20,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_AT";
					};
				};
			};
			class Armored
			{
				name="Armor";
				class i_acmives_armored_m9_section
				{
					name="M-9 Section";
					side=2;
					faction="ACM_I_Ves";
					icon="\A3\ui_f\data\map\markers\nato\n_armor.paa";
					rarityGroup=0.5;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=2;
						vehicle="ACM_VES_T90";
					};
					class Unit1
					{
						position[]={8,-16,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_VES_T90";
					};
				};
				class i_acmives_armored_m9_platoon
				{
					name="M-9 Platoon";
					side=2;
					faction="ACM_I_Ves";
					icon="\A3\ui_f\data\map\markers\nato\n_armor.paa";
					rarityGroup=0.5;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=2;
						vehicle="ACM_VES_T90";
					};
					class Unit1
					{
						position[]={8,-16,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_VES_T90";
					};
					class Unit2
					{
						position[]={-8,-16,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_VES_T90";
					};
					class Unit3
					{
						position[]={16,-24,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_VES_T90";
					};
				};
				class i_acmives_armored_aquilla_air_defence_platoon
				{
					name="Aquilla Air Defence Platoon";
					side=2;
					faction="ACM_I_Ves";
					icon="\A3\ui_f\data\map\markers\nato\n_armor.paa";
					rarityGroup=0.5;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=2;
						vehicle="ACM_VES_BTRK_AA";
					};
					class Unit1
					{
						position[]={8,-16,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_VES_BTRK_AA";
					};
					class Unit2
					{
						position[]={-8,-16,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_VES_BTRK_AA";
					};
					class Unit3
					{
						position[]={16,-24,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_VES_BTRK_AA";
					};
				};
				class i_acmives_armored_aquilla_air_defence_section
				{
					name="Aquilla Air Defence Section";
					side=2;
					faction="ACM_I_Ves";
					icon="\A3\ui_f\data\map\markers\nato\n_armor.paa";
					rarityGroup=0.5;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=2;
						vehicle="ACM_VES_BTRK_AA";
					};
					class Unit1
					{
						position[]={8,-16,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_VES_BTRK_AA";
					};
				};
			};
			class Artillery
			{
				name="Artillery";
			};
			class Naval
			{
				name="Naval";
			};
			class Air
			{
				name="Air";
			};
		};
		class ACM_I_Ves2
		{
			name="[CiA] Vespaccian Federal Marine Corps";
			class Infantry
			{
				name="Infantry";
				class i_acmives_infantry_fireteam_des
				{
					name="Fireteam";
					side=2;
					faction="ACM_I_Ves2";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					rarityGroup=0.5;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=2;
						vehicle="ACM_Ves_Soldier_SL_Des";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_Des";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_ATLite_Des";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_AR_Des";
					};
					class Unit4
					{
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_CLE_Des";
					};
				};
				class i_acmives_infantry_assault_squad_des
				{
					name="Assault Squad";
					side=2;
					faction="ACM_I_Ves2";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					rarityGroup=0.5;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=2;
						vehicle="ACM_Ves_Soldier_SL_Des";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_Des";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_GL_Des";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_AR_Des";
					};
					class Unit4
					{
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_MR_Des";
					};
					class Unit5
					{
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_CLE_Des";
					};
					class Unit6
					{
						position[]={20,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_Des";
					};
					class Unit7
					{
						position[]={-15,-25,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_AT_Des";
					};
				};
				class i_acmives_infantry_sentry_des
				{
					name="Sentry";
					side=2;
					faction="ACM_I_Ves2";
					icon="\A3\ui_f\data\map\markers\nato\n_recon.paa";
					rarityGroup=0.5;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=2;
						vehicle="ACM_Ves_Soldier_MR_Des";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_Des";
					};
				};
				class i_acmives_infantry_anti_tank_team_Des
				{
					name="Anti-Tank Team";
					side=2;
					faction="ACM_I_Ves2";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					rarityGroup=0.5;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=2;
						vehicle="ACM_Ves_Soldier_SL_Des";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_AT_Des";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_AT_Des";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_ATLite_Des";
					};
					class Unit4
					{
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_ATLite_Des";
					};
				};
				class i_acmives_infantry_heavy_anti_tank_team_Des
				{
					name="Heavy Anti-Tank Team";
					side=2;
					faction="ACM_I_Ves2";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					rarityGroup=0.5;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=2;
						vehicle="ACM_Ves_Soldier_SL_Des";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_ATHeavy_Des";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_ATHeavy_Des";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_ATLite_Des";
					};
					class Unit4
					{
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_ATLite_Des";
					};
				};
				class i_acmives_infantry_anti_air_team_Des
				{
					name="Anti-Air Team";
					side=2;
					faction="ACM_I_Ves2";
					icon="\A3\ui_f\data\map\markers\nato\n_antiair.paa";
					rarityGroup=0.5;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=2;
						vehicle="ACM_Ves_Soldier_SL_Des";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_AA_Des";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_AA_Des";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_AA_Des";
					};
					class Unit4
					{
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_AA_Des";
					};
				};
				class i_acmives_infantry_hq_combat_Des
				{
					name="HQ (Combat)";
					side=2;
					faction="ACM_I_Ves2";
					icon="\A3\ui_f\data\map\markers\nato\n_unknown.paa";
					rarityGroup=0.5;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=2;
						vehicle="ACM_Ves_Soldier_Officer_Des";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_Officer_Des";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_Des";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_Des";
					};
				};
				class i_acmives_infantry_hq_non_combat_Des
				{
					name="HQ (Non-Combat)";
					side=2;
					faction="ACM_I_Ves2";
					icon="\A3\ui_f\data\map\markers\nato\n_unknown.paa";
					rarityGroup=0.5;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=2;
						vehicle="ACM_Ves_Soldier_Officer_NC_Des";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_Officer_NC_Des";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_lite_Des";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_lite_Des";
					};
				};
			};
			class SpecOps
			{
				name="Special Forces";
				class i_acmives_specops_assault_squad_Des
				{
					name="Assault Squad";
					side=2;
					faction="ACM_I_Ves2";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					rarityGroup=0.5;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=2;
						vehicle="ACM_Ves_Des_Spec_Soldier_TL";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Des_Spec_Soldier";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Des_Spec_Soldier_GL";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Des_Spec_Soldier_LiteAT";
					};
					class Unit4
					{
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Des_Spec_Soldier_Marksman";
					};
					class Unit5
					{
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Des_Spec_Soldier_Autorifleman";
					};
					class Unit6
					{
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Des_Spec_Soldier_Medic";
					};
					class Unit7
					{
						position[]={20,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Des_Spec_Soldier_AT";
					};
				};
				class i_acmives_specops_anti_armour_squad_Des
				{
					name="Anti-Armour Squad";
					side=2;
					faction="ACM_I_Ves2";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					rarityGroup=0.5;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=2;
						vehicle="ACM_Ves_Des_Spec_Soldier_TL";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Des_Spec_Soldier_LiteAT";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Des_Spec_Soldier_AT";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Des_Spec_Soldier_AT";
					};
					class Unit4
					{
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Des_Spec_Soldier_MisSpec";
					};
				};
				class i_acmives_specops_jtac_team_Des
				{
					name="JTAC-Team";
					side=2;
					faction="ACM_I_Ves2";
					icon="\A3\ui_f\data\map\markers\nato\n_recon.paa";
					rarityGroup=0.5;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=2;
						vehicle="ACM_Ves_Des_Spec_Soldier_JTAC";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Des_Spec_Soldier_Medic";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Des_Spec_Soldier_Marksman";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Des_Spec_Soldier";
					};
				};
				class i_acmives_specops_fireteam_Des
				{
					name="Fireteam";
					side=2;
					faction="ACM_I_Ves2";
					icon="\A3\ui_f\data\map\markers\nato\n_recon.paa";
					rarityGroup=0.5;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=2;
						vehicle="ACM_Ves_Des_Spec_Soldier_TL";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Des_Spec_Soldier";
					};
					class Unit2
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Des_Spec_Soldier_LiteAT";
					};
					class Unit3
					{
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Des_Spec_Soldier_GL";
					};
				};
				class i_acmives_specops_sabotage_group_Des
				{
					name="Sabotage-Group";
					side=2;
					faction="ACM_I_Ves2";
					icon="\A3\ui_f\data\map\markers\nato\n_recon.paa";
					rarityGroup=0.5;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=2;
						vehicle="ACM_Ves_Des_Spec_Soldier_TL";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Des_Spec_Soldier_GL";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Des_Spec_Soldier";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Des_Spec_Soldier_Explspec";
					};
					class Unit4
					{
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Des_Spec_Soldier_Autorifleman";
					};
					class Unit5
					{
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Des_Spec_Soldier_Medic";
					};
				};
			};
			class Motorized
			{
				name="Motorized Infantry";
				class i_acmives_motorized_motorized_infantry_lav_Des
				{
					name="Motorized Infantry (LAV)";
					side=2;
					faction="ACM_I_Ves2";
					icon="\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";
					rarityGroup=0.5;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=2;
						vehicle="ACM_VES_LAV1_Des";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_SL_Des";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_Des";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_CLE_Des";
					};
					class Unit4
					{
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_AR_Des";
					};
					class Unit5
					{
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_AT_Des";
					};
					class Unit6
					{
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_GL_Des";
					};
					class Unit7
					{
						position[]={20,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_ATLite_Des";
					};
				};
				class i_acmives_motorized_reinforcements_truck_Des
				{
					name="Reinforcements (Truck)";
					side=2;
					faction="ACM_I_Ves2";
					icon="\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";
					rarityGroup=0.5;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=2;
						vehicle="ACM_VES_MTVR_Des";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_SL_Des";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_Des";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_GL_Des";
					};
					class Unit4
					{
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_AR_Des";
					};
					class Unit5
					{
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_CLE_Des";
					};
					class Unit6
					{
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_ATLite_Des";
					};
					class Unit7
					{
						position[]={20,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_AT_Des";
					};
					class Unit8
					{
						position[]={-20,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_MR_Des";
					};
					class Unit9
					{
						position[]={25,-25,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_Des";
					};
					class Unit10
					{
						position[]={-25,-25,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_Des";
					};
					class Unit11
					{
						position[]={30,-30,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_Des";
					};
					class Unit12
					{
						position[]={-30,-30,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_Des";
					};
				};
				class i_acmives_motorized_rg_31_patrol_Des
				{
					name="RG-31 Patrol";
					side=2;
					faction="ACM_I_Ves2";
					icon="\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";
					rarityGroup=0.5;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=2;
						vehicle="ACM_VES_RG31_Mk19_M2_Des";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_SL_Des";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_Des";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_Des";
					};
					class Unit4
					{
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_CLE_Des";
					};
					class Unit5
					{
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_ATLite_Des";
					};
				};
			};
			class Support
			{
				name="Support Infantry";
				class i_acmives_support_cls_Des
				{
					name="CLS";
					side=2;
					faction="ACM_I_Ves2";
					icon="\A3\ui_f\data\map\markers\nato\n_med.paa";
					rarityGroup=0.5;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=2;
						vehicle="ACM_Ves_Soldier_SL_Des";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_CLE_Des";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_CLE_Des";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_CLE_Des";
					};
					class Unit4
					{
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_AR_Des";
					};
				};
			};
			class Mechanized
			{
				name="Mechanized Infantry";
				class i_acmives_mechanized_mechanized_infantry_m3a9_Des
				{
					name="Mechanized Infantry (M3A9)";
					side=2;
					faction="ACM_I_Ves2";
					icon="\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";
					rarityGroup=0.5;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=2;
						vehicle="ACM_VES_BTRK_Des";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_SL_Des";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_Des";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_ATLite_Des";
					};
					class Unit4
					{
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_CLE_Des";
					};
					class Unit5
					{
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_AR_Des";
					};
					class Unit6
					{
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_GL_Des";
					};
					class Unit7
					{
						position[]={20,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_AT_Des";
					};
				};
				class i_acmives_mechanized_mechanized_infantry_m3a9u
				{
					name="Mechanized Infantry (M3A9U)";
					side=2;
					faction="ACM_I_Ves2";
					icon="\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";
					rarityGroup=0.5;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=2;
						vehicle="ACM_VES_BTRKU_Des";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_SL_Des";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_Des";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_CLE_Des";
					};
					class Unit4
					{
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_AR_Des";
					};
					class Unit5
					{
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_GL_Des";
					};
					class Unit6
					{
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_ATLite_Des";
					};
					class Unit7
					{
						position[]={20,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_Ves_Soldier_AT_Des";
					};
				};
			};
			class Armored
			{
				name="Armor";
				class i_acmives_armored_m9_section_Des
				{
					name="M-9 Section";
					side=2;
					faction="ACM_I_Ves2";
					icon="\A3\ui_f\data\map\markers\nato\n_armor.paa";
					rarityGroup=0.5;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=2;
						vehicle="ACM_VES_T90_Des";
					};
					class Unit1
					{
						position[]={8,-16,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_VES_T90_Des";
					};
				};
				class i_acmives_armored_m9_platoon_Des
				{
					name="M-9 Platoon";
					side=2;
					faction="ACM_I_Ves2";
					icon="\A3\ui_f\data\map\markers\nato\n_armor.paa";
					rarityGroup=0.5;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=2;
						vehicle="ACM_VES_T90_Des";
					};
					class Unit1
					{
						position[]={8,-16,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_VES_T90_Des";
					};
					class Unit2
					{
						position[]={-8,-16,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_VES_T90_Des";
					};
					class Unit3
					{
						position[]={16,-24,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_VES_T90_Des";
					};
				};
				class i_acmives_armored_aquilla_air_defence_platoon_Des
				{
					name="Aquilla Air Defence Platoon";
					side=2;
					faction="ACM_I_Ves2";
					icon="\A3\ui_f\data\map\markers\nato\n_armor.paa";
					rarityGroup=0.5;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=2;
						vehicle="ACM_VES_BTRK_AA_Des";
					};
					class Unit1
					{
						position[]={8,-16,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_VES_BTRK_AA_Des";
					};
					class Unit2
					{
						position[]={-8,-16,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_VES_BTRK_AA_Des";
					};
					class Unit3
					{
						position[]={16,-24,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_VES_BTRK_AA_Des";
					};
				};
				class i_acmives_armored_aquilla_air_defence_section_Des
				{
					name="Aquilla Air Defence Section";
					side=2;
					faction="ACM_I_Ves2";
					icon="\A3\ui_f\data\map\markers\nato\n_armor.paa";
					rarityGroup=0.5;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=2;
						vehicle="ACM_VES_BTRK_AA_Des";
					};
					class Unit1
					{
						position[]={8,-16,0};
						rank="PRIVATE";
						side=2;
						vehicle="ACM_VES_BTRK_AA_Des";
					};
				};
			};
			class Artillery
			{
				name="Artillery";
			};
			class Naval
			{
				name="Naval";
			};
			class Air
			{
				name="Air";
			};
		};
	};
};
class cfgMods
{
	author="Anthrax";
	timepacked="1621453541";
};
