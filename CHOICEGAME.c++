#include <iostream>
using namespace std;

// beginning of the main() method
int main() {
  // declare the variable we need
  int choice; 

  const int YES = 1;
  const int NO = 2;
  const int IGNORE = 3;



  // ask the question
  cout << "A witch approaches you and asks if you want to be her apperentice." << endl;
  cout << "1. YES" << endl;
  cout << "2. NO"   << endl;
  cout << "3. IGNORE" << endl;
  cout << "Type 1,2, or 3: "; 
  cin >> choice;

  // using if, make a decision based on the user's choice

  if (YES == choice) {
  	cout << "You say yes" << endl;
    cout << "Sadly, you lose. " << endl;
  }
  else if (NO == choice) {
  	cout << "You say no and begin to walk away" << endl;
    cout << "You live to fight another day." << endl;
  }
  else if (IGNORE == choice) {
    cout << "You use a potion." << endl;
    cout << "More here later..." << endl;
  }
  else {
  	cout << "I'm sorry, that is not a valid choice." << endl;
  }
  // finish up
  cout << "Thanks for playing!" << endl; // this runs no matter what they choose
  return 0; // exit without error
} // end of the main() method