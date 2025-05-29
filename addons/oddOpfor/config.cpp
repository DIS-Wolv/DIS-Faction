/// Magazines macros definition ///
#define mag_2(a) a, a
#define mag_3(a) a, a, a
#define mag_4(a) a, a, a, a
#define mag_5(a) a, a, a, a, a
#define mag_6(a) a, a, a, a, a, a
#define mag_7(a) a, a, a, a, a, a, a
#define mag_8(a) a, a, a, a, a, a, a, a
#define mag_9(a) a, a, a, a, a, a, a, a, a
#define mag_10(a) a, a, a, a, a, a, a, a, a, a
#define mag_11(a) a, a, a, a, a, a, a, a, a, a, a
#define mag_12(a) a, a, a, a, a, a, a, a, a, a, a, a
#define mag_13(a) a, a, a, a, a, a, a, a, a, a, a, a, a

/// Equipment list macros definition ///
#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}

class cfgPatches{
	class dis_oddOpfor{
		units[] = {
            "dis_oof_rifleman",
            "dis_oof_riflemanGre",
            "dis_oof_riflemanLight",
            "dis_oof_riflemanFal",
            "dis_oof_riflemanFalGre",
            "dis_oof_grenadier",
            "dis_oof_grenadierRpg",
            "dis_oof_autorifleman",
            "dis_oof_machinegunner",
            "dis_oof_machinegunnerAssistant",
            "dis_oof_riflemanLat",
            "dis_oof_riflemanHat",
            "dis_oof_hatAssistant",
            "dis_oof_riflemanAA",
            "dis_oof_medic",
            "dis_oof_engineer",
            "dis_oof_marskman",
            "dis_oof_spotter",
            "dis_oof_teamLeader",
            "dis_oof_commander",
            "dis_oof_crew",
            "dis_oof_pilot",
            "dis_oof_heloPilot",

            "dis_oof_uaz",
            "dis_oof_uazDshkm",
            "dis_oof_gazTigr",
            "dis_oof_gazTigrOpen",
            "dis_oof_brdm",
            "dis_oof_brdmPkm",

            "dis_oof_gaz66",
            "dis_oof_uralRepair",
            "dis_oof_uralAmmo",
            "dis_oof_uralFuel",

            "dis_oof_btr60",
            "dis_oof_btr70",
            
            "dis_oof_brm1k",
            "dis_oof_bmd1k",
            
            "dis_oof_t72a",
            "dis_oof_T80",

            "dis_oof_bm21",
            "dis_oof_podnos",

            "dis_oof_nsv",
            "dis_oof_kord",
            "dis_oof_dshkm",

            "dis_oof_zu23",
            "dis_oof_djigit",

            "dis_oof_mi8",
            "dis_oof_mi8Cas",

            "dis_oof_mig35Cap"
		}; 
        weapons[] = {
			
		}; 
        requiredVersion = 0.1; 
        requiredAddons[] = {"rhs_c_troops", "rhs_c_heavyWeapons", "rhs_c_cars", "rhs_c_a2port_armor", "ace_medical_treatment"}; 
	};
};

class cfgFactionClasses{ 
	class dis_oddOpfor_faction{ 
        displayName = "(DIS) ODD Opfor"; 
        priority = 3; // Position in list. 
        side = 0; // Opfor = 0, Blufor = 1, Indep = 2. 
        icon = ""; //Custom Icon 
    };  
};

class CfgVehicles{
	#include "infantry.hpp"
	#include "vehicles.hpp"
	#include "statics.hpp"
};

// class CfgWeapons{
// 	#include "gear.hpp"
// };

class CfgGroups{
	class East{
		#include "groups.hpp"
	}
};
