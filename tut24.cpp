//Static variable in C++ with classes
#include <iostream>
using namespace std;
class Employee
{
    int id;
    static int count;

public:
    void setdata(void)
    {
        cout << "Enter the id " << endl;
        cin >> id;
        count++;
    }

    void getdata(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }

    //This is a new fecture
    static void getcount(void)
    {
        //count<<id; //throws an error
        cout << "The value of count is " << count << endl;
    }
};

//Count is the static data member of class Employee     //This is a new fecture
int Employee ::count; //Default value is 0

int main()
{
    Employee harry, rohan;
    harry.setdata();
    harry.getdata();
    Employee::getcount();

    rohan.setdata();
    rohan.getdata();
    Employee::getcount(); //This a new fecture
    return 0;
}


//Revision

// #include <iostream>
// using namespace std;
// class Employee
// {
//     int id;
//     static int count;

// public:
//     void setdata(void)
//     {
//         cout << "Enter the id " << endl;
//         cin >> id;
//         count++;
//     }

//     void getdata(void)
//     {
//         cout << "The id of employee number " << count << " is " << id << endl;
//     }

//     static void getcount(void) //This is new fecture
//     {
//         cout << "The value of count is " << count << endl;
//     }
// };

// //Count is a static data member
// int Employee::count = 5; //Default value is 0
// //This is new fecture

// int main()
// {
//     Employee harry, rohan, raju;
//     harry.setdata();
//     harry.getdata();

//     rohan.setdata();
//     rohan.getdata();

//     raju.setdata();
//     raju.getdata();
//     return 0;
// }
