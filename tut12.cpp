#include <iostream>
using namespace std;

int main()
{
    // What is a pointer?-->Data type which holds the address of other data type
    int a = 34;
    int *b;
    b = &a;

    //& -->(Address of) Operator
    // cout << "The address of a is " << &a << endl;
    // cout << "The address of a is " << b << endl;

    //*-->(Value at) Dereferance Operator
    // cout << "The address at address b is " << *b << endl;

    // Pointer to Pointer
    int **c = &b;
    cout << "The address of b is " << &b << endl;
    cout << "The address of b is " << c << endl;
    cout << "The value at address of c is " << *c << endl;
    cout << "The value at address value_at(value_at(c)) is " << **c << endl;

    // Triple pointer //made by me
    int ***k = &c;
    cout << "The value at ***k is: " << ***k << endl;
    return 0;
}