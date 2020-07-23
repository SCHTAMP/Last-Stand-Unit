// config.bin - 23:40:11 07/23/20, generated in 0.04 seconds
// Generated by unRap v1.06 by Kegetys
// Separate rootclasses: Disabled, Automatic comments: Enabled

class CfgPatches {
	class LW_Weapons {
		author = "LastWar Team";
		units[] = {"LW_DC17M_Mag", "LW_DC17M_Sniper_Mag", "LW_DC17M_AT_Mag", "LW_DC17M_AP_Mag"};
		weapons[] = {LW_DC17M, "LW_DC17M_blaster", "LW_attachment_DC17M_blaster", "LW_attachment_DC17M_sniper", "LW_attachment_DC17M_at", SWLW_DC15SA};
		requiredAddons[] = {"A3_Data_F", "A3_Weapons_F", "A3_Characters_F", "SWLW_main"};
	};
};

class CfgAmmo {
	class SWLW_ammo_40mm_he;	// External class reference
	
	class LW_ammo_40mm_at : SWLW_ammo_40mm_he {
		submunitionammo = "ammo_Penetrator_Titan_AT";
		indirectHit = 100;
		indirectHitRange = 10;
		hit = 800;
		typicalSpeed = 1550;
		explosive = 1;
		effectsMissile = "missile3";
		caliber = 100;
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
	};
	class SWLW_ammo_base;	// External class reference
	class SWLW_ammo_sniper_blue;	// External class reference
	
	class LW_ammo_40mm : SWLW_ammo_base {
		submunitionammo = "ammo_Penetrator_Titan_AT";
		hit = 960;
		typicalSpeed = 1550;
		explosive = 1;
		effectsMissile = "missile3";
		caliber = 100;
		CraterEffects = "GrenadeCrater";
		CraterWaterEffects = "ImpactEffectsWaterExplosion";
		explosionEffects = "GrenadeExplosion";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
	};
	
	class LW_ammo_smg_blue : SWLW_ammo_base {
		hit = 25;
		typicalspeed = 300;
		caliber = 1.4;
		model = "SWLW_main\Effects\laser_blue.p3d";
		dangerRadiusBulletClose = 4;
		dangerRadiusHit = 8;
		suppressionRadiusBulletClose = 2;
		suppressionRadiusHit = 4;
		audibleFire = 45;
		airFriction = 0;
		timetolive = 6;
		effectfly = "SWLW_plasma_blue";
	};
	
	class LW_ammo_sniper_blue : SWLW_ammo_base {
		hit = 60;
		model = "SWLW_main\Effects\laser_blue.p3d";
		dangerRadiusBulletClose = 8;
		dangerRadiusHit = 12;
		suppressionRadiusBulletClose = 8;
		dangerRadusHit = 12;
		suppressionRadusBulletClose = 6;
		suppressionRadusHit = 8;
		audiblefire = 120;
		brightness = 2;
		airFriction = 0;
		waterFriction = -0.3;
		caliber = 2.4;
		timetolive = 10;
		effectfly = "SWLW_plasma_blue";
		typicalspeed = 910;
	};
	
	class LW_ammo_test_sniper_blue : SWLW_ammo_sniper_blue {
		hit = 60;
		model = "SWLW_main\Effects\laser_blue.p3d";
		dangerRadiusBulletClose = 8;
		dangerRadiusHit = 12;
		suppressionRadiusBulletClose = 8;
		dangerRadusHit = 12;
		suppressionRadusBulletClose = 6;
		suppressionRadusHit = 8;
		audiblefire = 120;
		brightness = 2;
		airFriction = 0;
		waterFriction = -0.3;
		caliber = 2.4;
		timetolive = 10;
		effectfly = "SWLW_plasma_blue";
		typicalspeed = 910;
	};
};

class CfgMagazines {
	class CA_Magazine;	// External class reference
	class SWLW_mag_base;	// External class reference
	class SWLW_mag_sniper;	// External class reference
	class 1Rnd_HE_Grenade_shell;	// External class reference
	
	class LW_DC17M_Mag : CA_Magazine {
		author = "LastWar Team";
		scope = 2;
		tracersEvery = 0;
		type = 16;
		mass = 25;
		initSpeed = 300;
		picture = "\SWLW_clones_spec\data\ui\DC17M_mag_blaster_ui_ca.paa";
		displayName = "DC-17M Blaster magazine (250rnd)";
		ammo = "LW_ammo_smg_blue";
		count = 250;
		descriptionShort = "";
		modelSpecial = "\SWLW_clones_spec\DC17M_magazine_blaster.p3d";
		modelSpecialIsProxy = 1;
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\SWLW_clones_spec\data\DC17M_co.paa"};
	};
	
	class LW_DC17M_Sniper_Mag : SWLW_mag_sniper {
		picture = "\SWLW_clones_spec\data\ui\DC17M_mag_sniper_ui_ca.paa";
		displayName = "DC-17M Sniper magazine (5rnd)";
		ammo = "LW_ammo_sniper_blue";
		count = 5;
		modelSpecial = "\SWLW_clones_spec\DC17M_magazine_sniper.p3d";
		modelSpecialIsProxy = 1;
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\SWLW_clones_spec\data\DC17M_co.paa"};
	};
	
	class LW_DC17M_Test_Sniper_Mag : SWLW_mag_sniper {
		picture = "\SWLW_clones_spec\data\ui\DC17M_mag_sniper_ui_ca.paa";
		displayName = "DC-17M Sniper magazine Test (5rnd)";
		ammo = "LW_ammo_test_sniper_blue";
		count = 5;
		modelSpecial = "\SWLW_clones_spec\DC17M_magazine_sniper.p3d";
		modelSpecialIsProxy = 1;
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\SWLW_clones_spec\data\DC17M_co.paa"};
	};
	
	class LW_DC17M_AT_Mag : SWLW_mag_base {
		author = "SW Legion Studios";
		mass = 30;
		scope = 2;
		picture = "\SWLW_clones_spec\data\ui\DC17M_mag_at_ui_ca.paa";
		displayName = "DC-17M Anti Armor grenade";
		count = 1;
		modelSpecial = "\SWLW_clones_spec\DC17M_magazine_at.p3d";
		modelSpecialIsProxy = 1;
		descriptionShort = "";
		ammo = "LW_ammo_40mm_at";
	};
	
	class LW_DC17M_AP_Mag : SWLW_mag_base {
		author = "SW Legion Studios";
		displayName = "DC-17M AP";
		mass = 25;
		scope = 2;
		picture = "\SWLW_clones_spec\data\ui\DC17M_mag_at_ui_ca.paa";
		count = 1;
		modelSpecial = "\SWLW_clones_spec\DC17M_magazine_at.p3d";
		modelSpecialIsProxy = 1;
		descriptionShort = "";
		ammo = "LW_ammo_40mm";
	};
};

class CfgNonAIVehicles {
	class ProxyWeapon;	// External class reference
	
	class ProxyLW_DC17M_magazine_proxy : ProxyWeapon {
		animated = 0;
		autocenter = 0;
		model = "";
		reversed = 0;
		scope = 2;
		shadow = 1;
		simulation = "magazine";
	};
};
class Mode_SemiAuto;	// External class reference
class Mode_FullAuto;	// External class reference
class SlotInfo;	// External class reference
class CowsSlot;	// External class reference
class MuzzleSlot;	// External class reference
class PointerSlot;	// External class reference

class CfgWeapons {
	class ItemCore;	// External class reference
	class InventoryMuzzleItem_Base_F;	// External class reference
	class InventoryUnderItem_Base_F;	// External class reference
	class InventoryOpticsItem_Base_F;	// External class reference
	
	class LW_attachment_DC17M_blaster : ItemCore {
		scope = 2;
		author = "LastWar Team";
		displayName = "DC-17M Blaster attachment";
		picture = "\SWLW_clones_spec\data\ui\DC17M_attachment_blaster_ui_ca.paa";
		model = "\SWLW_clones_spec\DC17M_attachment_blaster.p3d";
		dispersion = 9e-005;
		
		class ItemInfo : InventoryMuzzleItem_Base_F {
			mass = 5;
			muzzleEnd = "zaslehPoint";
			alternativeFire = "Zasleh2";
			
			class MuzzleCoef {
				artilleryDispersionCoef = "0.02f";
				dispersionCoef = "0.02f";
				fireLightCoef = "1.0f";
				maxRangeCoef = "1.0f";
				maxRangeProbabCoef = "1.0f";
				midRangeCoef = "1.0f";
				midRangeProbabCoef = "1.0f";
				minRangeCoef = "1.0f";
				minRangeProbabCoef = "1.0f";
				recoilCoef = "1.0f";
				recoilProneCoef = "1.0f";
			};
		};
		memoryPointCamera = "eye_attachment";
	};
	
	class LW_attachment_DC17M_sniper : ItemCore {
		scope = 2;
		author = "LastWar Team";
		displayName = "DC-17M Sniper attachment";
		picture = "\SWLW_clones_spec\data\ui\DC17M_attachment_sniper_ui_ca.paa";
		model = "\SWLW_clones_spec\DC17M_attachment_sniper.p3d";
		
		class ItemInfo : InventoryMuzzleItem_Base_F {
			mass = 5;
			muzzleEnd = "zaslehPoint";
			alternativeFire = "Zasleh2";
			
			class MuzzleCoef {
				artilleryDispersionCoef = 0.01;
				dispersionCoef = "0.005f";
				fireLightCoef = "1.0f";
				maxRangeCoef = "1.0f";
				maxRangeProbabCoef = "1.0f";
				midRangeCoef = "1.0f";
				midRangeProbabCoef = "1.0f";
				minRangeCoef = "1.0f";
				minRangeProbabCoef = "1.0f";
				recoilCoef = "0.05f";
				recoilProneCoef = "0.05f";
			};
		};
		dispersion = 1e-007;
		memoryPointCamera = "eye_attachment";
		modelOptics = "\SWLW_clones_spec\DC17M_attachment_sniper_optic.p3d";
	};
	
	class LW_attachment_DC17M_at : ItemCore {
		scope = 2;
		author = "SW Legion Studios";
		displayName = "DC-17M Anti-Armor attachment";
		picture = "\SWLW_clones_spec\data\ui\DC17M_attachment_at_ui_ca.paa";
		model = "\SWLW_clones_spec\DC17M_attachment_at.p3d";
		dispersion = 0.00029;
		
		class ItemInfo : InventoryMuzzleItem_Base_F {
			mass = 5;
			muzzleEnd = "zaslehPoint";
			alternativeFire = "Zasleh2";
			
			class MuzzleCoef {
				artilleryDispersionCoef = "1.0f";
				dispersionCoef = "0.1f";
				fireLightCoef = "2.0f";
				maxRangeCoef = "1.0f";
				maxRangeProbabCoef = "1.0f";
				midRangeCoef = "1.0f";
				midRangeProbabCoef = "1.0f";
				minRangeCoef = "1.0f";
				minRangeProbabCoef = "1.0f";
				recoilCoef = "1.0f";
				recoilProneCoef = "1.0f";
			};
		};
		memoryPointCamera = "eye_attachment";
		
		class opticModes {
			class iron_sight {
				opticsID = 1;
				useModelOptics = 0;
				opticsPPEffects[] = {""};
				opticsFlare = 0;
				opticsDisablePeripherialVision = 0;
				opticsZoomMin = 0.375;
				opticsZoomMax = 1;
				opticsZoomInit = 0.75;
				memoryPointCamera = "eye_attachment";
				visionMode[] = {};
				distanceZoomMin = 300;
				distanceZoomMax = 300;
			};
		};
	};
	
	class LW_attachment_scope_DC17M_sniper : ItemCore {
		displayName = "DC-17M Sniper scope";
		author = "LastWar Team";
		picture = "\SWLW_clones_spec\data\DC17M_attachment_sniper_optic_ca.paa";
		model = "\SWLW_clones_spec\DC17M_attachment_scope_sniper.p3d";
		scope = 2;
		descriptionShort = "";
		weaponInfoType = "RscWeaponZeroing";
		
		class ItemInfo : InventoryOpticsItem_Base_F {
			mass = 8;
			opticType = 1;
			optics = 1;
			modelOptics = "\SWLW_clones_spec\DC17M_attachment_sniper_optic.p3d";
			
			class OpticsModes {
				class Scope {
					opticsID = 1;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera2", "OpticsBlur3"};
					opticsZoomMin = 0.0625;
					opticsZoomMax = 0.125;
					opticsZoomInit = 0.125;
					discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200};
					discreteDistanceInitIndex = 1;
					distanceZoomMin = 300;
					distanceZoomMax = 1200;
					discretefov[] = {0.125, 0.0625};
					discreteInitIndex = 0;
					memoryPointCamera = "opticView";
					visionMode[] = {"Normal", NVG, "TI"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					cameraDir = "";
				};
				
				class Sight {
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] = {"Default"};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "sightView";
					visionMode[] = {};
					distanceZoomMin = 200;
					distanceZoomMax = 200;
					cameraDir = "";
				};
			};
		};
		inertia = 0.1;
	};
	class Rifle_Long_Base_F;	// External class reference
	
	class SWLW_rifle_base : Rifle_Long_Base_F {
		author = "SW Legion Studios";
		scope = 1;
		
		class WeaponSlotsInfo {
			class SlotInfo;	// External class reference
		};
		class GunParticles;	// External class reference
		class AnimationSources;	// External class reference
	};
	
	class LW_DC17M : SWLW_rifle_base {
		displayName = "DC-17M Blaster";
		scope = 2;
		picture = "\SWLW_clones_spec\data\ui\DC17M_ui.paa";
		model = "\SWLW_clones_spec\DC17M_base.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\SWLW_clones_spec\data\DC17m_co.paa"};
		magazineReloadSwitchPhase = 0.4;
		ace_overheating_mrbs = 100000;
		ace_overheating_slowdownFactor = 1e-006;
		ace_overheating_allowSwapBarrel = 0;
		ace_overheating_dispersion = 0.2;
		
		class Library {
			libTextDesc = "";
		};
		magazines[] = {"LW_DC17M_Mag", "LW_DC17M_Sniper_Mag", "LW_DC17M_AT_Mag", "LW_DC17M_AP_Mag"};
		reloadMagazineSound[] = {"SWLW_clones_spec\sounds\DC17M_reload.wss", 0.562341, 1, 30};
		handAnim[] = {"OFP2_ManSkeleton", "\SWLW_clones_spec\anims\DC17M_handanim.rtm"};
		reloadAction = "ReloadMagazine";
		modes[] = {"FullAuto", "Single"};
		initSpeed = 600;
		
		class Single : Mode_SemiAuto {
			sounds[] = {"StandardSound"};
			
			class BaseSoundModeType {
				weaponSoundEffect = "";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};
			
			class StandardSound : BaseSoundModeType {
				weaponSoundEffect = "";
				begin1[] = {"\SWLW_clones_spec\sounds\DC17M_sniper_fire.wss", 1, 1, 1800};
				begin2[] = {"\SWLW_clones_spec\sounds\DC17M_sniper_fire.wss", 1, 1, 1800};
				begin3[] = {"\SWLW_clones_spec\sounds\DC17M_sniper_fire.wss", 1, 1, 1800};
				soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.33};
			};
			reloadTime = 2;
			dispersion = 0.15;
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
		};
		
		class FullAuto : Mode_FullAuto {
			sounds[] = {"StandardSound"};
			
			class BaseSoundModeType {
				weaponSoundEffect = "";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};
			
			class StandardSound : BaseSoundModeType {
				weaponSoundEffect = "";
				begin1[] = {"\SWLW_clones_spec\sounds\DC17M_blaster_fire.wss", 1, 1, 1800};
				begin2[] = {"\SWLW_clones_spec\sounds\DC17M_blaster_fire.wss", 1, 1, 1800};
				begin3[] = {"\SWLW_clones_spec\sounds\DC17M_blaster_fire.wss", 1, 1, 1800};
				soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.33};
			};
			reloadTime = 0.1;
			dispersion = 0.2;
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
		};
		fireLightDuration = 0.05;
		fireLightIntensity = 0.4;
		fireLightDiffuse[] = {0, 0, 0.01};
		fireLightAmbient[] = {0, 0, 0};
		recoil = "recoil_smg_03";
		
		class WeaponSlotsInfo : WeaponSlotsInfo {
			mass = 60;
			
			class CowsSlot : CowsSlot {
				compatibleItems[] = {"LW_attachment_scope_DC17M_sniper", "RD501_scope_dc_15a_acog"};
			};
			
			class MuzzleSlot : MuzzleSlot {
				compatibleItems[] = {"LW_attachment_DC17M_blaster", "LW_attachment_DC17M_sniper", "LW_attachment_DC17M_at"};
			};
		};
	};
	
	class LW_DC17M_47 : LW_DC17M {
		displayName = "DC-17M Blaster (47)";
		hiddenSelectionsTextures[] = {"Weapon_Unit\dc17m\DC17m_47.paa"};
	};
	
	class LW_DC17M_83 : LW_DC17M {
		displayName = "DC-17M Blaster (83)";
		hiddenSelectionsTextures[] = {"Weapon_Unit\dc17m\DC17m_83.paa"};
	};
	
	class LW_DC17M_sniper : LW_DC17M {
		class LinkedItems {
			class LikedItemsMuzzle {
				item = "LW_attachment_DC17M_sniper";
				slot = "MuzzleSlot";
			};
			
			class LinkedItemsOptic {
				item = "LW_attachment_scope_DC17M_sniper";
				slot = "CowsSlot";
			};
		};
	};
	
	class LW_DC17M_at : LW_DC17M {
		class LinkedItems {
			class LikedItemsMuzzle {
				item = "LW_attachment_DC17M_at";
				slot = "MuzzleSlot";
			};
		};
	};
};

class CfgVehicles {
	class Weapon_Base_F;	// External class reference
	
	class LW_GH_DC17M_blaster : Weapon_Base_F {
		author = "SW Legion Studios";
		displayName = "DC-17M Blaster";
		scope = 2;
		
		class TransportWeapons {
			class LW_DC17M_blaster {
				count = 1;
				weapon = "LW_DC17M_blaster";
			};
		};
		
		class TransportMagazines {
			class LW_DC17M_blaster_mag {
				count = 1;
				magazine = "LW_DC17M_blaster_mag";
			};
		};
	};
};

class cfgMods {
	author = "Last Force Project";
	timepacked = 1594648269;
};
