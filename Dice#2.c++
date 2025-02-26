#include <iostream>
// for random
#include <cmath>    
#include <ctime>
using namespace std;

int main() 
{
    rollDice(); 
    askQuestion();
















    return 0;
} 


void rollDice() 
{
    
    const int SIDES = 3; // Number of sides on the dice
    int seed = time(0); // Use current time as a seed

    srand(seed); // Seed the random number generator

    int roll1 = (rand() % SIDES) + 1;
    int roll2 = (rand() % SIDES) + 1;
    int total = roll1 + roll2;

    cout << "You rolled " << roll1 << " + " << roll2 << " = " << total << endl;
}

void askQuestion() 
{
    cout << "A witch approaches you and asks if you want to be her apperentice." << endl;
}