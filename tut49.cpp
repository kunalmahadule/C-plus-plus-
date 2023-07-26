// Constructor Initilization List

#include <iostream>
using namespace std;
/*
Syntax for Initilization list in constructor
constructor (argument-list) : initilization-section
{
    assignment + other code;
}

class Test{
    int a;
    int b;
    public;
        Test(int i, int j): a(i), b(j){
            construction body
        }

};
*/
class Test
{
    int a;
    int b;

public:
    // Test(int i, int j) : a(i), b(j)
    // Test(int i, int j) : a(i), b(i + j)
    // Test(int i, int j) : a(i), b(2 * j)
    // Test(int i, int j) : b(j), a(i + b)--->RED Flag this will creat problem because a will be initilize first
    // Test(int i, int j)
    Test(int i, int j) : a(i), b(j)

    { 
        a = i;
        b = j;
        cout << "Constructor executed" << endl;
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
    }
};

int main()
{
    Test(12, 3);
    return 0;
}