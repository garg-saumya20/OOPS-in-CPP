// When a class is declared a friend class, all the member functions of the friend class become friend functions.

// Since ClassB is a friend class, we can access all members of ClassA from inside ClassB.

// Here, ClassB is a friend class of ClassA. So, ClassB has access to the members of classA.

// In ClassB, we have created a function add() that returns the sum of numA and numB.

// Since ClassB is a friend class, we can create objects of ClassA inside of ClassB.

// C++ program to demonstrate the working of friend class

#include <iostream>
using namespace std;

class ClassA
{
private:
    int numA;

    friend class ClassB;

public:
    ClassA()
    {
        numA = 12;
    }
};

class ClassB
{
private:
    int numB;

public:
    ClassB()
    {
        numB = 1;
    }

    int add()
    {
        ClassA objectA;
        return objectA.numA + numB;
    }
};

int main()
{
    ClassB objectB;
    cout << "Sum: " << objectB.add();
    return 0;
}