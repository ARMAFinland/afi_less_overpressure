////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.97
//Sat Aug 20 23:39:17 2016 : Source 'file' date Sat Aug 20 23:39:17 2016
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class ace_overpressure : config.bin{
class CfgPatches {
	class afi_less_overpressure {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"ace_overpressure"};
	};
};

class CfgWeapons
	class CannonCore;
	class cannon_120mm: CannonCore {
		ace_overpressure_priority = 1;
		ace_overpressure_angle = 45;
		ace_overpressure_range = 35
		ace_overpressure_damage = 0.5;
	};
	class cannon_125mm: CannonCore {
		ace_overpressure_priority = 1;
		ace_overpressure_angle = 45;
		ace_overpressure_range = 30;
		ace_overpressure_damage = 0.5;
	};
	class cannon_105mm: CannonCore {
		ace_overpressure_priority = 1;
		ace_overpressure_angle = 45;
		ace_overpressure_range = 25;
		ace_overpressure_damage = 0.5;
	};
	class mortar_155mm_AMOS: CannonCore {
		ace_overpressure_priority = 1;
		ace_overpressure_angle = 45;
		ace_overpressure_range = 40;
		ace_overpressure_damage = 0.5;
	};
};
