#include <iostream>
using namespace std;

class Customer
{
    string name;
    int account_number, balance, age;

    public:
    Customer(string name, int account_number, int balance, int age)
    {
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
        this->age = age;
    }

    void deposit(int amount)
    {
        if (amount > 0)
        {
            balance += amount;
        }
        else
        {
            cout << "Invalid Amount\n";
        }
    }

    void withdrawal(int amount)
    {
        if (amount <= balance && amount > 0)
        {
            balance -= amount;
        }
    }

    void updateAge(int age)
    {
        if (age > 0 && age < 100)
        {
            this->age = age;
        }
        else
        {
            cout << "Invalid Age\n";
        }
    }

    void display()
    {
        cout << name << " " << account_number << " " << balance << " " << age << endl;
    }
};

int main()
{
    Customer A1("Abhishek", 1, 1000, 22);
    Customer A2("Aryan", 2, 1800, 17);
    Customer A3("Ayush", 3, 2000, 19);
    A1.updateAge(25);
    A1.display();
    A1.deposit(-100);
}