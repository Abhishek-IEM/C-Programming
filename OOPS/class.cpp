#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int age, roll_no;
    string grade;
};

int main()
{
    Student s1;
    s1.name = "Abhishek";
    s1.age = 20;
    s1.roll_no = 5;
    s1.grade = "A+";

    cout << s1.name << " "<<s1.age<<" ";

    Student s2;
    s2.name = "Rohit";
    s2.age = 18;
    s2.roll_no = 9;
    s2.grade = "B+";

    cout << s2.name << " "<<s2.roll_no<<" ";
}