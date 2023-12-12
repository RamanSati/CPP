#include<iostream>
using namespace std;

template <class T>
void swapp(T &c, T &d)
{
    T temp = c;
    c = d;
    d = temp;
}

template<class T1, class T2>
float funcAverage(T1 a, T2 b){
    float avg= (a+b)/2.0; 
    return avg;
}



// float funcAverage(int a, int b){ //instead of writing different functions all time we can make template so that 
                                    //we can use them accordingly
//     float avg= (a+b)/2.0; 
//     return avg;
// }
int main(){
    float a;
    int x=3,y=5;
    a = funcAverage(5,2);
    cout<<"The average of these numbers is"<<a<<endl;
    float b;
    b = funcAverage(5,2.8);
    cout<<"The average of these numbers is"<<b<<endl;
    swapp(x,y);
    cout<<x<<endl<<y<<endl;
    return 0;
 }
