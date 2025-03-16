#include <iostream>
#include <map>
#include <string>

using namespace std;




    const int STR = 10;
    const int INT = 10;
    const int DEF = 10;
    const int AGI = 10;
    const int ENG = 10;
    const int CHR = 10;
    const double HP = 100;




    const double monsterHP;
    const double bossHP;




    const int monsterSTR;
    const int monsterDEF;
    const int monsterAGI;
    


    const int EXP = 0;
    const int magicite = 100;



    const int level = 1;   // Player level
    const int MaxEXP = 50; // Total stat threshold for leveling up






int main() 
{
    char repeat;
    int choice;





//Prices of Items
    std::map<std::string, int> itemPrices;
    itemPrices["LVL_1  Sword"] = 30;
    itemPrices["LvL_1  Sheild"] = 30;
    itemPrices["LvL_1  Health Potion"] = 30;


//Damage of Items
    std::map<std::string, int> itemDamage;
    itemDamage["Sword"] = 40;




    return 0;
}