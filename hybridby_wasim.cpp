#include <iostream>
using namespace std;
/*
                                >>test(intermediate)
Student(virtual base class)>>               >>>>total(derived class)
                                >>score(intermediate)
*/
class student
{
protected:
    int roll_number;

public:
    void set_rollnumber(int r)
    {
        roll_number = r;
    }
    void get_number()
    {
        cout << "the roll number is: " << roll_number << endl;
    }
};

class test : virtual public student
{
protected:
    int maths, physics;

public:
    void set_marks(int m1, int m2)
    {
        maths = m1;
        physics = m2;
    }
    void get_marks()
    {
        cout << "the marks are given below: "<<endl;
        cout<< "maths: "<<maths<<endl;
        cout<< "physics: "<<physics<<endl;
    }
};

class sports : virtual public student
{
protected:
    float score;

public:
    void set_score(float s)
    {
        score = s;
    }
    void get_score()
    {
        cout << "the score is: " << score << endl;
    }
};

class total : public test, public sports
{
private:
    float total;

public:
    void display()
    {
        total = maths + physics + score;

        get_number();
        get_marks();
        get_score();

        cout << "the total marks is: " << total << endl;
    }
};

int main()
{
    total wasim;
    wasim.set_rollnumber(75);
    wasim.set_marks(95, 80);
    wasim.set_score(8.5);
    wasim.display();
    
    return 0;
}