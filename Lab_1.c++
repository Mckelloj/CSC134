#include <iostream>
#include <vector>


using namespace std;

int main()
{
    const int RED = 0;
    const int BLACK = 1;
    const int EMPTY = 2;

    string shellNames[] = {"RED", "BLACK", "EMPTY"};

    int magazine[] = {RED, BLACK, BLACK, RED};

    for (int shell : magazine)
    {
        string name = shellNames[shell];
        cout << shell << endl;

        cout << "next shell: " << name << endl;
    }
    
    vector<int> mag;

    mag.push_back(RED);
    mag.push_back(BLACK);
    mag.push_back(BLACK);

    for (int shell : mag)
    {
        string name = shellNames[shell];
        cout << "next shell: " << name << endl;
    }

























    return 0;
}