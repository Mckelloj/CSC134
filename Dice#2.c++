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
    rollDice(); 
    return 0;
} 

void askQuestion() 
{
    char choice;
    cout << "A witch approaches you and asks if you want to be her apprentice." << endl;
    cout << "1. YES" << endl;
    cout << "2. NO"   << endl;
    cout << "3. IGNORE" << endl;
    cout << "            " << endl;
    cout << "Do you want to roll the dice to decide your fate? (y/n): ";
    cin >> choice;
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


