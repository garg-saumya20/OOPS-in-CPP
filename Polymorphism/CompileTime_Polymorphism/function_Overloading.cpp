//  Function overloading:
//   When there are multiple functions in a class with the same name but different parameters, these functions are overloaded. The main advantage of function overloading is it increases the readability of the program. Functions can be overloaded by using different numbers of arguments and by using different types of arguments.

// i) Function overloading with different numbers of arguments:

#include <iostream>
using namespace std;

class ABC
{
public:
    int add(int num1, int num2)
    {
        return num1 + num2;
    }
    int add(int num1, int num2, int num3)
    {
        return num1 + num2 + num3;
    }
};
int main()
{
    ABC a;
    cout << a.add(10, 20) << endl;
    cout << a.add(10, 20, 30);
    return 0;
}

// ii) Function overloading with different types of arguments:

#include <iostream>
using namespace std;

class ABC
{
public:
    int add(int num1, int num2)
    {
        return num1 + num2;
    }
    double add(double num1, double num2)
    {
        return num1 + num2;
    }
};
int main(void)
{
    ABC a;
    cout << a.add(10, 20) << endl;
    cout << a.add(10.4, 20.5);
    return 0;
}