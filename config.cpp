#include "\ca\weapons_E\basicdefines.hpp"
class CfgPatches
{
	class CAWeapons_E_M240
	{
		units[] = {};
		weapons[] = {m240_scoped_E};
		requiredVersion = 1.02;
		requiredAddons[] = {"CAWeapons_E","CAweapons"};
	};
};
class CfgWeapons
{
	class m240;
	class m240_scoped_EP1: m240
	{
    htMin = 1;
    htMax = 600;
    afMax = 0;
    mfMax = 0;
    mFact = 1;
    tBody = 100;
	
		scope = 2;
		displayName = $STR_EP1_DN_m240_scoped_EP1;
		picture="\ca\weapons_E\Data\icons\m240_scoped_CA.paa";
		modelOptics = "\Ca\weapons_E\M249\M145.p3d";
		visionMode[] = {"Normal"};
		opticsPPEffects[]={"OpticsCHAbera2","OpticsBlur2"};
		opticsZoomMax = 0.0732; distanceZoomMax=300;
		opticsZoomMin = 0.0732; distanceZoomMin=300;
		opticsZoomInit= 0.0732;
		model="\ca\weapons_E\M240\m240_scoped";
		class Library {libTextDesc = $STR_EP1_LIB_m240_scoped_EP1;}; // TODO
		class OpticsModes
		{
			class M145
			{
				opticsID = 1;
				useModelOptics = true;
				opticsPPEffects[]={"OpticsCHAbera1","OpticsBlur1"};
				opticsZoomMax = 0.0732; distanceZoomMax=300;
				opticsZoomMin = 0.0732; distanceZoomMin=300;
				opticsZoomInit= 0.0732;
				memoryPointCamera = "opticView";
				visionMode[] = {"Normal"};
				opticsFlare = true;
				opticsDisablePeripherialVision = true;
				cameraDir = "";
			};
			/*
			class Ironsigts:M145
			{
				opticsID = 2;
				useModelOptics = false;
				opticsFlare = false;
				opticsDisablePeripherialVision = false;
				opticsZoomMin=0.25;
				opticsZoomMax=1.1;
				opticsZoomInit=0.5;
				memoryPointCamera = "eye";
				visionMode[] = {};
			};
			*/
		};
	};
};
