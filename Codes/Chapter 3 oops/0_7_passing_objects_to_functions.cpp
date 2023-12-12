// #include<iostream>
// using namespace std;

// class complex{
//     int a;
//     int b;

//     public: 
//         void setData(int v1, int v2){
//             a = v1;
//             b = v2;
//         }

//         void setDataBySum(complex o1, complex o2){
//             a = o1.a + o2.a;
//             b = o1.b + o2.b;
//         }

//         void printNumber(){
//             cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
//         }
// };

// int main(){
//     complex c1, c2, c3;
//     c1.setData(1, 2);
//     c1.printNumber();

//     c2.setData(3, 4);
//     c2.printNumber();

//     c3.setDataBySum(c1, c2);
//     c3.printNumber();
//     return 0;
// }
// We have defined a “setData” function. In this function the values are assigned to the variables “a” and “b”
// because they are private data members of the class and values cannot be assigned directly. We have defined a
// “setDataBySum” function. In this function, the values of two objects are added and then assigned to the variables
// “a” and “b”. We have defined a “printNumber” function. In this function, the values of the variable “a” and “b”
// are being printed.

#include<iostream>
using namespace std;
class complex{
int a,b;
public:
void getdata(int a1, int a2){
    a=a1;
    b=a2;
}
void sumdata( complex o1, complex o2){ // this sumdata fun means that we are taking two objects o1 and o2 from complex class
                                       
    a=o1.a + o2.a;
    b=o1.b + o2.b;

}
void printdata(){
    cout<<"your complex no is "<<a<<"+ "<<b<<"i"<<endl;
}

};

int main(){
complex c1,c2,c3;
c1.getdata( 2, 3);
c1.printdata();

c2.getdata( 5, 7);
c2.printdata();

c3.sumdata(c1,c2);
c3.printdata();

return 0;
}