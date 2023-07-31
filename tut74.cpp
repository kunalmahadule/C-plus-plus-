// functors in C++ STL

#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

int main()
{
    // Function Objects(Functor): Function wrapped in a class so that it available like an object
    int arr[] = {1, 73, 4, 2, 54, 16};
    // sort(arr, arr + 4);-->kitne element tak sort karna hai vo bhi kar sakte hai
    // sort(arr, arr + 6);                 // sort-acending order
    sort(arr, arr + 6, greater<int>()); // function object(sort decending order)
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}