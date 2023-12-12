// #include <iostream>
// using namespace std;

// class Employee
// {
//     int id;
//     int salary;

// public:
//     void setId(void)
//     {
//         salary = 122;
//         cout << "Enter the id of employee" << endl;
//         cin >> id;
//     }

//     void getId(void)
//     {
//         cout << "The id of this employee is " << id << endl;
//     }
// };

// int main()
// {
//     // Employee harry, rohan, lovish, shruti;
//     // harry.setId();
//     // harry.getId();
//     Employee fb[4];
//     for (int i = 0; i < 4; i++)
//     {
//         fb[i].setId();
//         fb[i].getId();
//     }

//     return 0;
// }
#include <iostream>
using namespace std;
class employee
{
    int id;
    int salary;

public:
    void getdata(void)
    {
        salary = 225;
        cout << "enter the id of the employee " << endl;
        cin >> id;
    }
    void displaydata(void)
    {
        cout << "the id of the employee is " << id << endl;
        cout << salary << "this is his salary " << endl;
    }
};
int main()
{
    employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb->getdata();
        fb->displaydata();
    }

    return 0;
}