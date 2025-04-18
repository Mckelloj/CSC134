#include <iostream>
using namespace std;

// Function for the tutorial screen
void Tutorial() 
{
    cout << "Welcome to the tutorial!" << endl;
    // Add tutorial details here
}

// Function for level 1 of the game
void Gamelvl1() 
{
    int choice;

    cout << "You wake up you head buzzing with pain" << endl;
    cout << "On your bed side table under the dim lamp lies a note" << endl;
    cout << "Do you: " << endl;
    cout << "(1) Pick up the note" << endl;
    cout << "(2) Ignore it" << endl;
    cout << " " << endl;
    cout << "Make your choice: ";
    cin >> choice;

        switch (choice) 
        {
            case 1:  
            void note();
                break;

            case 2:   
                Tutorial();  
                break;

            case 3:   

            cout << "Make your choice: ";

                 
            default:
                cout << "Invalid choice, please try again." << endl;
        }
    
}







void note()
{
    cout << "You wake up you head buzzing with pain" << endl;
    cout << "On your bed side table under the dim lamp lies a note" << endl;
    cout << "Do you: " << endl;
    cout << "(1) Pick up the note" << endl;
    cout << "(2) Ignore it" << endl;
    cout << " " << endl;
    cout << "Make your choice: ";

}















int Homescreen() 
{
    int choice;
    while (true) 
    {
        cout << "|||||||||||||||||||||||||||WELCOME TO STARLIT|||||||||||||||||||||||||||||" << endl;
        cout << "(1) Enter Game" << endl;
        cout << "(2) Tutorial" << endl;
        cout << "(3) Exit " << endl;
        cout << "Make your choice: ";
        cin >> choice;

        switch (choice) 
        {
            case 1:   
                Gamelvl1();  
                break;
            case 2:   
                Tutorial();  
                break;
            case 3:   
                cout << "Thanks for playing!" << endl;  
                return 0;  
            default:
                cout << "Invalid choice, please try again." << endl;
        }
    }
}



















int main() 
{
    Homescreen();  // Start the game from the home screen
    return 0;
}