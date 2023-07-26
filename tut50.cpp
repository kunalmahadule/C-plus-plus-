// Revisiting Pointers new and delete keywords in C++

#include <iostream>
using namespace std;

int main()
{
    // Basic Example
    int a = 5;
    int *ptr = &a;
    *ptr = 999;
    cout << "The value of a is " << *ptr << endl;

    // new Operator
    int *p = new int(4);
    cout << "The value at address p is " << *p << endl;
    float *pf = new float(40.07);
    cout << "The value at address pf is " << *pf << endl;

    int *arr = new int[3];
    arr[0] = 10;
    // arr[1] = 20;
    *(arr + 1) = 20;
    arr[2] = 30;
    delete[] arr; //--->Dynamically array ne jo memory consume ke thi usko free kar diya hum ne
    cout << "The value at address arr[0] is " << arr[0] << endl;
    cout << "The value at address arr[1] is " << arr[1] << endl;
    cout << "The value at address arr[2] is " << arr[2] << endl;

    // delete Operator

    return 0;
}