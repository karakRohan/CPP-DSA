#include <iostream>
using namespace std;

class Human
{
private:
    int a;

protected:
    int b;

public:
    int c;

    void func()
    {
        a = 10;
        b = 20;
        c = 30;
    }
};

int main()
{
    Human Rohit;
    Human Rohan;
    Rohan.c = 10;
    Rohit.func();
} 