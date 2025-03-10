#include <iostream>

using namespace std;
int main()
{
    int count = 1;
    while (count <= 5) 
    {
        cout << "Hello#" << count << endl;
        //count+=1;
        count ++;
    }
    cout << "Done" << count << endl;

    return 0;
}