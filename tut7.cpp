#include <iostream>
using namespace std;
int c = 40;
int main()
{
    //**************Build in data types****************
    // int a, b, c;
    // cout << "Enter the value of a " << endl;
    // cin >> a;

    // cout << "Enter the value of b " << endl;
    // cin >> b;

    // c = a + b;
    // cout << "The value of c is " << c << endl;
    // cout << "The value of global c is " << ::c << endl; //This is new feature

    //**********Float, Double and long Double literals****************
    //This is all new features
    // float i = 33.4;//By default isko double manenga
    // long double k = 784.54;
    // cout << "The size of 33.4 is " << sizeof(33.4) << endl;
    // cout << "The size of 33.4f is " << sizeof(33.4f) << endl;
    // cout << "The size of 33.4F is " << sizeof(33.4F) << endl;
    // cout << "The size of 784.54l is " << sizeof(784.54l) << endl;
    // cout << "The size of 784.54L is " << sizeof(784.54L) << endl;
    // cout<<"The value of i is "<<i<<". The value of k is "<<k<<endl;

    //**********Reference Variables****************
    // Rohan das --> rohu --> monty --> dangerous coder
    // int x = 544;
    // int &y = x; // This line is new feature.
    // cout << x << endl;
    // cout << y << endl;

    //**********TypeCasting****************
    int a = 45;
    float b = 48.4;
    // cout << "The types changes of a is " << (float)a << endl;
    // cout << "The types changes of a is " << float(a) << endl;

    //This is a new features

    // cout << "The types changes of b is " << (int)b << endl;
    // cout << "The types changes of b is " << int(b) << endl;

    // int c = (int)b;
    cout << "The Expression is " <<int(a + b) << endl;
    cout << "The Expression is " <<a + float(b) << endl;
    cout << "The Expression is " <<a + (int)b << endl;

    return 0;
}
