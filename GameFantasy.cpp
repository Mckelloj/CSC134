#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> inventory; // Player inventory

void viewInventory();
void useItem();
void AzureStar();
int gameIntro();

int main() {
    int choice;
    bool running = true;
    
    while (running) {
        cout << "\nChoose an option:" << endl;
        cout << "1. Start Game" << endl;
        cout << "2. View Inventory" << endl;
        cout << "3. Use Item" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                gameIntro();
                break;
            case 2:
                viewInventory();
                break;
            case 3:
                useItem();
                break;
            case 4:
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
        for (size_t i = 0; i < inventory.size(); ++i) 
        
        {
            cout << i + 1 << ". " << inventory[i] << endl;
        }
    }
    cout << "========================\n" << endl;
}

void useItem() 
{
    if (inventory.empty()) 
    {
        cout << "Your inventory is empty!" << endl;
        return;
    }
    
    viewInventory();
    int choice;
    cout << "Enter the number of the item you want to use (or 0 to cancel): ";
    cin >> choice;
    
    if (choice > 0 && choice <= inventory.size()) 
    {
        string item = inventory[choice - 1];
        cout << "You used " << item << "!" << endl;
        
        if (item == "Cosmic Grade Space-Serum") 
        {
            cout << "Your energy has been restored!" << endl;
        } 
        
        else if (item == "??? Grade Tech Analyser") 
        {
            cout << "You analyze an unknown technology!" << endl;
        }
        
        inventory.erase(inventory.begin() + (choice - 1));
    } 
    
    else if (choice == 0) 
    {
        cout << "Cancelled item use." << endl;
    }
    
    else 
    {
        cout << "Invalid choice." << endl;
    }
}

int gameIntro() {
    char choice;
    cout << "============== Introduction ==============" << endl;
    cout << "Welcome to The Xona Mother Ship, Agent #1." << endl;
    cout << "You are the last surviving member of the organization." << endl;
    cout << "Your mission is to decode diverse technology and add it to the fleet's database." << endl;
    cout << "Are you ready??? y/n " << endl;
    cin >> choice;  

    if (choice == 'y') {
        AzureStar();
    } else {
        cout << "Such a pity 😞" << endl;
        cout << "You must die 🔥 " << endl;
    }
    return 0;
}

void AzureStar() {
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
