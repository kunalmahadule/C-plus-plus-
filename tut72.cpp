// Lists in C++ STL
// elements ka fast access nahi milta 
// List kab use kare jab bitch bitch me se element ko insert or delete karna padhe tab
#include <iostream>
#include <list>
using namespace std;
void display(list<int> &lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
int main()
{
    list<int> list1; // list of 0 length
    list1.push_back(8);
    list1.push_back(34);
    list1.push_back(23);
    list1.push_back(54);

    display(list1);

    // Removing elements from the list
    // list1.pop_back();//--->Delete from back
    // display(list1);
    // list1.pop_front();//--->Delete from front
    // display(list1);
    // list1.remove(23); //--->Delete from middle[agar 2 bar 23 raha to dono deleter ho jayenga]
    // display(list1);

    // Sorting the list
    // list1.sort(); //--->minimum to maximum
    // display(list1);

    //Reversing the list
    list1.reverse();
    display(list1);

    // list<int>::iterator iter;
    // iter = list1.begin(); //--->it just like pointer [list ka base address pass kar diya hamne]
    // cout << *iter<<" ";
    // iter++;
    // cout << *iter<<" ";
    // iter++;
    // cout << *iter<<" ";
    // iter++;
    // cout << *iter<<" ";

    list<int> list2(3); // Empty list of size 3[But no value]
    list<int>::iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 6;
    iter++;
    *iter = 9;
    iter++;
    display(list2);
    // list1.sort();
    // list2.sort();
    list1.merge(list2); //--->mergeing 2 lists
    cout << "List 1 after merging: ";
    display(list1);
    return 0;
}