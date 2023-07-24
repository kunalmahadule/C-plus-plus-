// Protected Access Modifiers

#include <iostream>
using namespace std;
class Base
{
protected:
    int a;

public:
    int b;
};

/*
For a protected member:
                          Public derivation      Private derivation      Protected derivation
    1.Private members     Not Inherited          Not Inherited           Not Inherited
    2.Protected members   Protected              Private                 Protected
    3.Public members      Public                 Private                 Protected

*/

class Derived : protected Base
{
};

int main()
{
    Base b;
    b.b = 84; // because b is public
    cout << b.b << endl;
    Derived d;
    // cout << b.a; //Will not work since a is protected in both base as well as derived class
    // cout << d.a; //Will not work since a is protected in both base as well as derived class
    return 0;
}