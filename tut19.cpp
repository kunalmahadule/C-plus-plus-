//Function Overloading //overloading ka matlab kisi bhi ek chiz ko mulitple kamo ke liye use karna 
#include <iostream>
using namespace std;
int sum(float a, int b)
{
    cout << "Using function with 2 arguments" << endl;
    return a + b;
}
int sum(int a, int b, int c)
{
    cout << "Using function with 3 arguments" << endl;
    return a + b + c;
}

//Calculate the volume of cylinder
int volume(double r, int h)
{
    return (3.14, r * r * h);
}

//Calculate the volume of cube
int volume(int a)
{
    return (a * a * a);
}

//Rectangular box
int volume(int l, int b, int h)
{
    return (l * b * h);
}

int main()
{
    // cout << "The sum of 4 and 6 is " << sum(4, 6) << endl;
    // cout << "The sum of 4, 2 and 6 is " << sum(4, 2, 6) << endl;
    cout << "The volume of cylinder of radius 7 and height 8 is: " << volume(7, 8) << endl;
    cout << "The volume of cube of side 10 is: " << volume(10) << endl;
    cout << "The volume of cylinder 6, 7, 8 is: " << volume(6, 7, 8) << endl;

    return 0;
}
