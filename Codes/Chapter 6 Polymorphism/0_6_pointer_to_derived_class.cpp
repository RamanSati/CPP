#include <iostream>
using namespace std;
class BaseClass
{
public:
    int var_base;
    void display()
    {
        cout << "Dispalying Base class variable var_base " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived;
    void display()
    {
        cout << "Dispalying Base class variable var_base " << var_base << endl;
        cout << "Dispalying Derived class variable var_derived " << var_derived << endl;
    }
};
int main()
{
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived; // Pointing base class pointer to derived class we can do this. but we cant
                                       // access the data members of derived class with the help of pointer of base class
                                       // untill the concept of virtual function.
    base_class_pointer->var_base = 34; // way to give value to the data member
    // base_class_pointer->var_derived= 134; // Will throw an error bcz we can't acccess the variable of derived class
    // from the pointer of base class.
    base_class_pointer->display();

    base_class_pointer->var_base = 3400;
    base_class_pointer->display();

    DerivedClass *derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_base = 9448;
    derived_class_pointer->var_derived = 98;
    derived_class_pointer->display();

    return 0;
}
