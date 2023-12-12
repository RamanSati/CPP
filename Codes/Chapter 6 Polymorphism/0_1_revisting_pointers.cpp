// Pointers are variables that are used to store the address. Pointers are created using “*”.

#include<iostream>
using namespace std;

int main(){
    // Basic Example
    int a = 4;
    int* ptr = &a;
    cout<<"The value of a is "<<*(ptr)<<endl;
    // New keyword
    float *p = new float(40.78);  //We created a float pointer “p” and dynamically created a float which has value “40.78” and assigned that value to pointer “p”
                                //And printed the value at the address of pointer “p”
    cout << "The value at address p is " << *(p) << endl;

    int *arr = new int[3];
    arr[0] = 10;
    *(arr+1) = 20;
    arr[2] = 30;
    delete[] arr; //delete” keyword before printing the values due to which the space used by an array gets free and we get the garbage value in return.
    cout << "The value of arr[0] is " << (arr[0]) << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;
  
    return 0;
}
