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

void StatusPage();   // Status page function
int gamePlay1();     // Function for gameplay
void rollDice();     // Dice rolling function
void updateStats(int roll1, int roll2, int roll3, int roll4, int roll5, int roll6); // Update stats 

int main() 
{
    StatusPage();
    gamePlay1();
    
    char repeat;

    while (repeat == 'y') 
    {
       
        cout << "Choose an option:"  << endl;
        cout << "1. Check Status" << endl;
        cout << "2. Roll Dice" << endl;
        cout << "3. Exit" << endl;

        int choice;
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
                cout << "Exiting the game." << endl;
                break;

            default:
                cout << "Invalid choice, please try again." << endl;
        }

        cout << "Do you want to repeat? Enter y/n: ";
        cin >> repeat;
    }

    if (repeat == 'n') 
    {
        cout << "Game over" << endl;
    }

    return 0;
}

void StatusPage()
{
    // Use stringstream or std::to_string to append integers to string
    string stats;
    stats += "STR: " + to_string(STR) + "\n";
    stats += "INT: " + to_string(INT) + "\n";
    stats += "DEF: " + to_string(DEF) + "\n";
    stats += "AGI: " + to_string(AGI) + "\n";
    stats += "ENG: " + to_string(ENG) + "\n";
    stats += "CHR: " + to_string(CHR) + "\n";

    // Display the stats
    cout << stats << endl;
}

int gamePlay1()
{
    // Placeholder for future gameplay code
    return 0;
}

void rollDice() 
{
    const int SIDES = 6;  // Number of sides on the dice
    srand(time(0));       // Seed the random number generator

    // Roll six dice
    int roll1 = (rand() % SIDES) + 1;
    int roll2 = (rand() % SIDES) + 1;
    int roll3 = (rand() % SIDES) + 1;
    int roll4 = (rand() % SIDES) + 1;
    int roll5 = (rand() % SIDES) + 1;
    int roll6 = (rand() % SIDES) + 1;


    // Output the dice rolls and total
    cout << "Dice Rolls: " << roll1 << ", " << roll2 << ", " << roll3 << ", " 
         << roll4 << ", " << roll5 << ", " << roll6 << endl;
    

    // Update stats 
    updateStats(roll1, roll2, roll3, roll4, roll5, roll6);
}

void updateStats(int roll1, int roll2, int roll3, int roll4, int roll5, int roll6) 
{
    // Update stats by adding random dice rolls to stats values
    // For example: STR will increase by roll1, INT by roll2, etc.

    STR += roll1;
    INT += roll2;
    DEF += roll3;
    AGI += roll4;
    ENG += roll5;
    CHR += roll6;

    cout << "Stats updated!!!" << endl;
    StatusPage();  // Show updated stats
}