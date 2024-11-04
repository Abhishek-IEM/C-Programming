#include <iostream>
using namespace std;
void print(int N)
{
    if (N == 0) return;
    cout<<N<<endl;
    print(N - 1);
}

int main()
{
    int num;
    cout << "Enter the number" << endl;
    cin >> num;
    print(num);
}