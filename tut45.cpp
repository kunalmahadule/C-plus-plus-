// Code Example: Virtual Base Class

// Student --> Test [Done]
// Student --> Sports [Done]
// Test --> Result [Done]
// Sports --> Result [Done]

#include <iostream>
using namespace std;
class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int Rno)
    {
        roll_number = Rno;
    }
    void print_roll_number()
    {
        cout << "You roll number is " << roll_number << endl;
    }
};

class Test : virtual public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks()
    {
        cout << "Your marks here: " << endl
             << "Maths: " << maths << endl
             << "Physics: " << physics << endl;
    }
};

class Sport : public virtual Student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }
    void print_score()
    {
        cout << "Your PT score is " << score;
    }
};

class Result : public Test, public Sport
{
protected:
    int Total;

public:
    void display()
    {
        Total = maths + physics + score;
        print_roll_number();
        print_marks();
        print_score();
        cout << endl
             << "Your total score is : " << Total << endl;
    }
};

int main()
{
    Result Harry;
    Harry.set_roll_number(4200);
    Harry.set_marks(78.9, 99.5);
    Harry.set_score(9.12);
    Harry.display();
    return 0;
}