#include <iostream>
using namespace std;

class A
{
public:
    void func1()
    {
        cout << "Func1 called" << endl;
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
class C : public B
{
    public:
    void func3()
    {
        cout << "func3 called" << endl;
    }
};

int main()
{
    B b;
    b.func1();
    b.func2();
    C c;
    c.func1();
    c.func2();
    c.func3();
    return 0;

}
// When a class inherits from a derived class, and the derived class becomes the base class of the new class, it is called multilevel inheritance. In multilevel inheritance, there is more than one level.