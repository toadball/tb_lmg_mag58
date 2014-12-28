class CfgPatches {
	class tb_lmg_mag58 {
		units[] = {};
		weapons[] = {tb_lmg_mk25};
		requiredVersion = 1;
		requiredAddons[] = {"A3_Weapons_F_beta"};
	};
};

class CfgWeapons {

	class Rifle_Long_Base_F;
	class LMG_Zafir_F: Rifle_Long_Base_F { 
		class FullAuto;
		class close;
		class short;
		class medium;
		class far_optic1;
		class far_optic2;
		
		
		class WeaponSlotsInfo {
			class MuzzleSlot;
			class CowsSlot;
			class PointerSlot;
		};
	};	
	class tb_lmg_mk25 : LMG_Zafir_F {
		tmr_autorest_deployable = 1;
		displayName = "Mk 25 GPMG";
		picture = "\tb_lmg_mag58\data\w_mk25_ca.paa";
		model = "\tb_lmg_mag58\m240_belt";
		modes[] = {"FullAuto", "close", "short", "medium", "far_optic1", "far_optic2"};
		handanim[] = {};
	};
};