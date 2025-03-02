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
    


    string again;
    
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


        do 
        {
            
            cout << "Do you want to repeat? (yes/no): ";
            cin >> again;

            if (again == "yes") 
            {
                cout << "Repeating..." << endl;
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
            

            } 
            
                else if (again == "no") 
                {
                    cout << "Exiting..." << endl;
                } 
            
                    else 
                    {
                        cout << "Invalid input! Please type 'yes' or 'no'." << endl;
                    }
        }

        while (again == "yes");

     
     
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
        double tax = Price * 0.15;
        Total = Price + tax;
    }

    
    cout << "Thanks for ordering at HomeCafe" << endl;
    cout << "Here's your receipt" << endl;
    cout << "Full meal: $" << Price << endl;
    cout << "Your total is: $" << Total << endl;
    


}

void Question3()
{
    int actions;
    cout << "Welcome to arcadia!! Your adventure awaits" << endl;
    cout << "" << endl;
    cout << "You were walking home one evening and you witness a hooded figure casting a spell over your city" << endl;
    cout << "Do you confront him (1)" << endl;
    cout << "Or pretend not to notice and sneak away (2)" << endl;
    cout << "" << endl;

    cout << "Type 1 or 2: ";

    cin >> actions;

    if (actions == 1)
    {
        cout << " You jump out and confront the magician asking him why he would kill a whole city" << endl;
        cout << "The magician asks if you are willing to talk with him" << endl;
        cout << "" << endl;
        cout << "Sit down and talk (1)" << endl;
        cout << "Refuse and fight (2)" << endl;

        cout << " Type 1 or 2: ";

        cin >> actions;
         
        if (actions == 1)
        {
            cout << "You say yes and sit to talk" << endl;
            cout << " The magician removes the hood and turns out to be a beautiful Princess" << endl;
            cout << "After a lengthy convo you both realize that you were 'meant to be' I guess" << endl;
            cout << "You both decide to travel the world while learning new spells" << endl;

            cout << "VICTORY" << endl;
        }

        if (actions == 2)
        {
            cout << "You refuse to talk and lunge at the magician" << endl;
            cout << "He chants a spell and you turn to ash instantly" << endl;
            cout << "DEFEAT" << endl;
        }

    }

    if (actions == 2)
    {
        cout << "You pretend not to nitice and sneak away" << endl;
        cout << "A hour later as you're having lunch your city is erased from existence" << endl;
        cout << "" << endl;
        cout << "GAME OVER" << endl;
    }

}

void Question4()
{
    int answer, check;
    const int SIDES = 4;
    srand(time(0)); 

    int roll1 = (rand() % SIDES) + 1;
    int roll2 = (rand() % SIDES) + 1;
    int total = roll1 + roll2;

    cout << "Answer the equasion" << endl;
    cout <<  roll1 << " + " << roll2 << "="<< endl;
    cin >> answer;

    check = roll1 + roll2;

    if ( answer == check )
    {
        cout << "Your answer is correct" << endl;
    }

    else if ( answer != check )
    {
        cout << "Your answer is incorrect" << endl;
    }

    else
    {
        cout << "You didnt even try" << endl;
    }
}