// Pointers to Objects and Arrow Operator

#include <iostream>
using namespace std;
class Complex
{
public:
    int real;
    int imaginary;
    void getdata()
    {
        cout << "The value of real part is " << real << endl;
        cout << "The value of imaginary is " << imaginary << endl;
    }
    void setdata(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};

int main()
{
    // Complex c1;
    //Complex *ptr = &c1;
    // c1.setdata(12,6);
    // c1.getdata();

    Complex *ptr = new Complex;
    //(*ptr).setdata(12,6); is exactiy same as
    ptr->setdata(12,2);

    // (*ptr).getdata(); is as good as
    ptr->getdata();

    //Array as Objects

    
    Complex *ptr1 = new Complex [4];
    ptr1->setdata(12,5);
    ptr1->getdata();
    

    return 0;
}
