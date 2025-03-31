#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> inventory; // Player inventory


int main()
{
    int choice;
    bool running = true;

    while (running) 
    {
        cout << "========= Start ==========" << endl;
        cout << "\nChoose an option:" << endl;
        cout << "1. Start Game" << endl;
        cout << "2. View Inventory" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) 
        {
            case 1:
                gameIntro();
                break;
            case 2:
                viewInventory();
                break;
            case 3:
                cout << "Exiting game..." << endl;
                running = false;
                break;
            default:
                cout << "Invalid choice, please try again." << endl;
        }
    }

    return 0;

}



void viewInventory() 
{
    cout << "\n======= Inventory =======" << endl;
    if (inventory.empty()) 
    {
        cout << "Your inventory is empty!" << endl;
    } 
    
    else 
    {
        for (const string &item : inventory) 
        {
            cout << "- " << item << endl;
        }
    }
    cout << "========================\n" << endl;
}

int gameIntro() 
{
    char choice;
    cout << "============== Introduction ==============" << endl;
    cout << "Welcome to The Xona Mother Ship, Agent #1." << endl;
    cout << "You are the last surviving member of the organization." << endl;
    cout << "Your mission is to decode diverse technology and add it to the fleet's database." << endl;
    cout << "Are you ready??? y/n " << endl;
    cin >> choice;  

  

    /*else 
    {
        cout << "Such a pity 😞" << endl;
        cout << "You must die 🔥 " << endl;
    }*/
    return 0;
}

void AzureStar()
{
    cout << "============== Azure Star ==============" << endl;
    cout << "You have accepted the mission" << endl;
    cout << "Entry Gift is being distributed" << endl;
    cout << "You have gained:" << endl;
    cout << "- Cosmic Grade Space-Serum" << endl;
    cout << "- ??? Grade Tech Analyser" << endl;
    
    // Add items to inventory
    inventory.push_back("Cosmic Grade Space-Serum");
    inventory.push_back("??? Grade Tech Analyser");
    
    viewInventory(); // Show updated inventory
}
