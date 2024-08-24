////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.45
//https://mikero.bytex.digital/Downloads
//'now' is Sat Aug 24 09:08:15 2024 : 'file' last modified on Mon Aug 19 16:51:34 2024
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class AC_BLK_SU35_SUBMOD
	{
		name = "Ace Combat | Belka | SU-35 Submod";
		author = "(S)Zumek";
		units[] = {"AC_BLK_O_SU35S_FLANKER_F","AC_BLK_O_SU35_GELB_F","AC_BLK_O_SU35_GRABACR_F","AC_BLK_O_SU35_REIHER_YL_F","AC_BLK_O_SU35_GRAUKATZE_F"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F","ac_blk_units","ac_blk_equipment","JS_JC_SU35"};
		skipWhenMissingDependencies = 1;
	};
};
class CfgVehicles
{
	class JS_JC_SU35;
	class AC_BLK_O_SU35_FLANKER_F: JS_JC_SU35
	{
		author = "(S)Zumek";
		_generalMacro = "AC_BLK_O_SU35S_FLANKER_F";
		DisplayName = "SU-35";
		side = 0;
		scope = 2;
		forceInGarage = 1;
		faction = "AC_O_BELKA";
		crew = "AC_BLK_O_Jet_Pilot";
		editorPreview = "\AC_Belka_SU35_Submod\data\preview\AC_BLK_O_SU35_FLANKER_F.jpg";
		hiddenselectionstextures[] = {"\AC_Belka_SU35_Submod\data\AC_BLK_SU35_HULL_GREY_co.paa","\AC_Belka_SU35_Submod\data\AC_BLK_SU35_MISC_GREY_co.paa","\js_jc_su35\data\Su35_cockpit1_co.paa","\js_jc_su35\data\su35_cockpit2_co.paa","\js_jc_su35\data\Su35_glass_ca.paa","\js_jc_su35\data\Su35_ladder_co.paa","\js_jc_su35\data\su35_clear_ca.paa","\js_jc_su35\data\su35_clear_ca.paa","\js_jc_su35\data\su35_clear_ca.paa","\js_jc_su35\data\su35_clear_ca.paa","\js_jc_su35\data\su35_clear_ca.paa","\js_jc_su35\data\su35_clear_ca.paa","","","\js_jc_su35\data\su35_engine_fire_ca.paa","\js_jc_su35\data\su35_engine_fire_ca.paa","\js_jc_su35\data\su35_afterburner_ca.paa","\js_jc_su35\data\su35_afterburner_ca.paa",""};
		class textureSources
		{
			class AC_BLK_O_SU35_Default_GREY
			{
				displayName = "Grey (Belka)";
				author = "(S)Zumek";
				textures[] = {"\AC_Belka_SU35_Submod\data\AC_BLK_SU35_HULL_GREY_co.paa","\AC_Belka_SU35_Submod\data\AC_BLK_SU35_MISC_GREY_co.paa"};
			};
			class AC_BLK_O_SU35_Default_Gelb
			{
				displayName = "Gelb SQ (Belka)";
				author = "(S)Zumek";
				textures[] = {"\AC_Belka_SU35_Submod\data\AC_BLK_SU35_HULL_GELB_co.paa","\AC_Belka_SU35_Submod\data\AC_BLK_SU35_MISC_GELB_co.paa"};
			};
			class AC_BLK_O_SU35_Default_Grabacr
			{
				displayName = "Grabacr SQ (Belka)";
				author = "(S)Zumek";
				textures[] = {"\AC_Belka_SU35_Submod\data\AC_BLK_SU35_HULL_GRABACR_co.paa","\AC_Belka_SU35_Submod\data\AC_BLK_SU35_MISC_GRABACR_co.paa"};
			};
			class AC_BLK_O_SU35_Default_Reiher
			{
				displayName = "Reiher (Belka)";
				author = "(S)Zumek";
				textures[] = {"\AC_Belka_SU35_Submod\data\AC_BLK_SU35_HULL_REIHER_co.paa","\AC_Belka_SU35_Submod\data\AC_BLK_SU35_MISC_REIHER_co.paa"};
			};
			class AC_BLK_O_SU35_Default_GrauKatze
			{
				displayName = "GrauKatze (Belka)";
				author = "(S)Zumek";
				textures[] = {"\AC_Belka_SU35_Submod\data\AC_BLK_SU35_HULL_GRAUKATZE_co.paa","\AC_Belka_SU35_Submod\data\AC_BLK_SU35_MISC_GRAUKATZE_co.paa"};
			};
		};
	};
	class AC_BLK_O_SU35_GELB_F: JS_JC_SU35
	{
		author = "(S)Zumek";
		_generalMacro = "AC_BLK_O_SU35_GELB_F";
		DisplayName = "SU-35 -GELB-";
		side = 0;
		scope = 2;
		forceInGarage = 1;
		faction = "AC_O_BELKA";
		crew = "AC_BLK_O_Jet_Pilot";
		editorSubcategory = "AC_O_BLK_PLANES_ACES";
		editorPreview = "\AC_Belka_SU35_Submod\data\preview\AC_BLK_O_SU35_GELB_F.jpg";
		hiddenselectionstextures[] = {"\AC_Belka_SU35_Submod\data\AC_BLK_SU35_HULL_GELB_co.paa","\AC_Belka_SU35_Submod\data\AC_BLK_SU35_MISC_GELB_co.paa","\js_jc_su35\data\Su35_cockpit1_co.paa","\js_jc_su35\data\su35_cockpit2_co.paa","\js_jc_su35\data\Su35_glass_ca.paa","\js_jc_su35\data\Su35_ladder_co.paa","\js_jc_su35\data\su35_clear_ca.paa","\js_jc_su35\data\su35_clear_ca.paa","\js_jc_su35\data\su35_clear_ca.paa","\js_jc_su35\data\su35_clear_ca.paa","\js_jc_su35\data\su35_clear_ca.paa","\js_jc_su35\data\su35_clear_ca.paa","","","\js_jc_su35\data\su35_engine_fire_ca.paa","\js_jc_su35\data\su35_engine_fire_ca.paa","\js_jc_su35\data\su35_afterburner_ca.paa","\js_jc_su35\data\su35_afterburner_ca.paa",""};
		class textureSources
		{
			class AC_BLK_O_SU35_GELB_GREY
			{
				displayName = "Grey (Belka)";
				author = "(S)Zumek";
				textures[] = {"\AC_Belka_SU35_Submod\data\AC_BLK_SU35_HULL_GREY_co.paa","\AC_Belka_SU35_Submod\data\AC_BLK_SU35_MISC_GREY_co.paa"};
			};
			class AC_BLK_O_SU35_GELB_Gelb
			{
				displayName = "Gelb SQ (Belka)";
				author = "(S)Zumek";
				textures[] = {"\AC_Belka_SU35_Submod\data\AC_BLK_SU35_HULL_GELB_co.paa","\AC_Belka_SU35_Submod\data\AC_BLK_SU35_MISC_GELB_co.paa"};
			};
			class AC_BLK_O_SU35_GELB_Grabacr
			{
				displayName = "Grabacr SQ (Belka)";
				author = "(S)Zumek";
				textures[] = {"\AC_Belka_SU35_Submod\data\AC_BLK_SU35_HULL_GRABACR_co.paa","\AC_Belka_SU35_Submod\data\AC_BLK_SU35_MISC_GRABACR_co.paa"};
			};
			class AC_BLK_O_SU35_GELB_Reiher
			{
				displayName = "Reiher (Belka)";
				author = "(S)Zumek";
				textures[] = {"\AC_Belka_SU35_Submod\data\AC_BLK_SU35_HULL_REIHER_co.paa","\AC_Belka_SU35_Submod\data\AC_BLK_SU35_MISC_REIHER_co.paa"};
			};
			class AC_BLK_O_SU35_GELB_GrauKatze
			{
				displayName = "GrauKatze (Belka)";
				author = "(S)Zumek";
				textures[] = {"\AC_Belka_SU35_Submod\data\AC_BLK_SU35_HULL_GRAUKATZE_co.paa","\AC_Belka_SU35_Submod\data\AC_BLK_SU35_MISC_GRAUKATZE_co.paa"};
			};
		};
	};
	class AC_BLK_O_SU35_GRABACR_F: JS_JC_SU35
	{
		author = "(S)Zumek";
		_generalMacro = "AC_BLK_O_SU35_GRABACR_F";
		DisplayName = "SU-35 -GRABACR-";
		side = 0;
		scope = 2;
		forceInGarage = 1;
		faction = "AC_O_BELKA";
		crew = "AC_BLK_O_Jet_Pilot";
		editorSubcategory = "AC_O_BLK_PLANES_ACES";
		editorPreview = "\AC_Belka_SU35_Submod\data\preview\AC_BLK_O_SU35_GRABACR_F.jpg";
		hiddenselectionstextures[] = {"\AC_Belka_SU35_Submod\data\AC_BLK_SU35_HULL_GRABACR_co.paa","\AC_Belka_SU35_Submod\data\AC_BLK_SU35_MISC_GRABACR_co.paa","\js_jc_su35\data\Su35_cockpit1_co.paa","\js_jc_su35\data\su35_cockpit2_co.paa","\js_jc_su35\data\Su35_glass_ca.paa","\js_jc_su35\data\Su35_ladder_co.paa","\js_jc_su35\data\su35_clear_ca.paa","\js_jc_su35\data\su35_clear_ca.paa","\js_jc_su35\data\su35_clear_ca.paa","\js_jc_su35\data\su35_clear_ca.paa","\js_jc_su35\data\su35_clear_ca.paa","\js_jc_su35\data\su35_clear_ca.paa","","","\js_jc_su35\data\su35_engine_fire_ca.paa","\js_jc_su35\data\su35_engine_fire_ca.paa","\js_jc_su35\data\su35_afterburner_ca.paa","\js_jc_su35\data\su35_afterburner_ca.paa",""};
		class textureSources
		{
			class AC_BLK_O_SU35_GRABACR_GREY
			{
				displayName = "Grey (Belka)";
				author = "(S)Zumek";
				textures[] = {"\AC_Belka_SU35_Submod\data\AC_BLK_SU35_HULL_GREY_co.paa","\AC_Belka_SU35_Submod\data\AC_BLK_SU35_MISC_GREY_co.paa"};
			};
			class AC_BLK_O_SU35_GRABACR_Gelb
			{
				displayName = "Gelb SQ (Belka)";
				author = "(S)Zumek";
				textures[] = {"\AC_Belka_SU35_Submod\data\AC_BLK_SU35_HULL_GELB_co.paa","\AC_Belka_SU35_Submod\data\AC_BLK_SU35_MISC_GELB_co.paa"};
			};
			class AC_BLK_O_SU35_GRABACR_Grabacr
			{
				displayName = "Grabacr SQ (Belka)";
				author = "(S)Zumek";
				textures[] = {"\AC_Belka_SU35_Submod\data\AC_BLK_SU35_HULL_GRABACR_co.paa","\AC_Belka_SU35_Submod\data\AC_BLK_SU35_MISC_GRABACR_co.paa"};
			};
			class AC_BLK_O_SU35_GRABACR_Reiher
			{
				displayName = "Reiher (Belka)";
				author = "(S)Zumek";
				textures[] = {"\AC_Belka_SU35_Submod\data\AC_BLK_SU35_HULL_REIHER_co.paa","\AC_Belka_SU35_Submod\data\AC_BLK_SU35_MISC_REIHER_co.paa"};
			};
			class AC_BLK_O_SU35_GRABACR_GrauKatze
			{
				displayName = "GrauKatze (Belka)";
				author = "(S)Zumek";
				textures[] = {"\AC_Belka_SU35_Submod\data\AC_BLK_SU35_HULL_GRAUKATZE_co.paa","\AC_Belka_SU35_Submod\data\AC_BLK_SU35_MISC_GRAUKATZE_co.paa"};
			};
		};
	};
	class AC_BLK_O_SU35_REIHER_YL_F: JS_JC_SU35
	{
		author = "(S)Zumek";
		_generalMacro = "AC_BLK_O_SU35_REIHER_YL_F";
		DisplayName = "SU-35 -REIHER-";
		side = 0;
		scope = 2;
		forceInGarage = 1;
		faction = "AC_O_BELKA";
		crew = "AC_BLK_O_Jet_Pilot";
		editorSubcategory = "AC_O_BLK_PLANES_ACES";
		editorPreview = "\AC_Belka_SU35_Submod\data\preview\AC_BLK_O_SU35_REIHER_YL_F.jpg";
		hiddenselectionstextures[] = {"\AC_Belka_SU35_Submod\data\AC_BLK_SU35_HULL_REIHER_co.paa","\AC_Belka_SU35_Submod\data\AC_BLK_SU35_MISC_REIHER_co.paa","\js_jc_su35\data\Su35_cockpit1_co.paa","\js_jc_su35\data\su35_cockpit2_co.paa","\js_jc_su35\data\Su35_glass_ca.paa","\js_jc_su35\data\Su35_ladder_co.paa","\js_jc_su35\data\su35_clear_ca.paa","\js_jc_su35\data\su35_clear_ca.paa","\js_jc_su35\data\su35_clear_ca.paa","\js_jc_su35\data\su35_clear_ca.paa","\js_jc_su35\data\su35_clear_ca.paa","\js_jc_su35\data\su35_clear_ca.paa","","","\js_jc_su35\data\su35_engine_fire_ca.paa","\js_jc_su35\data\su35_engine_fire_ca.paa","\js_jc_su35\data\su35_afterburner_ca.paa","\js_jc_su35\data\su35_afterburner_ca.paa",""};
		class textureSources
		{
			class AC_BLK_O_SU35_REIHER_GREY
			{
				displayName = "Grey (Belka)";
				author = "(S)Zumek";
				textures[] = {"\AC_Belka_SU35_Submod\data\AC_BLK_SU35_HULL_GREY_co.paa","\AC_Belka_SU35_Submod\data\AC_BLK_SU35_MISC_GREY_co.paa"};
			};
			class AC_BLK_O_SU35_REIHER_Gelb
			{
				displayName = "Gelb SQ (Belka)";
				author = "(S)Zumek";
				textures[] = {"\AC_Belka_SU35_Submod\data\AC_BLK_SU35_HULL_GELB_co.paa","\AC_Belka_SU35_Submod\data\AC_BLK_SU35_MISC_GELB_co.paa"};
			};
			class AC_BLK_O_SU35_REIHER_Grabacr
			{
				displayName = "Grabacr SQ (Belka)";
				author = "(S)Zumek";
				textures[] = {"\AC_Belka_SU35_Submod\data\AC_BLK_SU35_HULL_GRABACR_co.paa","\AC_Belka_SU35_Submod\data\AC_BLK_SU35_MISC_GRABACR_co.paa"};
			};
			class AC_BLK_O_SU35_REIHER_Reiher
			{
				displayName = "Reiher (Belka)";
				author = "(S)Zumek";
				textures[] = {"\AC_Belka_SU35_Submod\data\AC_BLK_SU35_HULL_REIHER_co.paa","\AC_Belka_SU35_Submod\data\AC_BLK_SU35_MISC_REIHER_co.paa"};
			};
			class AC_BLK_O_SU35_REIHER_GrauKatze
			{
				displayName = "GrauKatze (Belka)";
				author = "(S)Zumek";
				textures[] = {"\AC_Belka_SU35_Submod\data\AC_BLK_SU35_HULL_GRAUKATZE_co.paa","\AC_Belka_SU35_Submod\data\AC_BLK_SU35_MISC_GRAUKATZE_co.paa"};
			};
		};
	};
	class AC_BLK_O_SU35_GRAUKATZE_F: JS_JC_SU35
	{
		author = "(S)Zumek";
		_generalMacro = "AC_BLK_O_SU35_GRAUKATZE_F";
		DisplayName = "SU-35 -GRAUKATZE-";
		side = 0;
		scope = 2;
		forceInGarage = 1;
		faction = "AC_O_BELKA";
		crew = "AC_BLK_O_Jet_Pilot";
		editorSubcategory = "AC_O_BLK_PLANES_ACES";
		editorPreview = "\AC_Belka_SU35_Submod\data\preview\AC_BLK_O_SU35_GRAUKATZE_F.jpg";
		hiddenselectionstextures[] = {"\AC_Belka_SU35_Submod\data\AC_BLK_SU35_HULL_GRAUKATZE_co.paa","\AC_Belka_SU35_Submod\data\AC_BLK_SU35_MISC_GRAUKATZE_co.paa","\js_jc_su35\data\Su35_cockpit1_co.paa","\js_jc_su35\data\su35_cockpit2_co.paa","\js_jc_su35\data\Su35_glass_ca.paa","\js_jc_su35\data\Su35_ladder_co.paa","\js_jc_su35\data\su35_clear_ca.paa","\js_jc_su35\data\su35_clear_ca.paa","\js_jc_su35\data\su35_clear_ca.paa","\js_jc_su35\data\su35_clear_ca.paa","\js_jc_su35\data\su35_clear_ca.paa","\js_jc_su35\data\su35_clear_ca.paa","","","\js_jc_su35\data\su35_engine_fire_ca.paa","\js_jc_su35\data\su35_engine_fire_ca.paa","\js_jc_su35\data\su35_afterburner_ca.paa","\js_jc_su35\data\su35_afterburner_ca.paa",""};
		class textureSources
		{
			class AC_BLK_O_SU35_GRAUKATZE_GREY
			{
				displayName = "Grey (Belka)";
				author = "(S)Zumek";
				textures[] = {"\AC_Belka_SU35_Submod\data\AC_BLK_SU35_HULL_GREY_co.paa","\AC_Belka_SU35_Submod\data\AC_BLK_SU35_MISC_GREY_co.paa"};
			};
			class AC_BLK_O_SU35_GRAUKATZE_Gelb
			{
				displayName = "Gelb SQ (Belka)";
				author = "(S)Zumek";
				textures[] = {"\AC_Belka_SU35_Submod\data\AC_BLK_SU35_HULL_GELB_co.paa","\AC_Belka_SU35_Submod\data\AC_BLK_SU35_MISC_GELB_co.paa"};
			};
			class AC_BLK_O_SU35_GRAUKATZE_Grabacr
			{
				displayName = "Grabacr SQ (Belka)";
				author = "(S)Zumek";
				textures[] = {"\AC_Belka_SU35_Submod\data\AC_BLK_SU35_HULL_GRABACR_co.paa","\AC_Belka_SU35_Submod\data\AC_BLK_SU35_MISC_GRABACR_co.paa"};
			};
			class AC_BLK_O_SU35_GRAUKATZE_Reiher
			{
				displayName = "Reiher (Belka)";
				author = "(S)Zumek";
				textures[] = {"\AC_Belka_SU35_Submod\data\AC_BLK_SU35_HULL_REIHER_co.paa","\AC_Belka_SU35_Submod\data\AC_BLK_SU35_MISC_REIHER_co.paa"};
			};
			class AC_BLK_O_SU35_GRAUKATZE_GrauKatze
			{
				displayName = "GrauKatze (Belka)";
				author = "(S)Zumek";
				textures[] = {"\AC_Belka_SU35_Submod\data\AC_BLK_SU35_HULL_GRAUKATZE_co.paa","\AC_Belka_SU35_Submod\data\AC_BLK_SU35_MISC_GRAUKATZE_co.paa"};
			};
		};
	};
};
