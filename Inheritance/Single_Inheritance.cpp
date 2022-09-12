#include <iostream>
using namespace std;

class A
{
public:
    void func_A()
    {
        cout << "Function A called" << endl;
    }

protected:
    int x;
};

class B : public A
{
public:
    void func_B()
    {
        cout << "Function B called" << endl;
    }
    void set(int a)
    {
        x = a;
    }
    void display()
    {
        cout << x << endl;
    }
};

int main()
{
    B b;
    b.func_A();
    b.func_B();
    b.set(5);
    b.display();
    return 0;
}

// In single inheritance, one class can extend the functionality of another class. In single inheritance, there is only one parent class and one child class.