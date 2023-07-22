// friend function
#include <iostream>
using namespace std;

// 1 + 4i
// 5 + 8i
// -------
// 6 + 12i
class complex
{
    int a;
    int b;
    // Below line means that non member - sumcomplex function is allowed to do anything with my private parts (members)
    friend complex sumComplex(complex o1, complex o2);

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printnumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

complex sumComplex(complex o1, complex o2)
{
    complex o3;
    // cout<<a;//makes no sence (not access private member directly)
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main()
{
    complex c1, c2, sum;
    c1.setNumber(1, 4); // c1 is a object of a class setNumber is a member function of the class
    c1.printnumber();

    // c1.sumComplex();//This throw error (sumComplex ye class ka member function nahi hai)

    c2.setNumber(5, 8);
    c2.printnumber();

    sum = sumComplex(c1, c2); // Observe properly (=)
    sum.printnumber();
    return 0;
}

/*Properties of friend function

1. Not in the scope of class
2. since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumComplex() == Invalid
3. Can be invoked without the help of any object
4. Usually contains the objects as arguments
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need object_name.member_name to access any member

*/

// Revision

// #include <iostream>
// using namespace std;

// class Complex
// {
//     int a, b;
//     friend Complex add(Complex c1, Complex c2);

// public:
//     void setdata(int x, int y)
//     {
//         a = x;
//         b = y;
//     }

//     void printdata()
//     {
//         cout << "Your number is " << a << " + " << b << "i." << endl;
//     }
// };

// Complex add(Complex c1, Complex c2)
// {
//     Complex z;
//     z.setdata((c1.a + c2.a), (c1.b + c2.b));
//     return z;
// }

// int main()
// {
//     Complex c1, c2;
//     c1.setdata(2, 4);
//     c1.printdata();

//     c2.setdata(5, 3);
//     c2.printdata();

//     Complex sum;
//     sum = add(c1, c2);
//     sum.printdata();

//     return 0;
// }