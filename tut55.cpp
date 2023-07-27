// Pointers to Derived Classes

#include <iostream>
using namespace std;
class Base_class
{
public:
    int var_base;
    void display(void)
    {
        cout << "The value of var_base is " << var_base << endl;
    }
};

class Derived_class : public Base_class
{
public:
    int var_derived;
    void display(void)
    {
        cout << "The value of var_base is " << var_base << endl;
        cout << "The value of var_derived is " << var_derived << endl;
    }
};

int main()
{
    Base_class *base_class_pointer;
    Base_class obj_base;
    Derived_class obj_derived;

    base_class_pointer = &obj_derived; // Pointing base class pointer to derived class(Late Binding)
    base_class_pointer->var_base = 12;
    // base_class_pointer.var_derived = 134; // Will throw an error
    base_class_pointer->display();

    base_class_pointer->var_base = 1200;
    base_class_pointer->display();

    Derived_class *derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_base = 590;
    derived_class_pointer->var_derived = 34;
    derived_class_pointer->display();

    return 0;
}
