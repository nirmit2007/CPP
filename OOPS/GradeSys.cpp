#include <iostream>
using namespace std;

class Student
{
protected:
    int m1, m2, m3;

public:
    void getMarks()
    {
        cout << "Enter marks of 3 subjects: ";
        cin >> m1 >> m2 >> m3;
    }
};

class Result : public Student
{
public:
    void displayResult()
    {
        int total = m1 + m2 + m3;
        float avg = total / 3.0;

        int min = m1;
        int max = m1;

        if (m2 < min)
        {
            min = m2;
        }
        if (m3 < min)
        {
            min = m3;
        }

        if (m2 > max)
        {
            max = m2;
        }
        if (m3 > max)
        {
            max = m3;
        }

        cout << "Average = " << avg << endl;

        if (avg > 90)
        {
            cout << "Grade = A+" << endl;
        }
        else if (avg > 80)
        {
            cout << "Grade = B" << endl;
        }
        else if (avg > 70)
        {
            cout << "Grade = C" << endl;
        }
        else
        {
            cout << "Grade = D" << endl;
        }

        cout << "Minimum Marks = " << min << endl;
        cout << "Maximum Marks = " << max << endl;
    }
};

int main()
{
    Result r;
    r.getMarks();
    r.displayResult();
    return 0;
}