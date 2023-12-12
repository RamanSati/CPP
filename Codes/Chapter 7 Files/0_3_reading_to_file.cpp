#include<iostream>
#include<fstream>

using namespace std;

int main(){
    string st2;
    // Opening files using constructor and reading it
    ifstream in("samplefile2.txt"); // Read operation here we made object 'in' whcih will write into samplefile2.txt
    // in>>st2; // this will read only starting word that is 'Han' ,not complete para to solve this we will use getinline
    getline(in, st2); // we have to give two arg one is in and second is the string in which we want to take the line
    cout<<st2;

    return 0;
}
