#include <iostream>
#include <fstream>
using namespace std;
/*
The useful classes for working with files in C++ are:
1. fstreambase
2. ifstream---> derived from fstreambase
3. ofstream---> derived from fstreambase
*/
// In order work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file:
// 1. Using the constructor
// 2. Using the member function open() of the class
int main()
{
    string st = "Code With Harry is a nice Channel";
    string st2;

    // Opening files using constructor and writing it
    ofstream out("sample60A.txt"); // Write Operation
    out << st;
    out.close(); //-->my responsebility to close them  

    // Opening files using constructor and reading it
    ifstream in("sample60B.txt"); // Read Operation
    // in >> st2;-->only 1st word are print
    // getline is a predefine function in the header file
    getline(in, st2); //--> All word are read
    cout << st2;
    in.close();//-->my responsebility to close them 
    return 0;
}
