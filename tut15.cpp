#include <iostream>
using namespace std;

//Function Prototype
// type function-name (argument);
int sum(int a, int b);//--> Acceptable
// int sum(int a, b);//-->Not Acceptable
// int sum(int, int); //-->Acceptable              //This is new feature
//void g(void);      //-->Acceptable            //This is new feature
void g();          //-->Acceptable

int main()
{
    int num1, num2;
    cout << "Enter first number " << num1 << endl;
    cin >> num1;
    cout << "Enter second number " << num2 << endl;
    cin >> num2;
    //num1 and num2 are actual parameter
    cout << "The sum is " << sum(num1, num2) << endl;
    g();    //This is new feature
    return 0;
}

int sum(int a, int b)
{
    //Formal parameters a and b will be taking values from actual parameters num1 and num2.
    int c = a + b;
    return c;
}

void g()
{
    cout << "\nHello, Good morning";
}