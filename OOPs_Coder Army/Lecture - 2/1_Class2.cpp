#include <bits/stdc++.h>
using namespace std;

class Customer
{
    string name;
    int account_number;
    int balance;

public:
    // Default constructor
    Customer()
    {
        name = "Rohan";
        account_number = 5;
        balance = 100000;
    }

    // Parameterized constructor
    Customer(string a, int b, int c)
    {
        name = a;
        account_number = b;
        balance = c;
    }

    // Constructor with 2 parameters
    Customer(string a, int b)
    {
        name = a;
        account_number = b;
        balance = 0;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Account Number: " << account_number << endl;
        cout << "Balance: " << balance << endl;
        cout << "----------------------" << endl;
    }
};

int main()
{
    Customer A1;                      // Default constructor
    Customer A2("Rohit", 10, 50000); // Parameterized
    Customer A3("Raj", 15, 75000);   // Parameterized

    A1.display();
    A2.display();
    A3.display();
}