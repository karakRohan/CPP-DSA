#include <iostream>
using namespace std;

class Person
{
protected:
    string name;

public:
    void introduce()
    {
        cout << "Hello my name is: " << name << endl;
    }
};

class Employee : public Person // Derived class of Person
{
protected:
    int salary;

public:
    void monthly_salary()
    {
        cout << "My Monthly salary is: " << salary << endl;
    }
};

class Manager : public Employee // Derived class of Employee and Grandchild of Person
{
public:
    string department;

    Manager(string name, int salary, string department)
    {
        this->name = name;
        this->salary = salary;
        this->department = department;
    }

    void work()
    {
        cout << "I am leading the department: " << department << endl;
    }
};

int main()
{
    Manager A1("Rohan", 350000, "SDE III ");
    A1.introduce();
    A1.monthly_salary();
    A1.work();

    return 0;
}