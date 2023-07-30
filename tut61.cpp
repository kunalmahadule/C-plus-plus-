// Read + Write in One Program

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // connecting our file with hout stream
    ofstream hout("sample60A.txt");

    // Creating a name string and filling it with the string entered by the user
    string name;
    cout << "Enter your name";
    cin >> name;

    // Writing a string to the file
    hout << name + " is my name";
    hout.close();

    ifstream hin("sample60A.txt");
    string content;
    // hin >> content;
    getline(hin, content);
    cout << "The content of this file is: " << content;
    hin.close();
    return 0;
}

// getline(in, st2);