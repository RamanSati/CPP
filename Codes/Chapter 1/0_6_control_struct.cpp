#include<iostream>
using namespace std;
int main(){
    int age ;
    cout<<"enter your age:"<<endl;
    cin>>age;
    // if(age>18){
    //     cout<<"you are eligible to vote"<<endl;
    //     }
    // else if (age==18){
    //     cout<<"you can apply for voter id"<<endl;
    //     }
    // else{
    //     cout<<"you cant vote"<<endl;
    // }
    // 2. Selection control structure: Switch Case statements
    switch (age)
    {
    case 18: 
        cout<<"You are 18"<<endl;
        break;
    case 22: 
        cout<<"You are 22"<<endl;
        break;
    case 2: 
        cout<<"You are 2"<<endl;
        break;

    default:
    cout<<"No special cases"<<endl;
        break;
        }

    cout<<"Done with switch case";
      
    return 0;
}
