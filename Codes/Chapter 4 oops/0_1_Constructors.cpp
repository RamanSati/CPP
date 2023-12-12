#include <iostream>
using namespace std;

/* Constructors are used to initialize the objects of its class. Constructors are
 automatically invoked whenever an object is created   */

class Complex
{
    int a, b;

public:
    // Creating a Constructor
    // Constructor is a special member function with the same name as of the class.
    // It is used to initialize the objects of its class
    // It is automatically invoked whenever an object is created

    Complex(void); // Constructor declaration

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(void) // ----> This is a default constructor as it takes no parameters
{                       /* default constructor is defined which will assign the values to the data members “a” and
                           “b”. The main things to note here are that whenever a new object will be created this
                           constructor will run and if the parameters are not passed to the constructor it is called
                            a default constructor.*/
    a = 10;
    b = 0;
    // cout<<"Hello world";
}
int main()
{
    Complex c1, c2, c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();

    return 0;
}