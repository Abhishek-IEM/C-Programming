#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int n=s.length();
    string temp;
    for(int i=0;i<n;i++){
        if(s[i]!=s[n-i-1]){
            temp+=s[i];
        }
    }
    cout<<temp;
}
