// config.bin - 23:37:55 07/23/20, generated in 0.01 seconds
// Generated by unRap v1.06 by Kegetys
// Separate rootclasses: Disabled, Automatic comments: Enabled

class CfgPatches {
	class 104_Legion {
		units[] = {"Horus"};
		weapons[] = {"104_HelmetP1_Horus"};
	};
	author = "LastWarTeam";
	requiredAddons[] = {"SWLB_clones", "SWLB_equipment", SWLB_CEE};
};

class CfgFactionClasses {
	class LW_Faction {
		displayName = "LastWar";
	};
};

class CfgEditorSubcategories {
	class 104_Legion {
		displayName = "104th LW Legion";
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
	class SWLB_CEE_Hazard_Helmet;	// External class reference
	class SWLB_clone_ARF_P2_helmet;	// External class reference
	
	class 104_HelmetP2_ARF : SWLB_clone_ARF_P2_helmet {
		author = "LastWar Team";
		displayName = "104th Clone trooper P2 ARF helmet";
		hiddenSelectionsTextures[] = {"104_Unit\data\104_HelmetP2_ARF.paa", "", "104_Unit\data\104_ARF_Flaps.paa"};
	};
	
	class 104_HelmetP2_ENG : SWLB_clone_eng_helmet {
		author = "LastWarTeam";
		displayName = "104th Clone Trooper ENG helmet";
		hiddenSelectionsTextures[] = {"104_Unit\data\104_HelmetP2_ENG.paa"};
	};
	
	class 104_Helmet_Hazard : SWLB_CEE_Hazard_Helmet {
		author = "LastWarTeam";
		displayName = "104th Clone Trooper Hazard helmet";
		hiddenSelectionsTextures[] = {"104_Unit\data\104_Helmet_Hazard.paa"};
	};
	
	class 104_HelmetP15_Horus : SWLB_clone_P15_helmet {
		author = "LastWar Team";
		displayName = "104th Clone Trooper P2 ARC Helmet (Horus)";
		hiddenSelectionsTextures[] = {"104_Unit\data\104_HelmetP15_Horus.paa"};
	};
	
	class 104_HelmetP2_Horus : SWLB_clone_P15_helmet {
		author = "LastWar Team";
		displayName = "104th Clone Trooper P2 Helmet (Horus)";
		hiddenSelectionsTextures[] = {"104_Unit\data\104_HelmetP2_Horus.paa"};
	};
	
	class 104_HelmetP1_Horus : SWLB_clone_P1_helmet {
		author = "LastWar Team";
		displayName = "104th Clone Trooper P1 Helmet (Horus)";
		hiddenSelectionsTextures[] = {"104_Unit\data\104_HelmetP1_Horus.paa"};
	};
	
	class 104_Camo_Plate_Horus : SWLB_clone_arc_armor {
		displayName = " 104th ARC Camo\Plate (Horus)";
		hiddenSelectionsTextures[] = {"104_Unit\data\104_Plate_Horus.paa", "104_Unit\data\104_Cama_Horus.paa"};
	};
	
	class 104_Uniform_Horus : SWLB_clone_uniform {
		author = "LastWar Team";
		displayName = "104th Clone Trooper Uniform (Horus)";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "Horus";
			containerClass = "Supply150";
			mass = 40;
		};
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
	
	class Horus : SWLB_clone_base_P2 {
		author = "LastWar Team";
		displayName = "104th Clone Trooper (Horus)";
		faction = "LW_Faction";
		editorSubcategory = "212_Legion";
		uniformclass = "Horus";
		hiddenSelectionsTextures[] = {"104_Unit\data\104_Armor1_Horus.paa", "104_Unit\data\104_Armor2_Horus.paa"};
		linkedItems[] = {"104_HelmetP15_Horus", "ItemMap", "ItemCompass", "ItemWatch", "SWLB_comlink"};
		respawnLinkedItems[] = {"104_HelmetP15_Horus", "ItemMap", "ItemCompass", "ItemWatch", "SWLB_comlink"};
	};
};

class cfgMods {
	author = "Last Force Project";
	timepacked = 1594648137;
};
