#include <iostream>
#include <cmath>    
#include <ctime>
#include <string>

using namespace std;

int StatusPage();
int gamePlay1();
void rollDice();

int STR = 10;
int INT = 10;
int DEF = 10;
int AGI = 10;
int ENG = 10;
int CHR = 10;

int main() 
{

}

int StatusPage()
{
    std::string stats;

    stats += STR;
    stats += INT;
    stats += DEF;
    stats += AGI;
    stats += ENG;
    stats += CHR;

 
    cout << stats  << endl;
}

int gamePlay1()
{

}

void rollDice() 
{
    const int SIDES = 6; // Number of sides on the dice
    srand(time(0)); // Seed the random number generator

    int roll1 = (rand() % SIDES) + 1;
    int roll2 = (rand() % SIDES) + 1;
    int roll3 = (rand() % SIDES) + 1;
    int roll4 = (rand() % SIDES) + 1;
    int roll5 = (rand() % SIDES) + 1;
    int roll6 = (rand() % SIDES) + 1;

    int total = roll1 + roll2;

    

}