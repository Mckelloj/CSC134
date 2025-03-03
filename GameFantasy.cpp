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
    
    
    char repeat;
    int choice;

    char repeat = 'y';

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
                cout << "Do you want to roll the dice again? (y/n): ";
                 
                break;

            case 3:

                cout << "Welcome to Arcadia." << endl;
                break;

            default:
                cout << "Invalid choice, please try again." << endl;
                
        }

        cout << "Do you want to start again? ";
        cin >> repeat;  // Take input from the user
    
    }
    StatusPage();
    gamePlay1();
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
    const int SIDES = 6;  // Number of sides
    srand(time(0));       

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

    cout << "Stats updated!!!" << endl;
    StatusPage();  // Show updated stats
}