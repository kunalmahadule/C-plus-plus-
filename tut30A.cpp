//Parametrized Constructor  

#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    Complex(int, int); //Constructor declaration

    void printnumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex::Complex(int q1, int q2) //---->This is a Parametrized Constructor as it takes 2 parameter
{
    cout << "Hello World" << endl;
    a = q1;
    b = q2;
}

int main()
{
    //Implicit call
    Complex a(4, 6);
    a.printnumber();

    //Explicit call
    Complex b = Complex(5, 7);
    b.printnumber();
    return 0;
}
/*Output
Hello World
Your number is 4 + 6i
Hello World
Your number is 5 + 7i
*/

// #include <iostream>
// using namespace std;
// class Complex
// {
//     int a;
//     int b;

// public:
//     Complex(int, int);

//     void printnumber()
//     {
//         cout << "Your number is " << a << " + " << b << "i" << endl;
//     }
// };

// Complex ::Complex(int x, int y)
// {
//     a = x;
//     b = y;
// }
// int main()
// {
//     //Implicit call
//     Complex x(2, 6);
//     x.printnumber();

//     //Explicit call
//     Complex y = Complex(3, 12);
//     y.printnumber();
//     return 0;
// }