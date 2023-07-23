// Dynamic Initialization of Objects using Constructor
// Dynamic Initialization matlab run time pe pata chalaga ke konsa function run honga
#include <iostream>
using namespace std;
class BankDeposite
{
    int principle;      // hum jo bank ko paise dene vale hai
    int years;          // kitne saal ke liye
    float interestRate; // kitne intereste ke saath
    float returnValue;  // total hamko kitne paise return milange

public:
    BankDeposite() {}
    BankDeposite(int p, int y, float r); // r can be value like 0.04
    BankDeposite(int p, int y, int r);   // r can be value like 14
    void show();
};

BankDeposite ::BankDeposite(int p, int y, float r)
{
    principle = p;
    years = y;
    interestRate = r;
    returnValue = principle;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}

BankDeposite ::BankDeposite(int p, int y, int r)
{
    principle = p;
    years = y;
    interestRate = float(r) / 100;
    returnValue = principle;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}

void BankDeposite ::show()
{
    cout << endl
         << "Principle amount was " << principle
         << ". Return value after " << years
         << " years is " << returnValue << endl;
}
int main()
{
    BankDeposite bd1, bd2, bd3;
    int p, y;
    float r;
    int R;

    cout << "Enter the value of p, y and r" << endl;
    cin >> p >> y >> r;
    bd1 = BankDeposite(p, y, r);
    bd1.show();

    cout << "Enter the value of p, y and R" << endl;
    cin >> p >> y >> R;
    bd2 = BankDeposite(p, y, R);
    bd2.show();

    return 0;
}

// Revision
//  #include <iostream>
//  using namespace std;
//  class Saving
//  {
//      int principle;
//      int years;
//      float interestrate;
//      float returnvalue;

// public:
//     Saving() {}                    //Default Constructor
//     // Saving(int p, int y, float r); // interest can be type of 0.04
//     Saving(int p, int y, int r);   // interest can be type of 0.04
//     void show();
// };

// // Saving ::Saving(int p, int y, float r)
// // {
// //     principle = p;
// //     years = y;
// //     interestrate = r;
// //     returnvalue = principle;
// //     for (int i = 0; i < y; i++)
// //     {
// //         returnvalue = returnvalue * (1 + interestrate);
// //     }
// // }

// Saving ::Saving(int p, int y, int r)
// {
//     principle = p;
//     years = y;
//     interestrate = float(r) / 100;
//     returnvalue = principle;
//     for (int i = 0; i < y; i++)
//     {
//         returnvalue = returnvalue * (1 + interestrate);
//     }
// }

// void Saving ::show()
// {
//     cout << endl
//          << "Principle amount is " << principle
//          << ". return value after " << years
//          << " years is " << returnvalue << endl;
// }
// int main()
// {
//     Saving s1, s2, s3;
//     int p, y;
//     // float r;
//     int R;

//     // cout << "Enter the value of p, y and r " << endl;
//     // cin >> p >> y >> r;
//     // s1 = Saving(p, y, r);
//     // s1.show();

//     cout << "Enter the value of p, y and R " << endl;
//     cin >> p >> y >> R;
//     s2 = Saving(p, y, R);
//     s2.show();

//     return 0;
// }