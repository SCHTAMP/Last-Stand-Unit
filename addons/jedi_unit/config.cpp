// config.bin - 23:38:47 07/23/20, generated in 0.02 seconds
// Generated by unRap v1.06 by Kegetys
// Separate rootclasses: Disabled, Automatic comments: Enabled

class CfgPatches {
	class Jedi {
		units[] = {"Horus"};
		weapons[] = {};
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
	class Jedi {
		displayName = "Jedi";
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
	
	class 21_HelmetP1_Jedi : SWLB_clone_P1_helmet {
		author = "LastStand Team";
		displayName = "21st Jedi P1 Helmet";
		hiddenSelectionsTextures[] = {"jedi_unit\data\21_HelmetP1_Jedi.paa"};
	};
	
	class 41_HelmetP1_Jedi : SWLB_clone_P1_helmet {
		author = "LastStand Team";
		displayName = "41st Jedi P1 Helmet";
		hiddenSelectionsTextures[] = {"jedi_unit\data\41_HelmetP1_Jedi.paa"};
	};
	
	class 66_HelmetP1_Jedi : SWLB_clone_P1_helmet {
		author = "LastStand Team";
		displayName = "66th Jedi P1 Helmet";
		hiddenSelectionsTextures[] = {"jedi_unit\data\66_HelmetP1_Jedi.paa"};
	};
	
	class 104_HelmetP1_Jedi : SWLB_clone_P1_helmet {
		author = "LastStand Team";
		displayName = "104th Jedi P1 Helmet";
		hiddenSelectionsTextures[] = {"jedi_unit\data\104_HelmetP1_Jedi.paa"};
	};
	
	class 212_HelmetP1_Jedi : SWLB_clone_P1_helmet {
		author = "LastStand Team";
		displayName = "212th Jedi P1 Helmet";
		hiddenSelectionsTextures[] = {"jedi_unit\data\212_HelmetP1_Jedi.paa"};
	};
	
	class 327_HelmetP1_Jedi : SWLB_clone_P1_helmet {
		author = "LastStand Team";
		displayName = "327th Jedi P1 Helmet";
		hiddenSelectionsTextures[] = {"jedi_unit\data\327_HelmetP1_Jedi.paa"};
	};
	
	class 501_HelmetP1_Jedi : SWLB_clone_P1_helmet {
		author = "LastStand Team";
		displayName = "501st Jedi P1 Helmet";
		hiddenSelectionsTextures[] = {"jedi_unit\data\501_HelmetP1_Jedi.paa"};
	};
	
	class CG_HelmetP1_Jedi : SWLB_clone_P1_helmet {
		author = "LastStand Team";
		displayName = "CG Jedi P1 Helmet";
		hiddenSelectionsTextures[] = {"jedi_unit\data\CG_HelmetP1_Jedi.paa"};
	};
	
	class Void_HelmetP1_Jedi : SWLB_clone_P1_helmet {
		author = "LastStand Team";
		displayName = "Void Jedi P1 Helmet";
		hiddenSelectionsTextures[] = {"jedi_unit\data\Void_HelmetP1_Jedi.paa"};
	};
	
	class 21_Uniform_Jedi : SWLB_clone_uniform {
		author = "LastStand Team";
		displayName = "21st Jedi Uniform";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "21_Jedi";
			containerClass = "Supply150";
			mass = 40;
		};
	};
	
	class 41_Uniform_Jedi : SWLB_clone_uniform {
		author = "LastStand Team";
		displayName = "41st Jedi Uniform";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "41_Jedi";
			containerClass = "Supply150";
			mass = 40;
		};
	};
	
	class 66_Uniform_Jedi : SWLB_clone_uniform {
		author = "LastStand Team";
		displayName = "66th Jedi Uniform";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "66_Jedi";
			containerClass = "Supply150";
			mass = 40;
		};
	};
	
	class 104_Uniform_Jedi : SWLB_clone_uniform {
		author = "LastStand Team";
		displayName = "104th Jedi Uniform";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "104_Jedi";
			containerClass = "Supply150";
			mass = 40;
		};
	};
	
	class 212_Uniform_Jedi : SWLB_clone_uniform {
		author = "LastStand Team";
		displayName = "212th Jedi Uniform";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "212_Jedi";
			containerClass = "Supply150";
			mass = 40;
		};
	};
	
	class 327_Uniform_Jedi : SWLB_clone_uniform {
		author = "LastStand Team";
		displayName = "327th Jedi Uniform";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "327_Jedi";
			containerClass = "Supply150";
			mass = 40;
		};
	};
	
	class 501_Uniform_Jedi : SWLB_clone_uniform {
		author = "LastStand Team";
		displayName = "501st Jedi Uniform";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "501_Jedi";
			containerClass = "Supply150";
			mass = 40;
		};
	};
	
	class CG_Uniform_Jedi : SWLB_clone_uniform {
		author = "LastStand Team";
		displayName = "CG Jedi Uniform";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "CG_Jedi";
			containerClass = "Supply150";
			mass = 40;
		};
	};
	
	class Void_Uniform_Jedi : SWLB_clone_uniform {
		author = "LastStand Team";
		displayName = "Void Jedi Uniform";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "Void_Jedi";
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
	
	class 21_Jedi : SWLB_clone_base_P2 {
		author = "LastWar Team";
		displayName = "21st Jedi";
		faction = "LW_Faction";
		editorSubcategory = "Jedi";
		uniformclass = "21_Jedi";
		hiddenSelectionsTextures[] = {"jedi_unit\data\21_Armor1_Jedi.paa", "jedi_unit\data\21_Armor2_Jedi.paa"};
		linkedItems[] = {"21_HelmetP1_Jedi", "ItemMap", "ItemCompass", "ItemWatch", "SWLB_comlink"};
		respawnLinkedItems[] = {"21_HelmetP1_Jedi", "ItemMap", "ItemCompass", "ItemWatch", "SWLB_comlink"};
	};
	
	class 41_Jedi : SWLB_clone_base_P2 {
		author = "LastWar Team";
		displayName = "41st Jedi";
		faction = "LW_Faction";
		editorSubcategory = "Jedi";
		uniformclass = "41_Jedi";
		hiddenSelectionsTextures[] = {"jedi_unit\data\41_Armor1_Jedi.paa", "jedi_unit\data\41_Armor2_Jedi.paa"};
		linkedItems[] = {"41_HelmetP1_Jedi", "ItemMap", "ItemCompass", "ItemWatch", "SWLB_comlink"};
		respawnLinkedItems[] = {"41_HelmetP1_Jedi", "ItemMap", "ItemCompass", "ItemWatch", "SWLB_comlink"};
	};
	
	class 66_Jedi : SWLB_clone_base_P2 {
		author = "LastWar Team";
		displayName = "66th Jedi";
		faction = "LW_Faction";
		editorSubcategory = "Jedi";
		uniformclass = "66_Jedi";
		hiddenSelectionsTextures[] = {"jedi_unit\data\66_Armor1_Jedi.paa", "jedi_unit\data\66_Armor2_Jedi.paa"};
		linkedItems[] = {"66_HelmetP1_Jedi", "ItemMap", "ItemCompass", "ItemWatch", "SWLB_comlink"};
		respawnLinkedItems[] = {"66_HelmetP1_Jedi", "ItemMap", "ItemCompass", "ItemWatch", "SWLB_comlink"};
	};
	
	class 104_Jedi : SWLB_clone_base_P2 {
		author = "LastWar Team";
		displayName = "104th Jedi";
		faction = "LW_Faction";
		editorSubcategory = "Jedi";
		uniformclass = "104_Jedi";
		hiddenSelectionsTextures[] = {"jedi_unit\data\104_Armor1_Jedi.paa", "jedi_unit\data\104_Armor2_Jedi.paa"};
		linkedItems[] = {"104_HelmetP1_Jedi", "ItemMap", "ItemCompass", "ItemWatch", "SWLB_comlink"};
		respawnLinkedItems[] = {"104_HelmetP1_Jedi", "ItemMap", "ItemCompass", "ItemWatch", "SWLB_comlink"};
	};
	
	class 212_Jedi : SWLB_clone_base_P2 {
		author = "LastWar Team";
		displayName = "212th Jedi";
		faction = "LW_Faction";
		editorSubcategory = "Jedi";
		uniformclass = "212_Jedi";
		hiddenSelectionsTextures[] = {"jedi_unit\data\212_Armor1_Jedi.paa", "jedi_unit\data\212_Armor2_Jedi.paa"};
		linkedItems[] = {"212_HelmetP1_Jedi", "ItemMap", "ItemCompass", "ItemWatch", "SWLB_comlink"};
		respawnLinkedItems[] = {"212_HelmetP1_Jedi", "ItemMap", "ItemCompass", "ItemWatch", "SWLB_comlink"};
	};
	
	class 327_Jedi : SWLB_clone_base_P2 {
		author = "LastWar Team";
		displayName = "327th Jedi";
		faction = "LW_Faction";
		editorSubcategory = "Jedi";
		uniformclass = "327_Jedi";
		hiddenSelectionsTextures[] = {"jedi_unit\data\327_Armor1_Jedi.paa", "jedi_unit\data\327_Armor2_Jedi.paa"};
		linkedItems[] = {"327_HelmetP1_Jedi", "ItemMap", "ItemCompass", "ItemWatch", "SWLB_comlink"};
		respawnLinkedItems[] = {"327_HelmetP1_Jedi", "ItemMap", "ItemCompass", "ItemWatch", "SWLB_comlink"};
	};
	
	class 501_Jedi : SWLB_clone_base_P2 {
		author = "LastWar Team";
		displayName = "501st Jedi";
		faction = "LW_Faction";
		editorSubcategory = "Jedi";
		uniformclass = "501_Jedi";
		hiddenSelectionsTextures[] = {"jedi_unit\data\501_Armor1_Jedi.paa", "jedi_unit\data\501_Armor2_Jedi.paa"};
		linkedItems[] = {"501_HelmetP1_Jedi", "ItemMap", "ItemCompass", "ItemWatch", "SWLB_comlink"};
		respawnLinkedItems[] = {"501_HelmetP1_Jedi", "ItemMap", "ItemCompass", "ItemWatch", "SWLB_comlink"};
	};
	
	class CG_Jedi : SWLB_clone_base_P2 {
		author = "LastWar Team";
		displayName = "CG Jedi";
		faction = "LW_Faction";
		editorSubcategory = "Jedi";
		uniformclass = "CG_Jedi";
		hiddenSelectionsTextures[] = {"jedi_unit\data\501_Armor1_Jedi.paa", "jedi_unit\data\501_Armor2_Jedi.paa"};
		linkedItems[] = {"CG_HelmetP1_Jedi", "ItemMap", "ItemCompass", "ItemWatch", "SWLB_comlink"};
		respawnLinkedItems[] = {"CG_HelmetP1_Jedi", "ItemMap", "ItemCompass", "ItemWatch", "SWLB_comlink"};
	};
	
	class Void_Jedi : SWLB_clone_base_P2 {
		author = "LastWar Team";
		displayName = "Void Jedi";
		faction = "LW_Faction";
		editorSubcategory = "Jedi";
		uniformclass = "Void_Jedi";
		hiddenSelectionsTextures[] = {"jedi_unit\data\Void_Armor1_Jedi.paa", "jedi_unit\data\Void_Armor2_Jedi.paa"};
		linkedItems[] = {"Void_HelmetP1_Jedi", "ItemMap", "ItemCompass", "ItemWatch", "SWLB_comlink"};
		respawnLinkedItems[] = {"Void_HelmetP1_Jedi", "ItemMap", "ItemCompass", "ItemWatch", "SWLB_comlink"};
	};
};

class cfgMods {
	author = "Last Force Project";
	timepacked = 1594648203;
};
