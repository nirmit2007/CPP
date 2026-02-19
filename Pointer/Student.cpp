#include <iostream>
using namespace std;
struct  student
{
    string name; 
    int id; 
    int age; 
};

int main()
{
    student s[3]; 
    student *p = s;
    for(int i=0; i<3; i++)
    {
        cin>>(p+i)->name; 
        cin>>(p+i)->id;
        cin>>(p+i)->age;
    }
    for(int i=0; i<3; i++)
    {
        cout<<"student name : "<<(p+i)->name<<endl;
        cout<<"student id : "<<(p+i)->id<<endl;
        cout<<"student age : "<<(p+i)->age<<endl;
    }
    return 0; 
}
