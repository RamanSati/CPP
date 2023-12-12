/*
File I/O in C++: Reading and Writing Files
These are some useful classes for working with files in C++

* fstreambase -> this is a class we get from #include<fstream>
* ifstream --> derived from fstreambase
* ofstream --> derived from fstreambase

In order to work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file:

Using the constructor
Using the member function open() of the class
*/
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string st = " Han to Raman bhai Ki Google me IT apprenticeship lag gayi hai "; // we created a string 
    
    // Opening files using constructor and writing it
    ofstream out("samplefile1.txt"); // Write operation.Objet out of ofstream is created which is used to pass the
                                     //file
    
    out << st;         // using the extraction operator to write stuff in the file fed to the object.
    return 0;
}
