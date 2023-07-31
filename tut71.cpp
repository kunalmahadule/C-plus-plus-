// Vector in C++ STL
// (c plusplus.com)---->Website for study about vectors

#include <iostream>
#include <vector>
using namespace std;
template <class T>
void display(vector<T> &v)
{
    // cout << "Displaying this vector " << endl;
    // size() ye vector ka size return karanga
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "  ";
        // work of at(): at(i) ye bhi i ke value ko track karanga
        // cout << v.at(i) << "  ";
    }
    cout << endl;
}
int main()
{
    vector<int> vec1;
    int element, size = 5;
    // cout << "Enter the size of the vector do you want: ";
    // cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the element you will store in the vector: ";
        cin >> element;
        vec1.push_back(element); //--->add element at the end
    }
    display(vec1);
    cout << endl;
    cout << vec1.front() << endl //--->external work from videos comment
         << vec1.back();

    // // vec1.pop_back();//--->delete element at the end
    // // vec1.pop_back();
    // // vec1.pop_back();

    // // insert-->ye value ko insert karne ke kam aata hai center me bhi value ko insert kar sakta hai
    // display(vec1);
    // vector<int>::iterator iter = vec1.begin(); //-->begin() matlab 1st element se point kara rahe hai or change karna hai to [+1,+2] karke kar sakte hai
    // vec1.insert(iter + 1, 7, 566);
    // // hum chate hai 566 ke 7 copy insert kare to aise kar sakte hai
    // display(vec1);

    // Ways to creat a vector
    // vector<int> vec1; // zero length vector
    // vector<char> vec2(4); // 4-element character vector
    // vec2.push_back('7');
    // display(vec2);
    // vector<char> vec3(vec2); // 4-element character vector from vec2
    // display(vec3);

    // vector<int> vec4(6, 3); // 6-element vector of 3s
    // 3 ko 6 bar print karanga
    // display(vec4);
    // cout << vec4.size() << endl; // size bhi nekal sakte ho
    // vec4.resize(4);              //--->external work from videos comment
    // cout << vec4.size() << endl; // size bhi nekal sakte ho

    return 0;
}
