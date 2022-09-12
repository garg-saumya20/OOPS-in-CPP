// Data hiding is a fundamental concept of object-oriented programming. It restricts the access of private members from outside of the class.

// Similarly, protected members can only be accessed by derived classes and are inaccessible from outside. 


// Friend Function Like friend class, a friend function can be given a special grant to access private and protected members. A friend function can be:
// a) A member of another class
// b) A global function

// The keyword “friend” is placed only in the function declaration of the friend function and not in the function definition.

// Example:

// C++ program to demonstrate the working of friend function

#include <iostream>
using namespace std;

class Distance
{
private:
    int meter;

    // friend function
    friend int addFive(Distance);

public:
    Distance()
    {
        meter=0;
    }
};

// friend function definition
int addFive(Distance d)
{

    // accessing private members from the friend function
    d.meter += 5;
    return d.meter;
}

int main()
{
    Distance D;
    cout << "Distance: " << addFive(D);
    return 0;
}