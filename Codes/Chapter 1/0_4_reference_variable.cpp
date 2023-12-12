#include<iostream>
using namespace std;
int c = 45; //this is global variable

int main(){
// int a,b,c;
// float d= 5.36;
// long double p = 93.25;
// cout<<"enter the value of a:"<<endl;
// cin>>a;
// cout<<"enter the value of b:"<<endl;
// cin>>b;
// c = a+ b ;
// cout<<"the sum is :"<<c<<endl;
// cout<<"the c gloabal is "<<::c;
// cout<<"the float is :"<<d<<endl<<"long double is : "<<p;
 // *************Reference Variables**************** 
    // Rohan Das----> Monty -----> Rohu ------> Dangerous Coder
    // float x = 455;
    // float & y = x;
    // cout<<x<<endl;
    // cout<<y<<endl;

    // *************Typecasting**************** 
    int a = 45;   
    float b = 45.46;
    cout<<"The value of a is "<<(float)a<<endl;
    cout<<"The value of a is "<<float(a)<<endl;

    cout<<"The value of b is "<<(int)b<<endl;
    cout<<"The value of b is "<<int(b)<<endl;
     cout<<"The value of b is "<<(int)b<<endl;
    cout<<"The value of b is "<<int(b)<<endl;
    int c = int(b);

    cout<<"The expression is "<<a + b<<endl;
    cout<<"The expression is "<<a + int(b)<<endl;
    cout<<"The expression is "<<a + (int)b<<endl;

return 0;
}