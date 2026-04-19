#include <iostream>
using namespace std;

class Customer
{
    string name;
    int *data;

public:
    // Constructor
    Customer()
    {
        cout << "Constructor is called\n";
        name = "Rohan";
        data = new int;
        *data = 10;
    }
    // Destructor
    ~Customer() // ~ is used to declare a destructor
    {
        delete data;
        cout << "Destructor is called\n";
    }
};

int main()
{
    Customer A1;
}