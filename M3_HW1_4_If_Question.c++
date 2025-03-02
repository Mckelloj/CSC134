 // CSC 134 
// M3HW1 - Gold
// Joshua Mckellop
// 3/1/2025 

#include <iostream>

using namespace std;

int main()
{
    int choice;
    
    cout << "Welcome to my work" << endl;
    cout << "                     " << endl;
    cout << "Choose the question" << endl;
    cout << "                     " << endl;
    cout << "Question 1 (Type [1])" << endl;
    cout << "Question 2 (Type [2])" << endl;
    cout << "Question 3 (Type [3])" << endl;
    cout << "Question 4 (Type [4])" << endl;
    cin >> choice;


    if (choice == 1 )
    {
        Question1();
    }

        else if (choice == 2 )
        {
            Question2();
        }

        else if (choice == 3 )
            {
                Question3();
            }

            else if (choice == 4 )
                {
                   Question4();
                }

                else 
                {
                    cout << "Please check my work and give me a good grade Mr Norris" << endl;
                }
}

void Question1()
{
    string chatChoice, Suggest;
    cout << "Welcome to Chat++" << endl;

    cout << "Hello, I'm a simple chat bot" << endl;
    cout << "Do you like me? Type yes or no: " << endl;
    cin >> chatChoice;

    if ( chatChoice == "yes" )
    {
        cout << "That's great! I'm sure we'll get along." << endl;
    }

    if ( chatChoice == "no" )
    {
        cout << "Oh no!! What can I do to make you like me more." << endl;
        cin >> Suggest;

        cout << "Oh no!! What can I do to make you like me more." << endl;

    }

    else
    {
        cout << "That's great! I'm sure we'll get along." << endl;
    }

}

void Question2()
{

}

void Question3()
{

}

void Question4()
{
    
}