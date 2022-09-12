#include <iostream>
using namespace std;

class Encapsulation
{
    int x;

public:
    void set(int a)
    {
        x = a;
    }
    int get()
    {
        return x;
    }
};

int main()
{
    Encapsulation e;
    e.set(5);
    cout << e.get();
    return 0;
}

// In the above program the variable x is made private. This variable can be accessed and manipulated only using the functions get() and set() which are present inside the class. Thus we can say that here, the variable x and the functions get() and set() are binded together which is nothing but encapsulation.


// Encapsulation can also be defined in two different ways:

// 1) Data hiding: Encapsulation is the process of hiding unwanted information, such as restricting access to any member of an object.

// 2) Data binding: Encapsulation is the process of binding the data members and the methods together as a whole, as a class    