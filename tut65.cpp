// Multi-Parameter Template

#include <iostream>
using namespace std;
/*
CLASS TEMPLATES WITH MULTIPLE PARAMETERS(ONE,TWO OR MORE THAN TWO)
template<class T1,class T2........(COMMA SEPARATED)>
class nameofclass
{
    //body
};
*/
template <class T1, class T2>
class myClass
{
    T1 data1;
    T2 data2;

public:
    myClass(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << this->data1 << endl
             << this->data2;
    }
};

int main()
{
    myClass<int, char> obj(12, 'v');
    obj.display();
    return 0;
}
