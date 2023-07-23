#include <iostream>
using namespace std;
class point
{
    int x, y;

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void displaypoint()
    {
        cout << "The point is(" << x << "," << y << ")" << endl;
    }
};
// Create a function (Hint: Make it a friend function) which takes 2 point objects and computes the distance between those 2 points

// Use these examples to cheak your code:
// Distance between (1,1) and (1,1) is 0.
// Distance between (0,1) and (0,6) is 5.
// Distance between (1,0) and (70,0) is 69.
int main()
{
    point p(1, 1);
    p.displaypoint();

    point q(4, 6);
    q.displaypoint();

    return 0;
}

/*
Output:
The point is(1,1)
The point is(4,6)
*/

// #include <iostream>
// using namespace std;
// class Point
// {
//     int x;
//     int y;
//     friend void DB2point(int o1, int o2);

// public:
//     void displaypoint()
//     {
//         cout << "Distance between ("<<x2<<","<<x1<<") and ("<<y2<<","<<y1<<") is "<<DB2point(o3.(((1 - 0) * 2 + (70 - 0) * 2) * 2)) <<endl;
//     }
// };

// void DB2point(int o1, int o2)
// {
//     int o3;
//     o3.(((1 - 0) * 2 + (70 - 0) * 2) * 2);
// }
// int main()
// {
//     Point x1, x2, y1, y2;
//     x1=0;
//     x2=1;
//     y1=0;
//     y2=70;
   

//     return 0;
// }