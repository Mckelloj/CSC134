#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

// Stats
int STR = 10;
int INT = 10;
int DEF = 10;
int AGI = 10;
int ENG = 10;
int CHR = 10;
string location = "Arcadia"; // Player's current location


int AzureStar();
void StatusPage();   // Status page function
int gameIntro(); //Back story 
void rollDice();     // Dice rolling function
void updateStats(int roll1, int roll2, int roll3, int roll4, int roll5, int roll6); // Update stats 

int main() 
{
    char repeat = 'y';
    int choice;
  
    while (repeat == 'y')
    {
        cout << "Choose an option:"  << endl;
        cout << "1. Check Status" << endl;
        cout << "2. Roll Dice" << endl;
        cout << "3. Enter Game" << endl;
        cin >> choice;
      
        switch(choice) 
        {
            case 1:
                StatusPage();
                break;

            case 2:
                rollDice();
                break;

            case 3:
                cout << "Welcome to " << location << "." << endl;
                gameIntro();
                break;

            default:
                cout << "Invalid choice, please try again." << endl;
        }

        cout << "Do you want to start again? (y/n): ";
        cin >> repeat;
    }
  
    return 0;
}

void StatusPage()
{
    // Display the stats with emojis
    cout << "\n======= Player Stats =======" << endl;
    cout << "🌍 Location: " << location << endl;
    cout << "💪 STR: " << STR << endl;
    cout << "🧠 INT: " << INT << endl;
    cout << "🛡️ DEF: " << DEF << endl;
    cout << "⚡ AGI: " << AGI << endl;
    cout << "🔥 ENG: " << ENG << endl;
    cout << "😃 CHR: " << CHR << endl;
    cout << "============================\n" << endl;
}

int gameIntro()
{
    char choice = 'y';
    cout << "============== Introduction ==============\n";
    cout << "Welcome to The Xona Mother Ship, Agent #1.\n";
    cout << "You are the last surviving member of the organization.\n";
    cout << "Your mission is to decode diverse technology and add it to the fleet's database.\n";
    cout << "Are you ready??? y/n \n";
 
    if (choice = 'y')
    {
        AzureStar();
    }

    else 
    {
        cout << "Such a pity 😞" <<endl;
        cout << "You must die 🔥 " <<endl;
    }
    
    return 0;
}

int AzureStar()
{
    
}

void rollDice() 
{
    const int SIDES = 6;  // Number of sides
    srand(time(0));       
    int rollsLeft = 3; // Maximum of three rolls
    char repeat;

    
    while (repeat == 'y' && rollsLeft > 0);
 
    {
        // Roll dice
        int roll1 = (rand() % SIDES) + 1;
        int roll2 = (rand() % SIDES) + 1;
        int roll3 = (rand() % SIDES) + 1;
        int roll4 = (rand() % SIDES) + 1;
        int roll5 = (rand() % SIDES) + 1;
        int roll6 = (rand() % SIDES) + 1;

        // Output the dice rolls 
        cout << "Dice Rolls: " << roll1 << ", " << roll2 << ", " << roll3 << ", " 
             << roll4 << ", " << roll5 << ", " << roll6 << endl;
        
        // Update stats 
        updateStats(roll1, roll2, roll3, roll4, roll5, roll6);
        
        rollsLeft--;
        if (rollsLeft < 0) 
        {
            cout << "You have " << rollsLeft << " rolls left";

            

        } 

        else
        {

        }


        cout << "Would you like to roll again y/n";
        cin >> repeat;

    } 
}
    

void updateStats(int roll1, int roll2, int roll3, int roll4, int roll5, int roll6) 
{
    // Update stats by adding random dice rolls to stats values
    STR += roll1;
    INT += roll2;
    DEF += roll3;
    AGI += roll4;
    ENG += roll5;
    CHR += roll6;

    cout << "\n🎲 Stats updated!!! 🎲\n" << endl;
    StatusPage();  // Show updated stats
}

