#include <iostream>
// for random
#include <cmath>    
#include <ctime>
using namespace std;


void askQuestion();
void rollDice();

int main() 
{
    
    askQuestion();
     
    return 0;
} 

void askQuestion() 
{
    int choice;
    cout << "A Mage approaches you and asks if you want to be her apprentice." << endl;
    cout << "1. YES" << endl;
    cout << "2. NO"   << endl;
    cout << "3. IGNORE" << endl;
    cout << "Enter 1,2 or 3: ";
    cin >> choice;

    
    
    if (choice == 1)
    
    {
        cout << "The witch is happy and she takes you to her tower to choose your speciality." << endl;
        cout << "1. Elemental Mage" << endl;
        cout << "2. Enchanter" << endl;
        cout << "3. Alchemist" << endl;
        cout << "4. Healer" << endl;
        cout << "5. Physical Mage" << endl;
        cout << "" << endl;
        cout << "Type 1,2 3, 4 or 5" << endl;
        cout << "Type 6 if you wish to have the dice choose for you" << endl;
        cin >> choice;



        if (choice ==1)
        {
            cout << "" << endl;
        }

            else if (choice ==2)
            {
                cout << "" << endl;
            }

                else if (choice ==3)
                {
                    cout << "" << endl;
                }

                    else if (choice ==4)
                    {
                        cout << "" << endl;
                    }

                        else if (choice ==5)
                        {
                            cout << "" << endl;
                        }

                        else if (choice ==6)
                        {
                            cout << "" << endl;
                            rollDice();
                        }
                            else if (choice ==741236985)
                            {
                                cout << "" << endl;
                            }
                                else
                                {
                                    cout << "" << endl;
                                    cout << "Trying to beat the system are we??? " << endl;
                                    cout << "" << endl;
                                    cout << "Class unlocked Garbage Collector" << endl;
                                    cout << "" << endl;
                                }
    }

        else if (choice ==2)
    
        {
            cout << "The witch becomes angry and she curses you to eternal loneliness." << endl;
            
        }

            else if(choice==3)
            {
                cout << "The Mage becomes silent and observes as you walk away with a sneer on her face." << endl;
            }


    
    

      
        
}

void rollDice() 
{
    const int SIDES = 3; // Number of sides on the dice
    srand(time(0)); // Seed the random number generator

    int roll1 = (rand() % SIDES) + 1;
    int roll2 = (rand() % SIDES) + 1;
    int total = roll1 + roll2;

    cout << "You rolled " << roll1 << " & " << roll2 << " for a total of " << total << endl;

}


