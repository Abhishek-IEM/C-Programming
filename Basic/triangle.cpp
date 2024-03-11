#include<iostream>
using namespace std;
int main()
{
    int s1,s2,s3;
    cout<<"Enter the three sides of a triangle:"<<endl;
    cin>>s1>>s2>>s3;

    if((s1==s2)&&(s2==s3)&&(s3==s1))
    {
        cout<<"Equilateral Triangle";
    } 
    else if((s1!=s2)&&(s2!=s3)&&(s3!=s1))
    {
        cout<<"Scalene Triangle";
    } 
    else
    {
        cout<<"Isosceles Triangle";
    }
    return 0;
}
