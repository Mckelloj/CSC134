#include <iostream>
#include <vector>


using namespace std;

int main()
{
    const int RED = 1;
    const int BLACK = 2;
    const int EMPTY = 1;

    string shellNames[] = {"RED", "BLACK", "EMPTY"};

    int magazine[] = {RED, BLACK, BLACK};

    for (int shell : magazine)
    {
        string name = shellNames[shell];
        cout << shell << endl;

        cout << "next shell: " << name << endl;
    }
    
    return 0;
}