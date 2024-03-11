#include<iostream>
#include<stack>
using namespace std;
bool isParenthesesMatch(string s) {
        if(s.length()%2!=0) return false;
        stack<char> st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{') st.push(s[i]);
            else{
                if(st.size()==0) return false;
                char c=st.top();
                if(c=='(' && s[i]!=')') return false;
                else if(c=='[' && s[i]!=']') return false;
                else if(c=='{' && s[i]!='}') return false;
                st.pop();
            }
        }
         if(st.size()==0) return true;
         else return false;
}

int main(){
    string s;
    cout<<"Enter the String:";
    cin>>s;
    cout<<isParenthesesMatch(s);
}