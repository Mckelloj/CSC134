#include <iostream>

using namespace std;



void Gamelvl1()
{
    
}







int Homescreen()
{
    int choice; 
    cout << "|||||||||||||||||||||||||||WELCOME TO STARLIT|||||||||||||||||||||||||||||" << endl;
    cout << "(1) Enter Game" << endl;
    cout << "(2) Tutorial" << endl;
    cout << "(3) Exit " << endl;
    cout << "Make your choice: " << endl;
    cin >> choice;

    switch (choice)
    {
        case 1:   Gamelvl1();  break;
        case 2:   Gamelvl1();  break;
        case 3:   cout << "Thanks for playing " << endl;  break;
    }










    return 0;
}





