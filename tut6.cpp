//There are two types of Header files
//1.System header fils: It comes with the compiler
#include <iostream> //This is system header file
//2.User define header files: It is written by the programmer
//#include "this.h" //--> This will produce an error if 'this.h' is no present in the current directory
using namespace std;

int main()
{
    int a = 4, b = 5;
    // std::cout<<"This is hello world program"; //This is new feature
    cout << "Operator in C++" << endl;
    cout << "Follwing are the types of Operators in C++" << endl;
    //Arithmetic Operator
    // cout << "The value of a + b is " << a + b << endl;
    // cout << "The value of a * b is " << a * b << endl;
    // cout << "The value of a - b is " << a - b << endl;
    // cout << "The value of a / b is " << a / b << endl;
    // cout << "The value of a % b is " << a % b << endl; (100%2 = 0)divide karne pe Remainder iska answer honga
    // cout << "The value of a++ is " << a++ << endl;
    // cout << "The value of a-- is " << a-- << endl;
    // cout << "The value of ++a is " << ++a << endl;
    // cout << "The value of --a is " << --a << endl;
    // cout << endl;

    //Assignment Operator -->used to assign values to variable
    // int a=3,b=9;
    // char c ='h';

    //Comparison Operator(also called Relational Operator)Output always 0 & 1.
    // cout<<"Following are the Comparison Operator in C++"<<endl;
    // cout << "The value of a == b is " << (a == b) << endl;
    // cout << "The value of a != b is " << (a != b) << endl;
    // cout << "The value of a <= b is " << (a <= b) << endl;
    // cout << "The value of a >= b is " << (a >= b) << endl;
    // cout << "The value of a < b is " << (a < b) << endl;
    // cout << "The value of a > b is " << (a > b) << endl;

    //Logical Operator(Output always 0 & 1.)
    cout << "Following are the Logical Operator in C++" << endl;
    cout << "The value of this logical and operator is ((a == b) && (a > b)) is " << ((a == b) && (a > b)) << endl;
    cout << "The value of this logical or operator is ((a == b) || (a > b)) is " << ((a == b) || (a > b)) << endl;
    cout << "The value of this logical not operator is (!(a > b)) is " << (!(a > b)) << endl;


    return 0;
}
