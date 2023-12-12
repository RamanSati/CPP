/*a short overview of how templates work with multiple parameters, you can think of it as a function where you
have that power to pass different parameters of the same or different data types. A simple template with two
parameters would look something like this. The only effort it demands is the declaration of parameters.

*/
/*
template<class T1, class T2>
class nameOfClass{
    //body
}
*/ 

#include<iostream>
using namespace std;
 
template<class T1, class T2>
class myClass{
    public:
        T1 data1;
        T2 data2;
        myClass(T1 a,T2 b){
            data1 = a;
            data2 = b;
        }
    void display(){
        cout<<this->data1<<" "<<this->data2;
    }
};


 
int main(){
    myClass<int, char> obj(1, 'c');
    obj.display();

}
