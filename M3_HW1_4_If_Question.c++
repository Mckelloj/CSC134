 // CSC 134 
// M3HW1 - Gold
// Joshua Mckellop
// 3/1/2025 

#include <iostream>

using namespace std;

void Question1();
void Question2();
void Question3();
void Question4();

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

    if (choice == 1)
        Question1();

    else if (choice == 2)
        Question2();

    else if (choice == 3)
        Question3();

    else if (choice == 4)
        Question4();
    else
        cout << "Please check my work and give me a good grade, Mr. Norris" << endl;

    return 0;
}

void Question1()
{
    string chatChoice, Suggest;
    cout << "Welcome to Chat++" << endl;
    cout << "Hello, I'm a simple chat bot" << endl;
    cout << "Do you like me? Type yes or no: ";
    cin >> chatChoice;

    if (chatChoice == "yes")
    {
        cout << "That's great! I'm sure we'll get along." << endl;
    }

    else if (chatChoice == "no")
    {
        cout << "Oh no!! What can I do to make you like me more? ";
        cin >> Suggest;
        cout << "" << endl;
        cout << "I'll try to improve! Thanks for your feedback: " << Suggest << endl;
        cout << "" << endl;
    }

    else
    {
        cout << "I didn't understand that, but I'm happy to chat!" << endl;
    }
}

void Question2()
{
    double Total;
    double Price;
    int InOrOut;
    
    cout << "Welcome to checkout" << endl;
    cout << "Please type your meal price: ";
    cin >> Price;

    cout << "Will you dine in? Type {1}" << endl;
    cout << "Or will you eat to go? Type {2}" << endl;
    cin >> InOrOut;

    if (InOrOut == 1)
    {
        cout << "Calculating Receipt" << endl;
    }

    if (InOrOut == 2)
    {
        cout << "Calculating Receipt" << endl;
        double tax = 0.15;
        Total = Price * tax;
    }

    
    cout << "Thanks for ordering at HomeCafe" << endl;
    cout << "Here's your receipt" << endl;
    cout << "Full meal: $" << Price << endl;
    cout << "Your total is: $" << Total << endl;
    


}

void Question3()
{
    cout << "Question 3 is not implemented yet." << endl;
}

void Question4()
{
    cout << "Question 4 is not implemented yet." << endl;
}