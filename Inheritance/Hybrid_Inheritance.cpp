#include <iostream>
using namespace std;

class A
{
public:
    void func1()
    {
        cout << "func1 called" << endl;
    }
};
class B
{
public:
    void func2()
    {
        cout << "func2 called" << endl;
    }
};
class C : public A, public B
{
public:
    void func3()
    {
        cout << "func3 called" << endl;
    }
};
class D : public A
{
public:
    void func4()
    {
        cout << "func4 called" << endl;
    }
};

int main()
{
    C c;
    c.func1();
    c.func2();
    c.func3();
    D d;
    d.func1();
    d.func4();
    return 0;
}
// Hybrid inheritance is a combination of more than one type of inheritance. For example, A child and parent class relationship that follows multiple and hierarchical inheritances can be called hybrid inheritance.
