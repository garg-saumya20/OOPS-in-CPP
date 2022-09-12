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
class B : public A
{
    public:
    void func2()
    {
        cout << "func2 called" << endl;
    }
};

class C : public A
{
    public:
    void func3()
    {
        cout << "func3 called" << endl;
    }
};

int main()
{
    A a;
    a.func1();
    B b;
    b.func1();
    b.func2();
    C c;
    c.func1();
    c.func3();

}