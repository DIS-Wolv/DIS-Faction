class dis_oddOpfor_faction{
    name = "(DIS) ODD Opfor";
    class infantry{
        name = "Infantry";

        class dis_oddOpfor_grp_patrol{
			name="Patrol";
			side=0;
			faction="dis_oddOpfor_faction";
			icon="";
			rarityGroup=0.5;
			class Unit0{
				position[]={0,0,0};
				rank="SERGEANT";
				side=0;
				vehicle="dis_oof_rifleman";
			};
			class Unit1{
				position[]={2,-2,0};
				rank="PRIVATE";
				side=0;
				vehicle="dis_oof_riflemanLight";
			};
		};
    };
};