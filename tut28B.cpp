#include <iostream>
using namespace std;
class make2;
class make1
{
    int a;

public:
    void setvalue(int q1)
    {
        a = q1;
    }
    void display()
    {
        cout << a << endl;
    }
    friend void exchange(make1 &, make2 &);
};

class make2
{
    int b;

public:
    void setvalue(int q1)
    {
        b = q1;
    }
    void display()
    {
        cout << b << endl;
    }
    friend void exchange(make1 &, make2 &);
};

void exchange(make1 &w1, make2 &w2)
{
    int temp = w1.a;
    w1.a = w2.b;
    w2.b = temp;
}
int main()
{
    make1 x;
    x.setvalue(10);
    make2 y;
    y.setvalue(5);
    cout << "The values before exchange is " << endl;
    x.display();
    y.display();
    exchange(x, y);
    cout << "The values after exchange is " << endl;
    x.display();
    y.display();
    return 0;
}