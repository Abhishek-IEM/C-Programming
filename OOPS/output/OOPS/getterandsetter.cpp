#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int age, roll_no;
    string grade;
    //Function Getter and Setter
    public:
    void setname(string s)
    {
        if(s.size() == 0)
        {
            cout<<"Invalid name!";
            return;
        }
        name = s;
    } 
    void setage(int n)
    {
        age = n;
    } 
    void setroll_no(int r)
    {
        roll_no = r;
    } 
    void setgrade(string g)
    {
        grade = g;
    } 
    void getname()
    {
        cout<<name<<endl;
    }
    void getage()
    {
        cout<<age<<endl;
    }
    int getroll_no(){
        return roll_no;
    }
};

int main()
{
    Student s1;
    s1.setname("Abhishek");
    //s1.setname("");
    s1.setage(20);
    s1.setroll_no(5);
    s1.setgrade("A+");
    s1.getname();
    s1.getage();
    cout<<s1.getroll_no()<<endl;
}