#include <iostream>
using namespace std;

class Customer
{
    string name;
    int account_number;
    int balance;

public:
    // Default Constructor
    Customer()
    {
        name = "Abhishek";
        account_number = 12345;
        balance = 1000;
    }
    //Parameterized Constructor

    // Customer(string a, int b, int c)
    // {
    //     name = a;
    //     account_number = b;
    //     balance = c;
    // }

    Customer(string name, int account_number, int balance)
    {
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
    }

    //Constructor Overloading
    Customer(string a, int b)
    {
        name = a;
        account_number = b;
        balance = 50;
    }

    //Inline Constructor
    // inline Customer(string a, int b, int c) : name(a), account_number(b), balance(c){

    // }

    //Copy Constructor
    Customer(Customer &B)
    {
        name = B.name;
        account_number = B.account_number;
        balance = B.balance;
    }

    void display()
    {
        cout << name << " " << account_number << " " << balance << endl;
    }
};

int main()
{
    Customer A1;
    A1.display();
    Customer A2("Rohit", 56789, 2000);
    A2.display();
    Customer A3("Aryan", 23678);
    A3.display();
    Customer A4(A3);
    A4.display();
    Customer A5;
    A5 = A3;
    A5.display();
    return 0;
}