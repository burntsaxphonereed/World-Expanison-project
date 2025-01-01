#include "cfgPatches.hpp"
#include "backpacks.hpp"
#include "weapons.hpp"
#include "groups.hpp"

#define SoB_I_MEC_Details \
faction="SoB_I_MEC"; \
scope = 2; \
scopeArsenal = 2; 

#define SoB_I_MFP_Details \
faction="SoB_I_MFP"; \
scope = 2; \
scopeArsenal = 2;

class AssembleInfo;

class CfgMarkers
{
	class flag_Algeria;
class flag_MEC : flag_Algeria
{
	name = "Flag (Middle Eastern Coalition)";
	texture = "\SoB_Data\ui\markers\MEC_ca.paa";
	icon = "\SoB_Data\ui\markers\MEC_ca.paa";
};
};

class CfgFactionClasses
{
  class SoB_I_MEC
  {
    flag = "\SoB_Data\flags\MEC\MEC_Alt_co.paa";
    icon = "\SoB_Data\flags\MEC\MEC_Alt_co.paa";
    displayName="Middle Eastern Coalition";
    side=2;
    priority=1;
  };
  
  class SoB_I_MFP
  {
    flag = "\SoB_Data\flags\MEC\MFP_Alt_co.paa";
    icon = "\SoB_Data\flags\MEC\MFP_Alt_co.paa";
    displayName="Mesopotamian Federal Police";
    side=2;
    priority=1;
  };
};

//Name

class CfgIdentities
{
	class GeneralAlAssad
	{
		face="lxWS_African_Head_03";
		name="Yasir al-Assad";
		pitch=1;
		speaker="Male02PER";
	};
};

//Name
class CfgWorlds
{
	class GenericNames
	{
		class SoB_MEC_Story_Names
		{
			class FirstNames
			{
				AMIR="Yasir";
			};
			class LastNames
			{
				ALKHANSAAWI="al-Assad";
			};
		};
	};
};

class EventHandlers;

class CfgEditorSubcategories
{
	
	class EdSubcat_SoB_MFP_Operators_Men
	{
		displayName = "Men (Counter Terrorism Service)";
	};
	
	class EdSubcat_SoB_MEC_Reservists_Men
	{
		displayName = "Men (Reservists)";
	};
	
	class EdSubcat_SoB_MEC_RG_Men
	{
		displayName = "Men (Revolutionary Guard - Golden Brigades)";
	};
	
	class EdSubcat_SoB_MEC_SF_Men
	{
		displayName = "Men (Special Forces - Special Mission Service)";
	};
};

//Insigs
class CfgUnitInsignia
{
	class SoB_MFP
	{
		displayName="Patch (Mesopotamian Federal Police)";
		scopeCurator = 2;
		scope = 2;
		author="Hyena";
		texture="\SoB_Data\Patches\MEC\MFP_ca.paa";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
	
	class SoB_SF
	{
		displayName="Patch (MEC Special Mission Service)";
		scopeCurator = 2;
		scope = 2;
		author="Hyena";
		texture="\SoB_Data\Patches\MEC\SF_ca.paa";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
	
	class SoB_RG
	{
		displayName="Patch (MEC Golden Brigade)";
		scopeCurator = 2;
		scope = 2;
		author="Hyena";
		texture="\SoB_Data\Patches\MEC\RG_ca.paa";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
	
	class SoB_Squad_1stInf
	{
		displayName="Patch (MEC 1st Battalion, Legion of Babylon)";
		scopeCurator = 2;
		scope = 2;
		author="Hyena";
		texture="\SoB_Data\Patches\MEC\1stInf_ca.paa";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
	
	class SoB_Squad_2nd_Support
	{
		displayName="Patch (MEC Vizir Hussein 2nd Support Battalion)";
		scopeCurator = 2;
		scope = 2;
		author="Hyena";
		texture="\SoB_Data\Patches\MEC\2ndSupport_ca.paa";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
	
	class SoB_Squad_3rd_Mech
	{
		displayName="Patch (MEC 3rd King Qadesh Mechanized Infantry Brigade)";
		scopeCurator = 2;
		scope = 2;
		author="Hyena";
		texture="\SoB_Data\Patches\MEC\3rdMechInf_ca.paa";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
	
	class SoB_Squad_4th_BGS
	{
		displayName="Patch (MEC 4th Border Guards Group)";
		scopeCurator = 2;
		scope = 2;
		author="Hyena";
		texture="\SoB_Data\Patches\MEC\4thBGS_ca.paa";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
	
	class SoB_Squad_60th_Armour
	{
		displayName="Patch (MEC 60th Prince Assur Armored Brigade)";
		scopeCurator = 2;
		scope = 2;
		author="Hyena";
		texture="\SoB_Data\Patches\MEC\60thArmoured_ca.paa";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
	
	class SoB_Squad_91st_Air_Assault
	{
		displayName="Patch (MEC 91st Air Assault Battalion)";
		scopeCurator = 2;
		scope = 2;
		author="Hyena";
		texture="\SoB_Data\Patches\MEC\91stAirAssault_ca.paa";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
};

class CfgVehicles
{
	SoB_MEC_Backpacks
	
	class O_Soldier_F;
	class SoB_I_MEC_Soldier_base_F : O_Soldier_F
	{
		identityTypes[] = {"LanguagePER_F","Head_TK"};
		side=2;
		scope=0;
		scopeCurator=0;
	};
	
	class SoB_I_MEC_Rifleman: SoB_I_MEC_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Rifleman.jpg";
    displayName="Rifleman";
    uniformClass="SoB_U_MEC_Sweater";
    weapons[]={"SoB_I_MEC_KM15","hgun_ACPC2_F","Binocular","Put","Throw"};
    respawnWeapons[]={"SoB_I_MEC_KM15","hgun_ACPC2_F","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};
    respawnmagazines[]={"30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_Mk7_Camo","Goggles","Aegis_V_CarrierRigKBT_01_recon_cbr_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_Mk7_Camo","Goggles","Aegis_V_CarrierRigKBT_01_recon_cbr_F"};
    backpack="";
  };
  
  class SoB_I_MEC_UGV_Operator_ED1D: SoB_I_MEC_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_UGV_Operator_ED1D.jpg";
    displayName="UGV Operator (ED-1D)";
	uavHacker = 1;
    uniformClass="SoB_U_MEC_Sweater";
    weapons[]={"SoB_I_MEC_KM15","hgun_ACPC2_F","Binocular","Put","Throw"};
    respawnWeapons[]={"SoB_I_MEC_KM15","hgun_ACPC2_F","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};
    respawnmagazines[]={"30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","I_UavTerminal","Binocular","SoB_H_MEC_Mk7_Camo","Goggles","Aegis_V_CarrierRigKBT_01_recon_cbr_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","I_UavTerminal","Binocular","SoB_H_MEC_Mk7_Camo","Goggles","Aegis_V_CarrierRigKBT_01_recon_cbr_F"};
    backpack="SoB_I_MEC_UGV_Operator_ED1D_pack";
  };
  
  class SoB_I_MEC_UAV_Operator: SoB_I_MEC_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_UAV_Operator.jpg";
    displayName="UAV Operator";
	uavHacker = 1;
    uniformClass="SoB_U_MEC_Sweater";
    weapons[]={"SoB_I_MEC_KM15","hgun_ACPC2_F","Binocular","Put","Throw"};
    respawnWeapons[]={"SoB_I_MEC_KM15","hgun_ACPC2_F","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};
    respawnmagazines[]={"30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","I_UavTerminal","Binocular","SoB_H_MEC_Mk7_Camo","Goggles","Aegis_V_CarrierRigKBT_01_recon_cbr_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","I_UavTerminal","Binocular","SoB_H_MEC_Mk7_Camo","Goggles","Aegis_V_CarrierRigKBT_01_recon_cbr_F"};
    backpack="SoB_I_MEC_UAV_Operator_pack";
  };
  
  class SoB_I_MEC_UAV_Operator_AP5: SoB_I_MEC_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_UAV_Operator_AP5.jpg";
    displayName="UAV Operator (AP-5)";
	uavHacker = 1;
    uniformClass="SoB_U_MEC_Sweater";
    weapons[]={"SoB_I_MEC_KM15","hgun_ACPC2_F","Binocular","Put","Throw"};
    respawnWeapons[]={"SoB_I_MEC_KM15","hgun_ACPC2_F","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};
    respawnmagazines[]={"30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","I_UavTerminal","Binocular","SoB_H_MEC_Mk7_Camo","Goggles","Aegis_V_CarrierRigKBT_01_recon_cbr_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","I_UavTerminal","Binocular","SoB_H_MEC_Mk7_Camo","Goggles","Aegis_V_CarrierRigKBT_01_recon_cbr_F"};
    backpack="SoB_I_MEC_UAV_Operator_AP5_pack";
  };
  
  class SoB_I_MEC_UAV_Operator_AL6_Medical: SoB_I_MEC_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_UAV_Operator_AL6_Medical.jpg";
    displayName="UAV Operator (AL-6 Medical)";
	uavHacker = 1;
    uniformClass="SoB_U_MEC_Sweater";
    weapons[]={"SoB_I_MEC_KM15","hgun_ACPC2_F","Binocular","Put","Throw"};
    respawnWeapons[]={"SoB_I_MEC_KM15","hgun_ACPC2_F","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};
    respawnmagazines[]={"30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","I_UavTerminal","Binocular","SoB_H_MEC_Mk7_Camo","Goggles","Aegis_V_CarrierRigKBT_01_recon_cbr_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","I_UavTerminal","Binocular","SoB_H_MEC_Mk7_Camo","Goggles","Aegis_V_CarrierRigKBT_01_recon_cbr_F"};
    backpack="SoB_I_MEC_UAV_Operator_AL6_Medical_pack";
  };
  
  class SoB_I_MEC_UAV_Operator_AL6: SoB_I_MEC_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_UAV_Operator_AL6.jpg";
    displayName="UAV Operator (AL-6)";
	uavHacker = 1;
    uniformClass="SoB_U_MEC_Sweater";
    weapons[]={"SoB_I_MEC_KM15","hgun_ACPC2_F","Binocular","Put","Throw"};
    respawnWeapons[]={"SoB_I_MEC_KM15","hgun_ACPC2_F","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};
    respawnmagazines[]={"30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","I_UavTerminal","Binocular","SoB_H_MEC_Mk7_Camo","Goggles","Aegis_V_CarrierRigKBT_01_recon_cbr_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","I_UavTerminal","Binocular","SoB_H_MEC_Mk7_Camo","Goggles","Aegis_V_CarrierRigKBT_01_recon_cbr_F"};
    backpack="SoB_I_MEC_UAV_Operator_AL6_pack";
  };
  
  class SoB_I_MEC_Rifleman_Unarmed: SoB_I_MEC_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Rifleman_Unarmed.jpg";
    displayName="Rifleman (Unarmed)";
    uniformClass="SoB_U_MEC_Sweater";
    weapons[]={"Binocular","Put","Throw"};
    respawnWeapons[]={"Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={};
    respawnmagazines[]={};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_Mk7_Camo","Goggles","Aegis_V_CarrierRigKBT_01_recon_cbr_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_Mk7_Camo","Goggles","Aegis_V_CarrierRigKBT_01_recon_cbr_F"};
    backpack="";
  };

  class SoB_I_MEC_Rifleman_AT: SoB_I_MEC_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Rifleman_AT.jpg";
    displayName="Rifleman (AT)";
	icon = "iconManAT";
    uniformClass="SoB_U_MEC_Sweater";
    weapons[]={"SoB_I_MEC_KM15","Aegis_launch_RPG7M_F","hgun_ACPC2_F","Binocular","Put","Throw"};
    respawnWeapons[]={"SoB_I_MEC_KM15","Aegis_launch_RPG7M_F","hgun_ACPC2_F","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"30Rnd_762x39_polymer_Black_Mag_F","RPG7_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};
    respawnmagazines[]={"30Rnd_762x39_polymer_Black_Mag_F","RPG7_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_Mk7_Camo","Goggles","Aegis_V_CarrierRigKBT_01_recon_cbr_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_Mk7_Camo","Goggles","Aegis_V_CarrierRigKBT_01_recon_cbr_F"};
    backpack="SoB_I_MEC_Rifleman_AT_pack";
  };

  class SoB_I_MEC_Rifleman_Heavy_AT: SoB_I_MEC_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Rifleman_Heavy_AT.jpg";
    displayName="Rifleman (Heavy AT)";
	icon = "iconManAT";
    uniformClass="SoB_U_MEC_Sweater";
    weapons[]={"SoB_I_MEC_KM15","launch_O_Vorona_brown_F","hgun_ACPC2_F","Binocular","Put","Throw"};
    respawnWeapons[]={"SoB_I_MEC_KM15","launch_O_Vorona_brown_F","hgun_ACPC2_F","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"30Rnd_762x39_polymer_Black_Mag_F","Vorona_HEAT","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};
    respawnmagazines[]={"30Rnd_762x39_polymer_Black_Mag_F","Vorona_HEAT","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_Mk7_Camo","Goggles","Aegis_V_CarrierRigKBT_01_recon_cbr_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_Mk7_Camo","Goggles","Aegis_V_CarrierRigKBT_01_recon_cbr_F"};
    backpack="SoB_I_MEC_Rifleman_Heavy_AT_pack";
  };

  class SoB_I_MEC_Rifleman_Light: SoB_I_MEC_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Rifleman_Light.jpg";
    displayName="Rifleman (Light)";
    uniformClass="SoB_U_MEC_Sweater";
    weapons[]={"SoB_I_MEC_KM15","hgun_ACPC2_F","Binocular","Put","Throw"};
    respawnWeapons[]={"SoB_I_MEC_KM15","hgun_ACPC2_F","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
    respawnmagazines[]={"30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_MilCap_Camo","V_ChestrigF_khk"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_MilCap_Camo","V_ChestrigF_khk"};
    backpack="";
  };

  class SoB_I_MEC_Rifleman_Shotgun: SoB_I_MEC_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Rifleman_Shotgun.jpg";
    displayName="Rifleman (Shotgun)";
    uniformClass="SoB_U_MEC_Sweater";
    weapons[]={"SoB_I_MEC_sgun_M4","hgun_ACPC2_F","Binocular","Put","Throw"};
    respawnWeapons[]={"SoB_I_MEC_sgun_M4","hgun_ACPC2_F","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"8Rnd_12Gauge_Pellets","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets"};
    respawnMagazines[]={"8Rnd_12Gauge_Pellets","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_Mk7_Camo","Goggles","Aegis_V_CarrierRigKBT_01_cqb_cbr_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_Mk7_Camo","Goggles","Aegis_V_CarrierRigKBT_01_cqb_cbr_F"};
    backpack="";
  };

  class SoB_I_MEC_Sharpshooter: SoB_I_MEC_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Sharpshooter.jpg";
    displayName="Sharpshooter";
    uniformClass="SoB_U_MEC_Sweater";
    weapons[]={"SoB_I_MEC_Cyrus","hgun_ACPC2_F","Binocular","Put","Throw"};
    respawnWeapons[]={"SoB_I_MEC_Cyrus","hgun_ACPC2_F","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","9Rnd_45ACP_Mag"};
    respawnMagazines[]={"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","9Rnd_45ACP_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","H_Watchcap_blk_hs","Aegis_V_CarrierRigKBT_01_recon_cbr_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","H_Watchcap_blk_hs","Aegis_V_CarrierRigKBT_01_recon_cbr_F"};
    backpack="";
  };

  class SoB_I_MEC_Squad_Leader: SoB_I_MEC_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Squad_Leader.jpg";
    displayName="Squad Leader";
	icon = "iconManLeader";
    uniformClass="SoB_U_MEC_Sweater";
    weapons[]={"SoB_I_MEC_KM15_SL","hgun_ACPC2_F","Binocular","Put","Throw"};
    respawnWeapons[]={"SoB_I_MEC_KM15_SL","hgun_ACPC2_F","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};
    respawnmagazines[]={"30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","H_Beret_grn","Aegis_V_CarrierRigKBT_01_recon_cbr_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","H_Beret_grn","Aegis_V_CarrierRigKBT_01_recon_cbr_F"};
    backpack="";
  };

  class SoB_I_MEC_Survivor: SoB_I_MEC_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Survivor.jpg";
    displayName="Survivor";
    uniformClass="SoB_U_MEC_Sweater";
    weapons[]={"Binocular","Put","Throw"};
    respawnWeapons[]={"Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={};
    respawnMagazines[]={};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular"};
    backpack="";
  };

  class SoB_I_MEC_Team_Leader: SoB_I_MEC_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Team_Leader.jpg";
    displayName="Team Leader";
	icon = "iconManLeader";
    uniformClass="SoB_U_MEC_Sweater";
    weapons[]={"SoB_I_MEC_KM15_GL_TL","hgun_ACPC2_F","Binocular","Put","Throw"};
    respawnWeapons[]={"SoB_I_MEC_KM15_GL_TL","hgun_ACPC2_F","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","1Rnd_SmokeRed_Grenade_shell","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag"};
    respawnmagazines[]={"30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","1Rnd_SmokeRed_Grenade_shell","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_Mk7_Camo","Goggles","V_CarrierRigKBT_01_heavy_Coyote_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_Mk7_Camo","Goggles","V_CarrierRigKBT_01_heavy_Coyote_F"};
    backpack="";
  };

  class SoB_I_MEC_Repair_Specialist: SoB_I_MEC_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Repair_Specialist.jpg";
    displayName="Repair Specialist";
	icon = "iconManEngineer";
	picture = "pictureRepair";
	engineer = 1;
    uniformClass="SoB_U_MEC_Sweater";
    weapons[]={"SoB_I_MEC_KM15","hgun_ACPC2_black_F","Binocular","Put","Throw"};
    respawnWeapons[]={"SoB_I_MEC_KM15","hgun_ACPC2_black_F","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F"};
    respawnmagazines[]={"30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_Mk7_Camo","Goggles","Aegis_V_CarrierRigKBT_01_recon_cbr_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_Mk7_Camo","Goggles","Aegis_V_CarrierRigKBT_01_recon_cbr_F"};
    backpack="SoB_I_MEC_Repair_Specialist_pack";
  };

  class SoB_I_MEC_Radio_Operator: SoB_I_MEC_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Radio_Operator.jpg";
    displayName="Radio Operator";
    uniformClass="SoB_U_MEC_Sweater";
    weapons[]={"SoB_I_MEC_KM15","hgun_ACPC2_F","Binocular","Put","Throw"};
    respawnWeapons[]={"SoB_I_MEC_KM15","hgun_ACPC2_F","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};
    respawnmagazines[]={"30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_Mk7_Camo","Goggles","Aegis_V_CarrierRigKBT_01_recon_cbr_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_Mk7_Camo","Goggles","Aegis_V_CarrierRigKBT_01_recon_cbr_F"};
    backpack="SoB_I_MEC_Radio_Operator_pack";
  };

  class SoB_I_MEC_Para_Trooper: SoB_I_MEC_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Para_Trooper.jpg";
    displayName="Para Trooper";
    uniformClass="SoB_U_MEC_Sweater";
    weapons[]={"SoB_I_MEC_KM15","hgun_ACPC2_F","Binocular","Put","Throw"};
    respawnWeapons[]={"SoB_I_MEC_KM15","hgun_ACPC2_F","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};
    respawnmagazines[]={"30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_Mk7_Camo","Goggles","Aegis_V_CarrierRigKBT_01_recon_cbr_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_Mk7_Camo","Goggles","Aegis_V_CarrierRigKBT_01_recon_cbr_F"};
    backpack="SoB_I_MEC_Para_Trooper_pack";
  };

  class SoB_I_MEC_Missile_Specialist_AT: SoB_I_MEC_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Missile_Specialist_AT.jpg";
    displayName="Missile Specialist (AT)";
	icon = "iconManAT";
    uniformClass="SoB_U_MEC_Sweater";
    weapons[]={"SoB_I_MEC_KM15","launch_O_Titan_short_F","hgun_ACPC2_F","Binocular","Put","Throw"};
    respawnWeapons[]={"SoB_I_MEC_KM15","launch_O_Titan_short_F","hgun_ACPC2_F","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"30Rnd_762x39_polymer_Black_Mag_F","Titan_AT","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};
    respawnmagazines[]={"30Rnd_762x39_polymer_Black_Mag_F","Titan_AT","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_Mk7_Camo","Goggles","Aegis_V_CarrierRigKBT_01_recon_cbr_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_Mk7_Camo","Goggles","Aegis_V_CarrierRigKBT_01_recon_cbr_F"};
    backpack="SoB_I_MEC_Missile_Specialist_AT_pack";
  };

  class SoB_I_MEC_Missile_Specialist_AA: SoB_I_MEC_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Missile_Specialist_AA.jpg";
    displayName="Missile Specialist (AA)";
	icon = "iconManAT";
    uniformClass="SoB_U_MEC_Sweater";
    weapons[]={"SoB_I_MEC_KM15","launch_Titan_blk_F","hgun_ACPC2_F","Binocular","Put","Throw"};
    respawnWeapons[]={"SoB_I_MEC_KM15","launch_Titan_blk_F","hgun_ACPC2_F","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"30Rnd_762x39_polymer_Black_Mag_F","Titan_AA","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};
    respawnmagazines[]={"30Rnd_762x39_polymer_Black_Mag_F","Titan_AA","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_Mk7_Camo","Goggles","Aegis_V_CarrierRigKBT_01_recon_cbr_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_Mk7_Camo","Goggles","Aegis_V_CarrierRigKBT_01_recon_cbr_F"};
    backpack="SoB_I_MEC_Missile_Specialist_AA_pack";
  };

  class SoB_I_MEC_Mine_Specialist: SoB_I_MEC_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Mine_Specialist.jpg";
    displayName="Mine Specialist";
	icon = "iconManExplosive";
	picture = "pictureExplosive";
	canDeactivateMines = 1;
    uniformClass="SoB_U_MEC_Sweater";
    weapons[]={"SoB_I_MEC_KM15","hgun_ACPC2_black_F","Binocular","Put","Throw"};
    respawnWeapons[]={"SoB_I_MEC_KM15","hgun_ACPC2_black_F","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F"};
    respawnmagazines[]={"30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_Mk7_Camo","Goggles","Aegis_V_CarrierRigKBT_01_recon_cbr_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_Mk7_Camo","Goggles","Aegis_V_CarrierRigKBT_01_recon_cbr_F"};
    backpack="SoB_I_MEC_Mine_Specialist_pack";
  };

  class SoB_I_MEC_Marksman: SoB_I_MEC_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Marksman.jpg";
    displayName="Marksman";
    uniformClass="SoB_U_MEC_Sweater";
    weapons[]={"SoB_I_MEC_Mk11","hgun_ACPC2_F","Binocular","Put","Throw"};
    respawnWeapons[]={"SoB_I_MEC_Mk11","hgun_ACPC2_F","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"Aegis_20Rnd_762x51_Sand_SMAG","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell","Aegis_20Rnd_762x51_Sand_SMAG","Aegis_20Rnd_762x51_Sand_SMAG","Aegis_20Rnd_762x51_Sand_SMAG","Aegis_20Rnd_762x51_Sand_SMAG","Aegis_20Rnd_762x51_Sand_SMAG","Aegis_20Rnd_762x51_Sand_SMAG","Aegis_20Rnd_762x51_Sand_SMAG","Aegis_20Rnd_762x51_Sand_SMAG"};
    respawnMagazines[]={"Aegis_20Rnd_762x51_Sand_SMAG","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell","Aegis_20Rnd_762x51_Sand_SMAG","Aegis_20Rnd_762x51_Sand_SMAG","Aegis_20Rnd_762x51_Sand_SMAG","Aegis_20Rnd_762x51_Sand_SMAG","Aegis_20Rnd_762x51_Sand_SMAG","Aegis_20Rnd_762x51_Sand_SMAG","Aegis_20Rnd_762x51_Sand_SMAG","Aegis_20Rnd_762x51_Sand_SMAG"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_Mk7_Camo","Goggles","Aegis_V_CarrierRigKBT_01_recon_cbr_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_Mk7_Camo","Goggles","Aegis_V_CarrierRigKBT_01_recon_cbr_F"};
    backpack="";
  };

  class SoB_I_MEC_Heavy_Gunner: SoB_I_MEC_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Heavy_Gunner.jpg";
    displayName="Heavy Gunner";
	icon = "iconManMG";
    uniformClass="SoB_U_MEC_Sweater";
    weapons[]={"SoB_I_MEC_SA77","hgun_ACPC2_F","Binocular","Put","Throw"};
    respawnWeapons[]={"SoB_I_MEC_SA77","hgun_ACPC2_F","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell","100Rnd_762x51_S77_Red_lxWS","100Rnd_762x51_S77_Red_lxWS"};
    respawnMagazines[]={"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell","100Rnd_762x51_S77_Red_lxWS","100Rnd_762x51_S77_Red_lxWS"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_Mk7_Camo","Goggles","Aegis_V_CarrierRigKBT_01_cqb_cbr_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_Mk7_Camo","Goggles","Aegis_V_CarrierRigKBT_01_cqb_cbr_F"};
    backpack="SoB_I_MEC_Heavy_Gunner_pack";
  };

  class SoB_I_MEC_Grenadier: SoB_I_MEC_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Grenadier.jpg";
    displayName="Grenadier";
    uniformClass="SoB_U_MEC_Sweater";
    weapons[]={"SoB_I_MEC_KM15_GL","hgun_ACPC2_black_F","Binocular","Put","Throw"};
    respawnWeapons[]={"SoB_I_MEC_KM15_GL","hgun_ACPC2_black_F","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","1Rnd_Smoke_Grenade_shell","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell"};
    respawnmagazines[]={"30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","1Rnd_Smoke_Grenade_shell","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_Mk7_Camo","Goggles","V_CarrierRigKBT_01_light_Coyote_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_Mk7_Camo","Goggles","V_CarrierRigKBT_01_light_Coyote_F"};
    backpack="";
  };

  class SoB_I_MEC_Explosives_Specialist: SoB_I_MEC_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Explosives_Specialist.jpg";
    displayName="Explosives Specialist";
	icon = "iconManExplosive";
	picture = "pictureExplosive";
	canDeactivateMines = 1;
    uniformClass="SoB_U_MEC_Sweater";
    weapons[]={"SoB_I_MEC_KM15","hgun_ACPC2_black_F","Binocular","Put","Throw"};
    respawnWeapons[]={"SoB_I_MEC_KM15","hgun_ACPC2_black_F","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F"};
    respawnmagazines[]={"30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_Mk7_Camo","Goggles","Aegis_V_CarrierRigKBT_01_recon_cbr_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_Mk7_Camo","Goggles","Aegis_V_CarrierRigKBT_01_recon_cbr_F"};
    backpack="SoB_I_MEC_Explosives_Specialist_pack";
  };

  class SoB_I_MEC_Engineer: SoB_I_MEC_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Engineer.jpg";
    displayName="Engineer";
	icon = "iconManEngineer";
	picture = "pictureRepair";
	engineer = 1;
	canDeactivateMines = 1;
    uniformClass="SoB_U_MEC_Sweater";
    weapons[]={"SoB_I_MEC_KM15","hgun_ACPC2_black_F","Binocular","Put","Throw"};
    respawnWeapons[]={"SoB_I_MEC_KM15","hgun_ACPC2_black_F","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F"};
    respawnmagazines[]={"30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_Mk7_Camo","Goggles","Aegis_V_CarrierRigKBT_01_recon_cbr_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_Mk7_Camo","Goggles","Aegis_V_CarrierRigKBT_01_recon_cbr_F"};
    backpack="SoB_I_MEC_Engineer_pack";
  };

  class SoB_I_MEC_Crewman: SoB_I_MEC_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Crewman.jpg";
    displayName="Crewman";
    uniformClass="SoB_U_MEC_Tanktop";
    weapons[]={"SoB_I_MEC_MP7","hgun_ACPC2_black_F","Binocular","Put","Throw"};
    respawnWeapons[]={"SoB_I_MEC_MP7","hgun_ACPC2_black_F","Binocular","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"40Rnd_460x30_Mag_F","40Rnd_460x30_Mag_F","HandGrenade_East","SmokeShell","SmokeShell","40Rnd_460x30_Mag_F","40Rnd_460x30_Mag_F","40Rnd_460x30_Mag_F","40Rnd_460x30_Mag_F","40Rnd_460x30_Mag_F"};
    respawnMagazines[]={"40Rnd_460x30_Mag_F","40Rnd_460x30_Mag_F","HandGrenade_East","SmokeShell","SmokeShell","40Rnd_460x30_Mag_F","40Rnd_460x30_Mag_F","40Rnd_460x30_Mag_F","40Rnd_460x30_Mag_F","40Rnd_460x30_Mag_F"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","H_Tank_black_F","V_BandollierB_cbr"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","H_Tank_black_F","V_BandollierB_cbr"};
    backpack="";
  };

  class SoB_I_MEC_Combat_Life_Saver: SoB_I_MEC_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Combat_Life_Saver.jpg";
    displayName="Combat Life Saver";
	icon = "iconManMedic";
	picture = "pictureHeal";
	attendant = 1;
    uniformClass="SoB_U_MEC_Sweater";
    weapons[]={"SoB_I_MEC_KM15","hgun_ACPC2_F","Binocular","Put","Throw"};
    respawnWeapons[]={"SoB_I_MEC_KM15","hgun_ACPC2_F","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};
    respawnmagazines[]={"30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_Mk7_Camo","Goggles","Aegis_V_CarrierRigKBT_01_recon_cbr_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_Mk7_Camo","Goggles","Aegis_V_CarrierRigKBT_01_recon_cbr_F"};
    backpack="SoB_I_MEC_Combat_Life_Saver_pack";
  };

  class SoB_I_MEC_CBRN_Specialist: SoB_I_MEC_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_CBRN_Specialist.jpg";
    displayName="CBRN Specialist";
	icon = "iconManEngineer";
	picture = "pictureRepair";
    uniformClass="SoB_U_MEC_CBRN_Suit_01";
    weapons[]={"SoB_I_MEC_KM15","hgun_ACPC2_F","Binocular","Put","Throw"};
    respawnWeapons[]={"SoB_I_MEC_KM15","hgun_ACPC2_F","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};
    respawnmagazines[]={"30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_Mk7_Camo","Goggles","Aegis_V_CarrierRigKBT_01_recon_cbr_F","G_AirPurifyingRespirator_01_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_Mk7_Camo","Goggles","Aegis_V_CarrierRigKBT_01_recon_cbr_F","G_AirPurifyingRespirator_01_F"};
    backpack="SoB_I_MEC_CBRN_Specialist_pack";
  };

  class SoB_I_MEC_Autorifleman: SoB_I_MEC_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Autorifleman.jpg";
    displayName="Autorifleman";
	icon = "iconManMG";
    uniformClass="SoB_U_MEC_Sweater";
    weapons[]={"SoB_I_MEC_RPK15","hgun_ACPC2_F","Binocular","Put","Throw"};
    respawnWeapons[]={"SoB_I_MEC_RPK15","hgun_ACPC2_F","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell","75rnd_762x39_AK12_Mag_F","75rnd_762x39_AK12_Mag_F","75rnd_762x39_AK12_Mag_F","75rnd_762x39_AK12_Mag_F"};
    respawnMagazines[]={"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell","75rnd_762x39_AK12_Mag_F","75rnd_762x39_AK12_Mag_F","75rnd_762x39_AK12_Mag_F","75rnd_762x39_AK12_Mag_F"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_Mk7_Camo","Goggles","Aegis_V_CarrierRigKBT_01_recon_cbr_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_Mk7_Camo","Goggles","Aegis_V_CarrierRigKBT_01_recon_cbr_F"};
    backpack="SoB_I_MEC_Autorifleman_pack";
  };

  class SoB_I_MEC_Gunner_Mk6: SoB_I_MEC_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Gunner_Mk6.jpg";
    displayName="Gunner (Mk6)";
    uniformClass="SoB_U_MEC_Sweater";
    weapons[]={"SoB_I_MEC_KM15","hgun_ACPC2_F","Binocular","Put","Throw"};
    respawnWeapons[]={"SoB_I_MEC_KM15","hgun_ACPC2_F","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};
    respawnmagazines[]={"30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_Mk7_Camo","Goggles","Aegis_V_CarrierRigKBT_01_recon_cbr_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_Mk7_Camo","Goggles","Aegis_V_CarrierRigKBT_01_recon_cbr_F"};
    backpack="SoB_I_MEC_Gunner_Mk6_pack";
  };
  //Give correct backpack
  class SoB_I_MEC_Gunner_CMort: SoB_I_MEC_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Gunner_CMort.jpg";
    displayName="Gunner (Light Mortar)";
    uniformClass="SoB_U_MEC_Sweater";
    weapons[]={"SoB_I_MEC_KM15","hgun_ACPC2_F","Binocular","Put","Throw"};
    respawnWeapons[]={"SoB_I_MEC_KM15","hgun_ACPC2_F","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};
    respawnmagazines[]={"30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_Mk7_Camo","Goggles","Aegis_V_CarrierRigKBT_01_recon_cbr_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_Mk7_Camo","Goggles","Aegis_V_CarrierRigKBT_01_recon_cbr_F"};
    backpack="SoB_I_MEC_Gunner_CMort_pack";
  };

  class SoB_I_MEC_Gunner_HMG: SoB_I_MEC_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Gunner_HMG.jpg";
    displayName="Gunner (HMG)";
    uniformClass="SoB_U_MEC_Sweater";
    weapons[]={"SoB_I_MEC_KM15","hgun_ACPC2_F","Binocular","Put","Throw"};
    respawnWeapons[]={"SoB_I_MEC_KM15","hgun_ACPC2_F","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};
    respawnmagazines[]={"30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_Mk7_Camo","Goggles","Aegis_V_CarrierRigKBT_01_recon_cbr_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_Mk7_Camo","Goggles","Aegis_V_CarrierRigKBT_01_recon_cbr_F"};
    backpack="SoB_I_MEC_Gunner_HMG_pack";
  };

  class SoB_I_MEC_Gunner_GMG: SoB_I_MEC_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Gunner_GMG.jpg";
    displayName="Gunner (GMG)";
    uniformClass="SoB_U_MEC_Sweater";
    weapons[]={"SoB_I_MEC_KM15","hgun_ACPC2_F","Binocular","Put","Throw"};
    respawnWeapons[]={"SoB_I_MEC_KM15","hgun_ACPC2_F","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};
    respawnmagazines[]={"30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_Mk7_Camo","Goggles","Aegis_V_CarrierRigKBT_01_recon_cbr_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_Mk7_Camo","Goggles","Aegis_V_CarrierRigKBT_01_recon_cbr_F"};
    backpack="SoB_I_MEC_Gunner_GMG_pack";
  };

  class SoB_I_MEC_Asst_Missile_Specialist_AT: SoB_I_MEC_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Asst_Missile_Specialist_AT.jpg";
    displayName="Asst. Missile Specialist (AT)";
    uniformClass="SoB_U_MEC_Sweater";
    weapons[]={"SoB_I_MEC_KM15","hgun_ACPC2_F","Binocular","Put","Throw"};
    respawnWeapons[]={"SoB_I_MEC_KM15","hgun_ACPC2_F","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};
    respawnmagazines[]={"30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_Mk7_Camo","Goggles","Aegis_V_CarrierRigKBT_01_recon_cbr_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_Mk7_Camo","Goggles","Aegis_V_CarrierRigKBT_01_recon_cbr_F"};
    backpack="SoB_I_MEC_Asst_Missile_Specialist_AT_pack";
  };

  class SoB_I_MEC_Asst_Missile_Specialist_AA: SoB_I_MEC_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Asst_Missile_Specialist_AA.jpg";
    displayName="Asst. Missile Specialist (AA)";
    uniformClass="SoB_U_MEC_Sweater";
    weapons[]={"SoB_I_MEC_KM15","hgun_ACPC2_F","Binocular","Put","Throw"};
    respawnWeapons[]={"SoB_I_MEC_KM15","hgun_ACPC2_F","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};
    respawnmagazines[]={"30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_Mk7_Camo","Goggles","Aegis_V_CarrierRigKBT_01_recon_cbr_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_Mk7_Camo","Goggles","Aegis_V_CarrierRigKBT_01_recon_cbr_F"};
    backpack="SoB_I_MEC_Asst_Missile_Specialist_AA_pack";
  };

  class SoB_I_MEC_Asst_Heavy_AT: SoB_I_MEC_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Asst_Heavy_AT.jpg";
    displayName="Asst. Heavy AT";
    uniformClass="SoB_U_MEC_Sweater";
    weapons[]={"SoB_I_MEC_KM15","hgun_ACPC2_F","Binocular","Put","Throw"};
    respawnWeapons[]={"SoB_I_MEC_KM15","hgun_ACPC2_F","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};
    respawnmagazines[]={"30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_Mk7_Camo","Goggles","Aegis_V_CarrierRigKBT_01_recon_cbr_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_Mk7_Camo","Goggles","Aegis_V_CarrierRigKBT_01_recon_cbr_F"};
    backpack="SoB_I_MEC_Asst_Heavy_AT_pack";
  };

  class SoB_I_MEC_Asst_Gunner_Mk6: SoB_I_MEC_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Asst_Gunner_Mk6.jpg";
    displayName="Asst. Gunner (Mk6)";
    uniformClass="SoB_U_MEC_Sweater";
    weapons[]={"SoB_I_MEC_KM15","hgun_ACPC2_F","Binocular","Put","Throw"};
    respawnWeapons[]={"SoB_I_MEC_KM15","hgun_ACPC2_F","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};
    respawnmagazines[]={"30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_Mk7_Camo","Goggles","Aegis_V_CarrierRigKBT_01_recon_cbr_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_Mk7_Camo","Goggles","Aegis_V_CarrierRigKBT_01_recon_cbr_F"};
    backpack="SoB_I_MEC_Asst_Gunner_Mk6_pack";
  };

  class SoB_I_MEC_Asst_Gunner_HMGGMG: SoB_I_MEC_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Asst_Gunner_HMGGMG.jpg";
    displayName="Asst. Gunner (HMG/GMG)";
    uniformClass="SoB_U_MEC_Sweater";
    weapons[]={"SoB_I_MEC_KM15","hgun_ACPC2_F","Binocular","Put","Throw"};
    respawnWeapons[]={"SoB_I_MEC_KM15","hgun_ACPC2_F","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};
    respawnmagazines[]={"30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_Mk7_Camo","Goggles","Aegis_V_CarrierRigKBT_01_recon_cbr_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_Mk7_Camo","Goggles","Aegis_V_CarrierRigKBT_01_recon_cbr_F"};
    backpack="SoB_I_MEC_Asst_Gunner_HMGGMG_pack";
  };

  class SoB_I_MEC_Asst_Autorifleman: SoB_I_MEC_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Asst_Autorifleman.jpg";
    displayName="Asst. Autorifleman";
    uniformClass="SoB_U_MEC_Sweater";
    weapons[]={"SoB_I_MEC_KM15","hgun_ACPC2_F","Binocular","Put","Throw"};
    respawnWeapons[]={"SoB_I_MEC_KM15","hgun_ACPC2_F","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};
    respawnmagazines[]={"30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_Mk7_Camo","Goggles","Aegis_V_CarrierRigKBT_01_recon_cbr_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_Mk7_Camo","Goggles","Aegis_V_CarrierRigKBT_01_recon_cbr_F"};
    backpack="SoB_I_MEC_Asst_Autorifleman_pack";
  };

  class SoB_I_MEC_Ammo_Bearer: SoB_I_MEC_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Ammo_Bearer.jpg";
    displayName="Ammo Bearer";
    uniformClass="SoB_U_MEC_Sweater";
    weapons[]={"SoB_I_MEC_KM15","hgun_ACPC2_F","Binocular","Put","Throw"};
    respawnWeapons[]={"SoB_I_MEC_KM15","hgun_ACPC2_F","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};
    respawnmagazines[]={"30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","30Rnd_762x39_polymer_Black_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_Mk7_Camo","Goggles","Aegis_V_CarrierRigKBT_01_recon_cbr_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_Mk7_Camo","Goggles","Aegis_V_CarrierRigKBT_01_recon_cbr_F"};
    backpack="SoB_I_MEC_Ammo_Bearer_pack";
  };

  class SoB_I_MEC_Fighter_Pilot: SoB_I_MEC_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Fighter_Pilot.jpg";
    displayName="Fighter Pilot";
    uniformClass="U_I_pilotCoveralls";
    weapons[]={"hgun_ACPC2_F","Binocular","Put","Throw"};
    respawnWeapons[]={"hgun_ACPC2_F","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={};
    respawnMagazines[]={};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","H_PilotHelmetFighter_I"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","H_PilotHelmetFighter_I"};
    backpack="";
  };

  class SoB_I_MEC_Helicopter_Crew: SoB_I_MEC_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Helicopter_Crew.jpg";
    displayName="Helicopter Crew";
    uniformClass="U_I_pilotCoveralls";
    weapons[]={"SoB_I_MEC_MP7","hgun_ACPC2_F","Binocular","Put","Throw"};
    respawnWeapons[]={"SoB_I_MEC_MP7","hgun_ACPC2_F","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"40Rnd_460x30_Mag_F","40Rnd_460x30_Mag_F","40Rnd_460x30_Mag_F","40Rnd_460x30_Mag_F"};
    respawnMagazines[]={"40Rnd_460x30_Mag_F","40Rnd_460x30_Mag_F","40Rnd_460x30_Mag_F","40Rnd_460x30_Mag_F"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","NVGoggles_OPFOR","Binocular","H_CrewHelmetHeli_O","NVGoggles_OPFOR"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","NVGoggles_OPFOR","Binocular","H_CrewHelmetHeli_O","NVGoggles_OPFOR"};
    backpack="";
  };

  class SoB_I_MEC_Helicopter_Pilot: SoB_I_MEC_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Helicopter_Pilot.jpg";
    displayName="Helicopter Pilot";
    uniformClass="U_I_pilotCoveralls";
    weapons[]={"SoB_I_MEC_MP7","hgun_ACPC2_F","Binocular","Put","Throw"};
    respawnWeapons[]={"SoB_I_MEC_MP7","hgun_ACPC2_F","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"40Rnd_460x30_Mag_F","40Rnd_460x30_Mag_F","40Rnd_460x30_Mag_F","40Rnd_460x30_Mag_F"};
    respawnMagazines[]={"40Rnd_460x30_Mag_F","40Rnd_460x30_Mag_F","40Rnd_460x30_Mag_F","40Rnd_460x30_Mag_F"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","NVGoggles_OPFOR","Binocular","H_PilotHelmetHeli_O_visor_up","NVGoggles_OPFOR"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","NVGoggles_OPFOR","Binocular","H_PilotHelmetHeli_O_visor_up","NVGoggles_OPFOR"};
    backpack="";
  };

  class SoB_I_MEC_Pilot: SoB_I_MEC_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Pilot.jpg";
    displayName="Pilot";
    uniformClass="U_I_pilotCoveralls";
    weapons[]={"SoB_I_MEC_MP7","hgun_ACPC2_F","Binocular","Put","Throw"};
    respawnWeapons[]={"SoB_I_MEC_MP7","hgun_ACPC2_F","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"40Rnd_460x30_Mag_F","40Rnd_460x30_Mag_F","40Rnd_460x30_Mag_F","40Rnd_460x30_Mag_F"};
    respawnMagazines[]={"40Rnd_460x30_Mag_F","40Rnd_460x30_Mag_F","40Rnd_460x30_Mag_F","40Rnd_460x30_Mag_F"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","NVGoggles_OPFOR","Binocular","H_PilotHelmetHeli_O","NVGoggles_OPFOR"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","NVGoggles_OPFOR","Binocular","H_PilotHelmetHeli_O","NVGoggles_OPFOR"};
    backpack="SoB_I_MEC_Pilot_pack";
  };
  
  class SoB_I_MEC_Officer: SoB_I_MEC_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Officer.jpg";
    displayName="Officer";
	icon = "iconManOfficer";
    uniformClass="SoB_U_MEC_Light_Fatigues";
    weapons[]={"hgun_DEagle_RF","Binocular","Put","Throw"};
    respawnWeapons[]={"hgun_DEagle_RF","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"7Rnd_50AE_Mag_RF","7Rnd_50AE_Mag_RF","7Rnd_50AE_Mag_RF","7Rnd_50AE_Mag_RF"};
    respawnMagazines[]={"7Rnd_50AE_Mag_RF","7Rnd_50AE_Mag_RF","7Rnd_50AE_Mag_RF","7Rnd_50AE_Mag_RF"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_MilCap_Camo"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_MilCap_Camo"};
    backpack="";
  };
  
  //Reservists
  class SoB_I_MEC_Soldier_R_base_F : SoB_I_MEC_Soldier_base_F
  {
	editorSubcategory = "EdSubcat_SoB_MEC_Reservists_Men";
	class EventHandlers: EventHandlers
    {
        init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
        postinit = "SoB_MEC_Reservist_Uniforms = ['SoB_U_MEC_Combat_Uniform_Reserve_Rolled', 'SoB_U_MEC_Combat_Uniform_Reserve']; SoB_MEC_Reservist_Vests = ['V_ChestrigF_khk', 'V_ChestrigF_rgr', 'V_ChestrigF_oli', 'V_ChestrigF_blk', 'V_TacChestrig_oli_F', 'V_TacChestrig_grn_F', 'V_TacChestrig_cbr_F']; _unit = _this select 0; _uniformItems = uniformItems _unit; removeUniform _unit; _unit forceAddUniform (selectRandom SoB_MEC_Reservist_Uniforms); {_unit addItemToUniform _x} forEach _uniformItems; _vestItems = vestItems _unit; removeVest _unit; _unit addVest (selectRandom SoB_MEC_Reservist_Vests); {_unit addItemToVest _x} forEach _vestItems;";
    };
  };
  
  class SoB_I_MEC_Rifleman_R: SoB_I_MEC_Soldier_R_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Rifleman_R.jpg";
    displayName="Rifleman";
    uniformClass="SoB_U_MEC_Combat_Uniform_Reserve_Rolled";
    weapons[]={"arifle_AKM_F","hgun_ACPC2_F","Binocular","Put","Throw"};
    respawnWeapons[]={"arifle_AKM_F","hgun_ACPC2_F","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F"};
    respawnMagazines[]={"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","lxWS_H_ssh40_green","V_ChestrigF_khk"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","lxWS_H_ssh40_green","V_ChestrigF_khk"};
    backpack="";
  };
  
  class SoB_I_MEC_Sharpshooter_R: SoB_I_MEC_Soldier_R_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Sharpshooter_R.jpg";
    displayName="Sharpshooter";
    uniformClass="SoB_U_MEC_Combat_Uniform_Reserve_Rolled";
    weapons[]={"SoB_O_Lions_Mk14","hgun_ACPC2_F","Binocular","Put","Throw"};
    respawnWeapons[]={"SoB_O_Lions_Mk14","hgun_ACPC2_F","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell","10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag"};
    respawnMagazines[]={"10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell","10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","lxWS_H_ssh40_green","V_ChestrigF_khk"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","lxWS_H_ssh40_green","V_ChestrigF_khk"};
    backpack="";
  };
  
  class SoB_I_MEC_Rifleman_Unarmed_R: SoB_I_MEC_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Rifleman_Unarmed_R.jpg";
    displayName="Rifleman (Unarmed)";
	editorSubcategory = "EdSubcat_SoB_MEC_Reservists_Men";
    uniformClass="SoB_U_MEC_Combat_Uniform_Reserve_Rolled";
    weapons[]={"Binocular","Put","Throw"};
    respawnWeapons[]={"Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={};
    respawnMagazines[]={};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","lxWS_H_ssh40_green","V_ChestrigF_khk"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","lxWS_H_ssh40_green","V_ChestrigF_khk"};
    backpack="";
  };
  
  class SoB_I_MEC_Rifleman_Survivor_R: SoB_I_MEC_Soldier_R_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Rifleman_Survivor_R.jpg";
    displayName="Survivor";
    uniformClass="SoB_U_MEC_Combat_Uniform_Reserve_Rolled";
    weapons[]={"Binocular","Put","Throw"};
    respawnWeapons[]={"Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={};
    respawnMagazines[]={};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular"};
    backpack="";
  };

  class SoB_I_MEC_Rifleman_AT_R: SoB_I_MEC_Soldier_R_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Rifleman_AT_R.jpg";
    displayName="Rifleman (AT)";
	icon = "iconManAT";
    uniformClass="SoB_U_MEC_Combat_Uniform_Reserve_Rolled";
    weapons[]={"arifle_AKM_F","launch_RPG7_F","hgun_ACPC2_F","Binocular","Put","Throw"};
    respawnWeapons[]={"arifle_AKM_F","launch_RPG7_F","hgun_ACPC2_F","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F"};
    respawnMagazines[]={"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","lxWS_H_ssh40_green","V_ChestrigF_khk"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","lxWS_H_ssh40_green","V_ChestrigF_khk"};
    backpack="SoB_I_MEC_Rifleman_AT_R_pack";
  };

  class SoB_I_MEC_Rifleman_SLR_R: SoB_I_MEC_Soldier_R_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Rifleman_SLR_R.jpg";
    displayName="Rifleman (SLR)";
    uniformClass="SoB_U_MEC_Combat_Uniform_Reserve_Rolled";
    weapons[]={"arifle_SLR_lxWS","hgun_ACPC2_F","Binocular","Put","Throw"};
    respawnWeapons[]={"arifle_SLR_lxWS","hgun_ACPC2_F","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS"};
    respawnMagazines[]={"20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","lxWS_H_ssh40_green","V_ChestrigF_khk"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","lxWS_H_ssh40_green","V_ChestrigF_khk"};
    backpack="";
  };

  class SoB_I_MEC_Rifleman_AK74_R: SoB_I_MEC_Soldier_R_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Rifleman_AK74_R.jpg";
    displayName="Rifleman (AK-74)";
    uniformClass="SoB_U_MEC_Combat_Uniform_Reserve_Rolled";
    weapons[]={"Aegis_arifle_AK74_F","hgun_ACPC2_F","Binocular","Put","Throw"};
    respawnWeapons[]={"Aegis_arifle_AK74_F","hgun_ACPC2_F","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F"};
    respawnMagazines[]={"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","lxWS_H_ssh40_green","V_ChestrigF_khk"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","lxWS_H_ssh40_green","V_ChestrigF_khk"};
    backpack="";
  };

  class SoB_I_MEC_Rifleman_AKS74_R: SoB_I_MEC_Soldier_R_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Rifleman_AKS74_R.jpg";
    displayName="Rifleman (AKS-74)";
    uniformClass="SoB_U_MEC_Combat_Uniform_Reserve_Rolled";
    weapons[]={"Aegis_arifle_AKS74_oak_F","hgun_ACPC2_F","Binocular","Put","Throw"};
    respawnWeapons[]={"Aegis_arifle_AKS74_oak_F","hgun_ACPC2_F","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F"};
    respawnMagazines[]={"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","lxWS_H_ssh40_green","V_ChestrigF_khk"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","lxWS_H_ssh40_green","V_ChestrigF_khk"};
    backpack="";
  };

  class SoB_I_MEC_Rifleman_AKS74U_R: SoB_I_MEC_Soldier_R_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Rifleman_AKS74U_R.jpg";
    displayName="Rifleman (AKS-74U)";
    uniformClass="SoB_U_MEC_Combat_Uniform_Reserve_Rolled";
    weapons[]={"arifle_AKS_F","hgun_ACPC2_F","Binocular","Put","Throw"};
    respawnWeapons[]={"arifle_AKS_F","hgun_ACPC2_F","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F"};
    respawnMagazines[]={"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","lxWS_H_ssh40_green","V_ChestrigF_khk"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","lxWS_H_ssh40_green","V_ChestrigF_khk"};
    backpack="";
  };

  class SoB_I_MEC_Rifleman_Galat_R: SoB_I_MEC_Soldier_R_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Rifleman_Galat_R.jpg";
    displayName="Rifleman (Galat)";
    uniformClass="SoB_U_MEC_Combat_Uniform_Reserve_Rolled";
    weapons[]={"arifle_Galat_lxWS","hgun_ACPC2_F","Binocular","Put","Throw"};
    respawnWeapons[]={"arifle_Galat_lxWS","hgun_ACPC2_F","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F"};
    respawnMagazines[]={"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","lxWS_H_ssh40_green","V_ChestrigF_khk"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","lxWS_H_ssh40_green","V_ChestrigF_khk"};
    backpack="";
  };

  class SoB_I_MEC_Officer_R: SoB_I_MEC_Soldier_R_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Officer_R.jpg";
    displayName="Officer";
	icon = "iconManOfficer";
    uniformClass="SoB_U_MEC_Combat_Uniform_Reserve_Rolled";
    weapons[]={"Aegis_arifle_AKS74_oak_F","hgun_ACPC2_F","Binocular","Put","Throw"};
    respawnWeapons[]={"Aegis_arifle_AKS74_oak_F","hgun_ACPC2_F","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F"};
    respawnMagazines[]={"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_MilCap_Grv_Green","V_TacVest_khk","G_Aviator"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_MilCap_Grv_Green","V_TacVest_khk","G_Aviator"};
    backpack="";
  };

  class SoB_I_MEC_Heavy_Gunner_R: SoB_I_MEC_Soldier_R_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Heavy_Gunner_R.jpg";
    displayName="Heavy Gunner";
	icon = "iconManMG";
    uniformClass="SoB_U_MEC_Combat_Uniform_Reserve_Rolled";
    weapons[]={"LMG_S77_lxWS","hgun_ACPC2_F","Binocular","Put","Throw"};
    respawnWeapons[]={"LMG_S77_lxWS","hgun_ACPC2_F","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell","100Rnd_762x51_S77_Red_lxWS","100Rnd_762x51_S77_Red_lxWS"};
    respawnMagazines[]={"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell","100Rnd_762x51_S77_Red_lxWS","100Rnd_762x51_S77_Red_lxWS"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","lxWS_H_ssh40_green","V_ChestrigF_khk"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","lxWS_H_ssh40_green","V_ChestrigF_khk"};
    backpack="SoB_I_MEC_Heavy_Gunner_R_pack";
  };

  class SoB_I_MEC_Grenadier_R: SoB_I_MEC_Soldier_R_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Grenadier_R.jpg";
    displayName="Grenadier";
    uniformClass="SoB_U_MEC_Combat_Uniform_Reserve_Rolled";
    weapons[]={"Aegis_arifle_AK74_GL_oak_F","hgun_ACPC2_F","Binocular","Put","Throw"};
    respawnWeapons[]={"Aegis_arifle_AK74_GL_oak_F","hgun_ACPC2_F","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};
    respawnMagazines[]={"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","lxWS_H_ssh40_green","V_ChestrigF_khk"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","lxWS_H_ssh40_green","V_ChestrigF_khk"};
    backpack="";
  };

  class SoB_I_MEC_Combat_Lifesaver_R: SoB_I_MEC_Soldier_R_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Combat_Lifesaver_R.jpg";
    displayName="Combat Lifesaver";
	icon = "iconManMedic";
	picture = "pictureHeal";
	attendant = 1;
    uniformClass="SoB_U_MEC_Combat_Uniform_Reserve_Rolled";
    weapons[]={"arifle_AKM_F","hgun_ACPC2_F","Binocular","Put","Throw"};
    respawnWeapons[]={"arifle_AKM_F","hgun_ACPC2_F","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F"};
    respawnMagazines[]={"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","lxWS_H_ssh40_green","V_ChestrigF_khk"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","lxWS_H_ssh40_green","V_ChestrigF_khk"};
    backpack="SoB_I_MEC_Combat_Lifesaver_R_pack";
  };

  class SoB_I_MEC_Autorifleman_R: SoB_I_MEC_Soldier_R_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Autorifleman_R.jpg";
    displayName="Autorifleman";
	icon = "iconManMG";
    uniformClass="SoB_U_MEC_Combat_Uniform_Reserve_Rolled";
    weapons[]={"arifle_RPK_F","hgun_ACPC2_F","Binocular","Put","Throw"};
    respawnWeapons[]={"arifle_RPK_F","hgun_ACPC2_F","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell","75Rnd_762x39_Mag_F","75Rnd_762x39_Mag_F","75Rnd_762x39_Mag_F"};
    respawnMagazines[]={"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell","75Rnd_762x39_Mag_F","75Rnd_762x39_Mag_F","75Rnd_762x39_Mag_F"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","lxWS_H_ssh40_green","V_ChestrigF_khk"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","lxWS_H_ssh40_green","V_ChestrigF_khk"};
    backpack="SoB_I_MEC_Autorifleman_R_pack";
  };
  
  //Story
  class SoB_I_MEC_Story_Assad: SoB_I_MEC_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Story_Assad.jpg";
    displayName="Colonel Yasir Al-Assad";
	identityTypes[] = {"LanguagePER_F","lxWS_Said_Head"};
	genericNames = "SoB_MEC_Story_Names";
	editorSubcategory = "EdSubcat_Personnel_Story";
	icon = "iconManOfficer";
    uniformClass="SoB_U_MEC_Light_Fatigues_Story";
    weapons[]={"hgun_DEagle_gold_RF","Binocular","Put","Throw"};
    respawnWeapons[]={"hgun_DEagle_gold_RF","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"7Rnd_50AE_Mag_RF","7Rnd_50AE_Mag_RF","7Rnd_50AE_Mag_RF","7Rnd_50AE_Mag_RF"};
    respawnMagazines[]={"7Rnd_50AE_Mag_RF","7Rnd_50AE_Mag_RF","7Rnd_50AE_Mag_RF","7Rnd_50AE_Mag_RF"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","H_Beret_red","V_TacVest_camo","G_Aviator"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","H_Beret_red","V_TacVest_camo","G_Aviator"};
    backpack="";
  };
  
  //SF
  class SoB_I_MEC_SF_Soldier_base_F : SoB_I_MEC_Soldier_base_F
  {
	editorSubcategory = "EdSubcat_SoB_MEC_SF_Men";
	camouflage = 0.6;
	class EventHandlers: EventHandlers
    {
        init = "[_this select 0,'SoB_SF'] call bis_fnc_setUnitInsignia;";
    };
    class AttributeValues
    {
            unitInsignia = "SoB_SF";
    };
  };
  
  class SoB_I_MEC_Rifleman_SF: SoB_I_MEC_SF_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Rifleman_SF.jpg";
    displayName="Rifleman";
    uniformClass="SoB_U_MEC_Combat_Uniform_SF";
    weapons[]={"SoB_I_MEC_SF_Veles","SoB_I_MEC_SF_G19","Binocular","Put","Throw"};
    respawnWeapons[]={"SoB_I_MEC_SF_Veles","SoB_I_MEC_SF_G19","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"20Rnd_127x55_Mag_RF","SmokeShell","SmokeShell","HandGrenade","HandGrenade","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","17Rnd_9x19_Mag_RF"};
    respawnMagazines[]={"20Rnd_127x55_Mag_RF","SmokeShell","SmokeShell","HandGrenade","HandGrenade","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","17Rnd_9x19_Mag_RF"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TiGoggles_RF","Binocular","V_HarnessO_blk","G_Balaclava_blk_lxWS","TiGoggles_RF"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TiGoggles_RF","Binocular","V_HarnessO_blk","G_Balaclava_blk_lxWS","TiGoggles_RF"};
    backpack="";
  };
  
  class SoB_I_MEC_Paramedic_SF: SoB_I_MEC_SF_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Paramedic_SF.jpg";
    displayName="Paramedic";
	icon = "iconManMedic";
	picture = "pictureHeal";
	attendant = 1;
    uniformClass="SoB_U_MEC_Combat_Uniform_SF";
    weapons[]={"SoB_I_MEC_SF_Veles","SoB_I_MEC_SF_G19","Binocular","Put","Throw"};
    respawnWeapons[]={"SoB_I_MEC_SF_Veles","SoB_I_MEC_SF_G19","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"20Rnd_127x55_Mag_RF","SmokeShell","SmokeShell","HandGrenade","HandGrenade","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","17Rnd_9x19_Mag_RF"};
    respawnMagazines[]={"20Rnd_127x55_Mag_RF","SmokeShell","SmokeShell","HandGrenade","HandGrenade","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","17Rnd_9x19_Mag_RF"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TiGoggles_RF","Binocular","V_HarnessO_blk","G_Balaclava_blk_lxWS","TiGoggles_RF"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TiGoggles_RF","Binocular","V_HarnessO_blk","G_Balaclava_blk_lxWS","TiGoggles_RF"};
    backpack="SoB_I_MEC_Paramedic_SF_pack";
  };

  class SoB_I_MEC_Marksman_SF: SoB_I_MEC_SF_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Marksman_SF.jpg";
    displayName="Marksman";
    uniformClass="SoB_U_MEC_Combat_Uniform_SF";
    weapons[]={"SoB_I_MEC_SF_ASP","SoB_I_MEC_SF_G19","Binocular","Put","Throw"};
    respawnWeapons[]={"SoB_I_MEC_SF_ASP","SoB_I_MEC_SF_G19","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"10Rnd_127x54_Mag","10Rnd_127x54_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","17Rnd_9x19_Mag_RF","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag"};
    respawnMagazines[]={"10Rnd_127x54_Mag","10Rnd_127x54_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","17Rnd_9x19_Mag_RF","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TiGoggles_RF","Binocular","V_HarnessO_blk","G_Balaclava_blk_lxWS","TiGoggles_RF"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TiGoggles_RF","Binocular","V_HarnessO_blk","G_Balaclava_blk_lxWS","TiGoggles_RF"};
    backpack="";
  };

  class SoB_I_MEC_Grenadier_SF: SoB_I_MEC_SF_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Grenadier_SF.jpg";
    displayName="Grenadier";
    uniformClass="SoB_U_MEC_Combat_Uniform_SF";
    weapons[]={"SoB_I_MEC_SF_GL","SoB_I_MEC_SF_G19A","Binocular","Put","Throw"};
    respawnWeapons[]={"SoB_I_MEC_SF_GL","SoB_I_MEC_SF_G19A","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"6Rnd_HE_Grenade_shell","6Rnd_HE_Grenade_shell","6Rnd_HE_Grenade_shell","6Rnd_HE_Grenade_shell","6Rnd_HE_Grenade_shell","6Rnd_UGL_FlareWhite_F","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF"};
    respawnMagazines[]={"6Rnd_HE_Grenade_shell","6Rnd_HE_Grenade_shell","6Rnd_HE_Grenade_shell","6Rnd_HE_Grenade_shell","6Rnd_HE_Grenade_shell","6Rnd_UGL_FlareWhite_F","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TiGoggles_RF","Binocular","V_HarnessO_blk","G_Balaclava_blk_lxWS","TiGoggles_RF"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TiGoggles_RF","Binocular","V_HarnessO_blk","G_Balaclava_blk_lxWS","TiGoggles_RF"};
    backpack="";
  };

  class SoB_I_MEC_Rifleman_AT_SF: SoB_I_MEC_SF_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Rifleman_AT_SF.jpg";
    displayName="Rifleman (AT)";
	uniformClass="SoB_U_MEC_Combat_Uniform_SF";
	icon = "iconManAT";
    weapons[]={"SoB_I_MEC_SF_Veles","launch_RPG32_black_F","SoB_I_MEC_SF_G19","Binocular","Put","Throw"};
    respawnWeapons[]={"SoB_I_MEC_SF_Veles","launch_RPG32_black_F","SoB_I_MEC_SF_G19","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"20Rnd_127x55_Mag_RF","SmokeShell","SmokeShell","HandGrenade","HandGrenade","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","17Rnd_9x19_Mag_RF"};
    respawnMagazines[]={"20Rnd_127x55_Mag_RF","SmokeShell","SmokeShell","HandGrenade","HandGrenade","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","17Rnd_9x19_Mag_RF"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TiGoggles_RF","Binocular","V_HarnessO_blk","G_Balaclava_blk_lxWS","TiGoggles_RF"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TiGoggles_RF","Binocular","V_HarnessO_blk","G_Balaclava_blk_lxWS","TiGoggles_RF"};
    backpack="SoB_I_MEC_Rifleman_AT_SF_pack";
  };

  class SoB_I_MEC_Rifleman_Shotgun_SF: SoB_I_MEC_SF_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Rifleman_Shotgun_SF.jpg";
    displayName="Rifleman (Shotgun)";
    uniformClass="SoB_U_MEC_Combat_Uniform_SF";
    weapons[]={"SoB_I_MEC_SF_AA40","SoB_I_MEC_SF_G19","Binocular","Put","Throw"};
    respawnWeapons[]={"SoB_I_MEC_SF_AA40","SoB_I_MEC_SF_G19","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"8Rnd_12Gauge_AA40_Pellets_lxWS","17Rnd_9x19_Mag_RF","SmokeShell","SmokeShell","HandGrenade","HandGrenade","8Rnd_12Gauge_AA40_Pellets_lxWS","8Rnd_12Gauge_AA40_Pellets_lxWS","8Rnd_12Gauge_AA40_Pellets_lxWS","8Rnd_12Gauge_AA40_Pellets_lxWS","8Rnd_12Gauge_AA40_Pellets_lxWS","8Rnd_12Gauge_AA40_Pellets_lxWS","8Rnd_12Gauge_AA40_Pellets_lxWS","8Rnd_12Gauge_AA40_Pellets_lxWS"};
    respawnMagazines[]={"8Rnd_12Gauge_AA40_Pellets_lxWS","17Rnd_9x19_Mag_RF","SmokeShell","SmokeShell","HandGrenade","HandGrenade","8Rnd_12Gauge_AA40_Pellets_lxWS","8Rnd_12Gauge_AA40_Pellets_lxWS","8Rnd_12Gauge_AA40_Pellets_lxWS","8Rnd_12Gauge_AA40_Pellets_lxWS","8Rnd_12Gauge_AA40_Pellets_lxWS","8Rnd_12Gauge_AA40_Pellets_lxWS","8Rnd_12Gauge_AA40_Pellets_lxWS","8Rnd_12Gauge_AA40_Pellets_lxWS"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TiGoggles_RF","Binocular","V_HarnessO_blk","G_Balaclava_blk_lxWS","TiGoggles_RF"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TiGoggles_RF","Binocular","V_HarnessO_blk","G_Balaclava_blk_lxWS","TiGoggles_RF"};
    backpack="";
  };

  class SoB_I_MEC_Team_Leader_SF: SoB_I_MEC_SF_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Team_Leader_SF.jpg";
    displayName="Team Leader";
	icon = "iconManLeader";
    uniformClass="SoB_U_MEC_Combat_Uniform_SF";
    weapons[]={"SoB_I_MEC_SF_Veles_GL","SoB_I_MEC_SF_G19","Binocular","Put","Throw"};
    respawnWeapons[]={"SoB_I_MEC_SF_Veles_GL","SoB_I_MEC_SF_G19","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"20Rnd_127x55_Mag_RF","SmokeShell","SmokeShell","HandGrenade","HandGrenade","17Rnd_9x19_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF"};
    respawnMagazines[]={"20Rnd_127x55_Mag_RF","SmokeShell","SmokeShell","HandGrenade","HandGrenade","17Rnd_9x19_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TiGoggles_RF","Binocular","V_HarnessO_blk","G_Balaclava_blk_lxWS","TiGoggles_RF"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TiGoggles_RF","Binocular","V_HarnessO_blk","G_Balaclava_blk_lxWS","TiGoggles_RF"};
    backpack="SoB_I_MEC_Team_Leader_SF_pack";
  };

  class SoB_I_MEC_Heavy_Gunner_SF: SoB_I_MEC_SF_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Heavy_Gunner_SF.jpg";
    displayName="Heavy Gunner";
	icon = "iconManMG";
    uniformClass="SoB_U_MEC_Combat_Uniform_SF";
    weapons[]={"SoB_I_MEC_SF_LMG_03_F","SoB_I_MEC_SF_G19","Binocular","Put","Throw"};
    respawnWeapons[]={"SoB_I_MEC_SF_LMG_03_F","SoB_I_MEC_SF_G19","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"SmokeShell","SmokeShell","HandGrenade","HandGrenade","17Rnd_9x19_Mag_RF","200Rnd_556x45_Box_F","200Rnd_556x45_Box_F","200Rnd_556x45_Box_F"};
    respawnMagazines[]={"SmokeShell","SmokeShell","HandGrenade","HandGrenade","17Rnd_9x19_Mag_RF","200Rnd_556x45_Box_F","200Rnd_556x45_Box_F","200Rnd_556x45_Box_F"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TiGoggles_RF","Binocular","V_HarnessO_blk","G_Balaclava_blk_lxWS","TiGoggles_RF"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TiGoggles_RF","Binocular","V_HarnessO_blk","G_Balaclava_blk_lxWS","TiGoggles_RF"};
    backpack="";
  };

  class SoB_I_MEC_Autorifleman_SF: SoB_I_MEC_SF_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Autorifleman_SF.jpg";
    displayName="Autorifleman";
	icon = "iconManMG";
    uniformClass="SoB_U_MEC_Combat_Uniform_SF";
    weapons[]={"SoB_I_MEC_SF_RPK15","SoB_I_MEC_SF_G19","Binocular","Put","Throw"};
    respawnWeapons[]={"SoB_I_MEC_SF_RPK15","SoB_I_MEC_SF_G19","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"SmokeShell","SmokeShell","HandGrenade","HandGrenade","17Rnd_9x19_Mag_RF","75rnd_762x39_AK12_Mag_F","75rnd_762x39_AK12_Mag_F","75rnd_762x39_AK12_Mag_F","75rnd_762x39_AK12_Mag_F"};
    respawnMagazines[]={"SmokeShell","SmokeShell","HandGrenade","HandGrenade","17Rnd_9x19_Mag_RF","75rnd_762x39_AK12_Mag_F","75rnd_762x39_AK12_Mag_F","75rnd_762x39_AK12_Mag_F","75rnd_762x39_AK12_Mag_F"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TiGoggles_RF","Binocular","V_HarnessO_blk","G_Balaclava_blk_lxWS","TiGoggles_RF"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TiGoggles_RF","Binocular","V_HarnessO_blk","G_Balaclava_blk_lxWS","TiGoggles_RF"};
    backpack="";
  };

  class SoB_I_MEC_Radioman_SF: SoB_I_MEC_SF_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Radioman_SF.jpg";
    displayName="Radioman";
    uniformClass="SoB_U_MEC_Combat_Uniform_SF";
    weapons[]={"SoB_I_MEC_SF_Veles","SoB_I_MEC_SF_G19","Laserdesignator","Put","Throw"};
    respawnWeapons[]={"SoB_I_MEC_SF_Veles","SoB_I_MEC_SF_G19","Laserdesignator","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"20Rnd_127x55_Mag_RF","SmokeShell","SmokeShell","HandGrenade","HandGrenade","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","17Rnd_9x19_Mag_RF"};
    respawnMagazines[]={"20Rnd_127x55_Mag_RF","SmokeShell","SmokeShell","HandGrenade","HandGrenade","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","17Rnd_9x19_Mag_RF"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TiGoggles_RF","Laserdesignator","V_HarnessO_blk","G_Balaclava_blk_lxWS","TiGoggles_RF"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TiGoggles_RF","Laserdesignator","V_HarnessO_blk","G_Balaclava_blk_lxWS","TiGoggles_RF"};
    backpack="SoB_I_MEC_Radioman_SF_pack";
  };
  
  //Snipers
  class SoB_I_MEC_Sniper_Arid: SoB_I_MEC_SF_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Sniper_Arid.jpg";
    displayName="Sniper (Arid)";
	camouflage = 0.4;
    uniformClass="SoB_U_MEC_Ghillie_Arid";
    weapons[]={"Rangefinder","SoB_I_MEC_GM6","SoB_I_MEC_G19_Sniper","Put","Throw"};
    respawnWeapons[]={"Rangefinder","SoB_I_MEC_GM6","SoB_I_MEC_G19_Sniper","Put","Throw"};
    items[]={"FirstAidKit","optic_Nightstalker"};
    respawnItems[]={"FirstAidKit","optic_Nightstalker"};
    magazines[]={"5Rnd_127x108_Mag","Chemlight_red","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShell","Chemlight_red"};
    respawnMagazines[]={"5Rnd_127x108_Mag","Chemlight_red","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShell","Chemlight_red"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TiGoggles_tan_RF","Rangefinder","V_TacChestrig_grn_F","G_Balaclava_snd_lxWS","TiGoggles_tan_RF"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TiGoggles_tan_RF","Rangefinder","V_TacChestrig_grn_F","G_Balaclava_snd_lxWS","TiGoggles_tan_RF"};
    backpack="";
  };

  class SoB_I_MEC_Sniper_Lush: SoB_I_MEC_SF_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Sniper_Lush.jpg";
    displayName="Sniper (Lush)";
	camouflage = 0.4;
    uniformClass="SoB_U_MEC_Ghillie_Lush";
    weapons[]={"Rangefinder","SoB_I_MEC_GM6","SoB_I_MEC_G19_Sniper","Put","Throw"};
    respawnWeapons[]={"Rangefinder","SoB_I_MEC_GM6","SoB_I_MEC_G19_Sniper","Put","Throw"};
    items[]={"FirstAidKit","optic_Nightstalker"};
    respawnItems[]={"FirstAidKit","optic_Nightstalker"};
    magazines[]={"5Rnd_127x108_Mag","Chemlight_red","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShell","Chemlight_red"};
    respawnMagazines[]={"5Rnd_127x108_Mag","Chemlight_red","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShell","Chemlight_red"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TiGoggles_grn_RF","Rangefinder","V_TacChestrig_grn_F","G_Balaclava_snd_lxWS","TiGoggles_grn_RF"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TiGoggles_grn_RF","Rangefinder","V_TacChestrig_grn_F","G_Balaclava_snd_lxWS","TiGoggles_grn_RF"};
    backpack="";
  };

  class SoB_I_MEC_Sniper_Sard: SoB_I_MEC_SF_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Sniper_Sard.jpg";
    displayName="Sniper (Semi-Arid)";
	camouflage = 0.4;
    uniformClass="SoB_U_MEC_Ghillie_Sard";
    weapons[]={"Rangefinder","SoB_I_MEC_GM6","SoB_I_MEC_G19_Sniper","Put","Throw"};
    respawnWeapons[]={"Rangefinder","SoB_I_MEC_GM6","SoB_I_MEC_G19_Sniper","Put","Throw"};
    items[]={"FirstAidKit","optic_Nightstalker"};
    respawnItems[]={"FirstAidKit","optic_Nightstalker"};
    magazines[]={"5Rnd_127x108_Mag","Chemlight_red","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShell","Chemlight_red"};
    respawnMagazines[]={"5Rnd_127x108_Mag","Chemlight_red","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShell","Chemlight_red"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TiGoggles_tan_RF","Rangefinder","V_TacChestrig_grn_F","G_Balaclava_snd_lxWS","TiGoggles_tan_RF"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TiGoggles_tan_RF","Rangefinder","V_TacChestrig_grn_F","G_Balaclava_snd_lxWS","TiGoggles_tan_RF"};
    backpack="";
  };

  class SoB_I_MEC_Spotter_Arid: SoB_I_MEC_SF_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Spotter_Arid.jpg";
    displayName="Spotter (Arid)";
	camouflage = 0.4;
    uniformClass="SoB_U_MEC_Ghillie_Arid";
    weapons[]={"Laserdesignator","SoB_I_MEC_Veles_Spotter_D","SoB_I_MEC_G19_Sniper","Put","Throw"};
    respawnWeapons[]={"Laserdesignator","SoB_I_MEC_Veles_Spotter_D","SoB_I_MEC_G19_Sniper","Put","Throw"};
    items[]={"FirstAidKit","optic_Nightstalker"};
    respawnItems[]={"FirstAidKit","optic_Nightstalker"};
    magazines[]={"Chemlight_red","20Rnd_127x55_Mag_desert_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShell","Chemlight_red","20Rnd_127x55_Mag_desert_RF","20Rnd_127x55_Mag_desert_RF","20Rnd_127x55_Mag_desert_RF","20Rnd_127x55_Mag_desert_RF","17Rnd_9x19_Mag_RF"};
    respawnMagazines[]={"Chemlight_red","20Rnd_127x55_Mag_desert_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShell","Chemlight_red","20Rnd_127x55_Mag_desert_RF","20Rnd_127x55_Mag_desert_RF","20Rnd_127x55_Mag_desert_RF","20Rnd_127x55_Mag_desert_RF","17Rnd_9x19_Mag_RF"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TiGoggles_tan_RF","Laserdesignator","V_TacChestrig_grn_F","G_Balaclava_snd_lxWS","TiGoggles_tan_RF"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TiGoggles_tan_RF","Laserdesignator","V_TacChestrig_grn_F","G_Balaclava_snd_lxWS","TiGoggles_tan_RF"};
    backpack="";
  };

  class SoB_I_MEC_Spotter_Lush: SoB_I_MEC_SF_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Spotter_Lush.jpg";
    displayName="Spotter (Lush)";
	camouflage = 0.4;
    uniformClass="SoB_U_MEC_Ghillie_Lush";
    weapons[]={"Laserdesignator_03","SoB_I_MEC_Veles_Spotter_W","SoB_I_MEC_G19_Sniper","Put","Throw"};
    respawnWeapons[]={"Laserdesignator_03","SoB_I_MEC_Veles_Spotter_W","SoB_I_MEC_G19_Sniper","Put","Throw"};
    items[]={"FirstAidKit","optic_Nightstalker"};
    respawnItems[]={"FirstAidKit","optic_Nightstalker"};
    magazines[]={"Chemlight_red","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","20Rnd_127x55_Mag_wood_RF","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShell","Chemlight_red","17Rnd_9x19_Mag_RF","20Rnd_127x55_Mag_wood_RF","20Rnd_127x55_Mag_wood_RF","20Rnd_127x55_Mag_wood_RF","20Rnd_127x55_Mag_wood_RF"};
    respawnMagazines[]={"Chemlight_red","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","20Rnd_127x55_Mag_wood_RF","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShell","Chemlight_red","17Rnd_9x19_Mag_RF","20Rnd_127x55_Mag_wood_RF","20Rnd_127x55_Mag_wood_RF","20Rnd_127x55_Mag_wood_RF","20Rnd_127x55_Mag_wood_RF"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TiGoggles_grn_RF","Laserdesignator_03","V_TacChestrig_grn_F","G_Balaclava_snd_lxWS","TiGoggles_grn_RF"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TiGoggles_grn_RF","Laserdesignator_03","V_TacChestrig_grn_F","G_Balaclava_snd_lxWS","TiGoggles_grn_RF"};
    backpack="";
  };

  class SoB_I_MEC_Spotter_Sard: SoB_I_MEC_SF_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Spotter_Sard.jpg";
    displayName="Spotter (Semi-Arid)";
	camouflage = 0.4;
    uniformClass="SoB_U_MEC_Ghillie_Sard";
    weapons[]={"Rangefinder","SoB_I_MEC_Veles_Spotter_D","SoB_I_MEC_G19_Sniper","Put","Throw"};
    respawnWeapons[]={"Rangefinder","SoB_I_MEC_Veles_Spotter_D","SoB_I_MEC_G19_Sniper","Put","Throw"};
    items[]={"FirstAidKit","optic_Nightstalker"};
    respawnItems[]={"FirstAidKit","optic_Nightstalker"};
    magazines[]={"Chemlight_red","20Rnd_127x55_Mag_desert_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShell","Chemlight_red","20Rnd_127x55_Mag_desert_RF","20Rnd_127x55_Mag_desert_RF","20Rnd_127x55_Mag_desert_RF","20Rnd_127x55_Mag_desert_RF","17Rnd_9x19_Mag_RF"};
    respawnMagazines[]={"Chemlight_red","20Rnd_127x55_Mag_desert_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShell","Chemlight_red","20Rnd_127x55_Mag_desert_RF","20Rnd_127x55_Mag_desert_RF","20Rnd_127x55_Mag_desert_RF","20Rnd_127x55_Mag_desert_RF","17Rnd_9x19_Mag_RF"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TiGoggles_tan_RF","Rangefinder","V_TacChestrig_grn_F","G_Balaclava_snd_lxWS","TiGoggles_tan_RF"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TiGoggles_tan_RF","Rangefinder","V_TacChestrig_grn_F","G_Balaclava_snd_lxWS","TiGoggles_tan_RF"};
    backpack="";
  };
  
  //Revolutionary Guard
  
  class SoB_I_MEC_RG_Soldier_base_F : SoB_I_MEC_Soldier_base_F
  {
	editorSubcategory = "EdSubcat_SoB_MEC_RG_Men";
	class EventHandlers: EventHandlers
    {
        init = "[_this select 0,'SoB_RG'] call bis_fnc_setUnitInsignia;";
    };
    class AttributeValues
    {
            unitInsignia = "SoB_RG";
    };
  };
  
  class SoB_I_MEC_Rifleman_RG: SoB_I_MEC_RG_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Rifleman_RG.jpg";
	displayName="Rifleman";
    uniformClass="SoB_U_MEC_Combat_Uniform_RG";
    weapons[]={"SoB_I_MEC_RG_AK15","SoB_I_MEC_RG_G19","Binocular","Put","Throw"};
    respawnWeapons[]={"SoB_I_MEC_RG_AK15","SoB_I_MEC_RG_G19","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","SmokeShell","SmokeShell","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","HandGrenade"};
    respawnMagazines[]={"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","SmokeShell","SmokeShell","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","HandGrenade"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_MilCap_Grv_RG","V_CarrierRigKBT_01_light_Black_F","G_Shemag_red"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_MilCap_Grv_RG","V_CarrierRigKBT_01_light_Black_F","G_Shemag_red"};
    backpack="";
  };

  class SoB_I_MEC_Rifleman_AT_RG: SoB_I_MEC_RG_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Rifleman_AT_RG.jpg";
	displayName="Rifleman (AT)";
	icon = "iconManAT";
    uniformClass="SoB_U_MEC_Combat_Uniform_RG";
    weapons[]={"SoB_I_MEC_RG_AK15","launch_RPG32_black_F","SoB_I_MEC_RG_G19","Binocular","Put","Throw"};
    respawnWeapons[]={"SoB_I_MEC_RG_AK15","launch_RPG32_black_F","SoB_I_MEC_RG_G19","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","SmokeShell","SmokeShell","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","HandGrenade"};
    respawnMagazines[]={"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","SmokeShell","SmokeShell","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","HandGrenade"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_MilCap_Grv_RG","V_CarrierRigKBT_01_light_Black_F","G_Shemag_red"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_MilCap_Grv_RG","V_CarrierRigKBT_01_light_Black_F","G_Shemag_red"};
    backpack="SoB_I_MEC_Rifleman_AT_RG_pack";
  };

  class SoB_I_MEC_Rifleman_Light_AT_RG: SoB_I_MEC_RG_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Rifleman_Light_AT_RG.jpg";
	displayName="Rifleman (Light AT)";
	icon = "iconManAT";
    uniformClass="SoB_U_MEC_Combat_Uniform_RG";
    weapons[]={"SoB_I_MEC_RG_AK15","launch_NLAW_F","SoB_I_MEC_RG_G19","Binocular","Put","Throw"};
    respawnWeapons[]={"SoB_I_MEC_RG_AK15","launch_NLAW_F","SoB_I_MEC_RG_G19","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","SmokeShell","SmokeShell","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","HandGrenade"};
    respawnMagazines[]={"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","SmokeShell","SmokeShell","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","HandGrenade"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_MilCap_Grv_RG","V_CarrierRigKBT_01_light_Black_F","G_Shemag_red"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_MilCap_Grv_RG","V_CarrierRigKBT_01_light_Black_F","G_Shemag_red"};
    backpack="";
  };

  class SoB_I_MEC_Rifleman_Light_RG: SoB_I_MEC_RG_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Rifleman_Light_RG.jpg";
	displayName="Rifleman (Light)";
    uniformClass="SoB_U_MEC_Combat_Uniform_RG";
    weapons[]={"SoB_I_MEC_RG_AK15","SoB_I_MEC_RG_G19","Binocular","Put","Throw"};
    respawnWeapons[]={"SoB_I_MEC_RG_AK15","SoB_I_MEC_RG_G19","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","SmokeShell","SmokeShell","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","HandGrenade"};
    respawnMagazines[]={"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","SmokeShell","SmokeShell","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","HandGrenade"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","H_Beret_grn","V_ChestrigF_blk","G_Shemag_red"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","H_Beret_grn","V_ChestrigF_blk","G_Shemag_red"};
    backpack="";
  };

  class SoB_I_MEC_Rifleman_Shotgun_RG: SoB_I_MEC_RG_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Rifleman_Shotgun_RG.jpg";
	displayName="Rifleman (Shotgun)";
    uniformClass="SoB_U_MEC_Combat_Uniform_RG";
    weapons[]={"SoB_I_MEC_RG_AA40","SoB_I_MEC_RG_G19","Binocular","Put","Throw"};
    respawnWeapons[]={"SoB_I_MEC_RG_AA40","SoB_I_MEC_RG_G19","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"8Rnd_12Gauge_AA40_Pellets_lxWS","SmokeShell","SmokeShell","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","HandGrenade","8Rnd_12Gauge_AA40_Pellets_lxWS","8Rnd_12Gauge_AA40_Pellets_lxWS","8Rnd_12Gauge_AA40_Pellets_lxWS","8Rnd_12Gauge_AA40_Pellets_lxWS","8Rnd_12Gauge_AA40_Pellets_lxWS"};
    respawnMagazines[]={"8Rnd_12Gauge_AA40_Pellets_lxWS","SmokeShell","SmokeShell","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","HandGrenade","8Rnd_12Gauge_AA40_Pellets_lxWS","8Rnd_12Gauge_AA40_Pellets_lxWS","8Rnd_12Gauge_AA40_Pellets_lxWS","8Rnd_12Gauge_AA40_Pellets_lxWS","8Rnd_12Gauge_AA40_Pellets_lxWS"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_MilCap_Grv_RG","V_CarrierRigKBT_01_light_Black_F","G_Shemag_red"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_MilCap_Grv_RG","V_CarrierRigKBT_01_light_Black_F","G_Shemag_red"};
    backpack="";
  };

  class SoB_I_MEC_Sharpshooter_RG: SoB_I_MEC_RG_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Sharpshooter_RG.jpg";
	displayName="Sharpshooter";
    uniformClass="SoB_U_MEC_Combat_Uniform_RG";
    weapons[]={"SoB_I_MEC_RG_Cyrus","SoB_I_MEC_RG_G19","Binocular","Put","Throw"};
    respawnWeapons[]={"SoB_I_MEC_RG_Cyrus","SoB_I_MEC_RG_G19","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"10Rnd_93x64_DMR_05_Mag","17Rnd_9x19_Mag_RF","SmokeShell","SmokeShell","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","HandGrenade","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag"};
    respawnMagazines[]={"10Rnd_93x64_DMR_05_Mag","17Rnd_9x19_Mag_RF","SmokeShell","SmokeShell","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","HandGrenade","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_MilCap_Grv_RG","V_CarrierRigKBT_01_light_Black_F","G_Shemag_red"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_MilCap_Grv_RG","V_CarrierRigKBT_01_light_Black_F","G_Shemag_red"};
    backpack="";
  };

  class SoB_I_MEC_Squad_Leader_RG: SoB_I_MEC_RG_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Squad_Leader_RG.jpg";
	displayName="Squad Leader";
	icon = "iconManLeader";
    uniformClass="SoB_U_MEC_Combat_Uniform_RG";
    weapons[]={"SoB_I_MEC_RG_AK15_SL","SoB_I_MEC_RG_G19","Binocular","Put","Throw"};
    respawnWeapons[]={"SoB_I_MEC_RG_AK15_SL","SoB_I_MEC_RG_G19","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","SmokeShell","SmokeShell","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","HandGrenade"};
    respawnMagazines[]={"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","SmokeShell","SmokeShell","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","HandGrenade"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","H_Beret_grn","V_CarrierRigKBT_01_light_Black_F","G_Shemag_red"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","H_Beret_grn","V_CarrierRigKBT_01_light_Black_F","G_Shemag_red"};
    backpack="";
  };

  class SoB_I_MEC_Team_Leader_RG: SoB_I_MEC_RG_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Team_Leader_RG.jpg";
	displayName="Team Leader";
	icon = "iconManLeader";
    uniformClass="SoB_U_MEC_Combat_Uniform_RG";
    weapons[]={"SoB_I_MEC_RG_AK15_GL_TL","SoB_I_MEC_RG_G19","Binocular","Put","Throw"};
    respawnWeapons[]={"SoB_I_MEC_RG_AK15_GL_TL","SoB_I_MEC_RG_G19","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","1Rnd_SmokeRed_Grenade_shell","SmokeShell","SmokeShell","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","HandGrenade","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","UGL_FlareWhite_F"};
    respawnMagazines[]={"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","1Rnd_SmokeRed_Grenade_shell","SmokeShell","SmokeShell","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","HandGrenade","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","UGL_FlareWhite_F"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","H_HelmetSpecter_black_headset_F","V_CarrierRigKBT_01_heavy_Black_F","G_Shemag_red"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","H_HelmetSpecter_black_headset_F","V_CarrierRigKBT_01_heavy_Black_F","G_Shemag_red"};
    backpack="";
  };

  class SoB_I_MEC_Radio_Operator_RG: SoB_I_MEC_RG_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Radio_Operator_RG.jpg";
	displayName="Radio Operator";
    uniformClass="SoB_U_MEC_Combat_Uniform_RG";
    weapons[]={"SoB_I_MEC_RG_AK15","SoB_I_MEC_RG_G19","Binocular","Put","Throw"};
    respawnWeapons[]={"SoB_I_MEC_RG_AK15","SoB_I_MEC_RG_G19","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","SmokeShell","SmokeShell","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","HandGrenade"};
    respawnMagazines[]={"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","SmokeShell","SmokeShell","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","HandGrenade"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_MilCap_RG","V_CarrierRigKBT_01_light_Black_F","G_Shemag_red"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_MilCap_RG","V_CarrierRigKBT_01_light_Black_F","G_Shemag_red"};
    backpack="SoB_I_MEC_Radio_Operator_RG_pack";
  };

  class SoB_I_MEC_Marksman_RG: SoB_I_MEC_RG_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Marksman_RG.jpg";
	displayName="Marksman";
    uniformClass="SoB_U_MEC_Combat_Uniform_RG";
    weapons[]={"SoB_I_MEC_RG_M110","SoB_I_MEC_RG_G19","Binocular","Put","Throw"};
    respawnWeapons[]={"SoB_I_MEC_RG_M110","SoB_I_MEC_RG_G19","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"Aegis_20Rnd_762x51_SMAG","Aegis_20Rnd_762x51_SMAG","SmokeShell","SmokeShell","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","HandGrenade","Aegis_20Rnd_762x51_SMAG","Aegis_20Rnd_762x51_SMAG","Aegis_20Rnd_762x51_SMAG","Aegis_20Rnd_762x51_SMAG","Aegis_20Rnd_762x51_SMAG","Aegis_20Rnd_762x51_SMAG","Aegis_20Rnd_762x51_SMAG"};
    respawnMagazines[]={"Aegis_20Rnd_762x51_SMAG","Aegis_20Rnd_762x51_SMAG","SmokeShell","SmokeShell","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","HandGrenade","Aegis_20Rnd_762x51_SMAG","Aegis_20Rnd_762x51_SMAG","Aegis_20Rnd_762x51_SMAG","Aegis_20Rnd_762x51_SMAG","Aegis_20Rnd_762x51_SMAG","Aegis_20Rnd_762x51_SMAG","Aegis_20Rnd_762x51_SMAG"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_MilCap_Grv_RG","V_CarrierRigKBT_01_light_Black_F","G_Shemag_red"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_MilCap_Grv_RG","V_CarrierRigKBT_01_light_Black_F","G_Shemag_red"};
    backpack="";
  };

  class SoB_I_MEC_Heavy_Gunner_RG: SoB_I_MEC_RG_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Heavy_Gunner_RG.jpg";
	displayName="Heavy Gunner";
	icon = "iconManMG";
    uniformClass="SoB_U_MEC_Combat_Uniform_RG";
    weapons[]={"SoB_I_MEC_RG_SA77_Compact","SoB_I_MEC_RG_G19","Binocular","Put","Throw"};
    respawnWeapons[]={"SoB_I_MEC_RG_SA77_Compact","SoB_I_MEC_RG_G19","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"SmokeShell","SmokeShell","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","HandGrenade","100Rnd_762x51_S77_Red_lxWS","100Rnd_762x51_S77_Red_lxWS"};
    respawnMagazines[]={"SmokeShell","SmokeShell","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","HandGrenade","100Rnd_762x51_S77_Red_lxWS","100Rnd_762x51_S77_Red_lxWS"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_MilCap_Grv_RG","V_CarrierRigKBT_01_light_Black_F","G_Shemag_red"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_MilCap_Grv_RG","V_CarrierRigKBT_01_light_Black_F","G_Shemag_red"};
    backpack="SoB_I_MEC_Heavy_Gunner_RG_pack";
  };

  class SoB_I_MEC_Grenadier_RG: SoB_I_MEC_RG_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Grenadier_RG.jpg";
	displayName="Grenadier";
    uniformClass="SoB_U_MEC_Combat_Uniform_RG";
    weapons[]={"SoB_I_MEC_RG_AK15_GL","SoB_I_MEC_RG_G19","Binocular","Put","Throw"};
    respawnWeapons[]={"SoB_I_MEC_RG_AK15_GL","SoB_I_MEC_RG_G19","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShell","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","HandGrenade","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};
    respawnMagazines[]={"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShell","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","HandGrenade","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_MilCap_Grv_RG","V_CarrierRigKBT_01_light_Black_F","G_Shemag_red"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_MilCap_Grv_RG","V_CarrierRigKBT_01_light_Black_F","G_Shemag_red"};
    backpack="";
  };

  class SoB_I_MEC_Combat_Lifesaver_RG: SoB_I_MEC_RG_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Combat_Lifesaver_RG.jpg";
	displayName="Combat Lifesaver";
	icon = "iconManMedic";
	picture = "pictureHeal";
	attendant = 1;
    uniformClass="SoB_U_MEC_Combat_Uniform_RG";
    weapons[]={"SoB_I_MEC_RG_AK15","SoB_I_MEC_RG_G19","Binocular","Put","Throw"};
    respawnWeapons[]={"SoB_I_MEC_RG_AK15","SoB_I_MEC_RG_G19","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","SmokeShell","SmokeShell","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","HandGrenade"};
    respawnMagazines[]={"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","SmokeShell","SmokeShell","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","HandGrenade"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_MilCap_Grv_RG","V_CarrierRigKBT_01_light_Black_F","G_Shemag_red"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_MilCap_Grv_RG","V_CarrierRigKBT_01_light_Black_F","G_Shemag_red"};
    backpack="SoB_I_MEC_Combat_Lifesaver_RG_pack";
  };

  class SoB_I_MEC_Autorifleman_RG: SoB_I_MEC_RG_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Autorifleman_RG.jpg";
	displayName="Autorifleman";
	icon = "iconManMG";
    uniformClass="SoB_U_MEC_Combat_Uniform_RG";
    weapons[]={"SoB_I_MEC_RG_RPK15","SoB_I_MEC_RG_G19","Binocular","Put","Throw"};
    respawnWeapons[]={"SoB_I_MEC_RG_RPK15","SoB_I_MEC_RG_G19","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"SmokeShell","SmokeShell","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","HandGrenade","75rnd_762x39_AK12_Mag_F","75rnd_762x39_AK12_Mag_F","75rnd_762x39_AK12_Mag_F"};
    respawnMagazines[]={"SmokeShell","SmokeShell","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","HandGrenade","75rnd_762x39_AK12_Mag_F","75rnd_762x39_AK12_Mag_F","75rnd_762x39_AK12_Mag_F"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_MilCap_Grv_RG","V_CarrierRigKBT_01_light_Black_F","G_Shemag_red"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_MilCap_Grv_RG","V_CarrierRigKBT_01_light_Black_F","G_Shemag_red"};
    backpack="SoB_I_MEC_Autorifleman_RG_pack";
  };

  class SoB_I_MEC_Ammo_Bearer_RG: SoB_I_MEC_RG_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Ammo_Bearer_RG.jpg";
	displayName="Ammo Bearer";
    uniformClass="SoB_U_MEC_Combat_Uniform_RG";
    weapons[]={"SoB_I_MEC_RG_AK15","SoB_I_MEC_RG_G19","Binocular","Put","Throw"};
    respawnWeapons[]={"SoB_I_MEC_RG_AK15","SoB_I_MEC_RG_G19","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","SmokeShell","SmokeShell","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","HandGrenade"};
    respawnMagazines[]={"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","SmokeShell","SmokeShell","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","HandGrenade"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_MilCap_Grv_RG","V_CarrierRigKBT_01_light_Black_F","G_Shemag_red"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_MilCap_Grv_RG","V_CarrierRigKBT_01_light_Black_F","G_Shemag_red"};
    backpack="SoB_I_MEC_Ammo_Bearer_RG_pack";
  };

  class SoB_I_MEC_Asst_Autorifleman_RG: SoB_I_MEC_RG_Soldier_base_F
  {
    SoB_I_MEC_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MEC_Asst_Autorifleman_RG.jpg";
	displayName="Asst. Autorifleman";
    uniformClass="SoB_U_MEC_Combat_Uniform_RG";
    weapons[]={"SoB_I_MEC_RG_AK15","SoB_I_MEC_RG_G19","Binocular","Put","Throw"};
    respawnWeapons[]={"SoB_I_MEC_RG_AK15","SoB_I_MEC_RG_G19","Binocular","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","SmokeShell","SmokeShell","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","HandGrenade"};
    respawnMagazines[]={"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","SmokeShell","SmokeShell","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","HandGrenade"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_MilCap_Grv_RG","V_CarrierRigKBT_01_light_Black_F","G_Shemag_red"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_MilCap_Grv_RG","V_CarrierRigKBT_01_light_Black_F","G_Shemag_red"};
    backpack="SoB_I_MEC_Asst_Autorifleman_RG_pack";
  };
  
  //Police
  class SoB_I_MFP_Officer_base_F : SoB_I_MEC_Soldier_base_F
  {
	class EventHandlers: EventHandlers
    {
        init = "[_this select 0,'SoB_MFP'] call bis_fnc_setUnitInsignia;";
    };
    class AttributeValues
    {
            unitInsignia = "SoB_MFP";
    };
  };
  
  class SoB_I_MFP_Operator: SoB_I_MFP_Officer_base_F
  {
    SoB_I_MFP_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MFP_Operator.jpg";
    displayName="Operator";
	editorSubcategory = "EdSubcat_SoB_MFP_Operators_Men";
    uniformClass="SoB_U_MEC_Combat_Uniform_Police";
    weapons[]={"Binocular","SoB_I_MFP_R4_SWAT","hgun_Rook40_F","Put","Throw"};
    respawnWeapons[]={"Binocular","SoB_I_MFP_R4_SWAT","hgun_Rook40_F","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","17Rnd_9x21_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","Chemlight_blue","Chemlight_blue","Chemlight_blue"};
    respawnMagazines[]={"35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","17Rnd_9x21_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","Chemlight_blue","Chemlight_blue","Chemlight_blue"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","H_PASGT_basic_black_F","Aegis_V_OCarrierLuchnik_Lite_blk_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","H_PASGT_basic_black_F","Aegis_V_OCarrierLuchnik_Lite_blk_F"};
    backpack="";
  };

  class SoB_I_MFP_Officer_R4: SoB_I_MFP_Officer_base_F
  {
    SoB_I_MFP_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MFP_Officer_R4.jpg";
    displayName="Officer (R4)";
    uniformClass="SoB_U_MEC_Combat_Uniform_Police_Rolled";
    weapons[]={"Binocular","arifle_Velko_lxWS","hgun_Rook40_F","Put","Throw"};
    respawnWeapons[]={"Binocular","arifle_Velko_lxWS","hgun_Rook40_F","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","17Rnd_9x21_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","Chemlight_blue","Chemlight_blue","Chemlight_blue"};
    respawnmagazines[]={"35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","17Rnd_9x21_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","Chemlight_blue","Chemlight_blue","Chemlight_blue"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_MilCap_Grv_Police","V_ChestrigF_blk"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_MilCap_Grv_Police","V_ChestrigF_blk"};
    backpack="";
  };

  class SoB_I_MFP_Officer_SLR: SoB_I_MFP_Officer_base_F
  {
    SoB_I_MFP_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MFP_Officer_SLR.jpg";
    displayName="Officer (SLR)";
    uniformClass="SoB_U_MEC_Combat_Uniform_Police_Rolled";
    weapons[]={"Binocular","arifle_SLR_V_lxWS","hgun_Rook40_F","Put","Throw"};
    respawnWeapons[]={"Binocular","arifle_SLR_V_lxWS","hgun_Rook40_F","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","17Rnd_9x21_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Chemlight_blue","Chemlight_blue","Chemlight_blue","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS"};
    respawnMagazines[]={"20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","17Rnd_9x21_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Chemlight_blue","Chemlight_blue","Chemlight_blue","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_MilCap_Grv_Police","V_ChestrigF_blk"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_MilCap_Grv_Police","V_ChestrigF_blk"};
    backpack="";
  };

  class SoB_I_MFP_Officer_AKM: SoB_I_MFP_Officer_base_F
  {
    SoB_I_MFP_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MFP_Officer_AKM.jpg";
    displayName="Officer (AKM)";
    uniformClass="SoB_U_MEC_Combat_Uniform_Police_Rolled";
    weapons[]={"Binocular","arifle_AKM_F","hgun_Rook40_F","Put","Throw"};
    respawnWeapons[]={"Binocular","arifle_AKM_F","hgun_Rook40_F","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Chemlight_blue","Chemlight_blue","Chemlight_blue","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F"};
    respawnMagazines[]={"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Chemlight_blue","Chemlight_blue","Chemlight_blue","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_MilCap_Grv_Police","V_ChestrigF_blk"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_MilCap_Grv_Police","V_ChestrigF_blk"};
    backpack="";
  };

  class SoB_I_MFP_Officer_Promet: SoB_I_MFP_Officer_base_F
  {
    SoB_I_MFP_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MFP_Officer_Promet.jpg";
    displayName="Officer (Promet)";
    uniformClass="SoB_U_MEC_Combat_Uniform_Police_Rolled";
    weapons[]={"Binocular","arifle_MSBS65_black_F","hgun_Rook40_F","Put","Throw"};
    respawnWeapons[]={"Binocular","arifle_MSBS65_black_F","hgun_Rook40_F","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Chemlight_blue","Chemlight_blue","Chemlight_blue","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag"};
    respawnMagazines[]={"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Chemlight_blue","Chemlight_blue","Chemlight_blue","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_MilCap_Grv_Police","V_ChestrigF_blk"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_MilCap_Grv_Police","V_ChestrigF_blk"};
    backpack="";
  };

  class SoB_I_MFP_Officer_SMG: SoB_I_MFP_Officer_base_F
  {
    SoB_I_MFP_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MFP_Officer_SMG.jpg";
    displayName="Officer (SMG)";
    uniformClass="SoB_U_MEC_Combat_Uniform_Police_Rolled";
    weapons[]={"Binocular","SMG_02_F","hgun_Rook40_F","Put","Throw"};
    respawnWeapons[]={"Binocular","SMG_02_F","hgun_Rook40_F","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","17Rnd_9x21_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Chemlight_blue","Chemlight_blue","Chemlight_blue","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02"};
    respawnMagazines[]={"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","17Rnd_9x21_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Chemlight_blue","Chemlight_blue","Chemlight_blue","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_MilCap_Grv_Police","V_ChestrigF_blk"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_MilCap_Grv_Police","V_ChestrigF_blk"};
    backpack="";
  };

  class SoB_I_MFP_Officer_Shotgun: SoB_I_MFP_Officer_base_F
  {
    SoB_I_MFP_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MFP_Officer_Shotgun.jpg";
    displayName="Officer (Shotgun)";
    uniformClass="SoB_U_MEC_Combat_Uniform_Police_Rolled";
    weapons[]={"Binocular","sgun_Mp153_black_F","hgun_Rook40_F","Put","Throw"};
    respawnWeapons[]={"Binocular","sgun_Mp153_black_F","hgun_Rook40_F","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Pellets","17Rnd_9x21_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Chemlight_blue","Chemlight_blue","Chemlight_blue","4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Pellets"};
    respawnMagazines[]={"4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Pellets","17Rnd_9x21_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Chemlight_blue","Chemlight_blue","Chemlight_blue","4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Pellets"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_MilCap_Grv_Police","V_ChestrigF_blk"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_MilCap_Grv_Police","V_ChestrigF_blk"};
    backpack="";
  };

  class SoB_I_MFP_Officer: SoB_I_MFP_Officer_base_F
  {
    SoB_I_MFP_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MFP_Officer.jpg";
    displayName="Officer";
    uniformClass="SoB_U_MEC_Combat_Uniform_Police_Rolled";
    weapons[]={"Binocular","hgun_Rook40_F","Put","Throw"};
    respawnWeapons[]={"Binocular","hgun_Rook40_F","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"17Rnd_9x21_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Chemlight_blue"};
    respawnMagazines[]={"17Rnd_9x21_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Chemlight_blue"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_MilCap_Grv_Police","Aegis_V_CarrierRigKBT_01_holster_black_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_MilCap_Grv_Police","Aegis_V_CarrierRigKBT_01_holster_black_F"};
    backpack="";
  };

  class SoB_I_MFP_Operator_Team_Leader: SoB_I_MFP_Officer_base_F
  {
    SoB_I_MFP_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MFP_Operator_Team_Leader.jpg";
    displayName="Operator Team Leader";
	editorSubcategory = "EdSubcat_SoB_MFP_Operators_Men";
    uniformClass="SoB_U_MEC_Combat_Uniform_Police";
    weapons[]={"Binocular","SoB_I_MFP_Promet_SWAT_TL","hgun_Rook40_F","Put","Throw"};
    respawnWeapons[]={"Binocular","SoB_I_MFP_Promet_SWAT_TL","hgun_Rook40_F","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Chemlight_blue","Chemlight_blue","Chemlight_blue","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag"};
    respawnMagazines[]={"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Chemlight_blue","Chemlight_blue","Chemlight_blue","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","H_PASGT_basic_black_F","Aegis_V_OCarrierLuchnik_Lite_blk_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","H_PASGT_basic_black_F","Aegis_V_OCarrierLuchnik_Lite_blk_F"};
    backpack="";
  };

  class SoB_I_MFP_Operator_Shotgun: SoB_I_MFP_Officer_base_F
  {
    SoB_I_MFP_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MFP_Operator_Shotgun.jpg";
    displayName="Operator (Shotgun)";
	editorSubcategory = "EdSubcat_SoB_MFP_Operators_Men";
    uniformClass="SoB_U_MEC_Combat_Uniform_Police";
    weapons[]={"Binocular","SoB_I_MFP_sgun_M4_SWAT","hgun_Rook40_F","Put","Throw"};
    respawnWeapons[]={"Binocular","SoB_I_MFP_sgun_M4_SWAT","hgun_Rook40_F","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","17Rnd_9x21_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Chemlight_blue","Chemlight_blue","Chemlight_blue","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets"};
    respawnMagazines[]={"8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","17Rnd_9x21_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Chemlight_blue","Chemlight_blue","Chemlight_blue","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","H_PASGT_basic_black_F","Aegis_V_OCarrierLuchnik_Lite_blk_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","H_PASGT_basic_black_F","Aegis_V_OCarrierLuchnik_Lite_blk_F"};
    backpack="";
  };

  class SoB_I_MFP_Operator_Marksman: SoB_I_MFP_Officer_base_F
  {
    SoB_I_MFP_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MFP_Operator_Marksman.jpg";
    displayName="Operator Marksman";
	editorSubcategory = "EdSubcat_SoB_MFP_Operators_Men";
    uniformClass="SoB_U_MEC_Combat_Uniform_Police";
    weapons[]={"Binocular","SoB_I_MFP_Mk14_SWAT","hgun_Rook40_F","Put","Throw"};
    respawnWeapons[]={"Binocular","SoB_I_MFP_Mk14_SWAT","hgun_Rook40_F","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"20Rnd_762x51_Mag","20Rnd_762x51_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Chemlight_blue","Chemlight_blue","Chemlight_blue","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag"};
    respawnMagazines[]={"20Rnd_762x51_Mag","20Rnd_762x51_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Chemlight_blue","Chemlight_blue","Chemlight_blue","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","H_PASGT_basic_black_F","Aegis_V_OCarrierLuchnik_Lite_blk_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","H_PASGT_basic_black_F","Aegis_V_OCarrierLuchnik_Lite_blk_F"};
    backpack="";
  };

  class SoB_I_MFP_Police_Chief: SoB_I_MFP_Officer_base_F
  {
    SoB_I_MFP_Details
	editorPreview = "\SoB_Data\ui\editorpreview\SoB_I_MFP_Police_Chief.jpg";
    displayName="Police Chief";
    uniformClass="SoB_U_MEC_Light_Fatigues_Police";
    weapons[]={"Binocular","hgun_DEagle_RF","Put","Throw"};
    respawnWeapons[]={"Binocular","hgun_DEagle_RF","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"7Rnd_50AE_Mag_RF","7Rnd_50AE_Mag_RF","7Rnd_50AE_Mag_RF"};
    respawnMagazines[]={"7Rnd_50AE_Mag_RF","7Rnd_50AE_Mag_RF","7Rnd_50AE_Mag_RF"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_MilCap_Grv_Police","G_Aviator"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SoB_H_MEC_MilCap_Grv_Police","G_Aviator"};
    backpack="";
  };
};