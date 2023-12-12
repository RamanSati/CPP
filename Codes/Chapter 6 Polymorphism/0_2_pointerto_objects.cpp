//As discussed before pointers are used to store addresses of variables which have data types like int, float,
//double etc. But pointer can also store the address of an object of the class data type.
#include<iostream>
using namespace std;

class Complex{
    int real, imaginary;
    public:
        void getData(){
            cout<<"The real part is "<< real<<endl;
            cout<<"The imaginary part is "<< imaginary<<endl;
        }

        void setData(int a, int b){
            real = a;
            imaginary = b;
        }

};
int main(){
    // Complex c1;
    // Complex *ptr = &c1; this whole thing can be written out with the help of new keyword and dynamically creating a object
    Complex *ptr = new Complex;
    (*ptr).setData(1, 54); //is exactly same as
    // ptr->setData(1,6);
    // (*ptr).getData(); //is as good as 
    ptr->getData();

    // Array of objects 
    // Complex *ptr1 = new Complex[4];
    // ptr1->setData(12,35);
    // ptr1->setData(2,5);
    // ptr1->getData();
    // ptr1->getData();


    return 0;
}
