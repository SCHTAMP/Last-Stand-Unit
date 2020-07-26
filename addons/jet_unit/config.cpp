// config.bin - 23:38:55 07/23/20, generated in 0.01 seconds
// Generated by unRap v1.06 by Kegetys
// Separate rootclasses: Disabled, Automatic comments: Enabled

class CfgPatches {
	class Jetpack {
		units[] = {};
		weapons[] = {};
		author = "LastWarTeam";
		requiredAddons[] = {"A3_Data_F", "A3_Weapons_F", "A3_Characters_F"};
	};
};

class CfgFactionClasses {
	class LW_Faction {
		displayName = "LastWar";
	};
};

class CfgEditorSubcategories {
	class Jetpack {
		displayName = "Jetpack LW";
	};
};

class CfgVehicles {
	class RD501_jumppack_neutral_base;	// External class reference
	
	class JP_Heavy_CDV_SOB : RD501_jumppack_neutral_base {
		author = "LastWarTeam";
		scope = 2;
		displayName = "JT-12 Heavy CDV - SOB";
		picture = "Jet_Unit\ui\JP.paa";
		model = "Jet_Unit\SOB\JP_SOB.p3d";
		hiddenSelections[] = {"camo1", "camo2", "camo3", "Belt"};
		hiddenSelectionsTextures[] = {"Jet_Unit\data\SOB_JetBP.paa", "Jet_Unit\Jet\Jet_C2_co.paa", "Jet_Unit\Jet\Jet_C3_co.paa", "Jet_Unit\Jet\belt_co.paa"};
		tf_dialog = "SWLB_clone_rto_commando_radio_dialog";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_hasLRradio = 1;
		tf_range = 20000;
		tf_subtype = "digital_lr";
		maximumload = 260;
	};
	
	class JP_Heavy_NoCDV_SOB : RD501_jumppack_neutral_base {
		author = "LastWarTeam";
		scope = 2;
		displayName = "JT-12 Heavy - SOB";
		picture = "Jet_Unit\ui\JP.paa";
		model = "Jet_Unit\SOB\JP_SOB.p3d";
		hiddenSelections[] = {"camo1", "camo2", "camo3", "Belt"};
		hiddenSelectionsTextures[] = {"Jet_Unit\data\SOB_JetBP.paa", "Jet_Unit\Jet\Jet_C2_co.paa", "Jet_Unit\Jet\Jet_C3_co.paa", "Jet_Unit\Jet\belt_co.paa"};
		tf_hasLRradio = 0;
		maximumload = 300;
	};
	
	class JP_CDV_Foxxy : JP_Heavy_CDV_SOB {
		author = "LastWarTeam";
		displayName = "JT-12 Heavy CDV - SOB (Foxxy)";
		hiddenSelectionsTextures[] = {"Jet_Unit\data\ARF_JetBP_Foxxy.paa", "Jet_Unit\Jet\Jet_C2_co.paa", "Jet_Unit\Jet\Jet_C3_co.paa", "Jet_Unit\Jet\belt_co.paa"};
	};
	
	class JP_NoCDV_Foxxy : JP_Heavy_NoCDV_SOB {
		author = "LastWarTeam";
		displayName = "JT-12 Heavy - SOB (Foxxy)";
		hiddenSelectionsTextures[] = {"Jet_Unit\data\ARF_JetBP_Foxxy.paa", "Jet_Unit\Jet\Jet_C2_co.paa", "Jet_Unit\Jet\Jet_C3_co.paa", "Jet_Unit\Jet\belt_co.paa"};
	};
	
	class JPy_CDV_Ackla : JP_Heavy_CDV_SOB {
		author = "LastWarTeam";
		displayName = "JT-12 Heavy CDV - SOB (Acklay)";
		hiddenSelectionsTextures[] = {"Jet_Unit\data\ARF_Jet_Acklay.paa", "Jet_Unit\Jet\Jet_C2_co.paa", "Jet_Unit\Jet\Jet_C3_co.paa", "Jet_Unit\Jet\belt_co.paa"};
	};
	
	class JP_NoCDV_Acklay : JP_Heavy_NoCDV_SOB {
		author = "LastWarTeam";
		displayName = "JT-12 Heavy - SOB (Acklay)";
		hiddenSelectionsTextures[] = {"Jet_Unit\data\ARF_Jet_Acklay.paa", "Jet_Unit\Jet\Jet_C2_co.paa", "Jet_Unit\Jet\Jet_C3_co.paa", "Jet_Unit\Jet\belt_co.paa"};
	};
	
	class JP_CDV_Rabbit : JP_Heavy_CDV_SOB {
		author = "LastWarTeam";
		displayName = "JT-12 Heavy CDV - SOB (Rabbit)";
		hiddenSelectionsTextures[] = {"Jet_Unit\data\ARF_JetBP_Rabbit.paa", "Jet_Unit\Jet\Jet_C2_co.paa", "Jet_Unit\Jet\Jet_C3_co.paa", "Jet_Unit\Jet\belt_co.paa"};
	};
	
	class JP_NoCDV_Rabbit : JP_Heavy_NoCDV_SOB {
		author = "LastWarTeam";
		displayName = "JT-12 Heavy - SOB (Rabbit)";
		hiddenSelectionsTextures[] = {"Jet_Unit\data\ARF_JetBP_Rabbit.paa", "Jet_Unit\Jet\Jet_C2_co.paa", "Jet_Unit\Jet\Jet_C3_co.paa", "Jet_Unit\Jet\belt_co.paa"};
	};
	
	class JP_CDV_Vex : JP_Heavy_CDV_SOB {
		author = "LastWarTeam";
		displayName = "JT-12 Heavy CDV - SOB (Vex)";
		hiddenSelectionsTextures[] = {"Jet_Unit\data\ARC_JetBP_Vex.paa", "Jet_Unit\Jet\Jet_C2_co.paa", "Jet_Unit\Jet\Jet_C3_co.paa", "Jet_Unit\Jet\belt_co.paa"};
	};
	
	class JP_NoCDV_Vex : JP_Heavy_NoCDV_SOB {
		author = "LastWarTeam";
		displayName = "JT-12 Heavy - SOB (Vex)";
		hiddenSelectionsTextures[] = {"Jet_Unit\data\ARC_JetBP_Vex.paa", "Jet_Unit\Jet\Jet_C2_co.paa", "Jet_Unit\Jet\Jet_C3_co.paa", "Jet_Unit\Jet\belt_co.paa"};
	};
	
	class JP_CDV_RS : JP_Heavy_CDV_SOB {
		author = "LastWarTeam";
		displayName = "JT-12 CDV - RS";
		model = "Jet_Unit\JP.p3d";
		hiddenSelectionsTextures[] = {"Jet_Unit\data\RS_JetBP.paa", "Jet_Unit\Jet\Jet_C2_co.paa", "Jet_Unit\Jet\Jet_C3_co.paa"};
		maximumload = 200;
	};
	
	class JP_NoCDV_RS : JP_CDV_RS {
		author = "LastWarTeam";
		displayName = "JT-12 - RS";
		hiddenSelectionsTextures[] = {"Jet_Unit\data\RS_JetBP.paa", "Jet_Unit\Jet\Jet_C2_co.paa", "Jet_Unit\Jet\Jet_C3_co.paa"};
		maximumload = 260;
	};
	
	class JP_CDV_41 : JP_CDV_RS {
		author = "LastWarTeam";
		displayName = "JT-12 CDV - 41st";
		hiddenSelectionsTextures[] = {"Jet_Unit\data\41_JetBP.paa", "Jet_Unit\Jet\Jet_C2_co.paa", "Jet_Unit\Jet\Jet_C3_co.paa"};
	};
	
	class JP_NoCDV_41 : JP_NoCDV_RS {
		author = "LastWarTeam";
		displayName = "JT-12 - 41st";
		hiddenSelectionsTextures[] = {"Jet_Unit\data\41_JetBP.paa", "Jet_Unit\Jet\Jet_C2_co.paa", "Jet_Unit\Jet\Jet_C3_co.paa"};
	};
	
	class JP_CDV_66 : JP_CDV_RS {
		author = "LastWarTeam";
		displayName = "JT-12 CDV - 66th";
		hiddenSelectionsTextures[] = {"Jet_Unit\data\66_JetBP.paa", "Jet_Unit\Jet\Jet_C2_co.paa", "Jet_Unit\Jet\Jet_C3_co.paa"};
	};
	
	class JP_NoCDV_66 : JP_NoCDV_RS {
		author = "LastWarTeam";
		displayName = "JT-12 - 66th";
		hiddenSelectionsTextures[] = {"Jet_Unit\data\66_JetBP.paa", "Jet_Unit\Jet\Jet_C2_co.paa", "Jet_Unit\Jet\Jet_C3_co.paa"};
	};
	
	class JP_CDV_104 : JP_CDV_RS {
		author = "LastWarTeam";
		displayName = "JT-12 CDV - 104th";
		hiddenSelectionsTextures[] = {"Jet_Unit\data\104_JetBP.paa", "Jet_Unit\Jet\Jet_C2_co.paa", "Jet_Unit\Jet\Jet_C3_co.paa"};
	};
	
	class JP_NoCDV_104 : JP_NoCDV_RS {
		author = "LastWarTeam";
		displayName = "JT-12 - 104th";
		hiddenSelectionsTextures[] = {"Jet_Unit\data\104_JetBP.paa", "Jet_Unit\Jet\Jet_C2_co.paa", "Jet_Unit\Jet\Jet_C3_co.paa"};
	};
	
	class JP_CDV_CG : JP_CDV_RS {
		author = "LastWarTeam";
		displayName = "JT-12 CDV - CG";
		hiddenSelectionsTextures[] = {"Jet_Unit\data\CG_JetBP.paa", "Jet_Unit\Jet\Jet_C2_co.paa", "Jet_Unit\Jet\Jet_C3_co.paa"};
	};
	
	class JP_NoCDV_CG : JP_NoCDV_RS {
		author = "LastWarTeam";
		displayName = "JT-12 - CG";
		hiddenSelectionsTextures[] = {"Jet_Unit\data\CG_JetBP.paa", "Jet_Unit\Jet\Jet_C2_co.paa", "Jet_Unit\Jet\Jet_C3_co.paa"};
	};
	
	class JP_CDV_Void : JP_CDV_RS {
		author = "LastWarTeam";
		displayName = "JT-12 CDV - Void";
		hiddenSelectionsTextures[] = {"Jet_Unit\data\Void_JetBP.paa", "Jet_Unit\data\tube2.paa", "Jet_Unit\data\tube3.paa"};
	};
	
	class JP_NoCDV_Void : JP_NoCDV_RS {
		author = "LastWarTeam";
		displayName = "JT-12 - Void";
		hiddenSelectionsTextures[] = {"Jet_Unit\data\Void_JetBP.paa", "Jet_Unit\data\tube2.paa", "Jet_Unit\data\tube3.paa"};
	};
	
	class JP_CDV_Zulu : JP_CDV_RS {
		author = "LastWarTeam";
		displayName = "JT-12 CDV - Zulu";
		hiddenSelectionsTextures[] = {"Jet_Unit\data\Zulu_JetBP.paa", "Jet_Unit\Jet\Jet_C2_co.paa", "Jet_Unit\Jet\Jet_C3_co.paa"};
	};
	
	class JP_NoCDV_Zulu : JP_NoCDV_RS {
		author = "LastWarTeam";
		displayName = "JT-12 - Zulu";
		hiddenSelectionsTextures[] = {"Jet_Unit\data\Zulu_JetBP.paa", "Jet_Unit\Jet\Jet_C2_co.paa", "Jet_Unit\Jet\Jet_C3_co.paa"};
	};
	
	class JP_CDV_501 : JP_CDV_RS {
		author = "LastWarTeam";
		displayName = "JT-12 CDV - 501";
		hiddenSelectionsTextures[] = {"Jet_Unit\data\501_JetBP.paa", "Jet_Unit\Jet\Jet_C2_co.paa", "Jet_Unit\Jet\Jet_C3_co.paa"};
	};
	
	class JP_NoCDV_501 : JP_NoCDV_RS {
		author = "LastWarTeam";
		displayName = "JT-12 - 501";
		hiddenSelectionsTextures[] = {"Jet_Unit\data\501_JetBP.paa", "Jet_Unit\Jet\Jet_C2_co.paa", "Jet_Unit\Jet\Jet_C3_co.paa"};
	};
	
	class JP_CDV_212 : JP_CDV_RS {
		author = "LastWarTeam";
		displayName = "JT-12 CDV - 212";
		hiddenSelectionsTextures[] = {"Jet_Unit\data\212_JetBP.paa", "Jet_Unit\Jet\Jet_C2_co.paa", "Jet_Unit\Jet\Jet_C3_co.paa"};
	};
	
	class JP_NoCDV_212 : JP_NoCDV_RS {
		author = "LastWarTeam";
		displayName = "JT-12 - 212";
		hiddenSelectionsTextures[] = {"Jet_Unit\data\212_JetBP.paa", "Jet_Unit\Jet\Jet_C2_co.paa", "Jet_Unit\Jet\Jet_C3_co.paa"};
	};
	
	class JP_CDV_327 : JP_CDV_RS {
		author = "LastWarTeam";
		displayName = "JT-12 CDV - 327";
		hiddenSelectionsTextures[] = {"Jet_Unit\data\327_JetBP.paa", "Jet_Unit\Jet\Jet_C2_co.paa", "Jet_Unit\Jet\Jet_C3_co.paa"};
		RD501_jumppack_jump_types[] = {{"Short", {10, 2, 30, 0, 1, 0}}};
	};
	
	class JP_NoCDV_327 : JP_NoCDV_RS {
		author = "LastWarTeam";
		displayName = "JT-12 - 327";
		hiddenSelectionsTextures[] = {"Jet_Unit\data\327_JetBP.paa", "Jet_Unit\Jet\Jet_C2_co.paa", "Jet_Unit\Jet\Jet_C3_co.paa"};
		RD501_jumppack_jump_types[] = {{"Short", {10, 2, 30, 0, 1, 0}}};
	};
};

class cfgMods {
	author = "Last Force Project";
	timepacked = 1594648210;
};
