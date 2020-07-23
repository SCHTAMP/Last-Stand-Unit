// config.bin - 23:38:03 07/23/20, generated in 0.02 seconds
// Generated by unRap v1.06 by Kegetys
// Separate rootclasses: Disabled, Automatic comments: Enabled

class CfgPatches {
	class 212_Legion {
		units[] = {"Boil", "Kos", "Nikity", "Scout", "OverLord", "BlackFlame", 212_ARF, "212_Med", 212_AB, 212_AT, 212_ENG};
		weapons[] = {"212_HelmetP1_Boil", "212_HelmetP1_Kos", "212_Uniform_Kos", "212_HelmetP1_Nikity", "212_Uniform_Nikity", "212_HelmetP1_OverLord", "212_Uniform_OverLord", "212_HelmetP1_Med", "212_HelmetP1_Med_CPL", "212_HelmetP1_Med_MLT", "212_HelmetP1_AB", "212_HelmetP1_AB_CPL", "212_HelmetP1_AB_MLT", "212_HelmetP1_ENG", "212_HelmetP1_ENG_CPL", "212_HelmetP1_ENG_MLT", "212_HelmetP1_Scout", "212_HelmetP1_AT", "212_Helmet_Scout", "212_Helmet_ARF", "212_HelmetP1", "212_Uniform_Scout", "212_Uniform_Med", "212_Uniform_AB", "212_Uniform_AT", "212_Uniform_ENG", "212_Uniform_ARF"};
	};
	author = "LastWarTeam";
	requiredAddons[] = {"SWLB_clones"};
};

class CfgFactionClasses {
	class LW_Faction {
		displayName = "LastWar";
	};
};

class CfgEditorSubcategories {
	class 212_Legion {
		displayName = "212th LW Legion";
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
	class SWLB_P2_SpecOps_Helmet;	// External class reference
	class SWLB_P1_SpecOps_Helmet;	// External class reference
	class SWLB_clone_commando_nvg;	// External class reference
	class SWLB_clone_P1_2_helmet;	// External class reference
	class SWLB_clone_ARF_P1_helmet;	// External class reference
	class SWLB_clone_ARF_P2_helmet;	// External class reference
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
	class SWLB_clone_airborne_nco_armor;	// External class reference
	class SWLB_clone_arc_armor;	// External class reference
	class SWLB_clone_commando_eod_armor_k1;	// External class reference
	class SWLB_clone_commando_sniper_armor_k1;	// External class reference
	class SWLB_clone_commando_sl_armor_k1;	// External class reference
	class SWLB_clone_commando_tech_armor_k1;	// External class reference
	class SWLB_clone_uniform;	// External class reference
	class SWLB_clone_commando_uniform_k1;	// External class reference
	class SWLA_BL_Sergeant_Vest;	// External class reference
	class SWLB_mando_og_helmet;	// External class reference
	class SWLB_mando_og_armor;	// External class reference
	class SWLB_mando_rangefinder;	// External class reference
	class SWLB_mando_uniform;	// External class reference
	class UniformItem;	// External class reference
	class HeadgearItem;	// External class reference
	class SDT_pilot_p1_helmet;	// External class reference
	class SWLB_P1_Pilot_Helmet;	// External class reference
	class SWLB_CEE_Hazard_Helmet;	// External class reference
	
	class 212_HelmetAB_Sector : SWLB_clone_AB_helmet {
		author = "LastWar Team";
		displayName = "212th Clone Trooper P2 AB Helmet (Sector)";
		hiddenSelectionsTextures[] = {"212_Unit\data\212_HelmetAB_Sector.paa"};
	};
	
	class 212_ARF_P2_helmet : SWLB_clone_ARF_P2_helmet {
		author = "LastWar Team";
		displayName = "212th Clone trooper P2 ARF helmet";
		hiddenSelectionsTextures[] = {"212_Unit\data\212_Helmet_ARF.paa", "", "212_Unit\data\212_ARF_Flaps.paa"};
	};
	
	class 212_HelmetP2_Pilot : SWLB_clone_pilot_P2_helmet {
		author = "LastWar Team";
		displayName = "212th Clone Trooper P2 Pilot Helmet";
		hiddenSelectionsTextures[] = {"212_Unit\data\212_HelmetP2_Pilot.paa", "212_Unit\data\212_HelmetP2_Pilot.paa"};
	};
	
	class 212_HelmetP1_Pilot : SWLB_P1_Pilot_Helmet {
		author = "LastWar Team";
		displayName = "212th Clone Trooper P1 Helmet (Pilot)";
		hiddenSelectionsTextures[] = {"212_Unit\data\212_HelmetP1_Pilot.paa", "swlb_cee\data\swlb_p1_pilot_lifesupport_co.paa"};
	};
	
	class 212_NVG_Lukash : SWLB_clone_nvg {
		author = "LastWar Team";
		displayName = "212th Clone Trooper NV visor (Lukash)";
		hiddenSelectionsTextures[] = {"212_Unit\data\212_NVG_Lukash.paa"};
	};
	
	class 212_Helmet15_ARC : SWLB_clone_P15_helmet {
		author = "LastWar Team";
		displayName = "212th Clone Trooper P1 ARC Helmet";
		hiddenSelectionsTextures[] = {"212_Unit\data\212_Helmet15_ARC.paa"};
	};
	
	class 212_SpecOps_Geo : SWLB_P1_SpecOps_Helmet {
		author = "LastWar Team";
		displayName = "212th Clone Trooper SpecOps P1 Helmet (Geo)";
		hiddenSelectionsTextures[] = {"212_Unit\data\212_SpecOps_Geo.paa"};
	};
	
	class 212_Helmet_Hazard : SWLB_CEE_Hazard_Helmet {
		author = "LastWarTeam";
		displayName = "212th Clone Trooper Hazard helmet";
		hiddenSelectionsTextures[] = {"212_Unit\data\212_Helmet_Hazard.paa"};
	};
	
	class 212_Helmet_Geo : SWLB_clone_P1_helmet {
		author = "LastWar Team";
		displayName = "212th Clone Trooper P1 Helmet (Geo)";
		hiddenSelectionsTextures[] = {"212_Unit\data\212_Helmet_Geo.paa"};
	};
	
	class 212_HelemtP1_Boil : SWLB_clone_P1_helmet {
		author = "LastWar Team";
		displayName = "212th Clone Trooper P1 Helmet (Boil)";
		hiddenSelectionsTextures[] = {"212_Unit\data\212_HelemtP1_Boil.paa"};
	};
	
	class 212_HelmetP1_Kos : SWLB_clone_P1_helmet {
		author = "LastWar Team";
		displayName = "212th Clone Trooper P1 Helmet (Kos)";
		hiddenSelectionsTextures[] = {"212_Unit\data\212_HelmetP1_Kos.paa"};
	};
	
	class 212_HelmetP1_Nikity : SWLB_clone_P1_helmet {
		author = "LastWar Team";
		displayName = "212th Clone Trooper P1 Helmet (Nikity)";
		hiddenSelectionsTextures[] = {"212_Unit\data\212_HelmetP1_Nikity.paa"};
	};
	
	class 212_HelmetP1_BlackFlame : SWLB_clone_P1_helmet {
		author = "LastWar Team";
		displayName = "212th Clone Trooper P1 Helmet (BlackFlame)";
		hiddenSelectionsTextures[] = {"212_Unit\data\212_HelmetP1_BlackFlame.paa"};
	};
	
	class 212_HelmetP1_Lukash : SWLB_clone_P1_helmet {
		author = "LastWar Team";
		displayName = "212th Clone Trooper P1 Helmet (Lukash)";
		hiddenSelectionsTextures[] = {"212_Unit\data\212_HelmetP1_Lukash.paa"};
	};
	
	class 212_HelmetP1_OverLord : SWLB_clone_P1_helmet {
		author = "LastWar Team";
		displayName = "212th Clone Trooper P1 Helmet (OverLord)";
		hiddenSelectionsTextures[] = {"212_Unit\data\212_HelmetP1_OverLord.paa"};
	};
	
	class 212_HelmetP1_Med : SWLB_clone_P1_helmet {
		author = "LastWar Team";
		displayName = "212th Clone Trooper P1 Helmet (MED)";
		hiddenSelectionsTextures[] = {"212_Unit\data\212_HelmetP1_Med.paa"};
	};
	
	class 212_HelmetP1_Med_CPL : SWLB_clone_P1_helmet {
		author = "LastWar Team";
		displayName = "212th Clone Trooper P1 Helmet CPL (MED)";
		hiddenSelectionsTextures[] = {"212_Unit\data\212_HelmetP1_Med_CPL.paa"};
	};
	
	class 212_HelmetP1_Med_MLT : SWLB_clone_P1_helmet {
		author = "LastWar Team";
		displayName = "212th Clone Trooper P1 Helmet MLT (MED)";
		hiddenSelectionsTextures[] = {"212_Unit\data\212_HelmetP1_Med_MLT.paa"};
	};
	
	class 212_HelmetP1_AB : SWLB_clone_P1_helmet {
		author = "LastWar Team";
		displayName = "212th Clone Trooper P1 Helmet (AB)";
		hiddenSelectionsTextures[] = {"212_Unit\data\212_HelmetP1_AB.paa"};
	};
	
	class 212_HelmetP1_AB_CPL : SWLB_clone_P1_helmet {
		author = "LastWar Team";
		displayName = "212th Clone Trooper P1 Helmet CPL (AB)";
		hiddenSelectionsTextures[] = {"212_Unit\data\212_HelmetP1_AB_CPL.paa"};
	};
	
	class 212_HelmetP1_AB_MLT : SWLB_clone_P1_helmet {
		author = "LastWar Team";
		displayName = "212th Clone Trooper P1 Helmet MLT (AB)";
		hiddenSelectionsTextures[] = {"212_Unit\data\212_HelmetP1_AB_MLT.paa"};
	};
	
	class 212_HelmetP1_ENG : SWLB_clone_P1_helmet {
		author = "LastWar Team";
		displayName = "212th Clone Trooper P1 Helmet (ENG)";
		hiddenSelectionsTextures[] = {"212_Unit\data\212_HelmetP1_ENG.paa"};
	};
	
	class 212_HelmetP1_ENG_CPL : SWLB_clone_P1_helmet {
		author = "LastWar Team";
		displayName = "212th Clone Trooper P1 Helmet CPL (ENG)";
		hiddenSelectionsTextures[] = {"212_Unit\data\212_HelmetP1_ENG_CPL.paa"};
	};
	
	class 212_HelmetP1_ENG_MLT : SWLB_clone_P1_helmet {
		author = "LastWar Team";
		displayName = "212th Clone Trooper P1 Helmet MLT (ENG)";
		hiddenSelectionsTextures[] = {"212_Unit\data\212_HelmetP1_ENG_MLT.paa"};
	};
	
	class 212_HelmetP1_Scout : SWLB_clone_P1_helmet {
		author = "LastWar Team";
		displayName = "212th Clone Trooper P1 Helmet (Scout)";
		hiddenSelectionsTextures[] = {"212_Unit\data\212_HelmetP1_Scout.paa"};
	};
	
	class 212_HelmetP1_AT : SWLB_clone_P1_helmet {
		author = "LastWar Team";
		displayName = "212th Clone Trooper P1 Helmet (AT)";
		hiddenSelectionsTextures[] = {"212_Unit\data\212_HelmetP1_AT.paa"};
	};
	
	class 212_Helmet_ARF : SWLB_clone_ARF_P1_helmet {
		author = "LastWar Team";
		displayName = "212th Clone Trooper P1 Helmet (ARF)";
		hiddenSelectionsTextures[] = {"212_Unit\data\212_Helmet_ARF.paa"};
	};
	
	class 212_HelmetP1 : SWLB_clone_P1_helmet {
		author = "LastWar Team";
		displayName = "212th Clone Trooper P1 Helmet";
		hiddenSelectionsTextures[] = {"212_Unit\data\212_HelmetP1.paa"};
	};
	
	class 212_Uniform_Sector : SWLB_clone_uniform {
		author = "LastWar Team";
		displayName = "212th Clone Trooper Uniform (Sector)";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "Sector";
			containerClass = "Supply150";
			mass = 40;
		};
	};
	
	class 212_Uniform_Kos : SWLB_clone_uniform {
		author = "LastWar Team";
		displayName = "212th Clone Trooper Uniform (Kos)";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "Kos";
			containerClass = "Supply150";
			mass = 40;
		};
	};
	
	class 212_Uniform_Nikity : SWLB_clone_uniform {
		author = "LastWar Team";
		displayName = "212th Clone Trooper Uniform (Nikity)";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "Nikity";
			containerClass = "Supply150";
			mass = 40;
		};
	};
	
	class 212_Uniform_BlackFlame : SWLB_clone_uniform {
		author = "LastWar Team";
		displayName = "212th Clone Trooper Uniform (BlackFlame)";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "BlackFlame";
			containerClass = "Supply150";
			mass = 40;
		};
	};
	
	class 212_Uniform_Scout : SWLB_clone_uniform {
		author = "LastWar Team";
		displayName = "212th Clone Trooper Uniform (Scout)";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "Scout";
			containerClass = "Supply150";
			mass = 40;
		};
	};
	
	class 212_Uniform_Med : SWLB_clone_uniform {
		author = "LastWar Team";
		displayName = "212th Clone Trooper Uniform (Med)";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "212_Med";
			containerClass = "Supply150";
			mass = 40;
		};
	};
	
	class 212_Uniform_AB : SWLB_clone_uniform {
		author = "LastWar Team";
		displayName = "212th Clone Trooper Uniform (AB)";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = 212_AB;
			containerClass = "Supply150";
			mass = 40;
		};
	};
	
	class 212_Uniform_AT : SWLB_clone_uniform {
		author = "LastWar Team";
		displayName = "212th Clone Trooper Uniform (AT)";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = 212_AT;
			containerClass = "Supply150";
			mass = 40;
		};
	};
	
	class 212_Uniform_ENG : SWLB_clone_uniform {
		author = "LastWar Team";
		displayName = "212th Clone Trooper Uniform (ENG)";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = 212_ENG;
			containerClass = "Supply150";
			mass = 40;
		};
	};
	
	class 212_Uniform_ARF : SWLB_clone_uniform {
		author = "LastWar Team";
		displayName = "212th Clone Trooper Uniform (ARF)";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = 212_ARF;
			containerClass = "Supply150";
			mass = 40;
		};
	};
	
	class 212_Uniform_OverLord : SWLB_clone_uniform {
		author = "LastWar Team";
		displayName = "212th Clone Trooper Uniform (OverLord)";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "OverLord";
			containerClass = "Supply150";
			mass = 40;
		};
	};
	
	class 212_Plate_Watch : SWLB_clone_arc_armor {
		displayName = "212th ARC Camo\Plate (Sector)";
		hiddenSelectionsTextures[] = {"212_Unit\data\212_Plate_Sector.paa", "212_Unit\data\212_Camo_Sector.paa"};
	};
	
	class 212_Plate_Ivor : SWLB_clone_arc_armor {
		displayName = "212th ARC Camo\Plate (Ivor)";
		hiddenSelectionsTextures[] = {"212_Unit\data\212_Plate_Ivor.paa", "212_Unit\data\212_Camo_Ivor.paa"};
	};
};

class CfgVehicles {
	class SWLB_clone_commando_base;	// External class reference
	class SWLB_clone_commando_backpack_k2;	// External class reference
	class SWLB_clone_commando_backpack_k2_rto;	// External class reference
	class SWLB_clone_commando_backpack_k2_eod;	// External class reference
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
	class SWLB_mando_base_assault;	// External class reference
	class SWLB_clone_backpack_RTO;	// External class reference
	class SWLB_mando_rangefinder;	// External class reference
	class SWLB_clone_rangefinder;	// External class reference
	class SWLB_clone_RTO_mini_backpack;	// External class reference
	class SWLB_clone_uniform;	// External class reference
	
	class Sector : SWLB_clone_base_P2 {
		author = "LastWar Team";
		displayName = "212th Clone Trooper (Sector)";
		faction = "LW_Faction";
		editorSubcategory = "212_Legion";
		uniformclass = "Sector";
		hiddenSelectionsTextures[] = {"212_Unit\data\212_Armor1_Sector.paa", "212_Unit\data\212_Armor2_Sector.paa"};
		linkedItems[] = {"212_HelmetAB_Sector", "ItemMap", "ItemCompass", "ItemWatch", "SWLB_comlink"};
		respawnLinkedItems[] = {"212_HelmetAB_Sector", "ItemMap", "ItemCompass", "ItemWatch", "SWLB_comlink"};
	};
	
	class Kos : SWLB_clone_base_P2 {
		author = "LastWar Team";
		displayName = "212th Clone Trooper (Kos)";
		faction = "LW_Faction";
		editorSubcategory = "212_Legion";
		uniformclass = "Kos";
		hiddenSelectionsTextures[] = {"212_Unit\data\212_Armor1_Kos.paa", "212_Unit\data\212_Armor2_Kos.paa"};
		linkedItems[] = {"212_Helmet_Kos", "ItemMap", "ItemCompass", "ItemWatch", "SWLB_comlink"};
		respawnLinkedItems[] = {"212_Helmet_Kos", "ItemMap", "ItemCompass", "ItemWatch", "SWLB_comlink"};
	};
	
	class Nikity : SWLB_clone_base_P2 {
		author = "LastWar Team";
		displayName = "212th Clone Trooper (Nikity)";
		faction = "LW_Faction";
		editorSubcategory = "212_Legion";
		uniformclass = "Nikity";
		hiddenSelectionsTextures[] = {"212_Unit\data\212_Armor1_Nikity.paa", "212_Unit\data\212_Armor2_Med.paa"};
		linkedItems[] = {"212_Helmet_Nikity", "ItemMap", "ItemCompass", "ItemWatch", "SWLB_comlink"};
		respawnLinkedItems[] = {"212_Helmet_Nikity", "ItemMap", "ItemCompass", "ItemWatch", "SWLB_comlink"};
	};
	
	class BlackFlame : SWLB_clone_base_P2 {
		author = "LastWar Team";
		displayName = "212th Clone Trooper (BlackFlame)";
		faction = "LW_Faction";
		editorSubcategory = "212_Legion";
		uniformclass = "BlackFlame";
		hiddenSelectionsTextures[] = {"212_Unit\data\212_Armor1_BlackFlame.paa", "212_Unit\data\212_Armor2_BlackFlame.paa"};
		linkedItems[] = {"212_Helmet_BlackFlame", "ItemMap", "ItemCompass", "ItemWatch", "SWLB_comlink"};
		respawnLinkedItems[] = {"212_Helmet_BlackFlame", "ItemMap", "ItemCompass", "ItemWatch", "SWLB_comlink"};
	};
	
	class OverLord : SWLB_clone_base_P2 {
		author = "LastWar Team";
		displayName = "212th Clone Trooper (OverLord)";
		faction = "LW_Faction";
		editorSubcategory = "212_Legion";
		uniformclass = "OverLord";
		hiddenSelectionsTextures[] = {"212_Unit\data\212_Armor1_OverLord.paa", "212_Unit\data\212_Armor2_OverLord.paa"};
		linkedItems[] = {"212_Helmet_OverLord", "ItemMap", "ItemCompass", "ItemWatch", "SWLB_comlink"};
		respawnLinkedItems[] = {"212_Helmet_OverLord", "ItemMap", "ItemCompass", "ItemWatch", "SWLB_comlink"};
	};
	
	class Scout : SWLB_clone_base_P2 {
		author = "LastWar Team";
		displayName = "212th Clone Trooper (Scout)";
		faction = "LW_Faction";
		editorSubcategory = "212_Legion";
		uniformclass = "Scout";
		hiddenSelectionsTextures[] = {"212_Unit\data\212_Armor1_Scout.paa", "212_Unit\data\212_Armor2_Scout.paa"};
		linkedItems[] = {"212_Helmet_Scout", "ItemMap", "ItemCompass", "ItemWatch", "SWLB_comlink"};
		respawnLinkedItems[] = {"212_Helmet_Scout", "ItemMap", "ItemCompass", "ItemWatch", "SWLB_comlink"};
	};
	
	class 212_ARF : SWLB_clone_base_P2 {
		author = "LastWar Team";
		displayName = "212th Clone Trooper (ARF)";
		faction = "LW_Faction";
		editorSubcategory = "212_Legion";
		uniformclass = 212_ARF;
		hiddenSelectionsTextures[] = {"212_Unit\data\212_Armor1_ARF.paa", "212_Unit\data\212_Armor2_ARF.paa"};
		linkedItems[] = {"212_Helmet_ARF", "ItemMap", "ItemCompass", "ItemWatch", "SWLB_comlink"};
		respawnLinkedItems[] = {"212_Helmet_ARF", "ItemMap", "ItemCompass", "ItemWatch", "SWLB_comlink"};
	};
	
	class 212_Med : SWLB_clone_base_P2 {
		author = "LastWar Team";
		displayName = "212th Clone Trooper (Med)";
		faction = "LW_Faction";
		editorSubcategory = "212_Legion";
		uniformclass = "212_Med";
		hiddenSelectionsTextures[] = {"212_Unit\data\212_Armor1_Med.paa", "212_Unit\data\212_Armor2_Med.paa"};
		linkedItems[] = {"212_HelmetP1_Med", "ItemMap", "ItemCompass", "ItemWatch", "SWLB_comlink"};
		respawnLinkedItems[] = {"212_HelmetP1_Med", "ItemMap", "ItemCompass", "ItemWatch", "SWLB_comlink"};
	};
	
	class 212_AB : SWLB_clone_base_P2 {
		author = "LastWar Team";
		displayName = "212th Clone Trooper (AB)";
		faction = "LW_Faction";
		editorSubcategory = "212_Legion";
		uniformclass = 212_AB;
		hiddenSelectionsTextures[] = {"212_Unit\data\212_Armor1_AB.paa", "212_Unit\data\212_Armor2_AB.paa"};
		linkedItems[] = {"212_HelmetP1_AB", "ItemMap", "ItemCompass", "ItemWatch", "SWLB_comlink"};
		respawnLinkedItems[] = {"212_HelmetP1_AB", "ItemMap", "ItemCompass", "ItemWatch", "SWLB_comlink"};
	};
	
	class 212_AT : SWLB_clone_base_P2 {
		author = "LastWar Team";
		displayName = "212th Clone Trooper (AT)";
		faction = "LW_Faction";
		editorSubcategory = "212_Legion";
		uniformclass = 212_AT;
		hiddenSelectionsTextures[] = {"212_Unit\data\212_Armor1_AT.paa", "212_Unit\data\212_Armor2_AT.paa"};
		linkedItems[] = {"212_HelmetP1_AT", "ItemMap", "ItemCompass", "ItemWatch", "SWLB_comlink"};
		respawnLinkedItems[] = {"212_HelmetP1_AT", "ItemMap", "ItemCompass", "ItemWatch", "SWLB_comlink"};
	};
	
	class 212_ENG : SWLB_clone_base_P2 {
		author = "LastWar Team";
		displayName = "212th Clone Trooper (ENG)";
		faction = "LW_Faction";
		editorSubcategory = "212_Legion";
		uniformclass = 212_ENG;
		hiddenSelectionsTextures[] = {"212_Unit\data\212_Armor1_ENG.paa", "212_Unit\data\212_Armor2_ENG.paa"};
		linkedItems[] = {"212_HelmetP1_ENG", "ItemMap", "ItemCompass", "ItemWatch", "SWLB_comlink"};
		respawnLinkedItems[] = {"212_HelmetP1_ENG", "ItemMap", "ItemCompass", "ItemWatch", "SWLB_comlink"};
	};
};

class cfgMods {
	author = "GLyba";
	timepacked = 1594312050;
};