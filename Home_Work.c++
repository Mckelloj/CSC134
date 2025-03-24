#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
 

void calculateAverageRainfall() 
{
    std::string month1, month2, month3;
    double rain1, rain2, rain3;

    // Get user input
    std::cout << "Enter month: ";
    std::cin >> month1;
    std::cout << "Enter rainfall for " << month1 << ": ";
    std::cin >> rain1;

    std::cout << "Enter month: ";
    std::cin >> month2;
    std::cout << "Enter rainfall for " << month2 << ": ";
    std::cin >> rain2;

    std::cout << "Enter month: ";
    std::cin >> month3;
    std::cout << "Enter rainfall for " << month3 << ": ";
    std::cin >> rain3;

    double averageRainfall = (rain1 + rain2 + rain3) / 3.0;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "The average rainfall for " << month1 << ", " << month2 << ", and " << month3
              << " is " << averageRainfall << " inches." << std::endl;
}

void calculateVolume()
{
    double Height, Width, Length;

    std::cout << "Enter Height: ";
    std::cin >> Height; 

    std::cout << "Enter Width: ";
    std::cin >> Width;

    std::cout << "Enter Length: ";
    std::cin >> Length;
}

int main() 
{
    calculateAverageRainfall();  
    return 0;
}