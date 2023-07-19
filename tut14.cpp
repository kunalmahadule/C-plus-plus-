#include <iostream>
using namespace std;
typedef struct employee
{
    int id;        //4
    char favchar;  //1
    float salary;  //4
} ek;

union money
{
    int rice;     //4
    float pounds; // 4                          //Single shared memory location
    char car;     //1
};

int main()
{
    //Structure ,Unions and Enums
    enum meal{breakfast, lunch, dinner};
    meal m1 =lunch;
    // cout<<(m1==2);
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    // union money m1;
    // m1.rice = 34;
    // // cout<<m1.rice;//
    // m1.car= 'c';
    // cout<<m1.car;

    // struct employee kunal;
    // ek kunal;
    // ek gaurav;//You will create more members
    // ek rohan; 
    // kunal.id=34;
    // kunal.favchar = 'j';
    // kunal.salary = 200000;

    // cout << "kunal id is " << kunal.id << endl;
    // cout << "kunal favchar is " << kunal.favchar << endl;
    // cout << "kunal salary is " << kunal.salary << endl;

    return 0;
}