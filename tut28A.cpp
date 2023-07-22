#include <iostream>
using namespace std;
class Y;
class X
{
    int data;

public:
    void Indata(int val1)
    {
        data = val1;
    }
    friend void add(X, Y);
};

class Y
{
    int num;

public:
    void Indata(int val2)
    {
        num = val2;
    }
    friend void add(X, Y);
};

void add(X a1, Y b1)
{
    cout << "The sum of two private members is " << a1.data + b1.num << endl;
}

int main()
{
    X a;
    a.Indata(12);
    Y b;
    b.Indata(23);
    add(a, b);
    return 0;
}