#include <iostream>
#include <iomanip>

using namespace std;
 

int main() 
{
    string store = "Heaven's Quisine";
    string food = "Italian Salad";
    string farewell ="Thanks for dining at Heaven's Quisine";
    string farewell2 =     "Come again soon";
    string order;
    double foodPrice = 26.50;
    double subtotal, total, taxpercent =0.08, taxcost;

    cout << "Hello, welcome to " + store <<endl;
    
    //cout << "If you need the menu type: (options) "  <<endl;
    //cout << "Place an order: "<<endl;
    //std::cin >> order;

    //if (order = "options")
    
   
   
   
   
    cout << "you ordered " + food + "priced at: $" <<foodPrice <<endl;
    

    subtotal = foodPrice;
    taxcost = subtotal* taxpercent;
    total = subtotal + taxcost;


    cout << setprecision(2) <<fixed;
    cout << endl;
    cout << "Subtotal: $" << subtotal <<endl;
    cout << "Tax (8%): $" << taxcost <<endl;
    cout << "Total: $" << total <<endl;
    cout << endl;
    cout << endl;
    cout << farewell <<endl;
    cout << farewell2 <<endl;
     
    return 0;
}