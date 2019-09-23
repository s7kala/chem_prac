//Chem_Prac
//Anion Analysis
//Practice ONLY

#include <iostream>
#include <stdlib.h>
#include <string>
#include <time.h>
#include <fstream>

using namespace std;

struct rad
{
    string rad_name,desc;

}r[12];


int main()

    {

         
		//Anion_Data directly defined, no header separately used+
        r[0].rad_name="CO3(2-)";r[0].desc="Colorless,odorless gas with brisk effervescence evolved which turned lime water milky\n";
        r[1].rad_name="SO3(2-)";r[1].desc="Colorless gas with smell of burning sulfur evolved which turned paper dipped in acidified K2Cr2O7 green\n";
        r[2].rad_name="S(2-)";r[2].desc="Colorless gas with smell of rotten eggs evolved which turned paper dipped in lead acetate solution black\n";
        r[3].rad_name="NO2(-)";r[3].desc="Reddish brown vapors with pungent smell evolved which turned paper dipped in FeSO4 solution black\n";
        r[4].rad_name="Cl(-)";r[4].desc="A colorless gas with pungent smell evolved which gave dense white fumes when a rod dipped in NH4OH solution was brought near the mouth of the test tube\n";
        r[5].rad_name="Br(-)";r[5].desc="Reddish brown vapors evolved\n";
        r[6].rad_name="I(-)";r[6].desc="Violet vapors evolved\n";
        r[7].rad_name="NO3(-)";r[7].desc="Brown vapors evolved on heating which intensified on adding Cu chips\n";
        r[8].rad_name="CH3COO(-)";r[8].desc="Colorless vapors with smell of vinegar evolved\n";
        r[9].rad_name="C2O4(2-)";r[9].desc="On heating, colorless gas evolved which turned lime water milky\n";
        r[10].rad_name="SO4(2-)";
        r[11].rad_name="PO4(2-)";
        char play='y';
        while(play=='y'){ system("cls");		//CodeBlocks only: else use clrscr();
        int ch,ri,score=0,ch2,a=0,amt=4,conf=1;

        srand(time(NULL));		//Seed sys time
        ri=rand()%12;
        cout<<"Your objective is to determine the anion present in the salt.Press any number to continue\n";
        cin>>ch;




            while(score<1&&amt)
            {
                system("cls");
                if(a)
                    cout<<"No reaction was observed :(\n";
                a++;
				//Prelims
                while(conf&&amt)

                {
					system("cls");
                    cout<<"What to do?\n"<<"1. Add dil H2SO4 to a pinch of the given salt sample\n2. Add conc H2SO4 to a pinch of the given salt sample\n";
                    cin>>ch;
                    amt--;
                    if(ch<2)
                    {
                        if(ri>3)
                            cout<<"No reaction :(\n";
                        else
                            cout<<r[ri].desc;
                    }
                    else
                    {
                        if(ri>3&&ri<10)
                            cout<<r[ri].desc;
                        else
                            cout<<"No reaction :(\n";			//Avoided dangling else ; used braces
                    }
                    cout<<"What to do now?\n"<<"(0)Start with confirmatory (1)Prelim again\n";
                    cin>>conf;
                }
                if(amt==0)
                    break;
                cout<<"What to do now?\n";
                if(ri<4)
                    cout<<"Confirmatory for dil. H2SO4 group: 1. CO3(2-) 2. SO3(2-) 3. S(2-) 4. NO2(-)\n";
                else if(ri<10)
                        cout<<"Confirmatory for conc H2SO4 group: 5. Cl(-) 6. Br(-) 7. I(-) 8. NO3(-) 9. CH3COO(-) 10. C2O4(2-)\n";
                     else
                        cout<<"Confirmatory for special group: 11. SO4(2-) 12.PO4(2-)\n";
                cin>>ch;
                cout<<"Confirmatory for ";
                switch(ch)
                    {
                        case 1: cout<<"CO3(2-): To the water extract, add 1. MgSO4 solution\n2. Phenolphthalein\n";
                                cin>>ch2;
                                amt--;
                                if(r[ri].rad_name=="CO3(2-)")
                                {
                                    if(ch2<2)
                                        cout<<"White ppt of MgCO3 was obtained!\n CO3(2-) confirmed!\n";
                                    else
                                        cout<<"The solution turned pink due to the formation of OH(-) ions upon dissociation of the salt in water!\n CO3(2-) confirmed!\n";
                                    score++;
                                }
                                else cout<<"No reaction was observed :(\n";
                                break;
                        case 2: cout<<"SO3(2-): To the water extract, add 1. BaCl2 solution\n2. Acidified K2Cr2O7\n3. Acidified KMnO4\n";
                                cin>>ch2;
                                amt--;
                                if(r[ri].rad_name=="SO3(2-)")
                                {
                                    if(ch2==1)
                                        cout<<"White ppt of BaCl2 soluble in dil HCL was formed!\n SO3(2-) confirmed!\n";
                                    else if(ch2==2)
                                            cout<<"The solution turned green due to formation of Chromium Sulfate, Cr2(SO4)3.\nSO3(2-) confirmed :D\n";
                                         else
                                            cout<<"The pink color of KMnO4 was discharged.\n SO3(2-) confirmed :D\n";
                                    score++;
                                }
                                else cout<<"No reaction was observed :(\n";
                                break;
                        case 3: cout<<"S(2-): To the water extract, add 1. Sodium Nitroprusside solution\n2. Lead acetate solution\n";
                                cin>>ch2;
                                amt--;
                                if(r[ri].rad_name=="S(2-)")
                                {
                                    if(ch2==1)
                                        cout<<"Purple/violet coloration was observed due to formation of Na2[Fe(CN)5NOS].\nS(2-) confirmed :D\n";
                                    else
                                        cout<<"The solution turned black due to formation of lead sulfide, PbS.\nS(2-) confirmed!\n";
                                    score++;
                                }
                                else cout<<"No reaction was observed :(\n";
                                break;
                        case 4: cout<<"NO2(-): To the water extract, add 1. FeSO4 solution along with acetic acid\n2. KI + conc.HNO3 + starch solution\n";
                                cin>>ch2;
                                amt--;
                                if(r[ri].rad_name=="NO2(-)")
                                {
                                    if(ch2<2)
                                        cout<<"The solution turned black due to the formation of FeSO4.NO !\nNO2(-) confirmed!\n";
                                    else
                                        cout<<"I2 evolved and turned starch solution blue!\nNO2(-) confirmed!\n";
                                    score++;
                                }
                                else cout<<"No reaction was observed :(\n";
                                break;
                        case 5: cout<<"Cl(-): To the water extract, add 1. AgNO3 solution\n2. Perform Chromyl Chloride test\n";
                                cin>>ch2;
                                amt--;
                                if(r[ri].rad_name=="Cl(-)")
                                {
                                    if(ch2<2)
                                        cout<<"White ppt of AgCl soluble in NH4OH was obtained!\nCl(-) confirmed!\n";
                                    else
                                        cout<<"Added conc H2SO4 along with solid K2Cr2O7 to the salt solution.\nReddish vapors of chromyl chloride evolved.\nOn passing these vapors through NaOH solution, the solution turned yellow.\nOn acidifying with lead acetate and acetic acid, yellow ppt of lead chromate was obtained.\nCl(-) confirmed!\n";
                                    score++;
                                }
                                else cout<<"No reaction was observed :(\n";
                                break;
                        case 6: cout<<"Br(-): To the water extract, add 1. AgNO3 solution\n2. Perform organic layer test\n";
                                cin>>ch2;
                                amt--;
                                if(r[ri].rad_name=="Br(-)")
                                {
                                    if(ch2<2)
                                        cout<<"Pale yellow ppt of AgBr partially soluble in NH4OH was obtained!\nBr(-) confirmed!\n";
                                    else
                                        cout<<"Added CS2(or CCl4) along with conc HNO3 and the water extract of the salt.\nOrange color in the organic layer was observed\nBr(-) confirmed!\n";
                                    score++;
                                }
                                else cout<<"No reaction was observed :(\n";
                                break;
                        case 7: cout<<"I(-): To the water extract, add 1. AgNO3 solution\n2. Perform organic layer test\n";
                                cin>>ch2;
                                amt--;
                                if(r[ri].rad_name=="I(-)")
                                {
                                    if(ch2<2)
                                        cout<<"Yellow ppt of AgI insoluble in NH4OH was obtained!\nI(-) confirmed!\n";
                                    else
                                        cout<<"Added CS2(or CCl4) along with conc HNO3 and the water extract of the salt.\nViolet color in the organic layer was observed\n!I(-) confirmed!\n";
                                    score++;
                                }
                                else cout<<"No reaction was observed :(\n";
                                break;
                        case 8: cout<<"NO3(-): Perform ring test?(1 or 0)\n";
                                cin>>ch2;
                                if(r[ri].rad_name=="NO3(-)")
                                {   if(ch2)
                                    {
                                        cout<<"Added freshly prepared FeSO4 solution to the water extract of the salt.\nFurther, conc H2S04 was added along the sides of the test tube after shaking.\nA dark brown ring between the junction of the two layers was observed\nNO3(-) confirmed!";
                                        amt--;
                                        score++;
                                    }
                                    else break;
                                }
                                break;
                        case 9: cout<<"CH3COO(-): 1. Perform ester test\n2. Perform Ferric Chloride test\n";
                                cin>>ch2;
                                amt--;
                                if(r[ri].rad_name=="CH3COO(-)")
                                {
                                    if(ch2<1)
                                        cout<<"Added conc H2SO4 and ethanol to the salt solution and heated.\nFruity smell was observed\nCH3COO(-) confirmed!\n";
                                    else
                                        cout<<"Added few(4) drops of neutral FeCl3 solution to salt solution.Deep red coloration was observed.\nDivided to 2 parts.\nPart 1 + dil HCl yielded disappearance of red color\nPart 2 + water and heat gave reddish brown ppt\n";
                                    score++;
                                }
                                else cout<<"No reaction was observed :(\n";
                                break;
                        case 10: cout<<"C2O4(2-): To the water extract of the salt, add: 1.NH4OH solution;heat,cool and add CaCl2 solution.\n 2. Add dil H2SO4 solution; heat, cool and add KMnO4 solution\n";
                                 cin>>ch2;
                                 amt--;
                                 if(r[ri].rad_name=="C2O4(2-)")
                                 {
                                     if(ch2<1)
                                         cout<<"White ppt of calcium oxalate was observed.\n C2O4(2-) confirmed!\n";
                                     else
                                         cout<<"Pink color of KMnO4 was discharged.\n C2O4(2-) confirmed!\n";
                                     score++;
                                 }
                                 else cout<<"No reaction was observed :(\n";
                                 break;
                        case 11: cout<<"SO4(2-): To the water extract of the salt, add: 1. BaCl2 solution\n2. Lead acetate solution\n";
                                 cin>>ch2;
                                 amt--;
                                 if(r[ri].rad_name=="SO4(2-)")
                                 {
                                     if(ch2<1)
                                        cout<<"White ppt of BaSO4 insoluble in dil. HCl formed\nSO4(2-) confirmed!\n";
                                     else
                                        cout<<"White ppt of PbSO4 formed\nSO4(2-) confirmed!\n";
                                     score++;
                                 }
                                 else cout<<"No reaction was observed :(\n";
                                 break;
                        case 12: cout<<"PO4(2-): 1. Perform Ammonium Molybdate test\n";
                                 cin>>ch2;
                                 if(r[ri].rad_name=="PO4(2-)")
                                    if(ch2)
                                        {
											cout<<"Added conc HNO3 to the water extract of the salt and heated.\nCooled and added Ammonium Molybdate, (NH4)2MoO4\nPO4(2-) confirmed!\n";
											score++;
										}
                                    else
                                        break;
                                 else cout<<"No reaction was observed :(\n";
                                 break;





                        default: cout<<"Wrong choice -_-'\n";



                    }
            }
            if(score)
                cout<<"Congratulations!\n";
            if(amt==0 && score==0)
                cout<<"You ran out of the salt!:O\n";
            cout<<"Play again? y/n";
            cin>>play;
        }

            return 0;



        }







