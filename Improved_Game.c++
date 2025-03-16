#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

// Player Stats (Non-const to allow updates)
int STR = 10, INT = 10, DEF = 10, AGI = 10, ENG = 10, CHR = 10, HP = 100;
int EXP = 0, magicite = 100, level = 1;
const int MaxEXP = 50; // Total EXP needed for leveling up





void updateStats(int roll1, int roll2, int roll3, int roll4, int roll5, int roll6) 
{
    cout << "Updating stats based on rolls...\n";
    
    // Update global stats
    STR += roll1;
    INT += roll2;
    DEF += roll3;
    AGI += roll4;
    ENG += roll5;
    CHR += roll6;

    cout << "New stats updated!\n";
}



void showStatus() 
{
    cout << "=== Player Stats ===\n"
         << "Level: " << level << " (EXP: " << EXP << "/" << MaxEXP << ")\n"
         << "Money: {M}" << magicite << "\n"
         << "HP: " << HP << "\n"
         << "STR: " << STR << "\n"
         << "INT: " << INT << "\n"
         << "DEF: " << DEF << "\n"
         << "AGI: " << AGI << "\n"
         << "ENG: " << ENG << "\n"
         << "CHR: " << CHR << "\n";
}




void inventoryMenu() 
{
    cout << "Opening inventory...\n";
}





void helpMeOut() 
{
    cout << "Help menu...\n";
}










void rollDice() 
{
    // Roll six dice (1-6)
    int roll1 = rand() % 6 + 1;
    int roll2 = rand() % 6 + 1;
    int roll3 = rand() % 6 + 1;
    int roll4 = rand() % 6 + 1;
    int roll5 = rand() % 6 + 1;
    int roll6 = rand() % 6 + 1;

    cout << "You rolled: " 
         << roll1 << ", " << roll2 << ", " << roll3 << ", " 
         << roll4 << ", " << roll5 << ", " << roll6 << endl;

    updateStats(roll1, roll2, roll3, roll4, roll5, roll6);

    char choice;
    cout << "Roll again? (y/n): ";
    cin >> choice;

    if (choice == 'y' || choice == 'Y') 
    {
        rollDice();
    }
}



int main() 
{
    srand(time(0)); // Seed the random number generator only once

    bool playing = true;
    int choice;

    // Prices of Items
    map<string, int> itemPrices = {
        {"LVL_1 Sword", 30},
        {"LVL_1 Shield", 30},
        {"LVL_1 Health Potion", 30}
    };

    // Damage of Items
    map<string, int> itemDamage = {
        {"Sword", 10},
        {"Shield", 5}
    };

    // Durability of Items
    map<string, int> itemDurability = {
        {"Sword", 100},
        {"Shield", 10}
    };

    while (playing) 
    {
        cout << "\nChoose an option:\n"
             << "0 - Show Status\n"
             << "1 - Roll Dice\n"
             << "2 - Enter Game\n"
             << "3 - Check Inventory\n"
             << "4 - Exit Game\n"
             << "5 - Help Player\n";

        cout << "Enter your choice (0-5): ";
        cin >> choice;

        switch (choice) 
        {
            case 0: showStatus(); break;
            case 1: rollDice(); break;
            case 2: cout << "Welcome to Arcadia!\n"; gamePlay1(); break;
            case 3: inventoryMenu(); break;
            case 4: playing = false; cout << "Thanks for playing! Goodbye!\n"; break;
            case 5: helpMeOut(); break;
            default: cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}


void gamePlay1()
{

}







