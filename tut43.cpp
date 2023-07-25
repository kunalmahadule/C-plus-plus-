// Ambiguity Resolution in Inheritance

#include <iostream>
using namespace std;

// Example 1
class Base1
{
public:
    void greet()
    {
        cout << "How are you?" << endl;
    }
};

class Base2
{
public:
    void greet()
    {
        cout << "Kaise ho?" << endl;
    }
};

class Derived : public Base1, public Base2
{
    int a;

public:
    void greet()
    {
        Base2::greet();
    }
};

// Example 2
class B
{
public:
    void say()
    {
        cout << "Hello World" << endl;
    }
};

class D : public B
{
    int a;
    // D`s new say() method will override base class`s say() method
public:
    void say()
    {
        cout << "Hello my beautiful public" << endl;
    }
};

int main()
{
    // Ambiguity 1
    //  Base1 obj1;
    //  obj1.greet();
    //  Base2 obj2;
    //  obj2.greet();

    // Derived obj3;
    // obj3.greet();

    // Ambiguity 2--->Ambiguity slove automatically
    // B b;
    // b.say();
    D d;
    d.say();

    return 0;
}