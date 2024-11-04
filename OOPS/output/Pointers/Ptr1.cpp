#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int *ptr = &a;
    cout << ptr << endl;  // Address of a
    cout << *ptr << endl; // Value of a
    int b = 20;
    ptr = &b;
    cout << ptr << endl;  // Address of b
    cout << *ptr << endl; // Value of b = 20
    b = 30;
    cout << *ptr << endl; // Value of b becomes 30
}