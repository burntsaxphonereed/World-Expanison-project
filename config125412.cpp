class CfgPatches
{
    class LS_ACF_ARL_VEHICLES
    {
        name="ACF | Aurelia | Vehicles";
		units[]=
        {
			"LS_ACF_ARL_B_Jeep_Unarmed_Open",
			"LS_ACF_ARL_B_Jeep_Unarmed",
			"LS_ACF_ARL_B_Jeep_LMG",
			"LS_ACF_ARL_B_Jeep_AT",
			"LS_ACF_ARL_B_Land_Rover_M2_Open",
			"LS_ACF_ARL_B_Land_Rover",
			"LS_ACF_ARL_B_Land_Rover_AT",
			"LS_ACF_ARL_B_Land_Rover_MED",
			"LS_ACF_ARL_B_Quadbike",
			"LS_ACF_ARL_B_TowingTractor",

			"LS_ACF_ARL_B_Tigr_Unarmed",
			"LS_ACF_ARL_B_Tigr_M_Unarmed",
			"LS_ACF_ARL_B_Tigr_M_KORD",
			"LS_ACF_ARL_B_Tigr_M_PK",

			"LS_ACF_ARL_B_T810_C",
			"LS_ACF_ARL_B_T810_Ammo",
			"LS_ACF_ARL_B_T810_Fuel",
			"LS_ACF_ARL_B_T810_repair",
			"LS_ACF_ARL_B_T810_Armed",
			"LS_ACF_ARL_B_RM70",

			"LS_ACF_ARL_B_Badger_01",
			"LS_ACF_ARL_B_Badger_01_U",
			"LS_ACF_ARL_B_Bulldog_RWS",
			"LS_ACF_ARL_B_Bulldog_MG",
			"LS_ACF_ARL_B_FV432_MG",
			"LS_ACF_ARL_B_FV432_MEV",
			"LS_ACF_ARL_B_FV432_Mortar",

			"LS_ACF_ARL_B_Land_Rover_AA",
			"LS_ACF_ARL_B_Tunguska",

			"LS_ACF_ARL_B_T90A",
			"LS_ACF_ARL_B_T90MS",

			"LS_ACF_ARL_B_AW159_Unarmed_W",
			"LS_ACF_ARL_B_AW159_W",
			"LS_ACF_ARL_B_AW159_Unarmed_L",
			"LS_ACF_ARL_B_AW159_L",
			"LS_ACF_ARL_B_SA330_2",
			"LS_ACF_ARL_B_Mi35_wasp",
			"LS_ACF_ARL_B_Mi35_wasp_2",

			"LS_ACF_ARL_B_C130",
			"LS_ACF_ARL_B_C130_VIV",
			"LS_ACF_ARL_B_JAS39",
			"LS_ACF_ARL_B_AV8",
			"LS_ACF_ARL_B_AV8_GR9",
			"LS_ACF_ARL_B_A10",
			"LS_ACF_ARL_B_XA643",
			"LS_ACF_ARL_XF181",
			"LS_ACF_ARL_XF181_stealth",
			"LS_ACF_ARL_XR102",
			"LS_ACF_ARL_XR102_stealth",

			"LS_ACF_ARL_AR2",
			"LS_ACF_ARL_DemoDrone",
			"LS_ACF_ARL_AL6",
			"LS_ACF_ARL_AL6_med",
			"LS_ACF_ARL_MQ9",
			"LS_ACF_ARL_UGV",
			"LS_ACF_ARL_UGV_RCWS",

			"LS_ACF_ARL_B_Radar_System_F",
			"LS_ACF_ARL_B_SAM_System_F",
			"LS_ACF_ARL_B_CIWS_F",
			"LS_ACF_ARL_B_MK49_F",
			"LS_ACF_ARL_B_MK21_F",
			"LS_ACF_ARL_B_MK45_F",
			"LS_ACF_ARL_B_Mk6_Mortar_F",
			"LS_ACF_ARL_B_SearchLight_F",
			"LS_ACF_ARL_B_KORD_high",
			"LS_ACF_ARL_B_KORD",
			"LS_ACF_ARL_B_Kornet",
			"LS_ACF_ARL_B_SPG9",
			"LS_ACF_ARL_B_Static_AA",
			"LS_ACF_ARL_B_Static_AT",
			"LS_ACF_ARL_B_ZU23",
			"LS_ACF_ARL_B_D30",
			"LS_ACF_ARL_B_D30_AT",

			"LS_ACF_ARL_B_Boat_Armed",
			"LS_ACF_ARL_B_Boat_Transport",
			"LS_ACF_ARL_B_Lifeboat",
			"LS_ACF_ARL_B_Boat_RHIB"
        };
        weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"CUP_Creatures_People_Core",
			"A3_Data_F"
		};
		author="(S)Zumek";        
    };
};
class AnimationSources;
class CfgVehicles
{
	class CUP_I_LR_MG_AAF;
	class I_C_Offroad_02_AT_F;
	class I_C_Offroad_02_LMG_F;
	class I_C_Offroad_02_unarmed_F;
	class LS_ACF_ARL_B_Jeep_Unarmed_Open: I_C_Offroad_02_unarmed_F
	{
		author="(S)Zumek";
		displayName="Jeep (Open)";
        side=1;
		scope=2;
		forceInGarage=1;
		faction="LS_ACF_B_AURELIA";
		crew="LS_ACF_B_ARL_Rifleman";
		editorPreview="\LS_ACF_Aurelia\UI\LS_ACF_ARL_B_Jeep_Unarmed_Open.jpg";
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=4;
			};
		};	
		animationList[]=
		{
			"hideLeftDoor",0,"hideRightDoor",0,"hideRearDoor",0,"hideBullbar",0,"hideFenders",0,"hideHeadSupportRear",1,"hideHeadSupportFront",1,"hideRollcage",1,"hideSeatsRear",0,"hideSpareWheel",0
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};		
		hiddenSelectionsTextures[]=
		{
			"\LS_ACF_Aurelia\vehicles\Jeep\LS_ACF_ARL_Jeep_Green_ext_co.paa",
			"\LS_ACF_Aurelia\vehicles\Jeep\LS_ACF_ARL_Jeep_Green_ext_co.paa",
			"\LS_ACF_Aurelia\vehicles\Jeep\LS_ACF_ARL_Jeep_Green_int_co.paa",
			"\LS_ACF_Aurelia\vehicles\Jeep\LS_ACF_ARL_Jeep_Green_int_co.paa"
		};
		textureList[]=
		{
			"LS_ACF_ARL_Jeep_Aur_Splinter",
			1
		};
		class texturesources
		{
			class LS_ACF_ARL_Jeep_Aur_Splinter
			{
				DisplayName="Green";
				author="(S)Zumek";
				textures[]=
				{
					"\LS_ACF_Aurelia\vehicles\Jeep\LS_ACF_ARL_Jeep_Green_ext_co.paa",
			        "\LS_ACF_Aurelia\vehicles\Jeep\LS_ACF_ARL_Jeep_Green_ext_co.paa",
			        "\LS_ACF_Aurelia\vehicles\Jeep\LS_ACF_ARL_Jeep_Green_int_co.paa",
			        "\LS_ACF_Aurelia\vehicles\Jeep\LS_ACF_ARL_Jeep_Green_int_co.paa"
				};
			};
		};
	};
	class LS_ACF_ARL_B_Jeep_Unarmed: I_C_Offroad_02_unarmed_F
	{
		author="(S)Zumek";
		displayName="Jeep";
        side=1;
		scope=2;
		forceInGarage=1;
		faction="LS_ACF_B_AURELIA";
		crew="LS_ACF_B_ARL_Rifleman";
		editorPreview="\LS_ACF_Aurelia\UI\LS_ACF_ARL_B_Jeep_Unarmed.jpg";
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=4;
			};
		};	
		animationList[]=
		{
			"hideLeftDoor",0,"hideRightDoor",0,"hideRearDoor",0,"hideBullbar",0,"hideFenders",0,"hideHeadSupportRear",1,"hideHeadSupportFront",1,"hideRollcage",0,"hideSeatsRear",0,"hideSpareWheel",0
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};			
		hiddenSelectionsTextures[]=
		{
			"\LS_ACF_Aurelia\vehicles\Jeep\LS_ACF_ARL_Jeep_Green_ext_co.paa",
			"\LS_ACF_Aurelia\vehicles\Jeep\LS_ACF_ARL_Jeep_Green_ext_co.paa",
			"\LS_ACF_Aurelia\vehicles\Jeep\LS_ACF_ARL_Jeep_Green_int_co.paa",
			"\LS_ACF_Aurelia\vehicles\Jeep\LS_ACF_ARL_Jeep_Green_int_co.paa"
		};
		textureList[]=
		{
			"LS_ACF_ARL_Jeep_Aur_Splinter",
			1
		};
	};	
	class LS_ACF_ARL_B_Jeep_LMG: I_C_Offroad_02_LMG_F
	{
		author="(S)Zumek";
		displayName="Jeep (LMG)";
        side=1;
		scope=2;
		forceInGarage=1;
		faction="LS_ACF_B_AURELIA";
		crew="LS_ACF_B_ARL_Rifleman";
		editorPreview="\LS_ACF_Aurelia\UI\LS_ACF_ARL_B_Jeep_LMG.jpg";
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=4;
			};
		};	
		animationList[]=
		{
			"hideLeftDoor",0,"hideRightDoor",0,"hideRearDoor",0,"hideBullbar",0,"hideFenders",0,"hideHeadSupportRear",1,"hideHeadSupportFront",1,"hideRollcage",0,"hideSeatsRear",0,"hideSpareWheel",0
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};			
		hiddenSelectionsTextures[]=
		{
			"\LS_ACF_Aurelia\vehicles\Jeep\LS_ACF_ARL_Jeep_Green_ext_co.paa",
			"\LS_ACF_Aurelia\vehicles\Jeep\LS_ACF_ARL_Jeep_Green_ext_co.paa",
			"\LS_ACF_Aurelia\vehicles\Jeep\LS_ACF_ARL_Jeep_Green_int_co.paa",
			"\LS_ACF_Aurelia\vehicles\Jeep\LS_ACF_ARL_Jeep_Green_int_co.paa"
		};
		textureList[]=
		{
			"LS_ACF_ARL_Jeep_aur_slipinter_LMG",
			1
		};
		class texturesources
		{
			class LS_ACF_ARL_Jeep_aur_slipinter_LMG
			{
				DisplayName="Green";
				author="(S)Zumek";
				textures[]=
				{
					"\LS_ACF_Aurelia\vehicles\Jeep\LS_ACF_ARL_Jeep_Green_ext_co.paa",
			        "\LS_ACF_Aurelia\vehicles\Jeep\LS_ACF_ARL_Jeep_Green_ext_co.paa",
			        "\LS_ACF_Aurelia\vehicles\Jeep\LS_ACF_ARL_Jeep_Green_int_co.paa",
			        "\LS_ACF_Aurelia\vehicles\Jeep\LS_ACF_ARL_Jeep_Green_int_co.paa"
				};
			};
		};
	};
	class LS_ACF_ARL_B_Jeep_AT: I_C_Offroad_02_AT_F
	{
		author="(S)Zumek";
		displayName="Jeep (AT)";
        side=1;
		scope=2;
		forceInGarage=1;
		faction="LS_ACF_B_AURELIA";
		crew="LS_ACF_B_ARL_Rifleman";
		editorPreview="\LS_ACF_Aurelia\UI\LS_ACF_ARL_B_Jeep_AT.jpg";
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=4;
			};
		};	
		animationList[]=
		{
			"hideLeftDoor",0,"hideRightDoor",1,"hideRearDoor",1,"hideFenders",0,"hideHeadSupportFront",1,"hideSpareWheel",1
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};			
		hiddenSelectionsTextures[]=
		{
			"\LS_ACF_Aurelia\vehicles\Jeep\LS_ACF_ARL_Jeep_Green_ext_co.paa",
			"\LS_ACF_Aurelia\vehicles\Jeep\LS_ACF_ARL_Jeep_Green_ext_co.paa",
			"\LS_ACF_Aurelia\vehicles\Jeep\LS_ACF_ARL_Jeep_Green_int_co.paa",
			"\LS_ACF_Aurelia\vehicles\Jeep\LS_ACF_ARL_Jeep_Green_int_co.paa"
		};
		textureList[]=
		{
			"LS_ACF_ARL_Jeep_aur_splinter_AT",
			1
		};
		class texturesources
		{
			class LS_ACF_ARL_Jeep_aur_splinter_AT
			{
				DisplayName="Green";
				author="(S)Zumek";
				textures[]=
				{
					"\LS_ACF_Aurelia\vehicles\Jeep\LS_ACF_ARL_Jeep_Green_ext_co.paa",
			        "\LS_ACF_Aurelia\vehicles\Jeep\LS_ACF_ARL_Jeep_Green_ext_co.paa",
			        "\LS_ACF_Aurelia\vehicles\Jeep\LS_ACF_ARL_Jeep_Green_int_co.paa",
			        "\LS_ACF_Aurelia\vehicles\Jeep\LS_ACF_ARL_Jeep_Green_int_co.paa"
				};
			};
		};
	};
	class LS_ACF_ARL_B_Land_Rover_M2_Open: CUP_I_LR_MG_AAF
	{
		author="(S)Zumek";
		displayName="Land Rover (M2)";
        side=1;
		scope=2;
		forceInGarage=1;
		faction="LS_ACF_B_AURELIA";
		crew="LS_ACF_B_ARL_Rifleman";
		editorPreview="\LS_ACF_Aurelia\UI\LS_ACF_ARL_B_Land_Rover_M2_Open.jpg";
		class TransportWeapons
		{
			class _xx_LS_ACF_ARL_weapon_arifle_CZ805A2_STANAG_blk
			{
				weapon="LS_ACF_ARL_weapon_arifle_CZ805A2_STANAG_blk";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_30Rnd_556x45_PMAG_BLACK_RPL
			{
				magazine="CUP_30Rnd_556x45_PMAG_BLACK_RPL";
				count=10;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=4;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=4;
			};
			class _xx_Chemlight_blue
			{
				magazine="Chemlight_blue";
				count=4;
			};
		};	
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_MediKit
			{
				name="MediKit";
				count=1;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
		class TransportBackpacks
		{
			class _xx_LS_ACF_ARL_B_Tactical_Pack_Aurcam
			{
				backpack="LS_ACF_ARL_B_Tactical_Pack_Aurcam";
				count=2;
			};
		};
		animationList[]=
		{
			"selection_tool",0,"selection_jerry",1,"selection_antenna",1,"selection_antenna_rear",1,"selection_box",1,"selection_steps",0,"selection_wheelfront",1,"selection_wheels",0,"selection_bar",0,"selection_tarp",1,"selection_doors",0,"selection_rear",0,"selection_wind",0
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};			
		hiddenSelectionsTextures[]=
		{
			"\LS_ACF_Aurelia\vehicles\Land_Rover\LS_ACF_ARL_Land_Rover_base_camtac_co.paa",
			"\LS_ACF_Aurelia\vehicles\Land_Rover\LS_ACF_ARL_Land_Rover_special_camtac_co.paa",
			"\LS_ACF_Aurelia\vehicles\Land_Rover\LS_ACF_ARL_Land_Rover_special_camtac_co.paa"
		};
		textureList[]=
		{
			"LS_ACF_ARL_Land_Rover_aur_splinter_M2",
			1
		};
		class texturesources
		{
			class LS_ACF_ARL_Land_Rover_aur_splinter_M2
			{
				DisplayName="CAMTAC (Aurelia)";
				author="(S)Zumek";
				textures[]=
				{
					"\LS_ACF_Aurelia\vehicles\Land_Rover\LS_ACF_ARL_Land_Rover_base_camtac_co.paa",
			        "\LS_ACF_Aurelia\vehicles\Land_Rover\LS_ACF_ARL_Land_Rover_special_camtac_co.paa",
			        "\LS_ACF_Aurelia\vehicles\Land_Rover\LS_ACF_ARL_Land_Rover_special_camtac_co.paa"
				};
			};
		};
	};
	class CUP_I_LR_Transport_AAF;
	class LS_ACF_ARL_B_Land_Rover: CUP_I_LR_Transport_AAF
	{
		author="(S)Zumek";
		displayName="Land Rover";
        side=1;
		scope=2;
		forceInGarage=1;
		faction="LS_ACF_B_AURELIA";
		crew="LS_ACF_B_ARL_Rifleman";
		editorPreview="\LS_ACF_Aurelia\UI\LS_ACF_ARL_B_Land_Rover.jpg";
		class TransportWeapons
		{
			class _xx_LS_ACF_ARL_weapon_arifle_CZ805A2_STANAG_blk
			{
				weapon="LS_ACF_ARL_weapon_arifle_CZ805A2_STANAG_blk";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_30Rnd_556x45_PMAG_BLACK_RPL
			{
				magazine="CUP_30Rnd_556x45_PMAG_BLACK_RPL";
				count=10;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=4;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=4;
			};
			class _xx_Chemlight_blue
			{
				magazine="Chemlight_blue";
				count=4;
			};
		};	
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_MediKit
			{
				name="MediKit";
				count=1;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
		class TransportBackpacks
		{
			class _xx_LS_ACF_ARL_B_Tactical_Pack_Aurcam
			{
				backpack="LS_ACF_ARL_B_Tactical_Pack_Aurcam";
				count=2;
			};
		};
		animationList[]=
		{
			"selection_tool",0,"selection_jerry",1,"selection_antenna",0,"selection_antenna_rear",1,"selection_box",1,"selection_steps",0,"selection_wheelfront",1,"selection_bar",0,"selection_tarp",0,"selection_doors",0,"selection_rear",0,"selection_roll",0,"selection_wind",0
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};			
		hiddenSelectionsTextures[]=
		{
			"\LS_ACF_Aurelia\vehicles\Land_Rover\LS_ACF_ARL_Land_Rover_base_camtac_co.paa",
			"\LS_ACF_Aurelia\vehicles\Land_Rover\LS_ACF_ARL_Land_Rover_special_camtac_co.paa",
			"\LS_ACF_Aurelia\vehicles\Land_Rover\LS_ACF_ARL_Land_Rover_special_camtac_co.paa"
		};
		textureList[]=
		{
			"LS_ACF_ARL_Land_Rover_aur_splinter",
			1
		};
		class texturesources
		{
			class LS_ACF_ARL_Land_Rover_aur_splinter
			{
				DisplayName="CAMTAC (Aurelia)";
				author="(S)Zumek";
				textures[]=
				{
					"\LS_ACF_Aurelia\vehicles\Land_Rover\LS_ACF_ARL_Land_Rover_base_camtac_co.paa",
			        "\LS_ACF_Aurelia\vehicles\Land_Rover\LS_ACF_ARL_Land_Rover_special_camtac_co.paa",
			        "\LS_ACF_Aurelia\vehicles\Land_Rover\LS_ACF_ARL_Land_Rover_special_camtac_co.paa"
				};
			};
		};
	};
	class CUP_O_LR_SPG9_TKA;
	class LS_ACF_ARL_B_Land_Rover_AT: CUP_O_LR_SPG9_TKA
	{
		author="(S)Zumek";
		displayName="Land Rover (AT)";
        side=1;
		scope=2;
		forceInGarage=1;
		faction="LS_ACF_B_AURELIA";
		crew="LS_ACF_B_ARL_Rifleman";
		editorPreview="\LS_ACF_Aurelia\UI\LS_ACF_ARL_B_Land_Rover_AT.jpg";
		class TransportWeapons
		{
			class _xx_LS_ACF_ARL_weapon_arifle_CZ805A2_STANAG_blk
			{
				weapon="LS_ACF_ARL_weapon_arifle_CZ805A2_STANAG_blk";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_30Rnd_556x45_PMAG_BLACK_RPL
			{
				magazine="CUP_30Rnd_556x45_PMAG_BLACK_RPL";
				count=10;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=4;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=4;
			};
			class _xx_Chemlight_blue
			{
				magazine="Chemlight_blue";
				count=4;
			};
		};	
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_MediKit
			{
				name="MediKit";
				count=1;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
		class TransportBackpacks
		{
			class _xx_LS_ACF_ARL_B_Tactical_Pack_Aurcam
			{
				backpack="LS_ACF_ARL_B_Tactical_Pack_Aurcam";
				count=2;
			};
		};
		animationList[]=
		{
			"selection_tool",0,"selection_jerry",1,"selection_antenna",1,"selection_antenna_rear",0,"selection_box",1,"selection_steps",0,"selection_wheelfront",1,"selection_bar",0,"selection_doors",1,"selection_rear",1,"selection_wind",1
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};			
		hiddenSelectionsTextures[]=
		{
			"\LS_ACF_Aurelia\vehicles\Land_Rover\LS_ACF_ARL_Land_Rover_base_camtac_co.paa",
			"\LS_ACF_Aurelia\vehicles\Land_Rover\LS_ACF_ARL_Land_Rover_special_camtac_co.paa"
		};
		textureList[]=
		{
			"LS_ACF_ARL_Land_Rover_aur_splinter_AT",
			1
		};
		class texturesources
		{
			class LS_ACF_ARL_Land_Rover_aur_splinter_AT
			{
				DisplayName="CAMTAC (Aurelia)";
				author="(S)Zumek";
				textures[]=
				{
					"\LS_ACF_Aurelia\vehicles\Land_Rover\LS_ACF_ARL_Land_Rover_base_camtac_co.paa",
			        "\LS_ACF_Aurelia\vehicles\Land_Rover\LS_ACF_ARL_Land_Rover_special_camtac_co.paa"
				};
			};
		};
	};
	class CUP_I_LR_Ambulance_AAF;
	class LS_ACF_ARL_B_Land_Rover_MED: CUP_I_LR_Ambulance_AAF
	{
		author="(S)Zumek";
		displayName="Land Rover (Ambulance)";
        side=1;
		scope=2;
		forceInGarage=1;
		faction="LS_ACF_B_AURELIA";
		crew="LS_ACF_B_ARL_Rifleman";
		editorPreview="\LS_ACF_Aurelia\UI\LS_ACF_ARL_B_Land_Rover_MED.jpg";
		class TransportWeapons
		{
			class _xx_LS_ACF_ARL_weapon_arifle_CZ805A2_STANAG_blk
			{
				weapon="LS_ACF_ARL_weapon_arifle_CZ805A2_STANAG_blk";
				count=1;
			};
		};	
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_MediKit
			{
				name="MediKit";
				count=2;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
		class TransportBackpacks
		{
			class _xx_LS_ACF_ARL_B_Tactical_Pack_Aurcam
			{
				backpack="LS_ACF_ARL_B_Tactical_Pack_Aurcam";
				count=2;
			};
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};			
		hiddenSelectionsTextures[]=
		{
			"\LS_ACF_Aurelia\vehicles\Land_Rover\LS_ACF_ARL_Land_Rover_base_camtac_co.paa",
			"\LS_ACF_Aurelia\vehicles\Land_Rover\LS_ACF_ARL_Land_Rover_amb_camtac_co.paa",
			"\LS_ACF_Aurelia\vehicles\Land_Rover\LS_ACF_ARL_Land_Rover_special_camtac_co.paa"
		};
		textureList[]=
		{
			"LS_ACF_ARL_Land_Rover_aur_splinter_MED",
			1
		};
		class texturesources
		{
			class LS_ACF_ARL_Land_Rover_aur_splinter_MED
			{
				DisplayName="CAMTAC (Aurelia)";
				author="(S)Zumek";
				textures[]=
				{
					"\LS_ACF_Aurelia\vehicles\Land_Rover\LS_ACF_ARL_Land_Rover_base_camtac_co.paa",
			        "\LS_ACF_Aurelia\vehicles\Land_Rover\LS_ACF_ARL_Land_Rover_amb_camtac_co.paa",
			        "\LS_ACF_Aurelia\vehicles\Land_Rover\LS_ACF_ARL_Land_Rover_special_camtac_co.paa"
				};
			};
		};
	};	
	class I_E_Quadbike_01_F;
	class LS_ACF_ARL_B_Quadbike: I_E_Quadbike_01_F
    {
        author="(S)Zumek";
        side=1;
		scope=2;
		faction="LS_ACF_B_AURELIA";
		crew="LS_ACF_B_ARL_Rifleman";
		typicalCargo[]=
		{
			"LS_ACF_B_ARL_Rifleman"
		};
        class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=1;
			};
		};
    };
	class CUP_O_TowingTractor_RU;
    class LS_ACF_ARL_B_TowingTractor: CUP_O_TowingTractor_RU
    {
        author="(S)Zumek";
        side=1;
		scope=2;
		faction="LS_ACF_B_AURELIA";
		crew="LS_ACF_B_ARL_Rifleman";
		typicalCargo[]=
		{
			"LS_ACF_B_ARL_Rifleman"
		};        
    };
	class CUP_O_Tigr_233011_SLA;
	class LS_ACF_ARL_B_Tigr_Unarmed: CUP_O_Tigr_233011_SLA
	{
		author="(S)Zumek";
		displayName="GAZ Tigr";
        side=1;
		scope=2;
		forceInGarage=1;
		faction="LS_ACF_B_AURELIA";
		crew="LS_ACF_B_ARL_Rifleman";
		editorPreview="\LS_ACF_Aurelia\UI\LS_ACF_ARL_B_Tigr_Unarmed.jpg";
		class TransportWeapons
		{
			class _xx_LS_ACF_ARL_weapon_arifle_CZ805A2_STANAG_blk
			{
				weapon="LS_ACF_ARL_weapon_arifle_CZ805A2_STANAG_blk";
				count=1;
			};
			class _xx_CUP_launch_M72A6
			{
				weapon="CUP_launch_M72A6";
				count=2;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_30Rnd_556x45_PMAG_BLACK_RPL
			{
				magazine="CUP_30Rnd_556x45_PMAG_BLACK_RPL";
				count=10;
			};
			class _xx_CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M
			{
				magazine="CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M";
				count=4;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=4;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=4;
			};
			class _xx_Chemlight_blue
			{
				magazine="Chemlight_blue";
				count=4;
			};
		};	
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_MediKit
			{
				name="MediKit";
				count=1;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
		class TransportBackpacks
		{
			class _xx_LS_ACF_ARL_B_Tactical_Pack_Aurcam
			{
				backpack="LS_ACF_ARL_B_Tactical_Pack_Aurcam";
				count=2;
			};
		};
		animationList[]=
		{
			"hide_tow_rope",0,"hide_antenna_group",1,"hide_antenna_large",1,"hide_tools",0,"hide_Hoist",1,"hide_roof_rung",0,"hide_fueltanks",1,"hide_reseve_wheel_mount",0,"hide_ReserveWheel",0,"hide_Front_Bumper",0
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"door_emblem",
			"hood_emblem",
			"vehicle_number"
		};		
		hiddenSelectionsTextures[]=
		{
			"\LS_ACF_Aurelia\vehicles\Tigr\LS_ACF_ARL_Tigr_CarBody_CAMTAC_co.paa",
			"\LS_ACF_Aurelia\vehicles\Tigr\LS_ACF_ARL_Tigr_HoodOld_CAMTAC_co.paa",
			"CUP\WheeledVehicles\CUP_WheeledVehicles_Tigr\data\camo\SLA\grille_co.paa",
			"\LS_ACF_Aurelia\vehicles\Tigr\LS_ACF_ARL_Tigr_ExtraParts_CAMTAC_co.paa",
			"\LS_ACF_Aurelia\vehicles\Tigr\LS_ACF_ARL_Tigr_RoofOld_CAMTAC_co.paa",
			"\LS_ACF_Aurelia\vehicles\LS_ACF_Aurelian_logo.paa",
			"#(argb,1,1,1)color(0,0,0,0)"
		};
		textureList[]=
		{
			"LS_ACF_ARL_Tigr_aur_splinter",
			1
		};
		class texturesources
		{
			class LS_ACF_ARL_Tigr_aur_splinter
			{
				DisplayName="CAMTAC (Aurelia)";
				author="(S)Zumek";
				textures[]=
				{
					"\LS_ACF_Aurelia\vehicles\Tigr\LS_ACF_ARL_Tigr_CarBody_CAMTAC_co.paa",
			        "\LS_ACF_Aurelia\vehicles\Tigr\LS_ACF_ARL_Tigr_HoodOld_CAMTAC_co.paa",
			        "CUP\WheeledVehicles\CUP_WheeledVehicles_Tigr\data\camo\SLA\grille_co.paa",
			        "\LS_ACF_Aurelia\vehicles\Tigr\LS_ACF_ARL_Tigr_ExtraParts_CAMTAC_co.paa",
			        "\LS_ACF_Aurelia\vehicles\Tigr\LS_ACF_ARL_Tigr_RoofOld_CAMTAC_co.paa",
			        "\LS_ACF_Aurelia\vehicles\LS_ACF_Aurelian_logo.paa",
			        "#(argb,1,1,1)color(0,0,0,0)"
				};
			};
		};
	};
	class CUP_O_Tigr_M_233114_CSAT;
	class LS_ACF_ARL_B_Tigr_M_Unarmed: CUP_O_Tigr_M_233114_CSAT
	{
		author="(S)Zumek";
		displayName="GAZ Tigr-M";
        side=1;
		scope=2;
		forceInGarage=1;
		faction="LS_ACF_B_AURELIA";
		crew="LS_ACF_B_ARL_Rifleman";
		editorPreview="\LS_ACF_Aurelia\UI\LS_ACF_ARL_B_Tigr_M_Unarmed.jpg";
		class TransportWeapons
		{
			class _xx_LS_ACF_ARL_weapon_arifle_CZ805A2_STANAG_blk
			{
				weapon="LS_ACF_ARL_weapon_arifle_CZ805A2_STANAG_blk";
				count=1;
			};
			class _xx_CUP_launch_M72A6
			{
				weapon="CUP_launch_M72A6";
				count=2;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_30Rnd_556x45_PMAG_BLACK_RPL
			{
				magazine="CUP_30Rnd_556x45_PMAG_BLACK_RPL";
				count=10;
			};
			class _xx_CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M
			{
				magazine="CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M";
				count=4;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=4;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=4;
			};
			class _xx_Chemlight_blue
			{
				magazine="Chemlight_blue";
				count=4;
			};
		};	
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_MediKit
			{
				name="MediKit";
				count=1;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
		class TransportBackpacks
		{
			class _xx_LS_ACF_ARL_B_Tactical_Pack_Aurcam
			{
				backpack="LS_ACF_ARL_B_Tactical_Pack_Aurcam";
				count=2;
			};
		};
		animationList[]=
		{
			"hide_tow_rope",0,"hide_antenna_group",1,"hide_antenna_large",1,"hide_tools",0,"hide_Hoist",1,"hide_roof_rung",0,"hide_fueltanks",1,"hide_reseve_wheel_mount",0,"hide_ReserveWheel",1,"hide_Front_Bumper",0,"hide_RoofCarrier",0,"hide_Gear_1",1,"hide_Gear_2",1,"hide_Gear_3",1,"hide_turret_shield",1
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"door_emblem",
			"hood_emblem",
			"vehicle_number"
		};		
		hiddenSelectionsTextures[]=
		{
			"\LS_ACF_Aurelia\vehicles\Tigr\LS_ACF_ARL_Tigr_CarBody_CAMTAC_co.paa",
			"\LS_ACF_Aurelia\vehicles\Tigr\LS_ACF_ARL_Tigr_HoodNew_CAMTAC_co.paa",
			"CUP\WheeledVehicles\CUP_WheeledVehicles_Tigr\data\camo\SLA\grille_co.paa",
			"\LS_ACF_Aurelia\vehicles\Tigr\LS_ACF_ARL_Tigr_ExtraParts_CAMTAC_co.paa",
			"\LS_ACF_Aurelia\vehicles\Tigr\LS_ACF_ARL_Tigr_RoofNew_CAMTAC_co.paa",
			"\LS_ACF_Aurelia\vehicles\LS_ACF_Aurelian_logo.paa",
			"#(argb,1,1,1)color(0,0,0,0)"
		};
		textureList[]=
		{
			"LS_ACF_ARL_TigrM_aur_splinter",
			1
		};
		class texturesources
		{
			class LS_ACF_ARL_TigrM_aur_splinter
			{
				DisplayName="CAMTAC (Aurelia)";
				author="(S)Zumek";
				textures[]=
				{
					"\LS_ACF_Aurelia\vehicles\Tigr\LS_ACF_ARL_Tigr_CarBody_CAMTAC_co.paa",
			        "\LS_ACF_Aurelia\vehicles\Tigr\LS_ACF_ARL_Tigr_HoodNew_CAMTAC_co.paa",
			        "CUP\WheeledVehicles\CUP_WheeledVehicles_Tigr\data\camo\SLA\grille_co.paa",
			        "\LS_ACF_Aurelia\vehicles\Tigr\LS_ACF_ARL_Tigr_ExtraParts_CAMTAC_co.paa",
			        "\LS_ACF_Aurelia\vehicles\Tigr\LS_ACF_ARL_Tigr_RoofNew_CAMTAC_co.paa",
			        "\LS_ACF_Aurelia\vehicles\LS_ACF_Aurelian_logo.paa",
			        "#(argb,1,1,1)color(0,0,0,0)"
				};
			};
		};
	};
	class CUP_O_Tigr_M_233114_KORD_CSAT;
	class LS_ACF_ARL_B_Tigr_M_KORD: CUP_O_Tigr_M_233114_KORD_CSAT
	{
		author="(S)Zumek";
		displayName="GAZ Tigr-M (KORD)";
        side=1;
		scope=2;
		forceInGarage=1;
		faction="LS_ACF_B_AURELIA";
		crew="LS_ACF_B_ARL_Rifleman";
		editorPreview="\LS_ACF_Aurelia\UI\LS_ACF_ARL_B_Tigr_M_KORD.jpg";
		class TransportWeapons
		{
			class _xx_LS_ACF_ARL_weapon_arifle_CZ805A2_STANAG_blk
			{
				weapon="LS_ACF_ARL_weapon_arifle_CZ805A2_STANAG_blk";
				count=1;
			};
			class _xx_CUP_launch_M72A6
			{
				weapon="CUP_launch_M72A6";
				count=2;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_30Rnd_556x45_PMAG_BLACK_RPL
			{
				magazine="CUP_30Rnd_556x45_PMAG_BLACK_RPL";
				count=10;
			};
			class _xx_CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M
			{
				magazine="CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M";
				count=4;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=4;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=4;
			};
			class _xx_Chemlight_blue
			{
				magazine="Chemlight_blue";
				count=4;
			};
		};	
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_MediKit
			{
				name="MediKit";
				count=1;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
		class TransportBackpacks
		{
			class _xx_LS_ACF_ARL_B_Tactical_Pack_Aurcam
			{
				backpack="LS_ACF_ARL_B_Tactical_Pack_Aurcam";
				count=2;
			};
		};
		animationList[]=
		{
			"hide_turret_shield",0,"hide_kord_shield",0,"hide_RoofCarrier",1,"hide_Gear_1",1,"hide_Gear_2",1,"hide_Gear_3",1,"hide_tow_rope",0,
			"hide_antenna_group",1,"hide_antenna_large",1,"hide_tools",0,"hide_Hoist",1,"hide_roof_rung",0,"hide_fueltanks",1,"hide_reseve_wheel_mount",0,"hide_ReserveWheel",0,"hide_Front_Bumper",0
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"door_emblem",
			"hood_emblem",
			"vehicle_number"
		};		
		hiddenSelectionsTextures[]=
		{
			"\LS_ACF_Aurelia\vehicles\Tigr\LS_ACF_ARL_Tigr_CarBody_CAMTAC_co.paa",
			"\LS_ACF_Aurelia\vehicles\Tigr\LS_ACF_ARL_Tigr_HoodNew_CAMTAC_co.paa",
			"CUP\WheeledVehicles\CUP_WheeledVehicles_Tigr\data\camo\SLA\grille_co.paa",
			"\LS_ACF_Aurelia\vehicles\Tigr\LS_ACF_ARL_Tigr_ExtraParts_CAMTAC_co.paa",
			"\LS_ACF_Aurelia\vehicles\Tigr\LS_ACF_ARL_Tigr_RoofNew_CAMTAC_co.paa",
			"\LS_ACF_Aurelia\vehicles\LS_ACF_Aurelian_logo.paa",
			"#(argb,1,1,1)color(0,0,0,0)"
		};
		textureList[]=
		{
			"LS_ACF_ARL_Tigr_Kord_aur_splinter",
			1
		};
		class texturesources
		{
			class LS_ACF_ARL_Tigr_Kord_aur_splinter
			{
				DisplayName="CAMTAC (Aurelia)";
				author="(S)Zumek";
				textures[]=
				{
					"\LS_ACF_Aurelia\vehicles\Tigr\LS_ACF_ARL_Tigr_CarBody_CAMTAC_co.paa",
			        "\LS_ACF_Aurelia\vehicles\Tigr\LS_ACF_ARL_Tigr_HoodNew_CAMTAC_co.paa",
			        "CUP\WheeledVehicles\CUP_WheeledVehicles_Tigr\data\camo\SLA\grille_co.paa",
			        "\LS_ACF_Aurelia\vehicles\Tigr\LS_ACF_ARL_Tigr_ExtraParts_CAMTAC_co.paa",
			        "\LS_ACF_Aurelia\vehicles\Tigr\LS_ACF_ARL_Tigr_RoofNew_CAMTAC_co.paa",
			        "\LS_ACF_Aurelia\vehicles\LS_ACF_Aurelian_logo.paa",
			        "#(argb,1,1,1)color(0,0,0,0)"
				};
			};
		};
	};
	class CUP_O_Tigr_M_233114_PK_CSAT;
	class LS_ACF_ARL_B_Tigr_M_PK: CUP_O_Tigr_M_233114_PK_CSAT
	{
		author="(S)Zumek";
		displayName="GAZ Tigr-M (PK)";
        side=1;
		scope=2;
		forceInGarage=1;
		faction="LS_ACF_B_AURELIA";
		crew="LS_ACF_B_ARL_Rifleman";
		editorPreview="\LS_ACF_Aurelia\UI\LS_ACF_ARL_B_Tigr_M_PK.jpg";
		class TransportWeapons
		{
			class _xx_LS_ACF_ARL_weapon_arifle_CZ805A2_STANAG_blk
			{
				weapon="LS_ACF_ARL_weapon_arifle_CZ805A2_STANAG_blk";
				count=1;
			};
			class _xx_CUP_launch_M72A6
			{
				weapon="CUP_launch_M72A6";
				count=2;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_30Rnd_556x45_PMAG_BLACK_RPL
			{
				magazine="CUP_30Rnd_556x45_PMAG_BLACK_RPL";
				count=10;
			};
			class _xx_CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M
			{
				magazine="CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M";
				count=4;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=4;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=4;
			};
			class _xx_Chemlight_blue
			{
				magazine="Chemlight_blue";
				count=4;
			};
		};	
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_MediKit
			{
				name="MediKit";
				count=1;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
		class TransportBackpacks
		{
			class _xx_LS_ACF_ARL_B_Tactical_Pack_Aurcam
			{
				backpack="LS_ACF_ARL_B_Tactical_Pack_Aurcam";
				count=2;
			};
		};
		animationList[]=
		{
			"hide_turret_shield",0,"hide_pkm_shield",0,"hide_RoofCarrier",1,"hide_Gear_1",1,"hide_Gear_2",1,"hide_Gear_3",1,"hide_tow_rope",0,"hide_antenna_group",1,"hide_antenna_large",1,
			"hide_tools",0,"hide_Hoist",0,"hide_roof_rung",0,"hide_fueltanks",1,"hide_reseve_wheel_mount",0,"hide_ReserveWheel",0,"hide_Front_Bumper",0
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"door_emblem",
			"hood_emblem",
			"vehicle_number"
		};		
		hiddenSelectionsTextures[]=
		{
			"\LS_ACF_Aurelia\vehicles\Tigr\LS_ACF_ARL_Tigr_CarBody_CAMTAC_co.paa",
			"\LS_ACF_Aurelia\vehicles\Tigr\LS_ACF_ARL_Tigr_HoodNew_CAMTAC_co.paa",
			"CUP\WheeledVehicles\CUP_WheeledVehicles_Tigr\data\camo\SLA\grille_co.paa",
			"\LS_ACF_Aurelia\vehicles\Tigr\LS_ACF_ARL_Tigr_ExtraParts_CAMTAC_co.paa",
			"\LS_ACF_Aurelia\vehicles\Tigr\LS_ACF_ARL_Tigr_RoofNew_CAMTAC_co.paa",
			"\LS_ACF_Aurelia\vehicles\LS_ACF_Aurelian_logo.paa",
			"#(argb,1,1,1)color(0,0,0,0)"
		};
		textureList[]=
		{
			"LS_ACF_ARL_Tigr_PK_aur_splinter",
			1
		};
		class texturesources
		{
			class LS_ACF_ARL_Tigr_PK_aur_splinter
			{
				DisplayName="CAMTAC (Aurelia)";
				author="(S)Zumek";
				textures[]=
				{
					"\LS_ACF_Aurelia\vehicles\Tigr\LS_ACF_ARL_Tigr_CarBody_CAMTAC_co.paa",
			        "\LS_ACF_Aurelia\vehicles\Tigr\LS_ACF_ARL_Tigr_HoodNew_CAMTAC_co.paa",
			        "CUP\WheeledVehicles\CUP_WheeledVehicles_Tigr\data\camo\SLA\grille_co.paa",
			        "\LS_ACF_Aurelia\vehicles\Tigr\LS_ACF_ARL_Tigr_ExtraParts_CAMTAC_co.paa",
			        "\LS_ACF_Aurelia\vehicles\Tigr\LS_ACF_ARL_Tigr_RoofNew_CAMTAC_co.paa",
			        "\LS_ACF_Aurelia\vehicles\LS_ACF_Aurelian_logo.paa",
			        "#(argb,1,1,1)color(0,0,0,0)"
				};
			};
		};
	};
	class CUP_T810_Unarmed_Base;
	class LS_ACF_ARL_B_T810_C: CUP_T810_Unarmed_Base
	{
		author="(S)Zumek";
		displayName="Tatra T810 (Covered)";
        side=1;
		scope=2;
		forceInGarage=1;
		faction="LS_ACF_B_AURELIA";
		crew="LS_ACF_B_ARL_Rifleman";
		editorPreview="\LS_ACF_Aurelia\UI\LS_ACF_ARL_B_T810_C.jpg";
		class TransportWeapons
		{
			class _xx_LS_ACF_ARL_weapon_arifle_CZ805A2_STANAG_blk
			{
				weapon="LS_ACF_ARL_weapon_arifle_CZ805A2_STANAG_blk";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_30Rnd_556x45_PMAG_BLACK_RPL
			{
				magazine="CUP_30Rnd_556x45_PMAG_BLACK_RPL";
				count=4;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=4;
			};
			class _xx_Chemlight_blue
			{
				magazine="Chemlight_blue";
				count=4;
			};
		};	
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
		class TransportBackpacks
		{
			class _xx_LS_ACF_ARL_B_Tactical_Pack_Aurcam
			{
				backpack="LS_ACF_ARL_B_Tactical_Pack_Aurcam";
				count=2;
			};
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};		
		hiddenSelectionsTextures[]=
		{
			"\LS_ACF_Aurelia\vehicles\Tatra\LS_ACF_ARL_Tatra_cabin_camo_co.paa",
			"\LS_ACF_Aurelia\vehicles\Tatra\LS_ACF_ARL_Tatra_bed_camo_co.paa",
			"CUP\WheeledVehicles\CUP_WheeledVehicles_T810\data\undercarriage_ldf_co.paa"
		};
		textureList[]=
		{
			"LS_ACF_ARL_T810_C_aur_splinter",
			1
		};
		class texturesources
		{
			class LS_ACF_ARL_T810_C_aur_splinter
			{
				DisplayName="CAMTAC (Aurelia)";
				author="(S)Zumek";
				textures[]=
				{
					"\LS_ACF_Aurelia\vehicles\Tatra\LS_ACF_ARL_Tatra_cabin_camo_co.paa",
			        "\LS_ACF_Aurelia\vehicles\Tatra\LS_ACF_ARL_Tatra_bed_camo_co.paa",
			        "CUP\WheeledVehicles\CUP_WheeledVehicles_T810\data\undercarriage_ldf_co.paa"
				};
			};
		};
	};
	class CUP_T810_Reammo_Base;
	class LS_ACF_ARL_B_T810_Ammo: CUP_T810_Reammo_Base
	{
		author="(S)Zumek";
		displayName="Tatra T810 (Ammo)";
        side=1;
		scope=2;
		forceInGarage=1;
		faction="LS_ACF_B_AURELIA";
		crew="LS_ACF_B_ARL_Rifleman";
		editorPreview="\LS_ACF_Aurelia\UI\LS_ACF_ARL_B_T810_Ammo.jpg";
		class TransportWeapons
		{
			class _xx_LS_ACF_ARL_weapon_arifle_CZ805A2_STANAG_blk
			{
				weapon="LS_ACF_ARL_weapon_arifle_CZ805A2_STANAG_blk";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_30Rnd_556x45_PMAG_BLACK_RPL
			{
				magazine="CUP_30Rnd_556x45_PMAG_BLACK_RPL";
				count=4;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=4;
			};
			class _xx_Chemlight_blue
			{
				magazine="Chemlight_blue";
				count=4;
			};
		};	
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
		class TransportBackpacks
		{
			class _xx_LS_ACF_ARL_B_Tactical_Pack_Aurcam
			{
				backpack="LS_ACF_ARL_B_Tactical_Pack_Aurcam";
				count=2;
			};
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo6"
		};		
		hiddenSelectionsTextures[]=
		{
			"\LS_ACF_Aurelia\vehicles\Tatra\LS_ACF_ARL_Tatra_cabin_camo_co.paa",
			"\LS_ACF_Aurelia\vehicles\Tatra\LS_ACF_ARL_Tatra_bed_camo_co.paa",
			"CUP\WheeledVehicles\CUP_WheeledVehicles_T810\data\undercarriage_ldf_co.paa",
			"CUP\WheeledVehicles\CUP_WheeledVehicles_T810\data\t810_mlod_co.paa"
		};
		textureList[]=
		{
			"LS_ACF_ARL_T810_A_aur_splinter",
			1
		};
		class texturesources
		{
			class LS_ACF_ARL_T810_A_aur_splinter
			{
				DisplayName="CAMTAC (Aurelia)";
				author="(S)Zumek";
				textures[]=
				{
					"\LS_ACF_Aurelia\vehicles\Tatra\LS_ACF_ARL_Tatra_cabin_camo_co.paa",
			        "\LS_ACF_Aurelia\vehicles\Tatra\LS_ACF_ARL_Tatra_bed_camo_co.paa",
			        "CUP\WheeledVehicles\CUP_WheeledVehicles_T810\data\undercarriage_ldf_co.paa",
					"CUP\WheeledVehicles\CUP_WheeledVehicles_T810\data\t810_mlod_co.paa"
				};
			};
		};
	};
	class CUP_T810_Refuel_Base;
	class LS_ACF_ARL_B_T810_Fuel: CUP_T810_Refuel_Base
	{
		author="(S)Zumek";
		displayName="Tatra T810 (Fuel)";
        side=1;
		scope=2;
		forceInGarage=1;
		faction="LS_ACF_B_AURELIA";
		crew="LS_ACF_B_ARL_Rifleman";
		editorPreview="\LS_ACF_Aurelia\UI\LS_ACF_ARL_B_T810_Fuel.jpg";
		class TransportWeapons
		{
			class _xx_LS_ACF_ARL_weapon_arifle_CZ805A2_STANAG_blk
			{
				weapon="LS_ACF_ARL_weapon_arifle_CZ805A2_STANAG_blk";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_30Rnd_556x45_PMAG_BLACK_RPL
			{
				magazine="CUP_30Rnd_556x45_PMAG_BLACK_RPL";
				count=4;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=4;
			};
			class _xx_Chemlight_blue
			{
				magazine="Chemlight_blue";
				count=4;
			};
		};	
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
		class TransportBackpacks
		{
			class _xx_LS_ACF_ARL_B_Tactical_Pack_Aurcam
			{
				backpack="LS_ACF_ARL_B_Tactical_Pack_Aurcam";
				count=2;
			};
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo6"
		};		
		hiddenSelectionsTextures[]=
		{
			"\LS_ACF_Aurelia\vehicles\Tatra\LS_ACF_ARL_Tatra_cabin_camo_co.paa",
			"\LS_ACF_Aurelia\vehicles\Tatra\LS_ACF_ARL_Tatra_fuel_camo_co.paa",
			"CUP\WheeledVehicles\CUP_WheeledVehicles_T810\data\undercarriage_ldf_co.paa",
			"CUP\WheeledVehicles\CUP_WheeledVehicles_T810\data\t810_mlod_co.paa"
		};
		textureList[]=
		{
			"LS_ACF_ARL_T810_F_aur_splinter",
			1
		};
		class texturesources
		{
			class LS_ACF_ARL_T810_F_aur_splinter
			{
				DisplayName="CAMTAC (Aurelia)";
				author="(S)Zumek";
				textures[]=
				{
					"\LS_ACF_Aurelia\vehicles\Tatra\LS_ACF_ARL_Tatra_cabin_camo_co.paa",
			        "\LS_ACF_Aurelia\vehicles\Tatra\LS_ACF_ARL_Tatra_fuel_camo_co.paa",
			        "CUP\WheeledVehicles\CUP_WheeledVehicles_T810\data\undercarriage_ldf_co.paa",
					"CUP\WheeledVehicles\CUP_WheeledVehicles_T810\data\t810_mlod_co.paa"
				};
			};
		};
	};
	class CUP_T810_Repair_Base;
	class LS_ACF_ARL_B_T810_repair: CUP_T810_Repair_Base
	{
		author="(S)Zumek";
		displayName="Tatra T810 (Repair)";
        side=1;
		scope=2;
		forceInGarage=1;
		faction="LS_ACF_B_AURELIA";
		crew="LS_ACF_B_ARL_Rifleman";
		editorPreview="\LS_ACF_Aurelia\UI\LS_ACF_ARL_B_T810_repair.jpg";
		class TransportWeapons
		{
			class _xx_LS_ACF_ARL_weapon_arifle_CZ805A2_STANAG_blk
			{
				weapon="LS_ACF_ARL_weapon_arifle_CZ805A2_STANAG_blk";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_30Rnd_556x45_PMAG_BLACK_RPL
			{
				magazine="CUP_30Rnd_556x45_PMAG_BLACK_RPL";
				count=4;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=4;
			};
			class _xx_Chemlight_blue
			{
				magazine="Chemlight_blue";
				count=4;
			};
		};	
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
		class TransportBackpacks
		{
			class _xx_LS_ACF_ARL_B_Tactical_Pack_Aurcam
			{
				backpack="LS_ACF_ARL_B_Tactical_Pack_Aurcam";
				count=2;
			};
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo6"
		};		
		hiddenSelectionsTextures[]=
		{
			"\LS_ACF_Aurelia\vehicles\Tatra\LS_ACF_ARL_Tatra_cabin_camo_co.paa",
			"\LS_ACF_Aurelia\vehicles\Tatra\LS_ACF_ARL_Tatra_bed_camo_co.paa",
			"CUP\WheeledVehicles\CUP_WheeledVehicles_T810\data\undercarriage_ldf_co.paa",
			"CUP\WheeledVehicles\CUP_WheeledVehicles_T810\data\t810_mlod_co.paa"
		};
		textureList[]=
		{
			"LS_ACF_ARL_T810_R_aur_splinter",
			1
		};
		class texturesources
		{
			class LS_ACF_ARL_T810_R_aur_splinter
			{
				DisplayName="CAMTAC (Aurelia)";
				author="(S)Zumek";
				textures[]=
				{
					"\LS_ACF_Aurelia\vehicles\Tatra\LS_ACF_ARL_Tatra_cabin_camo_co.paa",
			        "\LS_ACF_Aurelia\vehicles\Tatra\LS_ACF_ARL_Tatra_bed_camo_co.paa",
			        "CUP\WheeledVehicles\CUP_WheeledVehicles_T810\data\undercarriage_ldf_co.paa",
					"CUP\WheeledVehicles\CUP_WheeledVehicles_T810\data\t810_mlod_co.paa"
				};
			};
		};
	};
	class CUP_T810_Armed_Base;
	class LS_ACF_ARL_B_T810_Armed: CUP_T810_Armed_Base
	{
		author="(S)Zumek";
		displayName="Tatra T810 (Armed)";
        side=1;
		scope=2;
		forceInGarage=1;
		faction="LS_ACF_B_AURELIA";
		crew="LS_ACF_B_ARL_Rifleman";
		editorPreview="\LS_ACF_Aurelia\UI\LS_ACF_ARL_B_T810_Armed.jpg";
		class TransportWeapons
		{
			class _xx_LS_ACF_ARL_weapon_arifle_CZ805A2_STANAG_blk
			{
				weapon="LS_ACF_ARL_weapon_arifle_CZ805A2_STANAG_blk";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_30Rnd_556x45_PMAG_BLACK_RPL
			{
				magazine="CUP_30Rnd_556x45_PMAG_BLACK_RPL";
				count=4;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=4;
			};
			class _xx_Chemlight_blue
			{
				magazine="Chemlight_blue";
				count=4;
			};
		};	
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
		class TransportBackpacks
		{
			class _xx_LS_ACF_ARL_B_Tactical_Pack_Aurcam
			{
				backpack="LS_ACF_ARL_B_Tactical_Pack_Aurcam";
				count=2;
			};
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};		
		hiddenSelectionsTextures[]=
		{
			"\LS_ACF_Aurelia\vehicles\Tatra\LS_ACF_ARL_Tatra_cabin2_camo_co.paa",
			"\LS_ACF_Aurelia\vehicles\Tatra\LS_ACF_ARL_Tatra_bed_camo_co.paa",
			"CUP\WheeledVehicles\CUP_WheeledVehicles_T810\data\undercarriage_ldf_co.paa"
		};
		textureList[]=
		{
			"LS_ACF_ARL_T810_Arm_aur_splinter",
			1
		};
		class texturesources
		{
			class LS_ACF_ARL_T810_Arm_aur_splinter
			{
				DisplayName="CAMTAC (Aurelia)";
				author="(S)Zumek";
				textures[]=
				{
					"\LS_ACF_Aurelia\vehicles\Tatra\LS_ACF_ARL_Tatra_cabin2_camo_co.paa",
			        "\LS_ACF_Aurelia\vehicles\Tatra\LS_ACF_ARL_Tatra_bed_camo_co.paa",
			        "CUP\WheeledVehicles\CUP_WheeledVehicles_T810\data\undercarriage_ldf_co.paa"
				};
			};
		};
	};
	class CUP_B_RM70_Base;
	class LS_ACF_ARL_B_RM70: CUP_B_RM70_Base
	{
		author="(S)Zumek";
        side=1;
		scope=2;
		forceInGarage=1;
		faction="LS_ACF_B_AURELIA";
		crew="LS_ACF_B_ARL_Rifleman";
		editorPreview="\LS_ACF_Aurelia\UI\LS_ACF_ARL_B_RM70.jpg";
		class TransportWeapons
		{
			class _xx_LS_ACF_ARL_weapon_arifle_CZ805A2_STANAG_blk
			{
				weapon="LS_ACF_ARL_weapon_arifle_CZ805A2_STANAG_blk";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_30Rnd_556x45_PMAG_BLACK_RPL
			{
				magazine="CUP_30Rnd_556x45_PMAG_BLACK_RPL";
				count=4;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=4;
			};
			class _xx_Chemlight_blue
			{
				magazine="Chemlight_blue";
				count=4;
			};
		};	
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
		class TransportBackpacks
		{
			class _xx_LS_ACF_ARL_B_Tactical_Pack_Aurcam
			{
				backpack="LS_ACF_ARL_B_Tactical_Pack_Aurcam";
				count=2;
			};
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"insignia"
		};		
		hiddenSelectionsTextures[]=
		{
			"\LS_ACF_Aurelia\vehicles\Tatra\LS_ACF_AUR_rm70_body1_CAMTAC_co.paa",
			"\LS_ACF_Aurelia\vehicles\Tatra\LS_ACF_AUR_rm70_body2_CAMTAC_co.paa",
			"\LS_ACF_Aurelia\vehicles\Tatra\LS_ACF_AUR_rm70_body3_CAMTAC_co.paa",
			"\LS_ACF_Aurelia\vehicles\Tatra\LS_ACF_AUR_rm70_uc_CAMTAC_co.paa",
			""
		};
		textureList[]=
		{
			"LS_ACF_ARL_RM70_aur_splinter",
			1
		};
		class texturesources
		{
			class LS_ACF_ARL_RM70_aur_splinter
			{
				DisplayName="CAMTAC (Aurelia)";
				author="(S)Zumek";
				textures[]=
				{
					"\LS_ACF_Aurelia\vehicles\Tatra\LS_ACF_AUR_rm70_body1_CAMTAC_co.paa",
					"\LS_ACF_Aurelia\vehicles\Tatra\LS_ACF_AUR_rm70_body2_CAMTAC_co.paa",
					"\LS_ACF_Aurelia\vehicles\Tatra\LS_ACF_AUR_rm70_body3_CAMTAC_co.paa",
					"\LS_ACF_Aurelia\vehicles\Tatra\LS_ACF_AUR_rm70_uc_CAMTAC_co.paa",
					""
				};
			};
		};
	};	

	//////////////////////////////////ARMOR/////////////////////////////ARMOR/////////////////////////////ARMOR/////////////////////////////ARMOR/////////////////////////////

	class B_T_APC_Wheeled_01_cannon_F;
	class LS_ACF_ARL_B_Badger_01: B_T_APC_Wheeled_01_cannon_F
	{
		author="(S)Zumek";
		displayName="Badger IFV";
        side=1;
		scope=2;
		scopeCurator=2;
		faction="LS_ACF_B_AURELIA";
		crew="LS_ACF_B_ARL_Crewman";
		editorPreview="\LS_ACF_Aurelia\UI\LS_ACF_ARL_B_Badger_01.jpg";
		class TransportWeapons
		{
			class _xx_LS_ACF_ARL_weapon_arifle_CZ805A2_STANAG_blk
			{
				weapon="LS_ACF_ARL_weapon_arifle_CZ805A2_STANAG_blk";
				count=2;
			};
			class _xx_CUP_launch_M72A6
			{
				weapon="CUP_launch_M72A6";
				count=2;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_30Rnd_556x45_PMAG_BLACK_RPL
			{
				magazine="CUP_30Rnd_556x45_PMAG_BLACK_RPL";
				count=10;
			};
			class _xx_CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M
			{
				magazine="CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M";
				count=4;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=4;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=4;
			};
			class _xx_Chemlight_blue
			{
				magazine="Chemlight_blue";
				count=4;
			};
		};	
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_MediKit
			{
				name="MediKit";
				count=1;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
		class TransportBackpacks
		{
			class _xx_LS_ACF_ARL_B_Tactical_Pack_Aurcam
			{
				backpack="LS_ACF_ARL_B_Tactical_Pack_Aurcam";
				count=2;
			};
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"CamoNet",
			"CamoSlat"
		};		
		hiddenSelectionsTextures[]=
		{
			"\LS_ACF_Aurelia\vehicles\Badger\ls_acf_arl_marshall_base_camtac_co.paa",
			"\LS_ACF_Aurelia\vehicles\Badger\ls_acf_arl_marshall_adds_camtac_co.paa",
			"\LS_ACF_Aurelia\vehicles\Badger\ls_acf_arl_marshall_tows_camtac_co.paa",
			"a3\Armor_F\Data\camonet_NATO_Green_CO.paa",
			"a3\Armor_F\Data\cage_olive_CO.paa"
		};
		textureList[]=
		{
			"LS_ACF_ARL_Badger_aur_splinter",
			1
		};
		class texturesources
		{
			class LS_ACF_ARL_Badger_aur_splinter
			{
				DisplayName="CAMTAC (Aurelia)";
				author="(S)Zumek";
				textures[]=
				{
					"\LS_ACF_Aurelia\vehicles\Badger\ls_acf_arl_marshall_base_camtac_co.paa",
			        "\LS_ACF_Aurelia\vehicles\Badger\ls_acf_arl_marshall_adds_camtac_co.paa",
			        "\LS_ACF_Aurelia\vehicles\Badger\ls_acf_arl_marshall_tows_camtac_co.paa",
			        "a3\Armor_F\Data\camonet_NATO_Green_CO.paa",
			        "a3\Armor_F\Data\cage_olive_CO.paa"
				};
			};
		};
	};
	class LS_ACF_ARL_B_Badger_01_U: B_T_APC_Wheeled_01_cannon_F
	{
		author="(S)Zumek";
		displayName="Badger Unarmed";
        side=1;
		scope=2;
		scopeCurator=2;
		faction="LS_ACF_B_AURELIA";
		crew="LS_ACF_B_ARL_Crewman";
		editorPreview="\LS_ACF_Aurelia\UI\LS_ACF_ARL_B_Badger_01_U.jpg";	
		class TransportWeapons
		{
			class _xx_LS_ACF_ARL_weapon_arifle_CZ805A2_STANAG_blk
			{
				weapon="LS_ACF_ARL_weapon_arifle_CZ805A2_STANAG_blk";
				count=2;
			};
			class _xx_CUP_launch_M72A6
			{
				weapon="CUP_launch_M72A6";
				count=2;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_30Rnd_556x45_PMAG_BLACK_RPL
			{
				magazine="CUP_30Rnd_556x45_PMAG_BLACK_RPL";
				count=10;
			};
			class _xx_CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M
			{
				magazine="CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M";
				count=4;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=4;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=4;
			};
			class _xx_Chemlight_blue
			{
				magazine="Chemlight_blue";
				count=4;
			};
		};	
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_MediKit
			{
				name="MediKit";
				count=1;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
		class TransportBackpacks
		{
			class _xx_LS_ACF_ARL_B_Tactical_Pack_Aurcam
			{
				backpack="LS_ACF_ARL_B_Tactical_Pack_Aurcam";
				count=2;
			};
		};
		class AnimationSources: AnimationSources
		{
			class HideTurret
			{
				source="user";
				initPhase=1;
				animPeriod=0.001;
			};
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"CamoNet",
			"CamoSlat"
		};		
		hiddenSelectionsTextures[]=
		{
			"\LS_ACF_Aurelia\vehicles\Badger\ls_acf_arl_marshall_base_camtac_co.paa",
			"\LS_ACF_Aurelia\vehicles\Badger\ls_acf_arl_marshall_adds_camtac_co.paa",
			"\LS_ACF_Aurelia\vehicles\Badger\ls_acf_arl_marshall_tows_camtac_co.paa",
			"a3\Armor_F\Data\camonet_NATO_Green_CO.paa",
			"a3\Armor_F\Data\cage_olive_CO.paa"
		};
		textureList[]=
		{
			"LS_ACF_ARL_Badger_aur_splinter",
			1
		};
	};
	class CUP_B_FV432_Bulldog_GB_W_RWS;
	class LS_ACF_ARL_B_Bulldog_RWS: CUP_B_FV432_Bulldog_GB_W_RWS
	{
		author="(S)Zumek";
		displayName="FV432 Bulldog (RWS)";
        side=1;
		scope=2;
		scopeCurator=2;
		faction="LS_ACF_B_AURELIA";
		crew="LS_ACF_B_ARL_Crewman";
		editorPreview="\LS_ACF_Aurelia\UI\LS_ACF_ARL_B_Bulldog_RWS.jpg";	
		class TransportWeapons
		{
			class _xx_LS_ACF_ARL_weapon_arifle_CZ805A2_STANAG_blk
			{
				weapon="LS_ACF_ARL_weapon_arifle_CZ805A2_STANAG_blk";
				count=2;
			};
			class _xx_CUP_launch_M72A6
			{
				weapon="CUP_launch_M72A6";
				count=2;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_30Rnd_556x45_PMAG_BLACK_RPL
			{
				magazine="CUP_30Rnd_556x45_PMAG_BLACK_RPL";
				count=10;
			};
			class _xx_CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M
			{
				magazine="CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M";
				count=4;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=4;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=4;
			};
			class _xx_Chemlight_blue
			{
				magazine="Chemlight_blue";
				count=4;
			};
		};	
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_MediKit
			{
				name="MediKit";
				count=1;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
		class TransportBackpacks
		{
			class _xx_LS_ACF_ARL_B_Tactical_Pack_Aurcam
			{
				backpack="LS_ACF_ARL_B_Tactical_Pack_Aurcam";
				count=2;
			};
		};
		hiddenSelections[]=
		{
			"tex1","tex2","tex3","tex4"
		};		
		hiddenSelectionsTextures[]=
		{
			"\LS_ACF_Aurelia\vehicles\Bulldog\LS_ACF_ARL_bulldog_01_CAMTAC_co.paa",
			"\LS_ACF_Aurelia\vehicles\Bulldog\LS_ACF_ARL_bulldog_02_CAMTAC_co.paa",
			"\LS_ACF_Aurelia\vehicles\Bulldog\LS_ACF_ARL_bulldog_03_CAMTAC_co.paa",
			"\LS_ACF_Aurelia\vehicles\Bulldog\LS_ACF_ARL_bulldog_01_rws_CAMTAC_co.paa"
		};
		textureList[]=
		{
			"LS_ACF_ARL_Bulldog_RWS_CAMTAC",
			1
		};
		class texturesources
		{
			class LS_ACF_ARL_Bulldog_RWS_CAMTAC
			{
				DisplayName="CAMTAC (Aurelia)";
				author="(S)Zumek";
				textures[]=
				{
					"\LS_ACF_Aurelia\vehicles\Bulldog\LS_ACF_ARL_bulldog_01_CAMTAC_co.paa",
			        "\LS_ACF_Aurelia\vehicles\Bulldog\LS_ACF_ARL_bulldog_02_CAMTAC_co.paa",
			        "\LS_ACF_Aurelia\vehicles\Bulldog\LS_ACF_ARL_bulldog_03_CAMTAC_co.paa",
			        "\LS_ACF_Aurelia\vehicles\Bulldog\LS_ACF_ARL_bulldog_01_rws_CAMTAC_co.paa"
				};
			};
		};
	};	
	class CUP_B_FV432_Bulldog_GB_W;
	class LS_ACF_ARL_B_Bulldog_MG: CUP_B_FV432_Bulldog_GB_W
	{
		author="(S)Zumek";
		displayName="FV432 Bulldog (MG)";
        side=1;
		scope=2;
		scopeCurator=2;
		faction="LS_ACF_B_AURELIA";
		crew="LS_ACF_B_ARL_Crewman";
		editorPreview="\LS_ACF_Aurelia\UI\LS_ACF_ARL_B_Bulldog_MG.jpg";	
		class TransportWeapons
		{
			class _xx_LS_ACF_ARL_weapon_arifle_CZ805A2_STANAG_blk
			{
				weapon="LS_ACF_ARL_weapon_arifle_CZ805A2_STANAG_blk";
				count=2;
			};
			class _xx_CUP_launch_M72A6
			{
				weapon="CUP_launch_M72A6";
				count=2;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_30Rnd_556x45_PMAG_BLACK_RPL
			{
				magazine="CUP_30Rnd_556x45_PMAG_BLACK_RPL";
				count=10;
			};
			class _xx_CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M
			{
				magazine="CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M";
				count=4;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=4;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=4;
			};
			class _xx_Chemlight_blue
			{
				magazine="Chemlight_blue";
				count=4;
			};
		};	
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_MediKit
			{
				name="MediKit";
				count=1;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
		class TransportBackpacks
		{
			class _xx_LS_ACF_ARL_B_Tactical_Pack_Aurcam
			{
				backpack="LS_ACF_ARL_B_Tactical_Pack_Aurcam";
				count=2;
			};
		};
		hiddenSelections[]=
		{
			"tex1","tex2","tex3","tex4","tex5","turret_bar"
		};		
		hiddenSelectionsTextures[]=
		{
			"\LS_ACF_Aurelia\vehicles\Bulldog\LS_ACF_ARL_bulldog_01_CAMTAC_co.paa",
			"\LS_ACF_Aurelia\vehicles\Bulldog\LS_ACF_ARL_bulldog_02_CAMTAC_co.paa",
			"\LS_ACF_Aurelia\vehicles\Bulldog\LS_ACF_ARL_bulldog_03_CAMTAC_co.paa",
			"\LS_ACF_Aurelia\vehicles\Bulldog\LS_ACF_ARL_bulldog_01_rws_CAMTAC_co.paa",
			"\LS_ACF_Aurelia\vehicles\Bulldog\LS_ACF_ARL_bulldog_05_CAMTAC_co.paa",
			"\LS_ACF_Aurelia\vehicles\Bulldog\LS_ACF_ARL_bulldog_turretbar_CAMTAC_co.paa"
		};
		textureList[]=
		{
			"LS_ACF_ARL_Bulldog_MG_CAMTAC",
			1
		};
		class texturesources
		{
			class LS_ACF_ARL_Bulldog_MG_CAMTAC
			{
				DisplayName="CAMTAC (Aurelia)";
				author="(S)Zumek";
				textures[]=
				{
					"\LS_ACF_Aurelia\vehicles\Bulldog\LS_ACF_ARL_bulldog_01_CAMTAC_co.paa",
					"\LS_ACF_Aurelia\vehicles\Bulldog\LS_ACF_ARL_bulldog_02_CAMTAC_co.paa",
					"\LS_ACF_Aurelia\vehicles\Bulldog\LS_ACF_ARL_bulldog_03_CAMTAC_co.paa",
					"\LS_ACF_Aurelia\vehicles\Bulldog\LS_ACF_ARL_bulldog_01_rws_CAMTAC_co.paa",
					"\LS_ACF_Aurelia\vehicles\Bulldog\LS_ACF_ARL_bulldog_05_CAMTAC_co.paa",
					"\LS_ACF_Aurelia\vehicles\Bulldog\LS_ACF_ARL_bulldog_turretbar_CAMTAC_co.paa"
				};
			};
		};
	};
	class CUP_B_FV432_GB_GPMG;
	class LS_ACF_ARL_B_FV432_MG: CUP_B_FV432_GB_GPMG
	{
		author="(S)Zumek";
		displayName="FV432 (MG)";
        side=1;
		scope=2;
		scopeCurator=2;
		faction="LS_ACF_B_AURELIA";
		crew="LS_ACF_B_ARL_Crewman";
		editorPreview="\LS_ACF_Aurelia\UI\LS_ACF_ARL_B_FV432_MG.jpg";	
		class TransportWeapons
		{
			class _xx_LS_ACF_ARL_weapon_arifle_CZ805A2_STANAG_blk
			{
				weapon="LS_ACF_ARL_weapon_arifle_CZ805A2_STANAG_blk";
				count=2;
			};
			class _xx_CUP_launch_M72A6
			{
				weapon="CUP_launch_M72A6";
				count=2;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_30Rnd_556x45_PMAG_BLACK_RPL
			{
				magazine="CUP_30Rnd_556x45_PMAG_BLACK_RPL";
				count=10;
			};
			class _xx_CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M
			{
				magazine="CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M";
				count=4;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=4;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=4;
			};
			class _xx_Chemlight_blue
			{
				magazine="Chemlight_blue";
				count=4;
			};
		};	
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_MediKit
			{
				name="MediKit";
				count=1;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
		class TransportBackpacks
		{
			class _xx_LS_ACF_ARL_B_Tactical_Pack_Aurcam
			{
				backpack="LS_ACF_ARL_B_Tactical_Pack_Aurcam";
				count=2;
			};
		};
		hiddenSelections[]=
		{
			"tex1","tex2","tex3","tex4","tex5","turret_bar"
		};	
		hiddenSelectionsTextures[]=
		{
			"\LS_ACF_Aurelia\vehicles\Bulldog\LS_ACF_ARL_bulldog_CAMTAC_co.paa",
			"\LS_ACF_Aurelia\vehicles\Bulldog\LS_ACF_ARL_bulldog_02_CAMTAC_co.paa",
			"\LS_ACF_Aurelia\vehicles\Bulldog\LS_ACF_ARL_bulldog_03_CAMTAC_co.paa",
			"\LS_ACF_Aurelia\vehicles\Bulldog\LS_ACF_ARL_bulldog_01_rws_CAMTAC_co.paa",
			"\LS_ACF_Aurelia\vehicles\Bulldog\LS_ACF_ARL_bulldog_05_CAMTAC_co.paa",
			"\LS_ACF_Aurelia\vehicles\Bulldog\LS_ACF_ARL_bulldog_turretbar_CAMTAC_co.paa"
		};
		textureList[]=
		{
			"LS_ACF_ARL_FV432_MG_CAMTAC",
			1
		};
		class texturesources
		{
			class LS_ACF_ARL_FV432_MG_CAMTAC
			{
				DisplayName="CAMTAC (Aurelia)";
				author="(S)Zumek";
				textures[]=
				{
					"\LS_ACF_Aurelia\vehicles\Bulldog\LS_ACF_ARL_bulldog_CAMTAC_co.paa",
					"\LS_ACF_Aurelia\vehicles\Bulldog\LS_ACF_ARL_bulldog_02_CAMTAC_co.paa",
					"\LS_ACF_Aurelia\vehicles\Bulldog\LS_ACF_ARL_bulldog_03_CAMTAC_co.paa",
					"\LS_ACF_Aurelia\vehicles\Bulldog\LS_ACF_ARL_bulldog_01_rws_CAMTAC_co.paa",
					"\LS_ACF_Aurelia\vehicles\Bulldog\LS_ACF_ARL_bulldog_05_CAMTAC_co.paa",
					"\LS_ACF_Aurelia\vehicles\Bulldog\LS_ACF_ARL_bulldog_turretbar_CAMTAC_co.paa"
				};
			};
		};
	};	
	class CUP_B_FV432_GB_Ambulance;
	class LS_ACF_ARL_B_FV432_MEV: CUP_B_FV432_GB_Ambulance
	{
		author="(S)Zumek";
		displayName="FV432 (MED)";
        side=1;
		scope=2;
		faction="LS_ACF_B_AURELIA";
		crew="LS_ACF_B_ARL_Crewman";
		editorPreview="\LS_ACF_Aurelia\UI\LS_ACF_ARL_B_FV432_MEV.jpg";
		class TransportWeapons
		{
			class _xx_LS_ACF_ARL_weapon_arifle_CZ805A2_STANAG_blk
			{
				weapon="LS_ACF_ARL_weapon_arifle_CZ805A2_STANAG_blk";
				count=1;
			};
			class _xx_CUP_launch_M72A6
			{
				weapon="CUP_launch_M72A6";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_30Rnd_556x45_PMAG_BLACK_RPL
			{
				magazine="CUP_30Rnd_556x45_PMAG_BLACK_RPL";
				count=10;
			};
			class _xx_CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M
			{
				magazine="CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M";
				count=4;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=4;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=4;
			};
			class _xx_Chemlight_blue
			{
				magazine="Chemlight_blue";
				count=4;
			};
		};	
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_MediKit
			{
				name="MediKit";
				count=2;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
		class TransportBackpacks
		{
			class _xx_LS_ACF_ARL_B_Tactical_Pack_Aurcam
			{
				backpack="LS_ACF_ARL_B_Tactical_Pack_Aurcam";
				count=2;
			};
		};
		hiddenSelections[]=
		{
			"tex1","tex2","tex3","tex4","tex5","turret_bar"
		};	
		hiddenSelectionsTextures[]=
		{
			"\LS_ACF_Aurelia\vehicles\Bulldog\LS_ACF_ARL_bulldog_CAMTAC_co.paa",
			"\LS_ACF_Aurelia\vehicles\Bulldog\LS_ACF_ARL_bulldog_02_CAMTAC_co.paa",
			"\LS_ACF_Aurelia\vehicles\Bulldog\LS_ACF_ARL_bulldog_03_CAMTAC_co.paa",
			"\LS_ACF_Aurelia\vehicles\Bulldog\LS_ACF_ARL_bulldog_01_rws_CAMTAC_co.paa",
			"\LS_ACF_Aurelia\vehicles\Bulldog\LS_ACF_ARL_bulldog_05_CAMTAC_co.paa",
			"\LS_ACF_Aurelia\vehicles\Bulldog\LS_ACF_ARL_bulldog_turretbar_CAMTAC_co.paa"
		};
		textureList[]=
		{
			"LS_ACF_ARL_FV432_MED_CAMTAC",
			1
		};
		class texturesources
		{
			class LS_ACF_ARL_FV432_MED_CAMTAC
			{
				DisplayName="CAMTAC (Aurelia)";
				author="(S)Zumek";
				textures[]=
				{
					"\LS_ACF_Aurelia\vehicles\Bulldog\LS_ACF_ARL_bulldog_CAMTAC_co.paa",
					"\LS_ACF_Aurelia\vehicles\Bulldog\LS_ACF_ARL_bulldog_02_CAMTAC_co.paa",
					"\LS_ACF_Aurelia\vehicles\Bulldog\LS_ACF_ARL_bulldog_03_CAMTAC_co.paa",
					"\LS_ACF_Aurelia\vehicles\Bulldog\LS_ACF_ARL_bulldog_01_rws_CAMTAC_co.paa",
					"\LS_ACF_Aurelia\vehicles\Bulldog\LS_ACF_ARL_bulldog_05_CAMTAC_co.paa",
					"\LS_ACF_Aurelia\vehicles\Bulldog\LS_ACF_ARL_bulldog_turretbar_CAMTAC_co.paa"
				};
			};
		};
	};	
	class CUP_B_FV432_Mortar;
	class LS_ACF_ARL_B_FV432_Mortar: CUP_B_FV432_Mortar
	{
		author="(S)Zumek";
		displayName="FV432 (Mortar)";
        side=1;
		scope=2;
		faction="LS_ACF_B_AURELIA";
		crew="LS_ACF_B_ARL_Crewman";
		editorSubcategory="EdSubcat_Artillery";
		editorPreview="\LS_ACF_Aurelia\UI\LS_ACF_ARL_B_FV432_Mortar.jpg";
		class TransportWeapons
		{
			class _xx_LS_ACF_ARL_weapon_arifle_CZ805A2_STANAG_blk
			{
				weapon="LS_ACF_ARL_weapon_arifle_CZ805A2_STANAG_blk";
				count=2;
			};
			class _xx_CUP_launch_M72A6
			{
				weapon="CUP_launch_M72A6";
				count=2;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_30Rnd_556x45_PMAG_BLACK_RPL
			{
				magazine="CUP_30Rnd_556x45_PMAG_BLACK_RPL";
				count=10;
			};
			class _xx_CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M
			{
				magazine="CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M";
				count=4;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=4;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=4;
			};
			class _xx_Chemlight_blue
			{
				magazine="Chemlight_blue";
				count=4;
			};
		};	
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_MediKit
			{
				name="MediKit";
				count=1;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
		class TransportBackpacks
		{
			class _xx_LS_ACF_ARL_B_Tactical_Pack_Aurcam
			{
				backpack="LS_ACF_ARL_B_Tactical_Pack_Aurcam";
				count=2;
			};
		};
		hiddenSelections[]=
		{
			"tex1","tex2","tex3","tex4","tex5","turret_bar"
		};	
		hiddenSelectionsTextures[]=
		{
			"\LS_ACF_Aurelia\vehicles\Bulldog\LS_ACF_ARL_bulldog_CAMTAC_co.paa",
			"\LS_ACF_Aurelia\vehicles\Bulldog\LS_ACF_ARL_bulldog_02_CAMTAC_co.paa",
			"\LS_ACF_Aurelia\vehicles\Bulldog\LS_ACF_ARL_bulldog_03_CAMTAC_co.paa",
			"\LS_ACF_Aurelia\vehicles\Bulldog\LS_ACF_ARL_bulldog_01_rws_CAMTAC_co.paa",
			"\LS_ACF_Aurelia\vehicles\Bulldog\LS_ACF_ARL_bulldog_05_CAMTAC_co.paa",
			"\LS_ACF_Aurelia\vehicles\Bulldog\LS_ACF_ARL_bulldog_turretbar_CAMTAC_co.paa"
		};
		textureList[]=
		{
			"LS_ACF_ARL_FV432_Mortar_CAMTAC",
			1
		};
		class texturesources
		{
			class LS_ACF_ARL_FV432_Mortar_CAMTAC
			{
				DisplayName="CAMTAC (Aurelia)";
				author="(S)Zumek";
				textures[]=
				{
					"\LS_ACF_Aurelia\vehicles\Bulldog\LS_ACF_ARL_bulldog_CAMTAC_co.paa",
					"\LS_ACF_Aurelia\vehicles\Bulldog\LS_ACF_ARL_bulldog_02_CAMTAC_co.paa",
					"\LS_ACF_Aurelia\vehicles\Bulldog\LS_ACF_ARL_bulldog_03_CAMTAC_co.paa",
					"\LS_ACF_Aurelia\vehicles\Bulldog\LS_ACF_ARL_bulldog_01_rws_CAMTAC_co.paa",
					"\LS_ACF_Aurelia\vehicles\Bulldog\LS_ACF_ARL_bulldog_05_CAMTAC_co.paa",
					"\LS_ACF_Aurelia\vehicles\Bulldog\LS_ACF_ARL_bulldog_turretbar_CAMTAC_co.paa"
				};
			};
		};
	};

	///////////ANTI-AIR///////////////////ANTI-AIR///////////ANTI-AIR///////////ANTI-AIR///////////ANTI-AIR///////////ANTI-AIR///////////ANTI-AIR////

	class CUP_I_LR_AA_AAF;
	class LS_ACF_ARL_B_Land_Rover_AA: CUP_I_LR_AA_AAF
	{
		author="(S)Zumek";
		displayName="Land Rover (AA)";
        side=1;
		scope=2;
		forceInGarage=1;
		faction="LS_ACF_B_AURELIA";
		crew="LS_ACF_B_ARL_Rifleman";
		editorPreview="\LS_ACF_Aurelia\UI\LS_ACF_ARL_B_Land_Rover_AA.jpg";
		class TransportWeapons
		{
			class _xx_LS_ACF_ARL_weapon_arifle_CZ805A2_STANAG_blk
			{
				weapon="LS_ACF_ARL_weapon_arifle_CZ805A2_STANAG_blk";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_30Rnd_556x45_PMAG_BLACK_RPL
			{
				magazine="CUP_30Rnd_556x45_PMAG_BLACK_RPL";
				count=10;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=4;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=4;
			};
			class _xx_Chemlight_blue
			{
				magazine="Chemlight_blue";
				count=4;
			};
		};	
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_MediKit
			{
				name="MediKit";
				count=1;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
		class TransportBackpacks
		{
			class _xx_LS_ACF_ARL_B_Tactical_Pack_Aurcam
			{
				backpack="LS_ACF_ARL_B_Tactical_Pack_Aurcam";
				count=2;
			};
		};
		animationList[]=
		{
			"selection_tool",0,"selection_jerry",1,"selection_antenna",0,"selection_antenna_rear",1,"selection_box",1,"selection_steps",0,"selection_wheelfront",1,"selection_bar",0,"selection_doors",0,"selection_rear",0,"selection_wind",0
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};			
		hiddenSelectionsTextures[]=
		{
			"\LS_ACF_Aurelia\vehicles\Land_Rover\LS_ACF_ARL_Land_Rover_base_camtac_co.paa",
			"\LS_ACF_Aurelia\vehicles\Land_Rover\LS_ACF_ARL_Land_Rover_special_camtac_co.paa",
			"\LS_ACF_Aurelia\vehicles\Land_Rover\LS_ACF_ARL_Land_Rover_special_camtac_co.paa",
			"cup\WheeledVehicles\CUP_WheeledVehicles_LR\data\jackal_mount_woodlnd_co.paa"
		};
		textureList[]=
		{
			"LS_ACF_ARL_Land_Rover_AA",
			1
		};
		class texturesources
		{
			class LS_ACF_ARL_Land_Rover_AA
			{
				DisplayName="Green";
				author="(S)Zumek";
				textures[]=
				{
					"\LS_ACF_Aurelia\vehicles\Land_Rover\LS_ACF_ARL_Land_Rover_base_camtac_co.paa",
			        "\LS_ACF_Aurelia\vehicles\Land_Rover\LS_ACF_ARL_Land_Rover_special_camtac_co.paa",
			        "\LS_ACF_Aurelia\vehicles\Land_Rover\LS_ACF_ARL_Land_Rover_special_camtac_co.paa",
			        "cup\WheeledVehicles\CUP_WheeledVehicles_LR\data\jackal_mount_woodlnd_co.paa"
				};
			};
		};
	};
	class CUP_2S6M_Base;
	class LS_ACF_ARL_B_Tunguska: CUP_2S6M_Base
	{
		author="(S)Zumek";
		displayName="2S6 Tunguska-M";
        side=1;
		scope=2;
		forceInGarage=1;
		faction="LS_ACF_B_AURELIA";
		crew="LS_ACF_B_ARL_Crewman";
		editorPreview="\LS_ACF_Aurelia\UI\LS_ACF_ARL_B_Tunguska.jpg";	
		class TransportWeapons
		{
			class _xx_hgun_PDW2000_F
			{
				weapon="hgun_PDW2000_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_9x21_Mag
			{
				magazine="30Rnd_9x21_Mag";
				count=10;
			};
			class xx_DemoCharge_Remote_Mag
			{
				magazine="DemoCharge_Remote_Mag";
				count=1;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=2;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_Chemlight_blue
			{
				magazine="Chemlight_blue";
				count=2;
			};
		};	
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_MediKit
			{
				name="MediKit";
				count=1;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
		class TransportBackpacks
		{
			class _xx_LS_ACF_ARL_B_Tactical_Pack_Aurcam
			{
				backpack="LS_ACF_ARL_B_Tactical_Pack_Aurcam";
				count=2;
			};
		};
		hiddenSelectionsTextures[]=
		{
			"\LS_ACF_Aurelia\vehicles\Tunguska\LS_ACF_ARL_tunguska_hull_and_hatches_CAMTAC_co.paa",
			"\LS_ACF_Aurelia\vehicles\Tunguska\LS_ACF_ARL_tunguska_hull_and_tracks_CAMTAC_co.paa",
			"\LS_ACF_Aurelia\vehicles\Tunguska\LS_ACF_ARL_tunguska_turret_CAMTAC_co.paa"
		};
		textureList[]=
		{
			"LS_ACF_ARL_tunguska_CAMTAC",
			1
		};	
		class texturesources
		{
			class LS_ACF_ARL_tunguska_CAMTAC
			{
				DisplayName="CAMTAC (Aurelia)";
				author="(S)Zumek";
				textures[]=
				{
					"\LS_ACF_Aurelia\vehicles\Tunguska\LS_ACF_ARL_tunguska_hull_and_hatches_CAMTAC_co.paa",
			        "\LS_ACF_Aurelia\vehicles\Tunguska\LS_ACF_ARL_tunguska_hull_and_tracks_CAMTAC_co.paa",
			        "\LS_ACF_Aurelia\vehicles\Tunguska\LS_ACF_ARL_tunguska_turret_CAMTAC_co.paa"
				};
			};
		};
	};	

	///////////TANK/////////////TANK/////////////TANK/////////////TANK/////////////TANK/////////////TANK/////////////TANK///////////TANK///////////TANK////

	class CUP_O_T90_RU;
	class LS_ACF_ARL_B_T90A: CUP_O_T90_RU
	{
		author="(S)Zumek";
		displayName="VT-90A";
        side=1;
		scope=2;
		scopeCurator=2;
		faction="LS_ACF_B_AURELIA";
		crew="LS_ACF_B_ARL_Crewman";
		editorPreview="\LS_ACF_Aurelia\UI\LS_ACF_ARL_B_T90A.jpg";			
		class TransportWeapons
		{
			class _xx_hgun_PDW2000_F
			{
				weapon="hgun_PDW2000_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_9x21_Mag
			{
				magazine="30Rnd_9x21_Mag";
				count=10;
			};
			class xx_DemoCharge_Remote_Mag
			{
				magazine="DemoCharge_Remote_Mag";
				count=2;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=2;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_Chemlight_blue
			{
				magazine="Chemlight_blue";
				count=2;
			};
		};	
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_MediKit
			{
				name="MediKit";
				count=1;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
		class TransportBackpacks
		{
			class _xx_LS_ACF_ARL_B_Tactical_Pack_Aurcam
			{
				backpack="LS_ACF_ARL_B_Tactical_Pack_Aurcam";
				count=2;
			};
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};	
		hiddenSelectionsTextures[]=
		{
			"\LS_ACF_Aurelia\vehicles\VT90\LS_ACF_ARL_VT90A_body1_CAMTAC_co.paa",
			"\LS_ACF_Aurelia\vehicles\VT90\LS_ACF_ARL_VT90A_body2_CAMTAC_co.paa",
			"\LS_ACF_Aurelia\vehicles\VT90\LS_ACF_ARL_VT90A_body3_CAMTAC_co.paa"
		};
		textureList[]=
		{
			"LS_ACF_ARL_T90A_CAMTAC",
			1
		};	
		class texturesources
		{
			class LS_ACF_ARL_T90A_CAMTAC
			{
				DisplayName="CAMTAC (Aurelia)";
				author="(S)Zumek";
				textures[]=
				{
					"\LS_ACF_Aurelia\vehicles\VT90\LS_ACF_ARL_VT90A_body1_CAMTAC_co.paa",
					"\LS_ACF_Aurelia\vehicles\VT90\LS_ACF_ARL_VT90A_body2_CAMTAC_co.paa",
					"\LS_ACF_Aurelia\vehicles\VT90\LS_ACF_ARL_VT90A_body3_CAMTAC_co.paa"
				};
			};
		};
	};	
	class CUP_T90MS_Base;
	class LS_ACF_ARL_B_T90MS: CUP_T90MS_Base
	{
		author="(S)Zumek";
		displayName="VT-90MS";
        side=1;
		scope=2;
		scopeCurator=2;
		faction="LS_ACF_B_AURELIA";
		crew="LS_ACF_B_ARL_Crewman";
		editorPreview="\LS_ACF_Aurelia\UI\LS_ACF_ARL_B_T90MS.jpg";				
		class TransportWeapons
		{
			class _xx_hgun_PDW2000_F
			{
				weapon="hgun_PDW2000_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_9x21_Mag
			{
				magazine="30Rnd_9x21_Mag";
				count=10;
			};
			class xx_DemoCharge_Remote_Mag
			{
				magazine="DemoCharge_Remote_Mag";
				count=2;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=2;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_Chemlight_blue
			{
				magazine="Chemlight_blue";
				count=2;
			};
		};	
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_MediKit
			{
				name="MediKit";
				count=1;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
		class TransportBackpacks
		{
			class _xx_LS_ACF_ARL_B_Tactical_Pack_Aurcam
			{
				backpack="LS_ACF_ARL_B_Tactical_Pack_Aurcam";
				count=2;
			};
		};
		hiddenSelections[]=
		{
			"camo1","camo2","camo3","camo4","camo5","camonet"
		};	
		hiddenSelectionsTextures[]=
		{
			"\LS_ACF_Aurelia\vehicles\VT90\LS_ACF_ARL_VT90MS_Hull_CAMTAC_co.paa",
			"\LS_ACF_Aurelia\vehicles\VT90\LS_ACF_ARL_VT90MS_wheels_CAMTAC_co.paa",
			"\LS_ACF_Aurelia\vehicles\VT90\LS_ACF_ARL_VT90MS_MS_Parts_CAMTAC_co.paa",
			"\LS_ACF_Aurelia\vehicles\VT90\LS_ACF_ARL_VT90MS_turret_base_CAMTAC_co.paa",
			"\LS_ACF_Aurelia\vehicles\VT90\LS_ACF_ARL_VT90MS_turret_MS_Parts_CAMTAC_co.paa",
			"\a3\armor_f\data\camonet_nato_green_co.paa"
		};
		textureList[]=
		{
			"LS_ACF_ARL_T90MS_CAMTAC",
			1
		};	
		class texturesources
		{
			class LS_ACF_ARL_T90MS_CAMTAC
			{
				DisplayName="CAMTAC (Aurelia)";
				author="(S)Zumek";
				textures[]=
				{
					"\LS_ACF_Aurelia\vehicles\VT90\LS_ACF_ARL_VT90MS_Hull_CAMTAC_co.paa",
					"\LS_ACF_Aurelia\vehicles\VT90\LS_ACF_ARL_VT90MS_wheels_CAMTAC_co.paa",
					"\LS_ACF_Aurelia\vehicles\VT90\LS_ACF_ARL_VT90MS_MS_Parts_CAMTAC_co.paa",
					"\LS_ACF_Aurelia\vehicles\VT90\LS_ACF_ARL_VT90MS_turret_base_CAMTAC_co.paa",
					"\LS_ACF_Aurelia\vehicles\VT90\LS_ACF_ARL_VT90MS_turret_MS_Parts_CAMTAC_co.paa",
					"\a3\armor_f\data\camonet_nato_green_co.paa"
				};
			};
		};
	};	

	/////////////////////////HELICOPTERS/////////////////////HELICOPTERS/////////////////////HELICOPTERS/////////////////////HELICOPTERS/////////////////////HELICOPTERS/////////////////////HELICOPTERS

	class Heli_light_03_unarmed_base_F;
	class LS_ACF_ARL_B_AW159_Unarmed_W: Heli_light_03_unarmed_base_F
	{
		author="(S)Zumek";
		displayName="SEA-195 Wildcat (Unarmed)";
        side=1;
		scope=2;
		scopeCurator=2;
		faction="LS_ACF_B_AURELIA";
		crew="LS_ACF_B_ARL_Helicopter_Pilot";
		editorPreview="\LS_ACF_Aurelia\UI\LS_ACF_ARL_B_AW159_Unarmed_W.jpg";			
		class TransportWeapons
		{
			class _xx_hgun_PDW2000_F
			{
				weapon="hgun_PDW2000_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_9x21_Mag
			{
				magazine="30Rnd_9x21_Mag";
				count=10;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=2;
			};
			class _xx_Chemlight_blue
			{
				magazine="Chemlight_blue";
				count=2;
			};
		};	
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=4;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
		class TransportBackpacks
		{
			class _xx_LS_ACF_ARL_B_Tactical_Pack_Aurcam
			{
				backpack="LS_ACF_ARL_B_Tactical_Pack_Aurcam";
				count=1;
			};
		};
		hiddenSelections[]=
		{
			"camo"
		};	
		hiddenSelectionsTextures[]=
		{
			"\LS_ACF_Aurelia\vehicles\Helicopters\LS_ACF_ARL_heli_light_base_3tone_co.paa",
		};
		textureList[]=
		{
			"LS_ACF_ARL_Wildcat_U_3tone",
			1
		};	
		class texturesources
		{
			class LS_ACF_ARL_Wildcat_U_3tone
			{
				DisplayName="Aurelia";
				author="(S)Zumek";
				textures[]=
				{
					"\LS_ACF_Aurelia\vehicles\Helicopters\LS_ACF_ARL_heli_light_base_3tone_co.paa"
				};
			};
		};
	};	
	class Heli_light_03_dynamicLoadout_base_F;
	class LS_ACF_ARL_B_AW159_W: Heli_light_03_dynamicLoadout_base_F
	{
		author="(S)Zumek";
		displayName="SEA-195 Wildcat";
        side=1;
		scope=2;
		scopeCurator=2;
		faction="LS_ACF_B_AURELIA";
		crew="LS_ACF_B_ARL_Helicopter_Pilot";
		editorPreview="\LS_ACF_Aurelia\UI\LS_ACF_ARL_B_AW159_W.jpg";	
		class TransportWeapons
		{
			class _xx_hgun_PDW2000_F
			{
				weapon="hgun_PDW2000_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_9x21_Mag
			{
				magazine="30Rnd_9x21_Mag";
				count=10;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=2;
			};
			class _xx_Chemlight_blue
			{
				magazine="Chemlight_blue";
				count=2;
			};
		};	
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=4;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
		class TransportBackpacks
		{
			class _xx_LS_ACF_ARL_B_Tactical_Pack_Aurcam
			{
				backpack="LS_ACF_ARL_B_Tactical_Pack_Aurcam";
				count=1;
			};
		};
		hiddenSelections[]=
		{
			"camo","ammobox","ammobox_sign"
		};	
		hiddenSelectionsTextures[]=
		{
			"\LS_ACF_Aurelia\vehicles\Helicopters\LS_ACF_ARL_heli_light_base_3tone_co.paa",
			"a3\weapons_f\ammoboxes\data\ammobox_co.paa",
			"a3\weapons_f\ammoboxes\data\ammobox_signs_ca.paa"
		};
		textureList[]=
		{
			"LS_ACF_ARL_Wildcat_Green",
			1
		};	
		class texturesources
		{
			class LS_ACF_ARL_Wildcat_Green
			{
				DisplayName="Aurelia";
				author="(S)Zumek";
				textures[]=
				{
					"\LS_ACF_Aurelia\vehicles\Helicopters\LS_ACF_ARL_heli_light_base_3tone_co.paa",
					"a3\weapons_f\ammoboxes\data\ammobox_co.paa",
					"a3\weapons_f\ammoboxes\data\ammobox_signs_ca.paa"
				};
			};
		};
	};
	class CUP_I_Wildcat_Unarmed_Green_AAF;
	class LS_ACF_ARL_B_AW159_Unarmed_L: CUP_I_Wildcat_Unarmed_Green_AAF
	{
		author="(S)Zumek";
		displayName="SEA-190 Lynx (Unarmed)";
        side=1;
		scope=2;
		scopeCurator=2;
		faction="LS_ACF_B_AURELIA";
		crew="LS_ACF_B_ARL_Helicopter_Pilot";
		editorPreview="\LS_ACF_Aurelia\UI\LS_ACF_ARL_B_AW159_Unarmed_L.jpg";		
		class TransportWeapons
		{
			class _xx_hgun_PDW2000_F
			{
				weapon="hgun_PDW2000_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_9x21_Mag
			{
				magazine="30Rnd_9x21_Mag";
				count=10;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=2;
			};
			class _xx_Chemlight_blue
			{
				magazine="Chemlight_blue";
				count=2;
			};
		};	
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=4;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
		class TransportBackpacks
		{
			class _xx_LS_ACF_ARL_B_Tactical_Pack_Aurcam
			{
				backpack="LS_ACF_ARL_B_Tactical_Pack_Aurcam";
				count=1;
			};
		};
		hiddenSelections[]=
		{
			"camo1","camo2"
		};	
		hiddenSelectionsTextures[]=
		{
			"\LS_ACF_Aurelia\vehicles\Helicopters\LS_ACF_ARL_heli_light_base_3tone_co.paa",
			"\CUP\AirVehicles\CUP_AirVehicles_AW159\data\ah64d_details_co.paa"
		};
		textureList[]=
		{
			"LS_ACF_ARL_Lynx_Green",
			1
		};	
		class texturesources
		{
			class LS_ACF_ARL_Lynx_Green
			{
				DisplayName="Aurelia";
				author="(S)Zumek";
				textures[]=
				{
					"\LS_ACF_Aurelia\vehicles\Helicopters\LS_ACF_ARL_heli_light_base_3tone_co.paa",
					"\CUP\AirVehicles\CUP_AirVehicles_AW159\data\ah64d_details_co.paa"
				};
			};
		};
	};	
	class CUP_I_Wildcat_Green_AAF;
	class LS_ACF_ARL_B_AW159_L: CUP_I_Wildcat_Green_AAF
	{
		author="(S)Zumek";
		displayName="SEA-190 Lynx";
        side=1;
		scope=2;
		scopeCurator=2;
		faction="LS_ACF_B_AURELIA";
		crew="LS_ACF_B_ARL_Helicopter_Pilot";
		editorPreview="\LS_ACF_Aurelia\UI\LS_ACF_ARL_B_AW159_L.jpg";		
		class TransportWeapons
		{
			class _xx_hgun_PDW2000_F
			{
				weapon="hgun_PDW2000_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_9x21_Mag
			{
				magazine="30Rnd_9x21_Mag";
				count=10;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=2;
			};
			class _xx_Chemlight_blue
			{
				magazine="Chemlight_blue";
				count=2;
			};
		};	
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=4;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
		class TransportBackpacks
		{
			class _xx_LS_ACF_ARL_B_Tactical_Pack_Aurcam
			{
				backpack="LS_ACF_ARL_B_Tactical_Pack_Aurcam";
				count=1;
			};
		};
		hiddenSelections[]=
		{
			"camo1","camo2"
		};	
		hiddenSelectionsTextures[]=
		{
			"\LS_ACF_Aurelia\vehicles\Helicopters\LS_ACF_ARL_heli_light_base_3tone_co.paa",
			"\CUP\AirVehicles\CUP_AirVehicles_AW159\data\ah64d_details_co.paa"
		};
		textureList[]=
		{
			"LS_ACF_ARL_Lynx_A_Green",
			1
		};	
		class texturesources
		{
			class LS_ACF_ARL_Lynx_A_Green
			{
				DisplayName="Aurelia";
				author="(S)Zumek";
				textures[]=
				{
					"\LS_ACF_Aurelia\vehicles\Helicopters\LS_ACF_ARL_heli_light_base_3tone_co.paa",
					"\CUP\AirVehicles\CUP_AirVehicles_AW159\data\ah64d_details_co.paa"
				};
			};
		};
	};	
	class CUP_B_SA330_Puma_HC2_BAF;
	class LS_ACF_ARL_B_SA330_2: CUP_B_SA330_Puma_HC2_BAF
	{
		author="(S)Zumek";
		displayName="ATH-330 Magpie";
        side=1;
		scope=2;
		scopeCurator=2;
		faction="LS_ACF_B_AURELIA";
		crew="LS_ACF_B_ARL_Helicopter_Pilot";
		editorPreview="\LS_ACF_Aurelia\UI\LS_ACF_ARL_B_SA330_2.jpg";			
		class TransportWeapons
		{
			class _xx_hgun_PDW2000_F
			{
				weapon="hgun_PDW2000_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_9x21_Mag
			{
				magazine="30Rnd_9x21_Mag";
				count=10;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=2;
			};
			class _xx_Chemlight_blue
			{
				magazine="Chemlight_blue";
				count=2;
			};
		};	
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=4;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
		class TransportBackpacks
		{
			class _xx_LS_ACF_ARL_B_Tactical_Pack_Aurcam
			{
				backpack="LS_ACF_ARL_B_Tactical_Pack_Aurcam";
				count=1;
			};
		};
		hiddenSelections[]=
		{
			"_OFrP_330_skin01"
		};	
		hiddenSelectionsTextures[]=
		{
			"\LS_ACF_Aurelia\vehicles\Helicopters\LS_ACF_ARL_SA330_3tone_co.paa"
		};
		textureList[]=
		{
			"LS_ACF_ARL_Magpie_U_ARL",
			1
		};	
		class texturesources
		{
			class LS_ACF_ARL_Magpie_U_ARL
			{
				DisplayName="Aurelia";
				author="(S)Zumek";
				textures[]=
				{
					"\LS_ACF_Aurelia\vehicles\Helicopters\LS_ACF_ARL_SA330_3tone_co.paa"
				};
			};
		};
	};		
	class CUP_Mi35_Dynamic_Base;
	class LS_ACF_ARL_B_Mi35_wasp: CUP_Mi35_Dynamic_Base
	{
		author="(S)Zumek";
		displayName="SEA-35 Wasp";
        side=1;
		scope=2;
		scopeCurator=2;
		faction="LS_ACF_B_AURELIA";
		crew="LS_ACF_B_ARL_Helicopter_Pilot";
		editorPreview="\LS_ACF_Aurelia\UI\LS_ACF_ARL_B_Mi35_wasp.jpg";			
		class TransportWeapons
		{
			class _xx_hgun_PDW2000_F
			{
				weapon="hgun_PDW2000_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_9x21_Mag
			{
				magazine="30Rnd_9x21_Mag";
				count=10;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=2;
			};
			class _xx_Chemlight_blue
			{
				magazine="Chemlight_blue";
				count=2;
			};
		};	
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=4;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
		class TransportBackpacks
		{
			class _xx_LS_ACF_ARL_B_Tactical_Pack_Aurcam
			{
				backpack="LS_ACF_ARL_B_Tactical_Pack_Aurcam";
				count=1;
			};
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};	
		hiddenSelectionsTextures[]=
		{
			"\LS_ACF_Aurelia\vehicles\Helicopters\LS_ACF_AUR_mi24_01_3tone_co.paa",
			"\LS_ACF_Aurelia\vehicles\Helicopters\LS_ACF_AUR_mi24_02_3tone_co.paa"
		};
		textureList[]=
		{
			"LS_ACF_ARL_Wasp_3tone",
			1
		};	
		class texturesources
		{
			class LS_ACF_ARL_Wasp_3tone
			{
				DisplayName="Aurelia";
				author="(S)Zumek";
				textures[]=
				{
					"\LS_ACF_Aurelia\vehicles\Helicopters\LS_ACF_AUR_mi24_01_3tone_co.paa",
			        "\LS_ACF_Aurelia\vehicles\Helicopters\LS_ACF_AUR_mi24_02_3tone_co.paa"
				};
			};
		};
	};	
	class CUP_Mi35_TOH_Dynamic_Base;
	class LS_ACF_ARL_B_Mi35_wasp_2: CUP_Mi35_TOH_Dynamic_Base
	{
		author="(S)Zumek";
		displayName="SEA-35 Wasp II";
        side=1;
		scope=2;
		scopeCurator=2;
		faction="LS_ACF_B_AURELIA";
		crew="LS_ACF_B_ARL_Helicopter_Pilot";
		editorPreview="\LS_ACF_Aurelia\UI\LS_ACF_ARL_B_Mi35_wasp_2.jpg";			
		class TransportWeapons
		{
			class _xx_hgun_PDW2000_F
			{
				weapon="hgun_PDW2000_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_9x21_Mag
			{
				magazine="30Rnd_9x21_Mag";
				count=10;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=2;
			};
			class _xx_Chemlight_blue
			{
				magazine="Chemlight_blue";
				count=2;
			};
		};	
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=4;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
		class TransportBackpacks
		{
			class _xx_LS_ACF_ARL_B_Tactical_Pack_Aurcam
			{
				backpack="LS_ACF_ARL_B_Tactical_Pack_Aurcam";
				count=1;
			};
		};
		hiddenSelections[]=
		{
			"Camo1","Camo2", "camo3"
		};	
		hiddenSelectionsTextures[]=
		{
			"\LS_ACF_Aurelia\vehicles\Helicopters\LS_ACF_AUR_mi24_01_3tone_co.paa",
			"\LS_ACF_Aurelia\vehicles\Helicopters\LS_ACF_AUR_mi24_02_3tone_co.paa",
			"CUP\AirVehicles\CUP_AirVehicles_Mi35\Data\skins\27_ion_003_co.paa"
		};
		textureList[]=
		{
			"LS_ACF_ARL_Wasp_2_3tone",
			1
		};	
		class texturesources
		{
			class LS_ACF_ARL_Wasp_2_3tone
			{
				DisplayName="Aurelia";
				author="(S)Zumek";
				textures[]=
				{
					"\LS_ACF_Aurelia\vehicles\Helicopters\LS_ACF_AUR_mi24_01_3tone_co.paa",
					"\LS_ACF_Aurelia\vehicles\Helicopters\LS_ACF_AUR_mi24_02_3tone_co.paa",
					"CUP\AirVehicles\CUP_AirVehicles_Mi35\Data\skins\27_ion_003_co.paa"
				};
			};
		};
	};	

	/////////////////////////PLANES////////////////////////PLANES////////////////////////PLANES////////////////////////PLANES////////////////////////PLANES////////////////////////PLANES

    class CUP_C130J_Base;
	class LS_ACF_ARL_B_C130: CUP_C130J_Base
	{
		author="(S)Zumek";
		displayName="CA-130D";
        side=1;
		scope=2;
		scopeCurator=2;
		faction="LS_ACF_B_AURELIA";
		crew="LS_ACF_B_ARL_Jet_Pilot";	
		editorPreview="\LS_ACF_Aurelia\UI\LS_ACF_ARL_B_C130.jpg";	
		maximumLoad=3000;	
		class TransportMagazines
		{			
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=4;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=4;
			};
			class _xx_Chemlight_blue
			{
				magazine="Chemlight_blue";
				count=8;
			};
		};		
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_MediKit
			{
				name="MediKit";
				count=1;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack="B_Parachute";
				count=16;
			};
		};
		hiddenSelectionsTextures[]=
		{
			"\LS_ACF_Aurelia\vehicles\C130\LS_ACF_ARL_C130_body_olive_co.paa",
			"\LS_ACF_Aurelia\vehicles\C130\LS_ACF_ARL_C130_wings_olive_co.paa"
		};
		class textureSources
		{
			class LS_ACF_ARL_C130_olive
			{
				displayName="Aurelia";
			    author="(S)Zumek";
			    textures[]=
				{
					"\LS_ACF_Aurelia\vehicles\C130\LS_ACF_ARL_C130_body_olive_co.paa",
			        "\LS_ACF_Aurelia\vehicles\C130\LS_ACF_ARL_C130_wings_olive_co.paa"
				};				
			};
		};
	};
	class CUP_C130J_VIV_Base;
	class LS_ACF_ARL_B_C130_VIV: CUP_C130J_VIV_Base
	{
		author="(S)Zumek";
		displayName="CA-130D (VIV)";
        side=1;
		scope=2;
		scopeCurator=2;
		faction="LS_ACF_B_AURELIA";
		crew="LS_ACF_B_ARL_Jet_Pilot";	
		editorPreview="\LS_ACF_Aurelia\UI\LS_ACF_ARL_B_C130_VIV.jpg";	
		maximumLoad=3000;	
		class TransportMagazines
		{			
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=4;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=4;
			};
			class _xx_Chemlight_blue
			{
				magazine="Chemlight_blue";
				count=8;
			};
		};		
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_MediKit
			{
				name="MediKit";
				count=1;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack="B_Parachute";
				count=16;
			};
		};
		hiddenSelectionsTextures[]=
		{
			"\LS_ACF_Aurelia\vehicles\C130\LS_ACF_ARL_C130_body_olive_co.paa",
			"\LS_ACF_Aurelia\vehicles\C130\LS_ACF_ARL_C130_wings_olive_co.paa"
		};
		class textureSources
		{
			class LS_ACF_ARL_C130_VIV_olive
			{
				displayName="Aurelia";
			    author="(S)Zumek";
			    textures[]=
				{
					"\LS_ACF_Aurelia\vehicles\C130\LS_ACF_ARL_C130_body_olive_co.paa",
			        "\LS_ACF_Aurelia\vehicles\C130\LS_ACF_ARL_C130_wings_olive_co.paa"
				};				
			};
		};
	};
	class Plane_Fighter_04_Base_F;
	class LS_ACF_ARL_B_JAS39: Plane_Fighter_04_Base_F
	{
		author="(S)Zumek";
		displayName="JAS 39 Gripen";
        side=1;
		scope=2;
		scopeCurator=2;
		faction="LS_ACF_B_AURELIA";
		crew="LS_ACF_B_ARL_Jet_Pilot";	
		editorPreview="\LS_ACF_Aurelia\UI\LS_ACF_ARL_B_JAS39.jpg";	
		hiddenSelectionsTextures[]=
		{
			"\LS_ACF_Aurelia\vehicles\Gripen\LS_ACF_ARL_Gripen_fuselage_01_co.paa",
			"\LS_ACF_Aurelia\vehicles\Gripen\LS_ACF_ARL_Gripen_fuselage_02_co.paa",
			"a3\air_f_jets\plane_fighter_04\data\fighter_04_misc_01_co.paa",
			"",
			"",
			""
		};		
		class textureSources
		{
			class LS_ACF_ARL_JAS39_Grey
			{
				displayName="Aurelia";
			    author="(S)Zumek";
			    textures[]=
				{
					"\LS_ACF_Aurelia\vehicles\Gripen\LS_ACF_ARL_Gripen_fuselage_01_co.paa",
			        "\LS_ACF_Aurelia\vehicles\Gripen\LS_ACF_ARL_Gripen_fuselage_02_co.paa",
			        "a3\air_f_jets\plane_fighter_04\data\fighter_04_misc_01_co.paa",
			        "",
			        "",
			        ""
				};				
			};	
		};
	};	
	class CUP_AV8B_DYN_Base;
	class LS_ACF_ARL_B_AV8: CUP_AV8B_DYN_Base
	{
		author="(S)Zumek";
		displayName="AV-8B Harrier (GR.3)";
        side=1;
		scope=2;
		scopeCurator=2;
		faction="LS_ACF_B_AURELIA";
		crew="LS_ACF_B_ARL_Jet_Pilot";	
		editorPreview="\LS_ACF_Aurelia\UI\LS_ACF_ARL_B_AV8.jpg";	
		hiddenSelectionsTextures[]=
		{
			"\LS_ACF_Aurelia\vehicles\Harrier\LS_ACF_ARL_AV8_grey_co.paa",
			"\LS_ACF_Aurelia\vehicles\Harrier\LS_ACF_ARL_AV8_grey2_co.paa",
			"#(argb,512,512,1)r2t(rendertarget0,1.0)"
		};
		class textureSources
		{		
			class LS_ACF_ARL_AV8_grey
			{
				displayName="Aurelia";
			    author="(S)Zumek";
			    textures[]=
				{
					"\LS_ACF_Aurelia\vehicles\Harrier\LS_ACF_ARL_AV8_grey_co.paa",
			        "\LS_ACF_Aurelia\vehicles\Harrier\LS_ACF_ARL_AV8_grey2_co.paa",
					"#(argb,512,512,1)r2t(rendertarget0,1.0)"					
				};
			};	
		};        
	};
	class CUP_GR9_DYN_Base;
	class LS_ACF_ARL_B_AV8_GR9: CUP_GR9_DYN_Base
	{
		author="(S)Zumek";
		displayName="AV-8B Harrier (GR.9)";
        side=1;
		scope=2;
		scopeCurator=2;
		faction="LS_ACF_B_AURELIA";
		crew="LS_ACF_B_ARL_Jet_Pilot";	
		editorPreview="\LS_ACF_Aurelia\UI\LS_ACF_ARL_B_AV8_GR9.jpg";	
		hiddenSelectionsTextures[]=
		{
			"\LS_ACF_Aurelia\vehicles\Harrier\LS_ACF_ARL_AV8_grey_co.paa",
			"\LS_ACF_Aurelia\vehicles\Harrier\LS_ACF_ARL_AV8_grey2_co.paa",
			"#(argb,512,512,1)r2t(rendertarget0,1.0)"
		};
		class textureSources
		{		
			class LS_ACF_ARL_AV8_gr9_grey
			{
				displayName="Aurelia";
			    author="(S)Zumek";
			    textures[]=
				{
					"\LS_ACF_Aurelia\vehicles\Harrier\LS_ACF_ARL_AV8_grey_co.paa",
			        "\LS_ACF_Aurelia\vehicles\Harrier\LS_ACF_ARL_AV8_grey2_co.paa",
					"#(argb,512,512,1)r2t(rendertarget0,1.0)"					
				};
			};	
		};          
	};
	class CUP_B_A10_DYN_USA;
	class LS_ACF_ARL_B_A10: CUP_B_A10_DYN_USA
	{
		author="(S)Zumek";
		displayName="A-10A Warthog II";
        side=1;
		scope=2;
		scopeCurator=2;
		faction="LS_ACF_B_AURELIA";
		crew="LS_ACF_B_ARL_Jet_Pilot";	
		editorPreview="\LS_ACF_Aurelia\UI\LS_ACF_ARL_B_A10.jpg";
		class TransportWeapons
		{
			
		};
		class TransportMagazines
		{			
			
		};		
		class TransportItems
		{
			
		};
		class TransportBackpacks
		{
			
		};
		hiddenSelectionsTextures[]=
		{
			"\LS_ACF_Aurelia\vehicles\A10\LS_ACF_ARL_A10_Fuselage_co.paa",
			"\CUP\AirVehicles\CUP_AirVehicles_A10\data\a10_02_co.paa"
		};
		class textureSources
		{
			class LS_ACF_ARL_A10_grey
			{
				displayName="Aurelia";
			    author="(S)Zumek";
			    textures[]=
				{
					"\LS_ACF_Aurelia\vehicles\A10\LS_ACF_ARL_A10_Fuselage_co.paa",
			        "\CUP\AirVehicles\CUP_AirVehicles_A10\data\a10_02_co.paa"	
				};
			};
		};
	};
	class O_Plane_CAS_02_dynamicLoadout_F;
	class LS_ACF_ARL_B_XA643: O_Plane_CAS_02_dynamicLoadout_F
	{
		author="(S)Zumek";
		displayName="XA-643 Koel";
        side=1;
		scope=2;
		scopeCurator=2;
		faction="LS_ACF_B_AURELIA";
		crew="LS_ACF_B_ARL_Jet_Pilot";	
		editorPreview="\LS_ACF_Aurelia\UI\LS_ACF_ARL_B_XA643.jpg";	
		hiddenSelectionsTextures[]=
		{
			"\LS_ACF_Aurelia\vehicles\yak130\LS_ACF_ARL_yak130_1_grey_co.paa",
			"\LS_ACF_Aurelia\vehicles\yak130\LS_ACF_ARL_yak130_2_grey_co.paa"
		};
		class textureSources
		{
			class LS_ACF_ARL_XA643_grey
			{
				displayName="Aurelia";
			    author="(S)zumek";
			    textures[]=
				{
					"\LS_ACF_Aurelia\vehicles\yak130\LS_ACF_ARL_yak130_1_grey_co.paa",
			        "\LS_ACF_Aurelia\vehicles\yak130\LS_ACF_ARL_yak130_2_grey_co.paa"
				};
				factions[]={};
			};
		};
	};
	class B_Plane_Fighter_01_F;
	class LS_ACF_ARL_XF181: B_Plane_Fighter_01_F
	{
		author="(S)Zumek";
		displayName="XF-811 Gallus";
        side=1;
		scope=2;
		scopeCurator=2;
		faction="LS_ACF_B_AURELIA";
		crew="LS_ACF_B_ARL_Jet_Pilot";	
		editorPreview="\LS_ACF_Aurelia\UI\LS_ACF_ARL_XF181.jpg";	
		typicalCargo[]=
		{
			"LS_ACF_B_ARL_Jet_Pilot"
		};		
		HiddenSelectionsTextures[]=
		{
			"\LS_ACF_Aurelia\vehicles\FA181\LS_ACF_ARL_FA181_fuselage_co.paa",
			"\LS_ACF_Aurelia\vehicles\FA181\LS_ACF_ARL_FA181_wings_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_01_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_02_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_03_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_05_co.paa"
		};
		class TextureSources
		{
			class LS_ACF_ARL_XF181_grey
			{	
			    displayName="Aurelia";
			    author="(S)zumek";
				textures[]=
				{
					"\LS_ACF_Aurelia\vehicles\FA181\LS_ACF_ARL_FA181_fuselage_co.paa",
			        "\LS_ACF_Aurelia\vehicles\FA181\LS_ACF_ARL_FA181_wings_co.paa",
					"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa",
					"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_01_co.paa",
					"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_02_co.paa",
					"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_03_co.paa",
					"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_05_co.paa"
				};
				factions[]={};
			};			
		};
	};
	class B_Plane_Fighter_01_Stealth_F;
	class LS_ACF_ARL_XF181_stealth: B_Plane_Fighter_01_Stealth_F
	{
		author="(S)Zumek";
		displayName="XF-811 Gallus (Stealth)";
        side=1;
		scope=2;
		scopeCurator=2;
		faction="LS_ACF_B_AURELIA";
		crew="LS_ACF_B_ARL_Jet_Pilot";	
		editorPreview="\LS_ACF_Aurelia\UI\LS_ACF_ARL_XF181_stealth.jpg";	
		typicalCargo[]=
		{
			"LS_ACF_B_ARL_Jet_Pilot"
		};		
		HiddenSelectionsTextures[]=
		{
			"\LS_ACF_Aurelia\vehicles\FA181\LS_ACF_ARL_FA181_fuselage_co.paa",
			"\LS_ACF_Aurelia\vehicles\FA181\LS_ACF_ARL_FA181_wings_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_01_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_02_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_03_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_05_co.paa"
		};
		class TextureSources
		{
			class LS_ACF_ARL_XF181_grey
			{	
			    displayName="Aurelia";
			    author="(S)zumek";
				textures[]=
				{
					"\LS_ACF_Aurelia\vehicles\FA181\LS_ACF_ARL_FA181_fuselage_co.paa",
			        "\LS_ACF_Aurelia\vehicles\FA181\LS_ACF_ARL_FA181_wings_co.paa",
					"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa",
					"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_01_co.paa",
					"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_02_co.paa",
					"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_03_co.paa",
					"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_05_co.paa"
				};
				factions[]={};
			};			
		};
	};
	class O_Plane_Fighter_02_F;
	class LS_ACF_ARL_XR102: O_Plane_Fighter_02_F
	{
		author="(S)Zumek";
		displayName="XR-102 Rusalka";
        side=1;
		scope=2;
		scopeCurator=2;
		faction="LS_ACF_B_AURELIA";
		crew="LS_ACF_B_ARL_Jet_Pilot";	
		editorPreview="\LS_ACF_Aurelia\UI\LS_ACF_ARL_XR102.jpg";		
		typicalCargo[]=
		{
			"LS_ACF_B_ARL_Jet_Pilot"
		};	
		hiddenSelections[]=
		{
			"Camo_01","Camo_02","","number_01","number_02","number_03"
		};		
		HiddenSelectionsTextures[]=
		{
			"\LS_ACF_Aurelia\vehicles\Shikra\LS_ACF_ARL_Shikra_fuselage_01_co.paa",
			"\LS_ACF_Aurelia\vehicles\Shikra\LS_ACF_ARL_Shikra_wings_01_co.paa",
			"\LS_ACF_Aurelia\vehicles\Shikra\LS_ACF_ARL_Shikra_fuselage_01_co.paa",
			"",
			"",
			"",
		};
		class TextureSources
		{
			class LS_ACF_ARL_XR102_grey
			{	
			    displayName="Aurelia";
			    author="(S)zumek";
				textures[]=
				{
					"\LS_ACF_Aurelia\vehicles\Shikra\LS_ACF_ARL_Shikra_fuselage_01_co.paa",
			        "\LS_ACF_Aurelia\vehicles\Shikra\LS_ACF_ARL_Shikra_wings_01_co.paa",
			        "\LS_ACF_Aurelia\vehicles\Shikra\LS_ACF_ARL_Shikra_fuselage_01_co.paa",
			        "",
			        "",
			        "",
				};
				factions[]={};
			};
		};
	};
	class O_Plane_Fighter_02_Stealth_F;
	class LS_ACF_ARL_XR102_stealth: O_Plane_Fighter_02_Stealth_F
	{
		author="(S)Zumek";
		displayName="XR-102 Rusalka (Stealth)";
        side=1;
		scope=2;
		scopeCurator=2;
		faction="LS_ACF_B_AURELIA";
		crew="LS_ACF_B_ARL_Jet_Pilot";	
		editorPreview="\LS_ACF_Aurelia\UI\LS_ACF_ARL_XR102_stealth.jpg";
		typicalCargo[]=
		{
			"LS_ACF_B_ARL_Jet_Pilot"
		};	
		hiddenSelections[]=
		{
			"Camo_01","Camo_02","","number_01","number_02","number_03"
		};	
		HiddenSelectionsTextures[]=
		{
			"\LS_ACF_Aurelia\vehicles\Shikra\LS_ACF_ARL_Shikra_fuselage_01_co.paa",
			"\LS_ACF_Aurelia\vehicles\Shikra\LS_ACF_ARL_Shikra_wings_01_co.paa",
			"\LS_ACF_Aurelia\vehicles\Shikra\LS_ACF_ARL_Shikra_fuselage_01_co.paa",
			"",
			"",
			"",
		};
		class TextureSources
		{
			class LS_ACF_ARL_XR102_s_grey
			{	
			    displayName="Aurelia";
			    author="(S)zumek";
				textures[]=
				{
					"\LS_ACF_Aurelia\vehicles\Shikra\LS_ACF_ARL_Shikra_fuselage_01_co.paa",
			        "\LS_ACF_Aurelia\vehicles\Shikra\LS_ACF_ARL_Shikra_wings_01_co.paa",
			        "\LS_ACF_Aurelia\vehicles\Shikra\LS_ACF_ARL_Shikra_fuselage_01_co.paa",
			        "",
			        "",
			        "",
				};
				factions[]={};
			};
		};
	};		

	/////////////////////////DRONES////////////////////////DRONES////////////////////////DRONES////////////////////////DRONES////////////////////////DRONES////////////////////////
    
	class B_UAV_01_F;
	class LS_ACF_ARL_AR2: B_UAV_01_F
	{
		author="(S)Zumek";
        side=1;
		scope=2;
		scopeCurator=2;
		faction="LS_ACF_B_AURELIA";
		crew="B_UAV_AI";
		typicalCargo[]=
		{
			"B_UAV_AI"
		};		
	};
	class C_IDAP_UAV_06_antimine_F;
	class LS_ACF_ARL_DemoDrone: C_IDAP_UAV_06_antimine_F
	{
		author="(S)Zumek";
        side=1;
		scope=2;
		scopeCurator=2;
		faction="LS_ACF_B_AURELIA";	
		crew="B_UAV_AI";
		typicalCargo[]=
		{
			"B_UAV_AI"
		};		
	};
	class B_UAV_06_F;
	class LS_ACF_ARL_AL6: B_UAV_06_F
	{
		author="(S)Zumek";
        side=1;
		scope=2;
		scopeCurator=2;
		faction="LS_ACF_B_AURELIA";		
		crew="B_UAV_AI";
		typicalCargo[]=
		{
			"B_UAV_AI"
		};		
	};
	class B_UAV_06_medical_F;
	class LS_ACF_ARL_AL6_med: B_UAV_06_medical_F
	{
		author="(S)Zumek";
        side=1;
		scope=2;
		scopeCurator=2;
		faction="LS_ACF_B_AURELIA";			
		crew="B_UAV_AI";
		typicalCargo[]=
		{
			"B_UAV_AI"
		};		
	};
	class CUP_B_USMC_DYN_MQ9;
	class LS_ACF_ARL_MQ9: CUP_B_USMC_DYN_MQ9
	{
		author="(S)Zumek";
        side=1;
		scope=2;
		scopeCurator=2;
		faction="LS_ACF_B_AURELIA";		
		displayName="$STR_CUP_dn_MQ9_Base";
		editorPreview="\LS_ACF_Aurelia\UI\LS_ACF_ARL_MQ9.jpg";
		crew="B_UAV_AI";
		typicalCargo[]=
		{
			"B_UAV_AI"
		};
		hiddenSelectionsTextures[]=
		{
			"\LS_ACF_Aurelia\vehicles\Drones\LS_ACF_ARL_mq9predatorb_co.paa"
		};
	};
	class B_UGV_01_F;
	class LS_ACF_ARL_UGV: B_UGV_01_F
	{
		author="(S)Zumek";
        side=1;
		scope=2;
		scopeCurator=2;
		faction="LS_ACF_B_AURELIA";
		displayName="$STR_A3_CfgVehicles_UGV_01_Base0";
		editorPreview="\LS_ACF_Aurelia\UI\LS_ACF_ARL_UGV.jpg";
		crew="B_UAV_AI";
		typicalCargo[]=
		{
			"B_UAV_AI"
		};
		hiddenSelectionsTextures[]=
		{
			"\LS_ACF_Aurelia\vehicles\Drones\LS_ACF_ARL_ugv_01_ext_CAMTAC_co.paa",
			"\a3\Soft_F_Enoch\UGV_01\Data\UGV_01_int_EAF_co.paa",
			"\LS_ACF_Aurelia\vehicles\Drones\LS_ACF_ARL_UGV_Turret_CAMTAC_co.paa"
		};
		class textureSources
		{
			class LS_ACF_ARL_UGV_CAMTAC
			{
				displayName="CAMTAC (Aurelia)";
			    author="(S)zumek";
			    textures[]=
				{
					"\LS_ACF_Aurelia\vehicles\Drones\LS_ACF_ARL_ugv_01_ext_CAMTAC_co.paa",
					"\a3\Soft_F_Enoch\UGV_01\Data\UGV_01_int_EAF_co.paa",
					"\LS_ACF_Aurelia\vehicles\Drones\LS_ACF_ARL_UGV_Turret_CAMTAC_co.paa"		
				};
				factions[]={};
			};
		};
	};
	class B_UGV_01_rcws_F;
	class LS_ACF_ARL_UGV_RCWS: B_UGV_01_rcws_F
	{
		author="(S)Zumek";
        side=1;
		scope=2;
		scopeCurator=2;
		faction="LS_ACF_B_AURELIA";
		displayName="$STR_A3_CfgVehicles_UGV_01_RCWS_Base0";
		editorPreview="\LS_ACF_Aurelia\UI\LS_ACF_ARL_UGV_RCWS.jpg";
		crew="B_UAV_AI";
		typicalCargo[]=
		{
			"B_UAV_AI"
		};
		hiddenSelectionsTextures[]=
		{
			"\LS_ACF_Aurelia\vehicles\Drones\LS_ACF_ARL_ugv_01_ext_CAMTAC_co.paa",
			"\a3\Soft_F_Enoch\UGV_01\Data\UGV_01_int_EAF_co.paa",
			"\LS_ACF_Aurelia\vehicles\Drones\LS_ACF_ARL_UGV_Turret_CAMTAC_co.paa"
		};
		class textureSources
		{
			class LS_ACF_ARL_UGV_RCWS_CAMTAC
			{
				displayName="CAMTAC (Aurelia)";
			    author="(S)zumek";
			    textures[]=
				{
					"\LS_ACF_Aurelia\vehicles\Drones\LS_ACF_ARL_ugv_01_ext_CAMTAC_co.paa",
					"\a3\Soft_F_Enoch\UGV_01\Data\UGV_01_int_EAF_co.paa",
					"\LS_ACF_Aurelia\vehicles\Drones\LS_ACF_ARL_UGV_Turret_CAMTAC_co.paa"
				};
				factions[]={};
			};;
		};
	};			

	/////////////////////////TURRET////////////////////////TURRET////////////////////////TURRET////////////////////////TURRET////////////////////////TURRET////////////////////////
    
	class B_Radar_System_01_F;	
	class LS_ACF_ARL_B_Radar_System_F: B_Radar_System_01_F
	{
		author="(S)Zumek";
        side=1;
		scope=2;
		scopeCurator=2;
		faction="LS_ACF_B_AURELIA";
		crew="B_UAV_AI";		
		typicalCargo[]=
		{
			"B_UAV_AI"
		};		
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"A3\Static_F_Sams\Radar_System_01\Data\Radar_system_01_mat_01_olive_CO.paa",
			"A3\Static_F_Sams\Radar_System_01\Data\Radar_system_01_mat_02_olive_CO.paa"
		};
	};
	class B_SAM_System_03_F;
	class LS_ACF_ARL_B_SAM_System_F: B_SAM_System_03_F
	{
		author="(S)Zumek";
        side=1;
		scope=2;
		scopeCurator=2;
		faction="LS_ACF_B_AURELIA";
		crew="B_UAV_AI";		
		typicalCargo[]=
		{
			"B_UAV_AI"
		};		
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"A3\Static_F_Sams\SAM_System_03\Data\sam_system_03_mat_01_olive_CO.paa",
			"A3\Static_F_Sams\SAM_System_03\Data\sam_system_03_mat_02_olive_CO.paa"
		};
	};	
	class B_AAA_System_01_F;
	class LS_ACF_ARL_B_CIWS_F: B_AAA_System_01_F
	{
		author="(S)Zumek";
        side=1;
		scope=2;
		scopeCurator=2;
		faction="LS_ACF_B_AURELIA";
		crew="B_UAV_AI";		
		typicalCargo[]=
		{
			"B_UAV_AI"
		};		
	};
	class B_SAM_System_01_F;
	class LS_ACF_ARL_B_MK49_F: B_SAM_System_01_F
	{
		author="(S)Zumek";
        side=1;
		scope=2;
		scopeCurator=2;
		faction="LS_ACF_B_AURELIA";
		crew="B_UAV_AI";		
		typicalCargo[]=
		{
			"B_UAV_AI"
		};		
	};
	class B_SAM_System_02_F;
	class LS_ACF_ARL_B_MK21_F: B_SAM_System_02_F
	{
		author="(S)Zumek";
        side=1;
		scope=2;
		scopeCurator=2;
		faction="LS_ACF_B_AURELIA";
		crew="B_UAV_AI";		
		typicalCargo[]=
		{
			"B_UAV_AI"
		};		
	};
	class B_Ship_Gun_01_F;
	class LS_ACF_ARL_B_MK45_F: B_Ship_Gun_01_F
	{
		author="(S)Zumek";
        side=1;
		scope=2;
		scopeCurator=2;
		faction="LS_ACF_B_AURELIA";
		crew="B_UAV_AI";		
		typicalCargo[]=
		{
			"B_UAV_AI"
		};		
	};	
	class B_G_Mortar_01_F;
	class LS_ACF_ARL_B_Mk6_Mortar_F: B_G_Mortar_01_F
	{
		author="(S)Zumek";
        side=1;
		scope=2;
		scopeCurator=2;
		faction="LS_ACF_B_AURELIA";
		crew="LS_ACF_B_ARL_Rifleman";		
		typicalCargo[]=
		{
			"LS_ACF_B_ARL_Rifleman"
		};		
	};
	class CUP_SearchLight_static_base;
	class LS_ACF_ARL_B_SearchLight_F: CUP_SearchLight_static_base
	{
		author="(S)Zumek";
        side=1;
		scope=2;
		scopeCurator=2;
		faction="LS_ACF_B_AURELIA";
		crew="LS_ACF_B_ARL_Rifleman";		
		typicalCargo[]=
		{
			"LS_ACF_B_ARL_Rifleman"
		};				
	};
	class CUP_O_KORD_high_RU;
	class LS_ACF_ARL_B_KORD_high: CUP_O_KORD_high_RU
	{
		author="(S)Zumek";
        side=1;
		scope=2;
		scopeCurator=2;
		faction="LS_ACF_B_AURELIA";
		crew="LS_ACF_B_ARL_Rifleman";		
		typicalCargo[]=
		{
			"LS_ACF_B_ARL_Rifleman"
		};				
	};
	class CUP_O_KORD_RU;
	class LS_ACF_ARL_B_KORD: CUP_O_KORD_RU
	{
		author="(S)Zumek";
        side=1;
		scope=2;
		scopeCurator=2;
		faction="LS_ACF_B_AURELIA";
		crew="LS_ACF_B_ARL_Rifleman";		
		typicalCargo[]=
		{
			"LS_ACF_B_ARL_Rifleman"
		};				
	};
	class CUP_O_Kornet_RU;
	class LS_ACF_ARL_B_Kornet: CUP_O_Kornet_RU
	{
		author="(S)Zumek";
        side=1;
		scope=2;
		scopeCurator=2;
		faction="LS_ACF_B_AURELIA";
		crew="LS_ACF_B_ARL_Rifleman";		
		typicalCargo[]=
		{
			"LS_ACF_B_ARL_Rifleman"
		};				
	};
	class CUP_O_SPG9_SLA;
	class LS_ACF_ARL_B_SPG9: CUP_O_SPG9_SLA
	{
		author="(S)Zumek";
        side=1;
		scope=2;
		scopeCurator=2;
		faction="LS_ACF_B_AURELIA";
		crew="LS_ACF_B_ARL_Rifleman";		
		typicalCargo[]=
		{
			"LS_ACF_B_ARL_Rifleman"
		};				
	};
	class B_T_Static_AA_F;
	class LS_ACF_ARL_B_Static_AA: B_T_Static_AA_F
	{
		author="(S)Zumek";
        side=1;
		scope=2;
		scopeCurator=2;
		faction="LS_ACF_B_AURELIA";
		crew="LS_ACF_B_ARL_Rifleman";		
		typicalCargo[]=
		{
			"LS_ACF_B_ARL_Rifleman"
		};				
	};
	class B_T_Static_AT_F;
	class LS_ACF_ARL_B_Static_AT: B_T_Static_AT_F
	{
		author="(S)Zumek";
        side=1;
		scope=2;
		scopeCurator=2;
		faction="LS_ACF_B_AURELIA";
		crew="LS_ACF_B_ARL_Rifleman";		
		typicalCargo[]=
		{
			"LS_ACF_B_ARL_Rifleman"
		};				
	};
	class CUP_O_ZU23_RUS_M_Summer;
	class LS_ACF_ARL_B_ZU23: CUP_O_ZU23_RUS_M_Summer
	{
		author="(S)Zumek";
        side=1;
		scope=2;
		scopeCurator=2;
		faction="LS_ACF_B_AURELIA";
		crew="LS_ACF_B_ARL_Rifleman";		
		typicalCargo[]=
		{
			"LS_ACF_B_ARL_Rifleman"
		};				
	};
	class CUP_B_D30_CDF;
	class LS_ACF_ARL_B_D30: CUP_B_D30_CDF
	{
		author="(S)Zumek";
        side=1;
		scope=2;
		scopeCurator=2;
		faction="LS_ACF_B_AURELIA";
		crew="LS_ACF_B_ARL_Rifleman";		
		typicalCargo[]=
		{
			"LS_ACF_B_ARL_Rifleman"
		};				
	};
	class CUP_B_D30_AT_CDF;
	class LS_ACF_ARL_B_D30_AT: CUP_B_D30_AT_CDF
	{
		author="(S)Zumek";
        side=1;
		scope=2;
		scopeCurator=2;
		faction="LS_ACF_B_AURELIA";
		crew="LS_ACF_B_ARL_Rifleman";		
		typicalCargo[]=
		{
			"LS_ACF_B_ARL_Rifleman"
		};				
	};

	/////////////////////////BOAT////////////////////////BOAT////////////////////////BOAT////////////////////////BOAT////////////////////////BOAT////////////////////////
    
	class B_Boat_Armed_01_minigun_F;
	class LS_ACF_ARL_B_Boat_Armed: B_Boat_Armed_01_minigun_F
	{
		author="(S)Zumek";
        side=1;
		scope=2;
		scopeCurator=2;
		faction="LS_ACF_B_AURELIA";
		crew="LS_ACF_B_ARL_Rifleman";		
		typicalCargo[]=
		{
			"LS_ACF_B_ARL_Rifleman"
		};				
	};
	class B_Boat_Transport_01_F;
	class LS_ACF_ARL_B_Boat_Transport: B_Boat_Transport_01_F
	{
		author="(S)Zumek";
        side=1;
		scope=2;
		scopeCurator=2;
		faction="LS_ACF_B_AURELIA";
		crew="LS_ACF_B_ARL_Rifleman";		
		typicalCargo[]=
		{
			"LS_ACF_B_ARL_Rifleman"
		};				
	};
	class B_Lifeboat;
	class LS_ACF_ARL_B_Lifeboat: B_Lifeboat
	{
		author="(S)Zumek";
        side=1;
		scope=2;
		scopeCurator=2;
		faction="LS_ACF_B_AURELIA";
		crew="LS_ACF_B_ARL_Rifleman";		
		typicalCargo[]=
		{
			"LS_ACF_B_ARL_Rifleman"
		};				
	};
	class I_C_Boat_Transport_02_F;
	class LS_ACF_ARL_B_Boat_RHIB: I_C_Boat_Transport_02_F
	{
		author="(S)Zumek";
        side=1;
		scope=2;
		scopeCurator=2;
		faction="LS_ACF_B_AURELIA";
		crew="LS_ACF_B_ARL_Rifleman";		
		typicalCargo[]=
		{
			"LS_ACF_B_ARL_Rifleman"
		};				
	};
};