// Exercise on Inhertance : Solution

#include <iostream>
#include <cmath> //------>This is a new header file
using namespace std;
class SimpleCalculator
{
    int number1;
    int number2;

public:
    void InputSimple()
    {
        cout << "Enter the value of number1 " << endl;
        cin >> number1;
        cout << "Enter the value of number2 " << endl;
        cin >> number2;
    }
    void PrintSimple()
    {
        cout << "The value of number1 + number2 is " << number1 + number2 << endl;
        cout << "The value of number1 - number2 is " << number1 - number2 << endl;
        cout << "The value of number1 * number2 is " << number1 * number2 << endl;
        cout << "The value of number1 / number2 is " << number1 / number2 << endl;
    }
};

class ScientificCalculator
{
    int number1;
    int number2;

public:
    void InputScientific()
    {
        cout << "Enter the value of number1 " << endl;
        cin >> number1;
        cout << "Enter the value of number2 " << endl;
        cin >> number2;
    }
    void PrintScientific()
    {
        cout << "The value of cos(number1) is " << cos(number1) << endl;
        cout << "The value of sin(number1) is " << sin(number1) << endl;
        cout << "The value of tan(number1) is " << tan(number1) << endl;
        cout << "The value of exp(number1) is " << exp(number1) << endl;
        cout << "The value of cos(number2) is " << cos(number2) << endl;
        cout << "The value of sin(number2) is " << sin(number2) << endl;
        cout << "The value of tan(number2) is " << tan(number2) << endl;
        cout << "The value ofexp(number2) is " << exp(number2) << endl;
    }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
};

int main()
{
    // SimpleCalculator Maths;
    // Maths.InputSimple();
    // Maths.PrintSimple();

    // ScientificCalculator Physics;
    // Physics.InputScientific();
    // Physics.PrintScientific();

    HybridCalculator Uptox;
    Uptox.InputSimple();
    Uptox.PrintSimple();
    Uptox.InputScientific();
    Uptox.PrintScientific();
    return 0;
}