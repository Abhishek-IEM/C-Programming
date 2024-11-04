#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    cout<<"Enter the size of string: ";
    cin>>n;

    string s;
    cout<<"Enter string: ";
    cin>>s;

    for(int i=0;i<n;i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        {
            count=0;
            continue;
        }
        else{
            count++;
            if(count==4) break;
        }
    }
    if(count<4) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}