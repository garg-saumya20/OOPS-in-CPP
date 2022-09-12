// Abstraction means displaying only essential information and hiding the details.Data abstraction refers to providing only necessary information about the outside world's data ,hiding the background details or implementation.
// Real-life example: When you send an email to someone, you just click send, and you get the success message; what happens when you click send, how data is transmitted over the network to the recipient is hidden from you (because it is irrelevant to you).

#include <iostream>
using namespace std;

class Summation
{
private:
    // private variables
    int a, b, c;

public:
    void sum(int x, int y)
    {
        a = x;
        b = y;
        c = a + b;
        cout << "Sum of the two number is : " << c << endl;
    }
};
int main()
{
    Summation s;
    s.sum(5, 4);
    return 0;
}
