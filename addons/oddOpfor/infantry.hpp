//      grenadier rpg7 bpk
class rhs_rpg_empty;
class dis_oof_bpk_grenadierRpg : rhs_rpg_empty{
    scope = 1;		// There is no need for this bag to appear in the editor, Virtual Arsenal, or Zeus.
    class TransportMagazines{
        mag_xx(rhs_rpg7_pg7v_mag, 3);
    };
};

//      Machinegunner bpk
class rhs_sidor;
class dis_oof_bkp_machinegunner : rhs_sidor{
    scope = 1;		
    class TransportMagazines{
        mag_xx(rhs_100Rnd_762x54mmR_green, 2);
    };
};

//      HAT bpk 
class dis_oof_bpk_riflemanHat : rhs_rpg_empty{
    scope = 1;		
    class TransportMagazines{
        mag_xx(rhs_rpg7_pg7vl_mag, 1);
        mag_xx(rhs_rpg7_pg7vr_mag, 1);
    };
};

//      AA bpk
class rhs_rpg_2;
class dis_oof_bpk_riflemanAA : rhs_rpg_2{
    scope = 1;		
    class TransportMagazines{
        mag_xx(rhs_mag_9k38_rocket, 1);
    };
};

//      Medic bpk
class rhs_medic_bag;
class dis_oof_bpk_medic : rhs_medic_bag{
    scope = 1;		
    class TransportItems{
        item_xx(ace_elasticBandage,15);
        item_xx(ace_packingBandage,25);
        item_xx(ace_bloodIv,2);
        item_xx(ace_bloodIv_500,3);
        item_xx(ace_epinephrine,2);
        item_xx(ace_morphine,2);
        item_xx(ace_splint,4);
        item_xx(ace_surgicalKit,1);
    };
};

//      Engineer bpk
class rhs_assault_umbts_engineer_empty;
class dis_oof_bpk_engineer : rhs_assault_umbts_engineer_empty{
    scope = 1;		
    class TransportItems{
        item_xx(ace_defusalKit,1);
        item_xx(ace_clacker,1);
    };
    class TransportMagazines{
        mag_xx(rhs_ec200_mag, 1);
        mag_xx(rhs_mine_pmn2_mag, 2);
        mag_xx(apersTripmine_wire_mag, 2);
        mag_xx(rhs_mine_tm62m_mag, 1);
    };
};

//		Rifleman
class rhs_infantry_msv_base;
class dis_oof_rifleman: rhs_infantry_msv_base{
	author = "DIS";
	side = 0;
    faction = "dis_oddOpfor_faction";
	scope = 2;
	editorPreview="";
	
	uniformClass = "rhs_uniform_flora_patchless";

	displayName = "Rifleman";
	genericNames = "RussianMen";
	identityTypes[] = {"LanguageGRE_F", "Head_Russian", "Head_Euro" };
	
	Items[] = {ace_cableTie, ace_cableTie, ace_fieldDressing, ace_fieldDressing, ace_fieldDressing, ace_fieldDressing, ace_fieldDressing};
    RespawnItems[] = {ace_cableTie, ace_cableTie, ace_fieldDressing, ace_fieldDressing, ace_fieldDressing, ace_fieldDressing, ace_fieldDressing};
	
    magazines[] = {mag_7(rhs_30Rnd_545x39_7n10_ak), rhs_mag_rgd5}; 
    respawnMagazines[] = {mag_7(rhs_30Rnd_545x39_7n10_ak), rhs_mag_rgd5};
	weapons[] = {rhs_weap_ak74m, Throw, Put}; 
    respawnWeapons[] = {rhs_weap_ak74m, Throw, Put}; 
	
    linkedItems[] = {rhs_6b2_chicom, rhs_6b7_1m_olive, ItemMap, ItemCompass, ItemWatch, ItemRadio}; 
    respawnLinkedItems[] = {rhs_6b2_chicom, rhs_6b7_1m_olive, ItemMap, ItemCompass, ItemWatch, ItemRadio}; 
	
	vehicleClass = "Men";
	editorSubcategory = "EdSubcat_Personnel";
};

//		Rifleman (grenades)
class dis_oof_riflemanGre: dis_oof_rifleman{
	displayName = "Rifleman (grenades)";

	magazines[] = {mag_7(rhs_30Rnd_545x39_7n10_ak), rhs_mag_rgd5, rhs_mag_rgd5, rhs_mag_rdg2_white, rhs_mag_rdg2_white, rhs_mag_rdg2_white}; 
    respawnMagazines[] = {mag_7(rhs_30Rnd_545x39_7n10_ak), rhs_mag_rgd5, rhs_mag_rgd5, rhs_mag_rdg2_white, rhs_mag_rdg2_white, rhs_mag_rdg2_white};
	weapons[] = {rhs_weap_ak74m, Throw, Put}; 
    respawnWeapons[] = {rhs_weap_ak74m, Throw, Put}; 
};

//		Rifleman light
class dis_oof_riflemanLight: dis_oof_rifleman{
	displayName = "Rifleman (light)";

	Items[] = {ace_cableTie, ace_fieldDressing, ace_fieldDressing, ace_fieldDressing};
    RespawnItems[] = {ace_cableTie, ace_fieldDressing, ace_fieldDressing, ace_fieldDressing};
	
    magazines[] = {mag_5(rhs_30Rnd_545x39_7n10_ak), rhs_mag_rgd5, rhs_mag_rdg2_white, rhs_mag_rdg2_white}; 
    respawnMagazines[] = {mag_5(rhs_30Rnd_545x39_7n10_ak), rhs_mag_rgd5, rhs_mag_rdg2_white, rhs_mag_rdg2_white};
	weapons[] = {rhs_weap_aks74u, Throw, Put}; 
    respawnWeapons[] = {rhs_weap_aks74u, Throw, Put}; 
	
    linkedItems[] = {rhs_6sh92, rhs_fieldCap_M88_vsr, ItemMap, ItemCompass, ItemWatch, ItemRadio}; 
    respawnLinkedItems[] = {rhs_6sh92, rhs_fieldCap_M88_vsr, ItemMap, ItemCompass, ItemWatch, ItemRadio}; 
};

//		Rifleman FAL
class dis_oof_riflemanFal: dis_oof_rifleman{
	displayName = "Rifleman FAL";
	
    magazines[] = {mag_5(rhs_mag_20Rnd_762x51_m80_fnfal), rhs_mag_rgd5}; 
    respawnMagazines[] = {mag_5(rhs_mag_20Rnd_762x51_m80_fnfal), rhs_mag_rgd5};
	weapons[] = {rhs_weap_l1a1, Throw, Put}; 
    respawnWeapons[] = {rhs_weap_l1a1, Throw, Put}; 
};

//		Rifleman FAL (grenades)
class dis_oof_riflemanFalGre: dis_oof_rifleman{
	displayName = "Rifleman FAL (grenades)";

	magazines[] = {mag_5(rhs_mag_20Rnd_762x51_m80_fnfal), rhs_mag_rgd5, rhs_mag_rgd5, rhs_mag_rdg2_white, rhs_mag_rdg2_white, rhs_mag_rdg2_white}; 
    respawnMagazines[] = {mag_5(rhs_mag_20Rnd_762x51_m80_fnfal), rhs_mag_rgd5, rhs_mag_rgd5, rhs_mag_rdg2_white, rhs_mag_rdg2_white, rhs_mag_rdg2_white};
	weapons[] = {rhs_weap_l1a1, Throw, Put}; 
    respawnWeapons[] = {rhs_weap_l1a1, Throw, Put}; 
};

//		Grenadier
class dis_oof_grenadier: dis_oof_rifleman{
	displayName = "Grenadier";

	magazines[] = {mag_5(rhs_30Rnd_545x39_7n10_ak), rhs_mag_rgd5, rhs_mag_rdg2_white, rhs_mag_rdg2_white, mag_3(rhs_grd40_white), mag_5(rhs_vog25p)}; 
    respawnMagazines[] = {mag_5(rhs_30Rnd_545x39_7n10_ak), rhs_mag_rgd5, rhs_mag_rdg2_white, rhs_mag_rdg2_white, mag_3(rhs_grd40_white), mag_5(rhs_vog25p)};
	weapons[] = {rhs_weap_ak74m_gp25, Throw, Put}; 
    respawnWeapons[] = {rhs_weap_ak74m_gp25, Throw, Put}; 
};

//		Grenadier (rpg)
class dis_oof_grenadierRpg: dis_oof_rifleman{
	displayName = "Grenadier (rpg)";

	backpack = "dis_oof_bpk_grenadierRpg";
	magazines[] = {mag_7(rhs_30Rnd_545x39_7n10_ak), rhs_rpg7_pg7v_mag, rhs_mag_rgd5, rhs_mag_rgd5, rhs_mag_rdg2_white}; 
    respawnMagazines[] = {mag_7(rhs_30Rnd_545x39_7n10_ak), rhs_rpg7_pg7v_mag, rhs_mag_rgd5, rhs_mag_rgd5, rhs_mag_rdg2_white};
	weapons[] = {rhs_weap_ak74m, rhs_weap_rpg7, Throw, Put}; 
    respawnWeapons[] = {rhs_weap_ak74m, rhs_weap_rpg7, Throw, Put}; 
	
    linkedItems[] = {rhs_6b2_chicom, rhs_6b7_1m_olive, ItemMap, ItemCompass, ItemWatch, ItemRadio}; 
    respawnLinkedItems[] = {rhs_6b2_chicom, rhs_6b7_1m_olive, ItemMap, ItemCompass, ItemWatch, ItemRadio}; 
};

//		Autorifleman
class dis_oof_autorifleman: dis_oof_rifleman{
	displayName = "Autorifleman";

	magazines[] = {mag_7(rhs_45Rnd_545x39_ak_green), rhs_mag_rgd5, rhs_mag_rdg2_white, rhs_mag_rdg2_white}; 
    respawnMagazines[] = {mag_7(rhs_45Rnd_545x39_ak_green), rhs_mag_rgd5, rhs_mag_rdg2_white, rhs_mag_rdg2_white};
	weapons[] = {rhs_weap_rpk74m, Throw, Put}; 
    respawnWeapons[] = {rhs_weap_rpk74m, Throw, Put}; 
	
    linkedItems[] = {rhs_6b2_rpk, rhs_6b7_1m_olive, ItemMap, ItemCompass, ItemWatch, ItemRadio}; 
    respawnLinkedItems[] = {rhs_6b2_rpk, rhs_6b7_1m_olive, ItemMap, ItemCompass, ItemWatch, ItemRadio}; 
};

//		Machinegunner
class dis_oof_machinegunner: dis_oof_rifleman{
	displayName = "Machinegunner";

	backpack = "dis_oof_bkp_machinegunner";
	magazines[] = {mag_2(rhs_100Rnd_762x54mmR_green), rhs_mag_rgd5, rhs_mag_rgd5, rhs_mag_rdg2_white}; 
    respawnMagazines[] = {mag_2(rhs_100Rnd_762x54mmR_green), rhs_mag_rgd5, rhs_mag_rgd5, rhs_mag_rdg2_white};
	weapons[] = {rhs_weap_pkp, Throw, Put}; 
    respawnWeapons[] = {rhs_weap_pkp, Throw, Put}; 
	
    linkedItems[] = {rhs_6b2_rpk, rhs_6b7_1m_olive, ItemMap, ItemCompass, ItemWatch, ItemRadio}; 
    respawnLinkedItems[] = {rhs_6b2_rpk, rhs_6b7_1m_olive, ItemMap, ItemCompass, ItemWatch, ItemRadio}; 
};

//		Mg Assistant
class dis_oof_machinegunnerAssistant: dis_oof_rifleman{
	displayName = "Machinegunner assistant";
	
	Items[] = {ace_cableTie, ace_cableTie, ace_fieldDressing, ace_fieldDressing, ace_fieldDressing, ace_fieldDressing, ace_fieldDressing};
    RespawnItems[] = {ace_cableTie, ace_cableTie, ace_fieldDressing, ace_fieldDressing, ace_fieldDressing, ace_fieldDressing, ace_fieldDressing};
	
	backpack = "dis_oof_bkp_machinegunner";
    magazines[] = {mag_5(rhs_30Rnd_545x39_7n10_ak), rhs_100Rnd_762x54mmR_green, rhs_100Rnd_762x54mmR_green, rhs_mag_rgd5, rhs_mag_rdg2_white, rhs_mag_rdg2_white}; 
    respawnMagazines[] = {mag_5(rhs_30Rnd_545x39_7n10_ak), rhs_100Rnd_762x54mmR_green, rhs_100Rnd_762x54mmR_green, rhs_mag_rgd5, rhs_mag_rdg2_white, rhs_mag_rdg2_white};
	weapons[] = {rhs_weap_ak74m, Throw, Put}; 
    respawnWeapons[] = {rhs_weap_ak74m, Throw, Put}; 
};

//		LAT
class dis_oof_riflemanLat: dis_oof_rifleman{
	displayName = "LAT Rifleman";

	magazines[] = {mag_7(rhs_30Rnd_545x39_7n10_ak), rhs_mag_rgd5, rhs_mag_rgd5, rhs_mag_rdg2_white, rhs_mag_rdg2_white, rhs_mag_rdg2_white}; 
    respawnMagazines[] = {mag_7(rhs_30Rnd_545x39_7n10_ak), rhs_mag_rgd5, rhs_mag_rgd5, rhs_mag_rdg2_white, rhs_mag_rdg2_white, rhs_mag_rdg2_white};
	weapons[] = {rhs_weap_ak74m, rhs_weap_rpg26, Throw, Put}; 
    respawnWeapons[] = {rhs_weap_ak74m, rhs_weap_rpg26, Throw, Put}; 
};


//      HAT 
class dis_oof_riflemanHat: dis_oof_rifleman{
	displayName = "HAT rifleman";

	backpack = "dis_oof_bpk_riflemanHat";
	magazines[] = {mag_7(rhs_30Rnd_545x39_7n10_ak), rhs_rpg7_pg7vl_mag, rhs_mag_rgd5, rhs_mag_rgd5, rhs_mag_rdg2_white}; 
    respawnMagazines[] = {mag_7(rhs_30Rnd_545x39_7n10_ak), rhs_rpg7_pg7vl_mag, rhs_mag_rgd5, rhs_mag_rgd5, rhs_mag_rdg2_white};
	weapons[] = {rhs_weap_ak74m, rhs_weap_rpg7, Throw, Put}; 
    respawnWeapons[] = {rhs_weap_ak74m, rhs_weap_rpg7, Throw, Put}; 
};

//      HAT assistant 
class dis_oof_hatAssistant: dis_oof_rifleman{
	displayName = "HAT assistant";

	backpack = "dis_oof_bpk_riflemanHat";
	magazines[] = {mag_7(rhs_30Rnd_545x39_7n10_ak), rhs_mag_rgd5, rhs_mag_rgd5, rhs_mag_rdg2_white}; 
    respawnMagazines[] = {mag_7(rhs_30Rnd_545x39_7n10_ak), rhs_mag_rgd5, rhs_mag_rgd5, rhs_mag_rdg2_white};
	weapons[] = {rhs_weap_ak74m, Throw, Put}; 
    respawnWeapons[] = {rhs_weap_ak74m, Throw, Put}; 
};

//      AA 
class dis_oof_riflemanAA: dis_oof_rifleman{
	displayName = "HAT rifleman";

	backpack = "dis_oof_bpk_riflemanAA";
	magazines[] = {mag_7(rhs_30Rnd_545x39_7n10_ak), rhs_mag_9k38_rocket, rhs_mag_rgd5, rhs_mag_rgd5, rhs_mag_rdg2_white}; 
    respawnMagazines[] = {mag_7(rhs_30Rnd_545x39_7n10_ak), rhs_mag_9k38_rocket, rhs_mag_rgd5, rhs_mag_rgd5, rhs_mag_rdg2_white};
	weapons[] = {rhs_weap_ak74m, rhs_weap_igla, Throw, Put}; 
    respawnWeapons[] = {rhs_weap_ak74m, rhs_weap_igla, Throw, Put}; 
};

//		Medic
class dis_oof_medic: dis_oof_rifleman{
	displayName = "Medic";

    backpack = "dis_oof_bpk_medic";
	magazines[] = {mag_5(rhs_30Rnd_545x39_7n10_ak), rhs_mag_rgd5, rhs_mag_rdg2_white, rhs_mag_rdg2_white, rhs_mag_rdg2_white}; 
    respawnMagazines[] = {mag_5(rhs_30Rnd_545x39_7n10_ak), rhs_mag_rgd5, rhs_mag_rdg2_white, rhs_mag_rdg2_white, rhs_mag_rdg2_white};
	weapons[] = {rhs_weap_ak74m, Throw, Put}; 
    respawnWeapons[] = {rhs_weap_ak74m, Throw, Put}; 
};

//      Engineer 
class dis_oof_engineer: dis_oof_rifleman{
	displayName = "Engineer";

    backpack = "dis_oof_bpk_engineer";
	magazines[] = {mag_5(rhs_30Rnd_545x39_7n10_ak), rhs_mag_rgd5, rhs_mag_rdg2_white, rhs_mag_rdg2_white}; 
    respawnMagazines[] = {mag_5(rhs_30Rnd_545x39_7n10_ak), rhs_mag_rgd5, rhs_mag_rdg2_white, rhs_mag_rdg2_white};
	weapons[] = {rhs_weap_ak74m, Throw, Put}; 
    respawnWeapons[] = {rhs_weap_ak74m, Throw, Put}; 
};

//      Marksman 
class dis_oof_marskman: dis_oof_rifleman{
	displayName = "Marksman";

	magazines[] = {mag_5(rhs_10Rnd_562x54mmr_7n1), rhs_mag_rgd5, rhs_mag_rdg2_white, rhs_mag_rdg2_white, rhs_mag_rdg2_white}; 
    respawnMagazines[] = {mag_5(rhs_10Rnd_562x54mmr_7n1), rhs_mag_rgd5, rhs_mag_rdg2_white, rhs_mag_rdg2_white, rhs_mag_rdg2_white};
	weapons[] = {rhs_weap_svdp_wd, Throw, Put}; 
    respawnWeapons[] = {rhs_weap_svdp_wd, Throw, Put}; 
	
    linkedItems[] = {rhs_6b2_svd, rhs_6b7_1m_bala1_olive, rhs_acc_pso1m2, binocular, ItemMap, ItemCompass, ItemWatch, ItemRadio}; 
    respawnLinkedItems[] = {rhs_6b2_svd, rhs_6b7_1m_bala1_olive, rhs_acc_pso1m2, binocular, ItemMap, ItemCompass, ItemWatch, ItemRadio}; 
};

//      Spotter
class dis_oof_spotter: dis_oof_rifleman{
	displayName = "Spotter";

    linkedItems[] = {rhs_6b2_svd, rhs_6b7_1m_bala1_olive, ItemMap, rhs_pdu4, ItemCompass, ItemWatch, ItemRadio}; 
    respawnLinkedItems[] = {rhs_6b2_svd, rhs_6b7_1m_bala1_olive, rhs_pdu4, ItemMap, ItemCompass, ItemWatch, ItemRadio}; 
};

//      Teamleader 
class dis_oof_teamLeader: dis_oof_rifleman{
	displayName = "Teamleader";

	magazines[] = {mag_7(rhs_30Rnd_545x39_7n10_ak), rhs_mag_rgd5, rhs_mag_rgd5, rhs_mag_rdg2_white, rhs_mag_rdg2_white, rhs_mag_rdg2_white}; 
    respawnMagazines[] = {mag_7(rhs_30Rnd_545x39_7n10_ak), rhs_mag_rgd5, rhs_mag_rgd5, rhs_mag_rdg2_white};
	weapons[] = {rhs_weap_aks74_2, rhs_weap_pya, Throw, Put}; 
    respawnWeapons[] = {rhs_weap_aks74_2, rhs_weap_pya, Throw, Put}; 
    	
    linkedItems[] = {rhs_6b2_chicom, rhs_6b7_1m_olive, binocular, ItemMap, ItemCompass, ItemWatch, ItemRadio}; 
    respawnLinkedItems[] = {rhs_6b2_chicom, rhs_6b7_1m_olive, binocular, ItemMap, ItemCompass, ItemWatch, ItemRadio}; 
};

//      Commander 
class dis_oof_commander: dis_oof_rifleman{
	displayName = "Commander";

    uniformClass = "rhs_uniform_omon";

	magazines[] = {mag_5(rhs_mag_9x19_17), rhs_mag_rgd5}; 
    respawnMagazines[] = {mag_5(rhs_mag_9x19_17), rhs_mag_rgd5};
	weapons[] = {rhs_weap_pya, Throw, Put}; 
    respawnWeapons[] = {rhs_weap_pya, Throw, Put}; 
    	
    linkedItems[] = {rhs_vest_commander, rhs_beret_omon, binocular, ItemMap, ItemCompass, ItemWatch, ItemRadio}; 
    respawnLinkedItems[] = {rhs_vest_commander, rhs_beret_omon, binocular, ItemMap, ItemCompass, ItemWatch, ItemRadio}; 
};

//      Crewman 
class dis_oof_crew: dis_oof_rifleman{
	displayName = "Crewman";

	magazines[] = {mag_5(rhs_30Rnd_545x39_7n10_ak), rhs_mag_rgd5, rhs_mag_rdg2_white, rhs_mag_rdg2_white}; 
    respawnMagazines[] = {mag_5(rhs_30Rnd_545x39_7n10_ak), rhs_mag_rgd5, rhs_mag_rdg2_white, rhs_mag_rdg2_white};
	weapons[] = {rhs_weap_aks74u, Throw, Put}; 
    respawnWeapons[] = {rhs_weap_aks74u, Throw, Put}; 
    	
    linkedItems[] = {rhs_chicom, rhs_tsh4, binocular, ItemMap, ItemCompass, ItemWatch, ItemRadio}; 
    respawnLinkedItems[] = {rhs_chicom, rhs_tsh4, binocular, ItemMap, ItemCompass, ItemWatch, ItemRadio}; 
};

//      Helicopter Pilot 
class dis_oof_heloPilot: dis_oof_rifleman{
	displayName = "Helicopter pilot";

    uniformClass = "rhs_uniform_omon";

	magazines[] = {mag_4(rhs_30Rnd_545x39_7n10_ak), rhs_mag_rgd5, rhs_mag_rdg2_white, rhs_mag_rdg2_white}; 
    respawnMagazines[] = {mag_4(rhs_30Rnd_545x39_7n10_ak), rhs_mag_rgd5, rhs_mag_rdg2_white, rhs_mag_rdg2_white};
	weapons[] = {rhs_weap_aks74u, Throw, Put}; 
    respawnWeapons[] = {rhs_weap_aks74u, Throw, Put}; 
    	
    linkedItems[] = {rhs_chicom, rhs_zsh7a_mike_green_alt, binocular, ItemMap, ItemCompass, ItemWatch, ItemRadio}; 
    respawnLinkedItems[] = {rhs_chicom, rhs_zsh7a_mike_green_alt, binocular, ItemMap, ItemCompass, ItemWatch, ItemRadio}; 
};

//      Pilot 
class dis_oof_pilot: dis_oof_rifleman{
	displayName = "Pilot";

    uniformClass = "rhs_uniform_df15";

    backpack = "rhs_d6_parachute_backpack";
	magazines[] = {mag_5(rhs_mag_9x19_17), rhs_mag_rgd5}; 
    respawnMagazines[] = {mag_5(rhs_mag_9x19_17), rhs_mag_rgd5};
	weapons[] = {rhs_weap_pya, Throw, Put}; 
    respawnWeapons[] = {rhs_weap_pya, Throw, Put}; 
    	
    linkedItems[] = {rhs_chicom, rhs_zsh7a, ItemMap, ItemCompass, ItemWatch, ItemRadio}; 
    respawnLinkedItems[] = {rhs_chicom, rhs_zsh7a, ItemMap, ItemCompass, ItemWatch, ItemRadio}; 
};
