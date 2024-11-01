#include <iostream>
using namespace std;

class Customer
{
    string name;
    int account_number, balance;
    static int total_customer;
    static int total_balance;

    public:

    Customer(string name, int account_number, int balance)
    {
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
        total_customer++;
        total_balance += balance;
    }

    static void accessStatic()
    {
        cout<< "Total number of Customers : "<< total_customer<<endl;
        cout<<"Total Balance : "<<total_balance<<endl;
    }

    void deposit(int amount)
    {
        if(amount > 0)
        {
            balance += amount;
            total_balance += amount;
        }
    }

    void withdrawal(int amount)
    {
        if(amount <= balance && amount > 0)
        {
            balance -= amount;
            total_balance -= amount;
        }
    }

    void display()
    {
        cout << name << " " << account_number << " " << balance << " " << total_customer<< " " << total_balance<<endl;;
    }
};

int Customer::total_customer = 0;
int Customer::total_balance = 0;

int main()
{
    Customer A1("Abhishek", 1, 1000);
    // A1.display();
    Customer A2("Aryan", 2, 1800);
    //A2.display();
    Customer A3("Ayush", 3, 2000);
    //A3.display();
    A1.deposit(800);
    Customer::accessStatic();
    A2.withdrawal(500);
    Customer::accessStatic();
}