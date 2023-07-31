// Maps in C++ STL

#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<string, int> marksMap;
    marksMap["Harry"] = 98;
    marksMap["Jack"] = 64; //--->new fecture
    marksMap["Rohan"] = 29;

    marksMap.insert({{"kunal", 99}, {"gaurav", 97}}); //-->insert karne ke liye
    map<string, int>::iterator iter;
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << "\n";
    }

    cout << "The size is: " << marksMap.size() << endl;
    cout << "The max size is: " << marksMap.max_size() << endl;
    cout << "The empty return value is: " << marksMap.empty() << endl;
    return 0;
}