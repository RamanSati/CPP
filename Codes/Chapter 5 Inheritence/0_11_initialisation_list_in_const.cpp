/*
The initialization list in constructors is another concept of initializing the data members of the class./*
Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}
*/
#include<iostream>
using namespace std;
class Test
{
    int a;
    int b;

public:
    //Test(int i, int j) : a(i), b(j) //A constructor is written first and then the initializations section is written
    //Test(int i, int j) : a(i), b(j+i) //In the initialization section, the data members are initialized
     Test(int i, int j) : b(j), a(i+b)
    {
        cout << "Constructor executed"<<endl;
        cout << "Value of a is "<<a<<endl;
        cout << "Value of b is "<<b<<endl;
    }
};

int main()
{
    Test t(4, 6);

    return 0;
}
