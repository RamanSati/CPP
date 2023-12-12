#include<iostream>
using namespace std;

int main(){
 // Array Example
    int marks[] = {23, 45, 56, 89};
    int mathMarks[4];

    mathMarks[0] = 2278;
    mathMarks[1] = 738;
    mathMarks[2] = 378;
    mathMarks[3] = 578;

    cout<<"These are math marks"<<endl;
    cout<<mathMarks[0]<<endl;
    cout<<mathMarks[1]<<endl;
    cout<<mathMarks[2]<<endl;
    cout<<mathMarks[3]<<endl;

    // You can change the value of an array
    marks[2] = 455;
    cout<<"These are marks"<<endl;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    for (int i = 0; i < 4; i++)
    {
        cout<<"the value of marks "<<i<<" is "<<marks[i]<<endl;
    }
    cout<<endl;
    // Pointer to array 
    int* ptr= marks;
    cout<<"the marks of *ptr is "<<*ptr<<endl;
    cout<<"the marks of *ptr+1 is "<<*(ptr+1)<<endl;
    cout<<"the marks of *ptr+2 is "<<*(ptr+2)<<endl;
    cout<<"the marks of *ptr+3 is "<<*(ptr+3)<<endl;
    
return 0;
}