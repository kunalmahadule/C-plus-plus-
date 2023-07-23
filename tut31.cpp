// Overloading Constructor

#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    Complex()
    {
        a = 0;
        b = 0;
    }

    Complex(int x, int y)
    {
        a = x;
        b = y;
    }

    Complex(int x)
    {
        a = x;
        b = 0;
    }

    void printnumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
int main()
{
    Complex c1;
    c1.printnumber();

    Complex c2(4, 6);
    c2.printnumber();

    Complex c3(5);
    c3.printnumber();
    return 0;
}
