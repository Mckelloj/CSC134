#include <iostream>

using namespace std;

// beginning of the main() method
int main() 
{
  // declare the variable we need
  string 
  int choice;
   
  int str = 10, agi = 10, def = 10, mana = 10;

  string status = "";
  
  const int YES = 1;
  const int NO = 2;
  const int IGNORE = 3;

  //Introduction

  cout << "Welcome to Arcadia" << endl;
  cout << "Your choice adventure awaits." << endl;
  cout << "Type (Stat) at any time to chect your status window" << endl;
 
  cout << "Lets Begin" << endl;



  // ask the question

  cout << "A witch approaches you and asks if you want to be her apperentice." << endl;
  cout << "1. YES" << endl;
  cout << "2. NO"   << endl;
  cout << "3. IGNORE" << endl;
  cout << "Type 1,2, or 3: "; 
  cin >> choice;

  
  // using if, make a decision based on the user's choice

  if (YES == choice) 
  {
  	cout << "You say yes" << endl;
    cout << "The witch takes you to her magical tower and asks you to choose your speciality. " << endl;
    

    cout << "   Options" << endl;
    cout << "1. Elementalist" << endl;
    cout << "2. VoidKeeper"   << endl;
    cout << "3. Enchanter" << endl;
    cout << "Type 1,2, or 3: "; 
    cin >> choice;
    
    if ( choice == 1)  
    {
      cout << "Congratulations you have chosen the elementalist path" << endl;
    }

    else if ( choice == 2)  
    {
      cout << "Congratulations you have chosen the Spiritualist path" << endl;
    }

    else if ( choice == 3)  
    {
      cout << "Congratulations you have chosen the Enchanter's path" << endl;
    }

    else if ( choice == 741236985)  
    {
      cout << "Congratulations you have chosen the Unlocked the Cosmic path" << endl;
    }

    else
    {
      cout << "Trying to be smart are we ??" << endl;
    }
    
  }

    else if (NO == choice) 
    {
  	  cout << "You say no and begin to walk away" << endl;
      cout << "She hypnotises you and takes you to her dungeon where she torchures you repeatedly." << endl;
    }

      else if (IGNORE == choice) 
      {
        cout << "She curses you to feel constantly hungry, but you faint for an hour after every mouthful." << endl;
        cout << "1. Apologise" << endl;
        cout << "2. Attack her with your hunting knife"   << endl;
        cout << "3. Blackmail her into removing the curse" << endl;
        cout << "Type 1,2, or 3: "; 
        cin >> choice;
      }
        
        else 
        {
  	      cout << "I'm sorry, that is not a valid choice." << endl;
        }
         


  // finish up
  cout << "Thanks for playing!" << endl; // this runs no matter what they choose
  return 0; // exit without error
} // end of the main() method