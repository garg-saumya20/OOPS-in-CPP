// Method Overriding:
// It is the redefinition of base class function in its derived class with same signature i.e return type and parameters.
// Overriding occurs with inheritance only

#include <iostream>
using namespace std;

class Parent
{
public:
    void show()
    {
        cout << "show in parent hahaha" << endl;
    }
};
class child: public Parent
{
public:
    void show()
    {
        cout << "show in child hahaha" << endl;
    }
};

int main()
{
    child c;
    c.show();
    Parent p;
    p.show();
    return 0;
}
