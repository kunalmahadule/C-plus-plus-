#include <iostream>
using namespace std;
int sum(int a, int b)
{
    int c = a + b;
    return c;
}

//This will not swap a and b
void swap(int a, int b)
{
    int temp = a; //temp  a  b
    a = b;        //4      4  5
    b = temp;     //4      5  4
}

//Call by reference using pointers
void swappointer(int *a, int *b)
{
    int temp = *a; //temp  a  b
    *a = *b;       //4      4  5
    *b = *a;       //4      5  4
}

//Call by reference using C++ reference variables
//int &
void swappreferencevar(int &a, int &b) //This is a new feature
{
    int temp = a; //temp  a  b
    a = b;        //4      4  5
    b = temp;     //4      5  4
    // return a;
}
int main()
{
    int x = 4, y = 5;
    // cout << "The sum of 4 and 5 is " << sum(x, y);
    cout << "The value of x is " << x << " and the value of y is " << y << endl;
    //swap(x, y);  //This will not swap a and b
    // cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    // swappointer(&x, &y);//This will swap a and b using pointer reference
    swappreferencevar(x, y); //This will swap a and b using reference variable
    // swappreferencevar(x, y) = 766;//This will swap a and b using reference variable
    cout << "The value of x after swappointer is " << x << " and the value of y is " << y << endl;
    

    return 0;
}

