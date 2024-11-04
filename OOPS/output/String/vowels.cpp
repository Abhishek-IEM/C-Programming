#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    //cout << str;
    int count = 0, i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        count++;
        i++;
    }
    cout<<"Number of vowels is "<<count;
}