// Virtual Functions

#include <iostream>
using namespace std;

class Base_class
{
public:
    int var_base = 1;
    virtual void display(void)
    {
        cout << "1 The value of var_base is " << var_base << endl;
    }
};

class Derived_class : public Base_class
{
public:
    int var_derived = 2;
    void display(void)
    {
        cout << "2 The value of var_base is " << var_base << endl;
        cout << "2 The value of var_derived is " << var_derived << endl;
    }
};

int main()
{
    Base_class *base_class_pointer;
    Base_class obj_base_class;
    Derived_class obj_derived_class;
    base_class_pointer = &obj_derived_class;
    base_class_pointer->display();
    return 0;
}