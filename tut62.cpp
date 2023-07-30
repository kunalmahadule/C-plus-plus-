// File I/O Using open() & EOF

#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main()
{
    ofstream out;
    out.open("work.txt"); //--->Ye Program Success nahi hua
    out << "This is me\n";
    out << "This is also me\n";
    out << "This was me\n";
    out << "This is alsi me\n";
    out.close();

    ifstream in;
    string so;
    string st;
    string st2;
    in.open("work.txt"); //--->Ye Program Success nahi hua
    // in >> st2 >> st >> so;
    // cout << st2 << st << so;
    while (in.eof() == 0)
    {
        getline(in, st);
        cout << st << endl;
    }

    in.close();
    return 0;
}