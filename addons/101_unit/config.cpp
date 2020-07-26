// config.bin - 23:37:49 07/23/20, generated in 0.01 seconds
// Generated by unRap v1.06 by Kegetys
// Separate rootclasses: Disabled, Automatic comments: Enabled

class CfgPatches {
	class 101_Legion {
		units[] = {"Belgiy", 101, "Doom"};
		weapons[] = {JP_101, "101_Helmet_Chubakin", "101_HelmetP1", "101_HelmetP1_lieutenant", "101_HelmetP1_Officer", "101_HelmetP1_Doom", "101_Uniform", "101_Uniform_Doom", "101_Backpack", "101_Backpack_heavy", "101_Backpack_medic", "101_Backpack_RTO"};
		author = "LastWarTeam";
		requiredAddons[] = {"SWLB_clones", "SWLB_equipment", SWLB_CEE};
	};
	
};

class CfgFactionClasses {
	class LW_Faction {
		displayName = "LastWar";
	};
};

class CfgEditorSubcategories {
	class 101_Legion {
		displayName = "101st LW Legion";
	};
};

class CfgWeapons {
	class H_HelmetO_ViperSP_hex_F;	// External class reference
	class SWLB_clone_ccVisor;	// External class reference
	class SWLB_clone_mcVisor;	// External class reference
	class SWLB_clone_nvg;	// External class reference
	class SWLB_clone_nvg_nco;	// External class reference
	class SWLB_clone_rangefinder;	// External class reference
	class SWLB_clone_nvg_spec;	// External class reference
	class SWLB_clone_nvg_spec_nco;	// External class reference
	class SWLB_clone_commando_nvg_antenna;	// External class reference
	class SWLB_clone_commando_nvg;	// External class reference
	class SWLB_clone_P1_2_helmet;	// External class reference
	class SWLB_clone_ARF_P1_helmet;	// External class reference
	class SWLB_clone_P1_helmet;	// External class reference
	class SWLB_clone_eng_helmet;	// External class reference
	class SWLB_clone_BARC_helmet;	// External class reference
	class SWLB_clone_P2_helmet;	// External class reference
	class SWLB_clone_AB_helmet;	// External class reference
	class SWLB_clone_P15_helmet;	// External class reference
	class SDT_Hazard_Helmet;	// External class reference
	class SDT_stealth_helmet;	// External class reference
	class Scout_helmet;	// External class reference
	class SWLB_clone_pilot_P2_helmet;	// External class reference
	class SWLB_clone_commando_helmet_k1;	// External class reference
	class SWLB_clone_recon_armor;	// External class reference
	class SWLB_clone_recon_officer_armor;	// External class reference
	class SWLB_clone_recon_nco_armor;	// External class reference
	class SWLB_clone_officer_armor;	// External class reference
	class SWLB_clone_medic_armor;	// External class reference
	class SWLB_clone_kama_armor;	// External class reference
	class SWLB_clone_mc_uniform;	// External class reference
	class SWLB_clone_commander_armor;	// External class reference
	class SWLB_clone_cfr_armor;	// External class reference
	class SWLB_clone_airborne_armor;	// External class reference
	class SWLB_CEE_Force_Recon_Officer;	// External class reference
	class SWLB_clone_airborne_nco_armor;	// External class reference
	class SWLB_clone_arc_armor;	// External class reference
	class SWLB_clone_uniform;	// External class reference
	class SWLA_BL_Sergeant_Vest;	// External class reference
	class SWLB_CEE_Fox_Visor;	// External class reference
	class UniformItem;	// External class reference
	class HeadgearItem;	// External class reference
	class SDT_pilot_p1_helmet;	// External class reference
	class SWLB_P1_Pilot_Helmet;	// External class reference
	
	class 101_HelmetP1_Pilot : SWLB_P1_Pilot_Helmet {
		author = "LastWar Team";
		displayName = "101st Clone Trooper P1 Helmet (Pilot)";
		hiddenSelectionsTextures[] = {"101_Unit\data\101_HelmetP1_Pilot.paa", "swlb_cee\data\swlb_p1_pilot_lifesupport_co.paa"};
	};
	
	class 101_Visor_Doom : SWLB_CEE_Fox_Visor {
		displayName = "101st Clone trooper marshal commander visor (Doom)";
		hiddenSelectionsTextures[] = {"\SWLB_CEE\data\SWLB_CEE_Doom_Visor_Co.paa", "\SWLB_CEE\data\SWLB_CEE_Doom_Visor_Co.paa", "\SWLB_CEE\data\SWLB_CEE_Doom_Visor_Co.paa"};
	};
	
	class 101_Helmet_Chubakin : SWLB_clone_ARF_P1_helmet {
		author = "LastWar Team";
		displayName = "101st Clone Trooper P1 Helmet ARF (Chubakin)";
		hiddenSelectionsTextures[] = {"101_Unit\data\101_Helmet_Chubakin.paa"};
	};
	
	class 101_HelmetP1_Belgiy : SWLB_clone_P1_helmet {
		author = "LastWar Team";
		displayName = "101st Clone Trooper P1 Helmet (Belgiy)";
		hiddenSelectionsTextures[] = {"101_Unit\data\101_HelmetP1_Belgiy.paa"};
	};
	
	class 101_HelmetP1 : SWLB_clone_P1_helmet {
		author = "LastWar Team";
		displayName = "101st Clone Trooper P1 Helmet";
		hiddenSelectionsTextures[] = {"101_Unit\data\101_HelmetP1.paa"};
	};
	
	class 101_HelmetP1_lieutenant : SWLB_clone_P1_helmet {
		author = "LastWar Team";
		displayName = "101st Clone Trooper P1 Helmet Lieutenant";
		hiddenSelectionsTextures[] = {"101_Unit\data\101_HelmetP1_lieutenant.paa"};
	};
	
	class 101_HelmetP1_Officer : SWLB_clone_P1_helmet {
		author = "LastWar Team";
		displayName = "101st Clone Trooper P1 Helmet Officer";
		hiddenSelectionsTextures[] = {"101_Unit\data\101_HelmetP1_Officer.paa"};
	};
	
	class 101_HelmetP1_Doom : SWLB_clone_P1_helmet {
		author = "LastWar Team";
		displayName = "101st Clone Trooper P1 Helmet (Doom)";
		hiddenSelectionsTextures[] = {"101_Unit\data\101_HelmetP1_Doom.paa"};
	};
	
	class 101_HelmetP1_ARC : SWLB_clone_P1_helmet {
		author = "LastWar Team";
		displayName = "101st Clone Trooper P1 Helmet (ARC)";
		hiddenSelectionsTextures[] = {"101_Unit\data\101_HelmetP1_ARC.paa"};
	};
	
	class 101_Helmet_ARF_Shawty : SWLB_clone_ARF_P1_helmet {
		author = "LastWar Team";
		displayName = "101st Clone Trooper P1 Helmet ARF (Shawty)";
		hiddenSelectionsTextures[] = {"101_Unit\data\101_Helmet_ARF_Shawty.paa"};
	};
	
	class 101_Uniform_Belgiy : SWLB_clone_uniform {
		author = "LastWar Team";
		displayName = "101st Clone Trooper Uniform (Belgiy)";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "Belgiy";
			containerClass = "Supply150";
			mass = 40;
		};
	};
	
	class 101_Uniform_Shawty : SWLB_clone_uniform {
		author = "LastWar Team";
		displayName = "101st Clone Trooper Uniform (Shawty)";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "Shawty";
			containerClass = "Supply150";
			mass = 40;
		};
	};
	
	class 101_Uniform_Doom : SWLB_clone_uniform {
		author = "LastWar Team";
		displayName = "101st Clone Trooper Uniform (Doom)";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "Doom";
			containerClass = "Supply150";
			mass = 40;
		};
	};
	
	class 101_Uniform_ARC : SWLB_clone_uniform {
		author = "LastWar Team";
		displayName = "101st Clone Trooper Uniform (ARC)";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = ARC;
			containerClass = "Supply150";
			mass = 40;
		};
	};
	
	class 101_Camo_Shawty : SWLB_CEE_Force_Recon_Officer {
		author = "LastWar Team";
		displayName = "101st ARC Camo (Shawty)";
		hiddenSelectionsTextures[] = {"101_Unit\data\101_accessories.paa", "101_Unit\data\101_camo_Shawty.paa"};
	};
	
	class 101_Camo_ARC : SWLB_CEE_Force_Recon_Officer {
		author = "LastWar Team";
		displayName = "101st ARC Camo";
		hiddenSelectionsTextures[] = {"101_Unit\data\101_accessories.paa", "101_Unit\data\101_Camo_ARC.paa"};
	};
	
	class 101_Camo_Officer : SWLB_clone_officer_armor {
		author = "LastWar Team";
		displayName = "101st Officer Camo";
		hiddenSelectionsTextures[] = {"101_Unit\data\101_OficCamo.paa"};
	};
	
	class 101_Camo_SG : SWLB_clone_airborne_armor {
		author = "SW Gromsx7";
		displayName = "101st SG Camo";
		hiddenSelectionsTextures[] = {"101_Unit\data\101_camo_SG.paa", "101_Unit\data\101_OficCamo.paa"};
	};
};

class CfgVehicles {
	class SWLB_clone_base_P2;	// External class reference
	class SWLB_clone_base_P1;	// External class reference
	class SWLB_clone_assault_base_P2;	// External class reference
	class SWLB_clone_cfr_base_P2;	// External class reference
	class SWLB_clone_medic_base_P2;	// External class reference
	class SWLB_clone_RTO_base_P2;	// External class reference
	class SWLB_clone_recon_base_P2;	// External class reference
	class SWLB_clone_recon_nco_base_P2;	// External class reference
	class SWLB_clone_recon_officer_base_P2;	// External class reference
	class SWLB_clone_airborne_base_P2;	// External class reference
	class SWLB_clone_airborne_nco_base_P2;	// External class reference
	class SWLB_clone_lieutenant_base_P2;	// External class reference
	class SWLB_clone_captain_base_P2;	// External class reference
	class SWLB_clone_commander_base_P2;	// External class reference
	class SWLB_clone_marshal_commander_base_P2;	// External class reference
	class SWLB_clone_arc_base_P2;	// External class reference
	class SWLB_clone_pilot_base_P2;	// External class reference
	class SWLB_clone_sniper_base_P2;	// External class reference
	class SWLB_clone_sg_base_P2;	// External class reference
	class SWLB_clone_at_base_P2;	// External class reference
	class SWLB_clone_backpack;	// External class reference
	class SWLB_clone_backpack_eod;	// External class reference
	class SWLB_clone_backpack_heavy;	// External class reference
	class SWLB_clone_backpack_medic;	// External class reference
	class SWLB_mando_base_assault;	// External class reference
	class SWLB_clone_backpack_RTO;	// External class reference
	class SWLB_mando_rangefinder;	// External class reference
	class SWLB_clone_rangefinder;	// External class reference
	class SWLB_clone_RTO_mini_backpack;	// External class reference
	class SWLB_clone_uniform;	// External class reference
	
	class Belgiy : SWLB_clone_base_P2 {
		author = "LastWar Team";
		displayName = "101st Clone Trooper (Belgiy)";
		faction = "LW_Faction";
		editorSubcategory = "101_Legion";
		uniformclass = "Belgiy";
		hiddenSelectionsTextures[] = {"101_Unit\data\101_Armor1_Belgiy.paa", "101_Unit\data\101_Armor2_Belgiy.paa"};
		linkedItems[] = {"101_Helmet_Belgiy", "ItemMap", "ItemCompass", "ItemWatch", "SWLB_comlink"};
		respawnLinkedItems[] = {"101_Helmet_Belgiy", "ItemMap", "ItemCompass", "ItemWatch", "SWLB_comlink"};
	};
	
	class Shawty : SWLB_clone_base_P2 {
		author = "LastWar Team";
		displayName = "101st Clone Trooper (Shawty)";
		faction = "LW_Faction";
		editorSubcategory = "101_Legion";
		uniformclass = "Shawty";
		hiddenSelectionsTextures[] = {"101_Unit\data\101_Armor1_Shawty.paa", "101_Unit\data\101_Armor2_Shawty.paa"};
		linkedItems[] = {"101_Helmet_ARF_Shawty", "ItemMap", "ItemCompass", "ItemWatch", "SWLB_comlink"};
		respawnLinkedItems[] = {"101_Helmet_ARF_Shawty", "ItemMap", "ItemCompass", "ItemWatch", "SWLB_comlink"};
	};
	
	class ARC : SWLB_clone_base_P2 {
		author = "LastWar Team";
		displayName = "101st Clone Trooper (ARC)";
		faction = "LW_Faction";
		editorSubcategory = "101_Legion";
		uniformclass = ARC;
		hiddenSelectionsTextures[] = {"101_Unit\data\101_Armor1_ARC.paa", "101_Unit\data\101_Armor2_ARC.paa"};
		linkedItems[] = {"101_HelmetP1_ARC", "ItemMap", "ItemCompass", "ItemWatch", "SWLB_comlink"};
		respawnLinkedItems[] = {"101_HelmetP1_ARC", "ItemMap", "ItemCompass", "ItemWatch", "SWLB_comlink"};
	};
	
	class Doom : SWLB_clone_base_P2 {
		author = "LastWar Team";
		displayName = "101st Clone Trooper (Doom)";
		faction = "LW_Faction";
		editorSubcategory = "101_Legion";
		uniformclass = "Doom";
		hiddenSelectionsTextures[] = {"101_Unit\data\101_Armor1_Doom.paa", "101_Unit\data\101_Armor2_Doom.paa"};
		linkedItems[] = {"101_HelmetP1_Doom", "ItemMap", "ItemCompass", "ItemWatch", "SWLB_comlink"};
		respawnLinkedItems[] = {"101_HelmetP1_Doom", "ItemMap", "ItemCompass", "ItemWatch", "SWLB_comlink"};
	};
	
	class 101_Backpack : SWLB_clone_backpack {
		displayName = "101st Clone trooper backpack";
		author = "LastWar Team";
		scope = 2;
		hiddenSelectionsTextures[] = {"101_Unit\data\101_BPack.paa", "101_Unit\data\101_BPack.paa", "", ""};
	};
	
	class 101_Backpack_heavy : SWLB_clone_backpack_heavy {
		displayName = "101st Clone trooper heavy backpack";
		hiddenSelectionsTextures[] = {"101_Unit\data\101_BPack.paa", "101_Unit\data\101_BPack.paa", "101_Unit\data\101_BPack.paa", "", ""};
	};
	
	class 101_Backpack_medic : SWLB_clone_backpack_medic {
		displayName = "101st Clone trooper medic backpack";
		hiddenSelectionsTextures[] = {"101_Unit\data\101_BPack.paa", "101_Unit\data\101_BPack.paa", "", "101_Unit\data\101_BPack.paa"};
	};
	
	class 101_Backpack_RTO : SWLB_clone_backpack_RTO {
		displayName = "101st Clone trooper RTO backpack";
		hiddenSelectionsTextures[] = {"101_Unit\data\101_BPack.paa", "", "", "", "101_Unit\data\101_BPack.paa"};
	};
};

class cfgMods {
	author = "Last Force Project";
	timepacked = 1594648130;
};
