// Agar visiblity mode private kar diya to directly hum base class ke members ko access nahi kar payenge main() me isliye hamko base class ke members ko derived class ke functions me call karna padhenga tab hum unhe access kar payenge.

#include <iostream>
using namespace std;
class Base
{
    int data1;

public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};

void Base::setdata()
{
    data1 = 10;
    data2 = 20;
}
int Base::getdata1()
{
    return data1;
}
int Base::getdata2()
{
    return data2;
}
class Derived : private Base // Class is being derived privatally
{
public:
    int data3;
    void process();
    void display();
};
void Derived::process()
{
    setdata();
    data3 = data2 * getdata1();
}
void Derived::display()
{
    cout << "The value of data1 is " << getdata1() << endl;
    cout << "The value of data2 is " << data2 << endl;
    cout << "The value of data3 is " << data3 << endl;
}
int main()
{
    Derived Oak;
    // Oak.setdata();//Not access directly since visiblity mode of Derived class is private
    Oak.process();
    Oak.display();
    return 0;
}