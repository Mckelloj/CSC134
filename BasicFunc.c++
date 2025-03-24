#include <iostream>

using namespace std;

void say_hi();
int add(int first, int seccond);
void print_number (int num);


int main() 
{
    void say_hi();

    cout <<"2 + 2 = " ;

    int num = add(2,2);

    print_number(num);



    return 0;
}

void say_hi()
{
    cout <<  " HI " << endl;
    int my_num = 99;
    cout << my_num << endl;
} 

int add(int first, int seccond)
{
    int answer = first + seccond;
    return answer;
}

void print_number (int num)
{
    cout << num << endl;
}