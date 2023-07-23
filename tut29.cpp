//Default Constructor
#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    // Creating a Constructor
    // Constructor is a special member function with the same name as of the class.
    // It is used to initialize the object of its class
    // It is automatically invoked whenever an object is created

    Complex(void); // Constructor declaration

    void printnumber()
    {
        cout << "Your number is " << a << "+" << b << "i" << endl;
    }
};

Complex::Complex() // ---> This is a default constructor as it takes no parameters
{
    a = 10;
    b = 0;
    cout << "Hello world" << endl;
}
int main()
{
    Complex c1, c2, c3;
    c1.printnumber();
    c2.printnumber();
    c3.printnumber();
    return 0;
}

/*   Characteristics of Constructors

 1. It should be declared in the public section  of the class
 2. They are automatically invoked whenever the object is created 
 3. They cannot return values and do not have return types
 4. It can have default arguments
 5. We cannot refer to their address

 */

//Revision

// #include <iostream>
// using namespace std;
// class Complex
// {
//     int a;
//     int b;

// public:
//     Complex();

//     void printnumber()
//     {
//         cout << "Your number is " << a << " + " << b << "i" << endl;
//     }
// };

// Complex ::Complex()
// {
//     a = 10;
//     b = 20;
// }
// int main()
// {
//     Complex m, n;
//     m.printnumber();
//     n.printnumber();
//     return 0;
// }