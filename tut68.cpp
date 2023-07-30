// Overloading function Template

#include <iostream>
using namespace std;
template <class T>
class Harry
{
public:
    T data;
    Harry(T a)
    {
        data = a;
    }
    void display();
};

template <class T>
void Harry<T>::display()
{
    cout << data;
}

void func(int a)
{
    cout << "I am first func()  " << a << endl;
}

template <class T>
void func(T a)
{
    cout << "I am first Templasized func()  " << a << endl;
}

template <class T>
void func1(T a)
{
    cout << "I am first Templasized function  " << a << endl;
}

int main()
{
    // Harry<float> h(5.021);
    // Harry<int> h(12);
    // Harry<char> h('K');
    // cout << h.data << endl;
    // h.display();

    // func(3);// Exact match takes the highest priority
    // func(3.9);// Exact match takes the highest priority
    func1('f');
    return 0;
}

