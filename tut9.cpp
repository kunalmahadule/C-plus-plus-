#include <iostream>
using namespace std;

int main()
{
    cout << "This is tutiorial 9" << endl;
    // int age;
    // cout << "Tell me your age" << endl;
    // cin >> age;

    //1.Selection control structure: If else-if else ladder
    // if (age >= 20)
    // {
    //     cout << "You are perfect for IIT addmission" << endl;
    // }
    // else if (age == 18)
    // {
    //     cout << "You try next year" << endl;
    // }
    // else
    // {
    //     cout<<"You are a kid"<<endl;
    // }

    //2.Selection control structure: switch statement

    int time;
    cout << "Tell me your time" << endl;
    cin >> time;
    switch (time)
    {
    case 7:
        cout<<"7AM it`s Time to play football"<<endl;
        break;
    
    case 2:
        cout<<"2PM it`s Time to play cricket"<<endl;
        break;

    case 6:
        cout<<"6PM it`s Time to play Chess"<<endl;
        break;

    default:
        cout<<"Oops Study Time"<<endl;

    }

    cout<<"Done with switch case"<<endl;

    return 0;
}