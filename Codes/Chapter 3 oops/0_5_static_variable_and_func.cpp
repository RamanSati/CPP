// #include <iostream>
// using namespace std;

// class Employee
// {
//     int id;
//     static int count;

// public:
//     void setData(void)
//     {
//         cout << "Enter the id" << endl;
//         cin >> id;
//         count++;
//     }
//     void getData(void)
//     {
//         cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
//     }

//     static void getCount(void){
//         // cout<<id; // throws an error
//         cout<<"The value of count is "<<count<<endl;
//     }
// };

// // Count is the static data member of class Employee
// int Employee::count; // Default value is 0

// int main()
// {
//     Employee harry, rohan, lovish;
//     // harry.id = 1;
//     // harry.count=1; // cannot do this as id and count are private

//     harry.setData();
//     harry.getData();
//     Employee::getCount();

//     rohan.setData();
//     rohan.getData();
//     Employee::getCount();

//     lovish.setData();
//     lovish.getData();
//     Employee::getCount();

//     return 0;
// }
// Static Data Members in C++
// When a static data member is created, there is only a single copy of the data member which is shared between all
// the objects of the class. As we have discussed in our previous lecture that if the data members are not static
// then every object has an individual copy of the data member and it is not shared.

// Static Methods in C++
// When a static method is created, they become independent of any object and class. Static methods can only access
// static data members and static methods. Static methods can only be accessed using the scope resolution operator.
// An example program is shown below to demonstrate static data members and static methods in C++.
#include<iostream>
using namespace std;

class Employee{
       int id;
       static int count;
       public:
       void setdata(void){
        cout<<"enter the employee id "<<endl;
        cin>>id;
        count++;
       }
       void getdata(void){
        cout<<"the id of the employee is "<<id<<"and employee number is "<<count<<endl;
       }
       static void getCount(void){
        cout<<"the value of count is "<<count<<endl;
       }
};
int Employee::count;

int main(){
 Employee harry, rohan, lovish;
    // harry.id = 1;
    // harry.count=1; // cannot do this as id and count are private

    harry.setdata();
    harry.getdata();
    Employee::getCount();

    rohan.setdata();
    rohan.getdata();
    Employee::getCount();

    lovish.setdata();
    lovish.getdata();
    Employee::getCount();

return 0;
}