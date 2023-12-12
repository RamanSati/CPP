#include<iostream>
using namespace std;

int main() {
    int num,temp=0,large=0;
    cout<<"enter the number\n";
    cin>>num;
    while(num>0){
        temp=num%10;
        if(temp>large){
            large=temp;
        }
        num=num/10;
    }
    cout<<"the largest number is:"<<large;
    return 0 ;
}