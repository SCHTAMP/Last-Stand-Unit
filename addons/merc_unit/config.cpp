// config.bin - 23:39:16 07/23/20, generated in 0.01 seconds
// Generated by unRap v1.06 by Kegetys
// Separate rootclasses: Disabled, Automatic comments: Enabled

class CfgPatches {
	class Mercenaries {
		units[] = {"Pilot"};
		weapons[] = {"RS_Uniform_Pilot"};
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
	class Mercenaries {
		displayName = "Mercenaries LW";
	};
};

class CfgWeapons {
	class swlb_mando_og_helmet;	// External class reference
	class swlb_mando_og_armor;	// External class reference
	class SWLB_clone_P1_helmet;	// External class reference
	class SWLB_clone_uniform;	// External class reference
	class ItemInfo;	// External class reference
	class UniformItem;	// External class reference
	class swlb_mando_owl_helmet;	// External class reference
	class swlb_mando_Executioner_helmet;	// External class reference
	class SWLB_mando_uniform;	// External class reference
	
	class Merc_HelmetEx_Zan : swlb_mando_Executioner_helmet {
		author = "LastWarTeam";
		displayName = "Mercenaries Helmet (Zan)";
		hiddenSelectionsTextures[] = {"Merc_Unit\data\Helmet_Zan.paa"};
	};
	
	class Merc_Armor_Whi_Zan : swlb_mando_og_armor {
		author = "LastWarTeam";
		displayName = "Deathwatch Grunt Armor (Zan)";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"Merc_Unit\data\Armor_Zan.paa"};
	};
	
	class Merc_uniform_Zan : SWLB_mando_uniform {
		scope = 2;
		displayName = "Mandalorian undersuit (Zan)";
		picture = "\SWLB_merc_mando\data\ui\icon_SWLB_mando_uniform_ca.paa";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "Zan";
			containerClass = "Supply150";
			mass = 40;
		};
	};
	
	class Merc_helmet_Irai : swlb_mando_owl_helmet {
		scope = 2;
		displayName = "Mandalorian Helmet (Irai)";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"Merc_Unit\Data\Merc_Helmet_Irai.paa"};
	};
	
	class Merc_Armor_Irai : swlb_mando_og_armor {
		author = "LastWarTeam";
		displayName = "Mandalorian Armor (Irai)";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"Merc_Unit\data\Merc_Armor_Irai.paa"};
	};
	
	class Merc_HelmetP1_Sharper : SWLB_clone_P1_helmet {
		author = "LastWar Team";
		displayName = "Clone Trooper P1 Helmet (Sharper)";
		hiddenSelectionsTextures[] = {"Merc_Unit\data\Merc_HelmetP1_Sharper.paa"};
	};
	
	class Merc_Uniform_Sharper : SWLB_clone_uniform {
		author = "LastWar Team";
		displayName = "Clone Trooper Uniform (Sharper)";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "Sharper";
			containerClass = "Supply150";
			mass = 40;
		};
	};
	
	class Merc_Helmet_Zan : swlb_mando_og_helmet {
		author = "LastWarTeam";
		displayName = "Mercenaries Helmet (Zan)";
		hiddenSelectionsTextures[] = {"Merc_Unit\data\Merc_Helmet_Zan.paa"};
	};
	
	class Merc_Armor_Zan : swlb_mando_og_armor {
		author = "LastWarTeam";
		displayName = "Deathwatch Grunt Armor";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"Merc_Unit\data\Merc_Armor_Zan.paa"};
	};
};

class CfgVehicles {
	class SWLB_clone_base_P2;	// External class reference
	class SWLB_clone_bag;	// External class reference
	class SWLB_mando_base_assault;	// External class reference
	
	class Merc_bag_Zan : SWLB_clone_bag {
		displayName = "Mercenaries bags (Zan)";
		hiddenSelectionsTextures[] = {"\Merc_Unit\data\Merc_bag_Zan.paa", "\Merc_Unit\data\Merc_bag_Zan.paa"};
	};
	
	class Zan : SWLB_mando_base_assault {
		scope = 2;
		displayName = "Mandalorian warrior (Zan)";
		faction = "LW_Faction";
		editorSubcategory = "Mercenaries";
		uniformClass = "Merc_uniform_Zan";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
		hiddenSelectionsTextures[] = {"Merc_Unit\data\Merc_Uniform_Zan.paa"};
	};
	
	class Sharper : SWLB_clone_base_P2 {
		author = "LastWar Team";
		displayName = "Clone Trooper (Sharper)";
		faction = "LW_Faction";
		editorSubcategory = "212_Legion";
		uniformclass = "Sharper";
		hiddenSelectionsTextures[] = {"Merc_Unit\data\Merc_Armor1_Sharper.paa", "Merc_Unit\data\Merc_Armor2_Sharper.paa"};
		linkedItems[] = {"Merc_HelmetP1_Sharper", "ItemMap", "ItemCompass", "ItemWatch", "SWLB_comlink"};
		respawnLinkedItems[] = {"Merc_HelmetP1_Sharper", "ItemMap", "ItemCompass", "ItemWatch", "SWLB_comlink"};
	};
};

class cfgMods {
	author = "Last_War";
	timepacked = 1592002354;
};