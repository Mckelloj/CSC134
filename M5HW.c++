 
// M3HW1 - Gold
// Joshua Mckellop
// 4/5/2025 

#include <iostream>
#include <iomanip> 
using namespace std;

void calculateAverageRainfall() 
{
    string month1, month2, month3;
    double rain1, rain2, rain3;

    
    cout << "Enter month: ";
    cin >> month1;
    cout << "Enter rainfall for " << month1 << ": ";
    cin >> rain1;

   
    cout << "Enter month: ";
    cin >> month2;
    cout << "Enter rainfall for " << month2 << ": ";
    cin >> rain2;

    
    cout << "Enter month: ";
    cin >> month3;
    cout << "Enter rainfall for " << month3 << ": ";
    cin >> rain3;

    // Calculation
    double average = (rain1 + rain2 + rain3) / 3.0;

    
    cout << fixed << setprecision(2);
    cout << "The average rainfall for " << month1 << ", " << month2 << ", and " << month3
         << " is " << average << " inches." << endl;
}

void calculateBlockVolume() 
{
    double width, length, height;

    // Input and validation
    do {
        cout << "Enter the width of the block: ";
        cin >> width;
        if (width <= 0) cout << "Width must be greater than 0. Try again.\n";
    } 
    while (width <= 0);

    do 
    {
        cout << "Enter the length of the block: ";
        cin >> length;
        if (length <= 0) cout << "Length must be greater than 0. Try again.\n";
    } 
    while (length <= 0);

    do {
        cout << "Enter the height of the block: ";
        cin >> height;
        if (height <= 0) cout << "Height must be greater than 0. Try again.\n";
    } 
    while (height <= 0);

    // Calculate volume
    double volume = width * length * height;

    // Output result
    cout << fixed << setprecision(2);
    cout << "The volume of the block is " << volume << " cubic units." << endl;
}

void displayRomanNumeral() 
{
    int number;

    cout << "Enter a number (1 - 10): ";
    cin >> number;

    // Input validation
    if (number < 1 || number > 10) 
    {
        cout << "Error: Number must be between 1 and 10." << endl;
        return;
    }

    // Display Roman numeral using switch
    cout << "The Roman for this number is " << number << " is ";
    switch (number) 
    {
        case 1:  cout << "I"; break;
        case 2:  cout << "II"; break;
        case 3:  cout << "III"; break;
        case 4:  cout << "IV"; break;
        case 5:  cout << "V"; break;
        case 6:  cout << "VI"; break;
        case 7:  cout << "VII"; break;
        case 8:  cout << "VIII"; break;
        case 9:  cout << "IX"; break;
        case 10: cout << "X"; break;
    }
    cout << "." << endl;
}


int main() 
{
    int Choice;
    cout << "You have some choices (1)Rainfall, (2)BlockVolume, (3)(4)(5)(6)" << endl;
    cout << "choose between the functions: " << endl;
    cin >> Choice;
    
    switch(Choice)
    {
        case 1:  calculateAverageRainfall(); break;
        case 2:  calculateBlockVolume(); break;
        case 3:  displayRomanNumeral(); break;
    }
    
    
    
    
   
    

    return 0;
}