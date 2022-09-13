// In this example, we have 3 variables “a1”, “a2” and “a3” of type “class A”. Here we are trying to add two objects “a1” and “a2”, which are of user-defined type i.e. of type “class A” using the “+” operator. This is not allowed, because the addition operator “+” is predefined to operate only on built-in data types. But here, “class A” is a user-defined type, so the compiler generates an error. This is where the concept of “Operator overloading” comes in. 
// Now, if the user wants to make the operator “+” to add two class objects, the user has to redefine the meaning of the “+” operator such that it adds two class objects. This is done by using the concept “Operator overloading”. So the main idea behind “Operator overloading” is to use c++ operators with class variables or class objects. Redefining the meaning of operators really does not change their original meaning; instead, they have been given additional meaning along with their existing ones.


// Almost all operators can be overloaded except a few. 

// We can overload:
// Unary operators
// Binary operators
// Following is the list of operators that cannot be overloaded. 
// sizeof
// typeid
// Scope resolution (::)
// Class member access operators (.(dot), .* (pointer to member operator))
// Ternary or conditional (?:)

#include<iostream>
using namespace std;

class Complex {
private:
 int real, imag;
public:
 Complex(int r = 0, int i = 0) {real = r; imag = i;}
 
 // This is automatically called when '+' is used with
 // between two Complex objects
 Complex operator + (Complex  &obj) {
  Complex res;
  res.real = real + obj.real;
  res.imag = imag + obj.imag;
  return res;
 }
 void print() { cout << real << " + i" << imag << '\n'; }
};

int main()
{
 Complex c1(10, 5), c2(2, 4);
 Complex c3 = c1 + c2;
 c3.print();
}
