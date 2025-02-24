#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

int main()
{
   const int SIDES = 100;
   int seed = 42;

   srand(seed);

   int roll;

// roll the dice

   roll = ( (rand() % SIDES)+1 );
   cout << roll << endl;

   roll = ( (rand() & SIDES)+1 );
   cout << roll << endl;
}