 
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

void geometryCalculator() {
    const double PI = 3.14159;
    int choice;

    cout << "Geometry Calculator" << endl;
    cout << " 1. Calculate the Area of a Circle" << endl;
    cout << " 2. Calculate the Area of a Rectangle" << endl;
    cout << " 3. Calculate the Area of a Triangle" << endl;
    cout << " 4. Quit" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    cout << fixed << setprecision(5);  

    switch (choice) 
    {
        case 1: 
        {
            double radius;
            cout << "Enter the circle's radius: ";
            cin >> radius;

            if (radius < 0) 
            {
                cout << "The radius cannot be less than zero." << endl;
            } 
            
            else 
            {
                double area = PI * radius * radius;
                cout << "The area is " << area << endl;
            }
            break;
        }

        case 2: 
        {
            double length, width;
            cout << "Enter the rectangle's length: ";
            cin >> length;
            cout << "Enter the rectangle's width: ";
            cin >> width;

            if (length < 0 || width < 0) 
            {
                cout << "Length and width must be greater than 0." << endl;
            } 
            
            else 
            {
                double area = length * width;
                cout << "The area is " << area << endl;
            }
            break;
        }

        case 3: 
        {
            double base, height;
            cout << "Enter the triangle's base: ";
            cin >> base;
            cout << "Enter the triangle's height: ";
            cin >> height;

            if (base < 0 || height < 0) 
            {
                cout << "Only enter positive values for base and height." << endl;
            } 
            
            else 
            {
                double area = 0.5 * base * height;
                cout << "The area is " << area << endl;
            }
            break;
        }

        case 4:
            cout << "Exiting Geometry Calculator." << endl;
            break;

        default:
            cout << "Choices 1 through 4 are valid. Run the program again and select one of those." << endl;
    }
}

int main() 
{
    int Choice;
    string repeat = "Yes";

    while (repeat == "Yes" || repeat == "yes") 
    {
        cout << "============================================================================";
        cout << "You have some choices:\n";
        cout << "(1) Rainfall\n(2) Block Volume\n(3) Roman Converter\n(4)(5)(6) Coming Soon\n";
        cout << "Choose between the functions: ";
        cin >> Choice;

        switch (Choice) 
        {
            case 1: calculateAverageRainfall(); break;
            case 2: calculateBlockVolume(); break;
            case 3: displayRomanNumeral(); break;
            default: cout << "Invalid choice.\n"; break;
        }
        cout << "============================================================================";
        cout << "Do you want to repeat? Yes/No: ";
        cin >> repeat;
        cout << endl;
    }

    cout << "============================================================================";
    cout << "Thanks for using the program!" << endl;
    return 0;

}