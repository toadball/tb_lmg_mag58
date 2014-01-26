class CfgPatches {
	class tb_lmg_mag58 {
		units[] = {};
		weapons[] = {m240_scoped_E};
		requiredVersion = 1.02;
		requiredAddons[] = {"CAWeapons_E","CAweapons"};
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







};