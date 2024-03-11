#include<iostream>
#include<string>
using namespace std;
void printsubset(string ans,string original,int idx){
    if(idx==original.length()){
        cout<<ans<<endl;
        return;
    }
    char ch=original[idx];
    printsubset(ans+ch,original,idx+1);
    printsubset(ans,original,idx+1);
}
int main(){
    string original="abc";
    printsubset("",original,0);
}