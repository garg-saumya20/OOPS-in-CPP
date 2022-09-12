#include <iostream>
using namespace std;

class A
{
public:
    void func_A()
    {
        cout << "Function A called" << endl;
    }
};
class B
{
public:
    void func_B()
    {
        cout << "Function B called" << endl;
    }
};
class C : public A, public B
{
public:
    void func_C()
    {
        cout << "Function C called" << endl;
    }
};

int main()
{
    C c;
    c.func_A();
    c.func_B();
    c.func_C();
    return 0;
}
// In multiple inheritance, a class can inherit more than one class. This means that in this type of inheritance, a single child class can have multiple parent classes.