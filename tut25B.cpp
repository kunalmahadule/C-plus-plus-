//Complex number help with classes

#include <iostream>
using namespace std;
class complex
{
    int a;
    int b;

public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void setdatabysum(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

    void printnumber()
    {
        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }
};
int main()
{
    complex c1, c2, c3;
    c1.setdata(1, 2);
    c1.printnumber();

    c2.setdata(3, 4);
    c2.printnumber();

    c3.setdatabysum(c1, c2);
    c3.printnumber();
    return 0;
}

// //Revision

// #include <iostream>
// using namespace std;
// class complex
// {
//     int a;
//     int b;

// public:
//     void setdata(int v1, int v2)//setdata works assign values a and b
//     {
//         a = v1;
//         b = v2;
//     }
//     void getdatabysum(complex k1, complex k2)
//     {
//         a = k1.a + k2.a;
//         b = k1.b + k2.b;
//     }
//     void printnumber(void)
//     {
//         cout << "Your complex number is " << a << " + " << b << "i" << endl;
//     }
// };
// int main()
// {
//     complex m1, m2, m3;
//     m1.setdata(10, 2);
//     m1.printnumber();

//     m2.setdata(5, 6);
//     m2.printnumber();

//     m3.getdatabysum(m1,m2);
//     m3.printnumber();
//     return 0;
// }