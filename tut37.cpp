// Coading Inheritance

#include <iostream>
using namespace std;

// Base Class
class Employee
{
public:
    int Id;
    float salary;
    Employee() {}
    Employee(int inpId)
    {
        Id = inpId;
        salary = 34.04;
    }
};

// Derived class syntax
/*
class {{derived-class-name}} : {{visiblity-mode}}  {{base-class-name}}
{
    class members/methods/variables/etc.........
}
Note:
1. Default visiblity mode is private
2. Public visiblity mode: Public members of the base class becomes Public members of the derived class
3. Private visiblity mode: Public members of the base class becomes Private members of the derived class
4. Private members are never Inherited
*/

// Creating a Programmer class derived from Employee base class
class Programmer : public Employee
{
public:
    int languageCode;
    Programmer(int inpId)
    {
        Id = inpId;
        languageCode = 9;
    }
    void getdata()
    {
        cout << Id << endl;
    }
};

int main()
{
    Employee harry(101), rohan(102);

    cout << harry.salary << endl;
    cout << rohan.salary << endl;

    // eg.  Employee ram = Employee(104);

    Programmer skillF(10);
    cout << skillF.languageCode << endl;
    cout << skillF.Id << endl;
    skillF.getdata();
    return 0;
}
