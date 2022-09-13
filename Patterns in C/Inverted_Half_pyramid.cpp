#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 5; i >= 1; i--)
    {
        for (int j = i; j >= 0; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}