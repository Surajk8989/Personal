
#include <cmath>
#include <iostream>
using namespace std;

class Student 
{
    private:
    int scores[3];
    public:
    void input()
    {
        for (int i = 0; i < 3; i++) 
        {
            cin >> scores[i];
        }
    }
    void output()
    {
        for (int i = 0; i < 3; i++) 
        {
            cout << scores[i];
        }
    }
    int calculateTotalScore() 
    {
        int count = 0;
        for (int i = 0; i < 3; i++) 
        {
            count += scores[i];
        }
        return count;
    }
};
int main() 
{
    int n; 
    cout<<"Enter number of students: "<<endl;
    cin >> n;

    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++)
    {
        s[i].input();
    }
    for(int i = 0; i < n; i++)
    {
        s[i].output();
        cout<<endl;
    }
    cout<<endl;
    
    // calculate kristen's score
    
    int kristen_score = s[0].calculateTotalScore();
    cout<<"kristen's score is: "<<kristen_score<<endl;

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++)
    {
        int total = s[i].calculateTotalScore();
        if(total > kristen_score)
        {
            count++;
        }
    }

    // print result
    cout <<"Number of student having more marks than kristen are: "<<count;
    
    return 0;
}