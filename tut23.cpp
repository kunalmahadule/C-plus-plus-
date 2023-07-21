//Using array in classes (memory allocation in C++)
#include <iostream>
using namespace std;
class Shop
{
    int itemid[100];
    int itemprice[100];
    int counter; //id or price lene ke liye iske ander

public:
    void initcounter(void) { counter = 0; }
    void setprice(void);
    void displayprice(void);
};

void Shop ::setprice(void)
{
    cout << "Enter id of your item no " << counter + 1 << endl;
    cin >> itemid[counter];                      
    cout << "Enter price of your item " << endl;
    cin >> itemprice[counter];               //This is new fecture (counter variable me he value dale hai pricer or id ke)
    counter++;
}

void Shop ::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with id " << itemid[i] << " is " << itemprice[i] << endl;
    }
}
int main()
{
    Shop dukaan;
    dukaan.initcounter();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.displayprice();
    return 0;
}

//Revision
// #include <iostream>
// using namespace std;
// class Hardware
// {
//     int Price[50];
//     int pinda;

// public:
//     void fokat(void) { pinda = 1; }
//     void setprice(void);
//     void displayprice(void);
// };
// void Hardware ::setprice(void)
// {
//     cout << "Enter the price of monokite brand pinda is " << pinda << endl;
//     cin >> Price[pinda];
//     pinda++;
// }
// void Hardware ::displayprice(void)
// {
//     int i = 1;
//     while (i < pinda)
//     {
//         cout << "The price of monokite brand pinda " << i << " is " << Price[i] << endl;
//         i++;
//     }
// }
// int main()
// {
//     Hardware shopkeeper;
//     cout<<"1 is monokite fighter\n2 is monokite gold\n3 is IB"<<endl;
//     shopkeeper.fokat();
//     shopkeeper.setprice();
//     shopkeeper.setprice();
//     shopkeeper.setprice();
//     shopkeeper.displayprice();
//     return 0;
// }