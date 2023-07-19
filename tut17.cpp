/*Inline function ,Default argument and constant argument
Default argument ko bad me likhe
Function ke ander na ke barabar kam ho raha ho to usko inline bana dena.
Static variable or Recursion me inline function ko use nahi karna chiye*/
#include <iostream>
using namespace std;
inline int product(int a, int b)        //This is a new feature
{
    //Not recommeneded to use below lines with inline functions
    // static int c = 0;//This excutes only once
    // c = c +1;//Next time this function is run, the value of c will be retained
    return a * b;
    // + c;
}
float moneyreceived(int currentmoney, float factor = 1.04) //This is a new feature
{
    return currentmoney * factor;
}
//function ke ander modification na ho argument ka to hum const lagate hai
//string ke value change nahi honge
// int strlen(const char *p){       //This is a new feature

// }

int main()
{
    // int a, b;
    // cout << "Enter the value of a and b " << endl;
    // cin >> a >> b;
    // cout << "The product of a and b is " << product(a, b) << endl;
    // cout << "The product of a and b is " << product(a, b) << endl;
    // cout << "The product of a and b is " << product(a, b) << endl;
    // cout << "The product of a and b is " << product(a, b) << endl;
    int money = 100000;
    cout << "If you have " << money << " RS in your bank account, you will recive " << moneyreceived(money) << endl;
    cout << "For VIP :If you have " << money << " RS in your bank account, you will recive " << moneyreceived(money, 1.1) << " RS after 1 year";
    return 0;
}
