#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number : ";
    cin >> num;
    int ans = 0, rem, mul = 1;

    while (num > 0)
    {
        rem = num % 8;
        num /= 8;
        ans += rem * mul;
        mul *= 10;
    }
    cout << ans << endl;
}