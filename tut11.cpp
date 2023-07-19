#include<iostream>
using namespace std;

int main()
{
    //break statement are totally break
    // for (int i = 1; i <= 20; i++)
    // {
    //     if (i==10)
    //     {
    //         break;
    //     }
        
    //     cout<<i<<endl;
    // }

    //continue statement are skip some lines of code
    for (int i = 1; i <= 20; i++)
    {
        if (i==5)
        {
            continue;
        }
        
        cout<<i<<endl;
    }
    
    return 0;
}