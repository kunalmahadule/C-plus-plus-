//Array with C++

#include <iostream>
using namespace std;
class Employee
{
    int id;
    int salary;

public:
    void setid(void)
    {
        salary = 122;
        cout << "Enter the id of employee" << endl;
        cin >> id;
    }

    void getid(void)
    {
        cout << "The id of this employee is " << id << endl;
    }
};
int main()
{
    // Employee harry, rohan, lovish, shruti;
    // harry.setid();
    // harry.getid();

    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setid();
        fb[i].getid();
    }

    return 0;
}

//Revision

// #include<iostream>
// using namespace std;
// class Employee{
//     int id;
//     int salary;
//     public:
//         void setid(void){
//             cout<<"Enter the id "<<endl;
//             cin>>id;
//         }
//         void getid(void){
//             cout<<"The id of this employee is "<<id<<endl;
//         }
// };
// int main()
// {
//     // Employee sonu,monu,raju,ram;
//     // sonu.setid();
//     // sonu.getid();

//     // monu.setid();
//     // monu.getid();

//     // raju.setid();
//     // raju.getid();

//     // ram.setid();
//     // ram.getid();
//     Employee fb[4];//This is a new fecture

//     for (int i = 0; i < 4; i++)
//     {
//         fb[i].setid();
//         fb[i].getid();
//     }
    


//     return 0;
// }