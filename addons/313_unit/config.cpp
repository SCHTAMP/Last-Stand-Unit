// config.bin - 23:38:10 07/23/20, generated in 0.00 seconds
// Generated by unRap v1.06 by Kegetys
// Separate rootclasses: Disabled, Automatic comments: Enabled

class CfgPatches {
	class 313_Legion {
		units[] = {};
		weapons[] = {JP_313, "101_HelmetP1", "101_HelmetP1", "101_HelmetP1"};
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
	class 313_Legion {
		displayName = "313th LW Legion";
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
	
	class 313_HelmetP1_Pilot : SWLB_P1_Pilot_Helmet {
		author = "LastWar Team";
		displayName = "313th Clone Trooper P1 Helmet (Pilot)";
		hiddenSelectionsTextures[] = {"313_Unit\data\313_HelmetP1_Pilot.paa", "swlb_cee\data\swlb_p1_pilot_lifesupport_co.paa"};
	};
	
	class 313_HelmetP1 : SWLB_clone_P1_helmet {
		author = "LastWar Team";
		displayName = "313th Clone Trooper P1 Helmet";
		hiddenSelectionsTextures[] = {"313_Unit\data\313_HelmetP1.paa"};
	};
	
	class 313_HelmetP1_SG : SWLB_clone_P1_helmet {
		author = "LastWar Team";
		displayName = "313th Clone Trooper P1 Helmet (SG)";
		hiddenSelectionsTextures[] = {"313_Unit\data\313_HelmetP1_SG.paa"};
	};
	
	class 313_HelmetP1_MLT : SWLB_clone_P1_helmet {
		author = "LastWar Team";
		displayName = "313th Clone Trooper P1 Helmet (MLT)";
		hiddenSelectionsTextures[] = {"313_Unit\data\313_HelmetP1_MLT.paa"};
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
};

class cfgMods {
	author = "Last Force Project";
	timepacked = 1594648151;
};
