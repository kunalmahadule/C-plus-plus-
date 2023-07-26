// Code Example Constructor in Derived Class

#include <iostream>
using namespace std;
/*
Case1:
class B: public A{
    //Order of execution of constructor --> first A() then B()
};

Case2:
class A: public B,public C{
    // Order of excution of constructor -->first B(), second C() then A()
};

Case3:
class A:public B,virtual public C{
    // Order of excution of constructor -->first C(), second B() then A()
};
*/

class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "constructor Base1 is call " << endl;
    }
    void printdata1()
    {
        cout << "The value of data1 is " << data1 << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "constructor Base2 is call " << endl;
    }
    void printdata2()
    {
        cout << "The value of data2 is " << data2 << endl;
    }
};

class Derived : public Base1, public Base2
{
    int derived1;
    int derived2;

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout << "constructor Derived is call " << endl;
    }
    void printDerived()
    {
        cout << "The value of derived1 is " << derived1 << endl;
        cout << "The value of derived2 is " << derived2 << endl;
    }
};

int main()
{
    Derived Harry(1, 2, 3, 4);
    Harry.printdata1();
    Harry.printdata2();
    Harry.printDerived();
    return 0;
}