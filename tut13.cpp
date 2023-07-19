#include <iostream>
using namespace std;

int main()
{
    // Array Example
    int marks[] = {33, 78, 67, 90};

    // cout << "These are marks of students" << endl;
    // cout << marks[0] << endl;
    // cout << marks[1] << endl;
    // cout << marks[2] << endl;
    // cout << marks[3] << endl;

    int mathmarks[4];
    mathmarks[0] = 55;
    mathmarks[1] = 36;
    mathmarks[2] = 89;
    mathmarks[3] = 79;

    // cout << "These are mathmarks of students" << endl;
    // cout << mathmarks[0] << endl;
    // cout << mathmarks[1] << endl;
    // cout << mathmarks[2] << endl;
    // cout << mathmarks[3] << endl;

    //You can change the value of an array
    // marks[2] = 99;
    // cout << marks[2] << endl;

    // for (int i = 0; i < 4; i++)
    // {
    //     cout << "Marks of student " << i << " is " << marks[i] << endl;
    // }

    // Quick quiz: do the same using while and do-while loop?

    //Pointers and Arrays
    int *p = marks;
    // cout << *(p++) << endl;
    // cout << *(++p) << endl;
    cout << "The marks of 1 student is: " << *(p) << endl;
    cout << "The marks of 2 student is: " << *(p + 1) << endl;
    cout << "The marks of 3 student is: " << *(p + 2) << endl;
    cout << "The marks of 4 student is: " << *(p + 3) << endl;

    //This are pointer arithmatic
    return 0;
}