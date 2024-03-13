#include <iostream>
using namespace std;
void print(int N)
{
    if (N == 0) return;
    print(N - 1);
    cout<<N<<endl;
}

int main()
{
    int num;
    cout << "Enter the number" << endl;
    cin >> num;
    print(num);
}