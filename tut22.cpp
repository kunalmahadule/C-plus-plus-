// OOPs - Classes and Object
//  C++ ---> initially called --> C with classes by stroustroup
// class -->extension of structure (in c)
// structure had limitations
//           - member are public
//           - No method
// Classes --> structure + more
// Classes --> can have methods and properties
// Classes --> can make few members as private & few as public
// sturctures in C++ are typedef
// you can declare objects along with the class declaration like this:
/*class Employee{
    //Class definition
}harry,rohan,mohan;*/
// harry.salary = 8 //makes no sense if salary is private

// Nesting of member function
#include <iostream>
#include <string> //This is a new fecture
using namespace std;
//   problem: length() or at()
class binary
{
private:
    string s; // string nam ka data type C++ me hai
    void chk_bin(void);

public:
    void read(void);
    void ones_compliment(void);
    void display(void);
};

void binary::read(void) //(::)Scope Resolution Operator
{
    cout << "Enter a binary number " << endl;
    cin >> s;
}

void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

void binary::ones_compliment(void)
{
    chk_bin(); // This is nesting of member function
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary ::display(void)
{
    cout << "Displaying your binary number " << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}
int main()
{
    binary b;
    b.read();
    // b.chk_bin(); //This is a private (no direct access)
    b.display();
    b.ones_compliment();
    b.display();
    return 0;
}
