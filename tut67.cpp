// Function Templates

#include <iostream>
using namespace std;

// float funcAverage(int a, int b)
// {
//     float avg = (a + b) / 2.0;
//     return avg;
// }

// float funcAverage2(int a, float b)
// {
//     float avg = (a + b) / 2.0;
//     return avg;
// }

template <class Y1, class Y2>
void swap(Y1 &a, Y2 &b)
{
    Y1 Temp = a;
    a = b;
    b = Temp;
}
template <class T1, class T2>
float funcAverage2(T1 a, T2 b)
{
    float avg = (a + b) / 2.0;
    return avg;
}

int main()
{
    float a;
    a = funcAverage2(5, 2.2);
    printf("The value of a is %.3f\n", a);
    int x = 5, y = 2;
    cout << x << endl << y<<endl;
    swap(x, y);
    cout<< x << endl << y;
    return 0;
}