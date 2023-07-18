#include <iostream>
#include <iomanip> //This is a new header file.(Manipulators)
using namespace std;

int main()
{
    // int a = 22;
    // cout << "The value of a was " << a << endl;
    // a = 34;
    // cout << "The value of a is " << a << endl;

    // Constants in C++
    // const float a = 94.24;
    // cout << "The value of a was " << a << endl;
    // a = 3.24;
    // cout << "The value of a is " << a << endl;

    //Manipulators in C++ //setw() and endl are manipulator//This is new fecture
    // int a = 3, b = 343, c = 4367;
    // cout << "The value of a without setw is: " << a << endl;
    // cout << "The value of b without setw is: " << b << endl;
    // cout << "The value of c without setw is: " << c << endl;

    // cout << "The value of a is: " << setw(4) << a << endl;
    // cout << "The value of b is: " << setw(4) << b << endl;
    // cout << "The value of c is: " << setw(4) << c << endl;

    //Operator Precedence
    int a = 3;
    int b = 6;

    // int c = (a*5)+b;
    int c = ((((a * 5) + b) - 45) + 87);//operator precedence or accociativity ke help se solve kiya hai (Precendence/Associativity)

    return 0;
}