// Copy Constructor

#include <iostream>
using namespace std;
class Number
{
    int a;

public:
    Number() {          //default constructor
        a=0;
    }
    Number(int num)
    {
        a = num;
    }
    // When no copy constructor is found, compiler supplies its own copy constructor
    Number(Number &obj)
    {
        cout << "Copy constructor called !!" << endl;
        a = obj.a;
    }

    void display()
    {
        cout << "The number for this object is " << a << endl;
    }
};
int main()
{
    Number x, y, z(34), z2;
    x.display();
    y.display();
    z.display();

    Number z1(z); //Copy Constructor invoked
    z1.display();

    z2 = z; //Copy constructor not called
    z2.display();

    Number z3 = z; //Copy Constructor invoked
    z3.display();

    // z1 should exactly resemble z or x or y
    return 0;
}

//Revision

// #include <iostream>
// using namespace std;
// class Number
// {
//     int a;

// public:
//     Number() { a = 0; } //This is default constructor (x or y ko match karne ke liye)
//     Number(int num)
//     {
//         a = num;
//     }
//     //When no copy constructor is found compiler allocate its own constructor
//     Number(Number &obj)
//     {
//         cout << "Copy constructor called!!!" << endl;
//         a = obj.a;
//     }

//     void display()
//     {
//         cout << "The value of this object is " << a << endl;
//     }
// };

// int main()
// {
//     Number x, y, z(45), z2;
//     x.display();
//     y.display();
//     z.display();

//     // z1 should exactly resemble z or x or y
//     Number z1(z); // copy constructor invoked
//     z1.display();

//     z2 = z; //copy constructor are not called
//     z2.display();

//     Number z3 = z; //copy constructor invoked
//     z3.display();
//     return 0;
// }