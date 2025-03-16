#include <iostream>
#include <map>
#include <string>
#include <vector>

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






    void showStatus() 
    {
        std::cout << "Showing status..." << std::endl;
    }
    
    
    
    
    
    
    
    
    void rollDice() 
    {
        std::cout << "Rolling dice..." << std::endl;
    }
    
    
    
    
    
    
    
    
    void gamePlay1() 
    {
        std::cout << "Starting game..." << std::endl;
    }
    
    
    
    
    
    
    
    
    void inventoryMenu() 
    {
        std::cout << "Opening inventory..." << std::endl;
    }
    
    
    
    
    
    
    
    
    void helpMeOut() 
    {
        std::cout << "Help menu..." << std::endl;
    }



























int main() 
{
    bool playing = true;
    char repeat;
    int choice;





//Prices of Items
    std::map<std::string, int> itemPrices;
    itemPrices["LVL_1  Sword"] = 30;
    itemPrices["LvL_1  Sheild"] = 30;
    itemPrices["LvL_1  Health Potion"] = 30;



//Damage of Items
    std::map<std::string, int> itemDamage;
    itemDamage["Sword"] = 10;
    itemDamage["Sheild"] = 5;



//Durability of Items
    std::map<std::string, int> itemDurability;
    itemDurability["Sword"] = 100;
    itemDurability["Shield"] = 10;


    while (playing) 
    {
        std::cout << "\nChoose an option:" << std::endl;

        
        std::cout << "\nChoose an option:" << std::endl;
        



        int choice;
        std::cout << "Enter your choice (0-5): ";
        std::cin >> choice;




        switch (choice) 
        {
            case 0:  showStatus();  
            break;

            case 1:  rollDice();  
            break;

            case 2:  std::cout << "Welcome to Arcadia!" << std::endl;  gamePlay1();  
            break;

            case 3:  inventoryMenu();  
            break;

            case 4:  playing = false;     std::cout << "Thanks for playing! Goodbye!" << std::endl;   
            break;

            case 5:  helpMeOut();  
            break;

            default:
                std::cout << "Invalid choice. Try again." << std::endl;

        }



    }

    return 0;
}










