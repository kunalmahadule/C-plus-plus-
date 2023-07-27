// Array of Object using Pointers

#include <iostream>
using namespace std;
class ShopItem
{
    int id;
    float price;

public:
    void setData(int a, int b)
    {
        id = a;
        price = b;
    }
    void getData(void)
    {
        cout << "The id of this item is " << id << endl;
        cout << "Price of this item is " << price << endl;
    }
};
//         1   2   3     This line is remember--------> OK
//                 ^
//                 |
//                 |
//                 ptr
//         ptrTemp
int main()
{
    int size = 4;
    // int *ptr = &size;
    // int *ptr = new int [34];

    // 1.general store item
    // 2.veggies item
    // 3.hardware item
    ShopItem *ptr = new ShopItem[size];
    ShopItem *ptrTemp = ptr;
    int p;
    float q;
    for (int i = 1; i <= size; i++)
    {
        cout << "Enter the id and price of item " << i << endl;
        cin >> p >> q;
        // (*ptr).setData(p,q);
        ptr->setData(p, q);
        ptr++;
    }
    for (int i = 1; i <= size; i++)
    {
        cout << "Item No." << i << endl;
        ptrTemp->getData();
        ptrTemp++;
    }

    return 0;
}