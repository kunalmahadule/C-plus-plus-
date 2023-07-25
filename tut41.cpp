// Multiple Inheritance Example

#include <iostream>
using namespace std;
/*
Syntax for inheriting in multiple inheritance
class DerivedC:visiblity-mode base1, visiblity-mode base2
{
    class body of class "DerivedC"
}
*/
class Base1
{
protected:
    int Base1int;

public:
    void set_Base1int(int a)
    {
        Base1int = a;
    }
};

class Base2
{
protected:
    int Base2int;

public:
    void set_Base2int(int b)
    {
        Base2int = b;
    }
};

class Base3 // It is only example
{
protected:
    int Base3int;

public:
    void set_Base3int(int c)
    {
        Base3int = c;
    }
};

class Derived : public Base1, public Base2, public Base3
{
public:
    void show()
    {
        cout << "The value of Base1 is " << Base1int << endl;
        cout << "The value of Base2 is " << Base2int << endl;
        cout << "The value of Base3 is " << Base3int << endl;
        cout << "The sum of those values is " << Base1int + Base2int + Base3int << endl;
    }
};
/*
The inherited derived class will look something like this:
Data members:
            base1int ---> protected
            base2int ---> protected

Member functions:
            set_base1int() ---> public
            set_base2int() ---> public
            set_showt() ---> public
*/
int main()
{
    Derived kunal;
    kunal.set_Base1int(25);
    kunal.set_Base2int(5);
    kunal.set_Base3int(15);
    kunal.show();
    return 0;
}