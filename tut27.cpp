//friend class
//ek class ke function ko dusre class ka friend kaise banate hai ye dekha
//forward declaration
//entire class as friend
#include <iostream>
using namespace std;

//Forward declaration
class complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumRealcomplex(complex, complex); //argument nahi likhe kyuke hamne class ko he declare kiya ye nahi bataya ke usme a hai ya b.
    int sumCompcomplex(complex, complex);
};
class complex
{
    int a, b;
    //Some function gives permission to access the private members
    //Individually declaring functions as friends       //code with harry
    // friend int Calculator ::sumRealcomplex(complex o1, complex o2);
    // friend int Calculator ::sumCompcomplex(complex p1, complex p2);

    //Aliter: Declaring the entire calculator class as friend
    friend class Calculator;

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
int Calculator::sumRealcomplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int Calculator::sumCompcomplex(complex p1, complex p2)
{
    return (p1.b + p2.b);
}

int main()
{
    complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);
    Calculator calc;
    int res = calc.sumRealcomplex(o1, o2);
    cout << "The sum of real part is " << res << endl;
    Calculator calcc;
    int resc = calcc.sumCompcomplex(o1, o2);
    cout << "The sum of complex part is " << resc << endl;
    return 0;
}