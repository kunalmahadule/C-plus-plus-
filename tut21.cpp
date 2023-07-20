// IMPORTANT CONCEPT OF C++
//Agar object se class ke member ko access kar rahe hai to (.) use this 
#include <iostream>
using namespace std;
class Employee
{
private:
    int a, b, c;//Members

public:
    int d, e;
    void setdata(int a1, int b1, int c1); //Declaration
    void getdata()//Member function
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
        cout << "The value of d is " << d << endl;
        cout << "The value of e is " << e << endl;
    }
}harry;      //This is new fecture

void Employee ::setdata(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}
int main()
{
    // Employee harry;//harry is a object of the class
    //harry.a=134;      //-->This will throw error as a is private
    harry.d=34;
    harry.e=87;
    harry.setdata(12,6,4);
    harry.getdata();
    // cout << "The value of d is " << d << endl;
    // cout << "The value of e is " << e << endl;
    return 0;
}

//Revision
// #include <iostream>
// using namespace std;
// class Employee
// {
// private:
//     int a, b;

// public:
//     int g, k;
//     void setdata(void);
//     void getdata(void)
//     {
//         cout << "The value of a is " << a << endl;
//         cout << "The value of b is " << b << endl;
//         cout << "The value of g is " << g << endl;
//         cout << "The value of k is " << k << endl;
//     }
// };
// void Employee ::setdata(void)
// {
//     cout << "Enter the value of a " << endl;
//     cin >> a;
//     cout << "Enter the value of b " << endl;
//     cin >> b;
// }
// int main()
// {
//     Employee kunal;
//     // kunal.a=34;//Because a is a private
//     kunal.g=1;
//     kunal.k=2;
//     kunal.setdata();
//     kunal.getdata();
//     return 0;
// }