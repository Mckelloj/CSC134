#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

int main()
{
   const int SIDES =5;
   int seed = 923456789;

   srand(seed);

   int roll1, roll2;
   int total;

// roll the dice

   roll1 = ( (rand() % SIDES)+5 );
   cout << roll1 << endl;

   roll2 = ( (rand() % SIDES)+5);
   cout << roll2 << endl;

   total = roll1 + roll2;

   
   cout << "You rolled " << roll1 << " & " << roll2 << " The total is: " << total << endl;
}