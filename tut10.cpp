#include <iostream>
using namespace std;

int main()
{
    /*Loops in C++
    There are 3 types of loops in C++:              (infinity loop are pending)
      1.For loop
      2.While loop
      3.Do-while
      */
    //Syntax for for loop
    // for (Initialization; Condition; Updation)
    // {
    //     loop body(c++);
    // }

    // for (int i = 1; i <= 40; i++)
    // {
    //     cout<<i<<endl;
    // }

    //Example of Infinity for loop

    //Syntax for While loop
    // while (condition)
    // {
    //     C++ statements;
    // }

    // int i = 1;
    // while (i <= 20)
    // {
    //     cout << i << endl;
    //     i++;
    // }

    //Example of Infinity while loop

    //Syntax for do-While loop
    // do
    // {
    //     C++ code;
    // } while (condition);
    int i = 1;
    //false hone ke baad bhi 1 bar chalenga
    do
    {
        cout << i << endl;
        i++;
    } while (false);

    //Example of Infinity do-while loop

    return 0;
}