#include <iostream>
using namespace std;

int main()
{
    //Addition
    int a = 10 + 8;
    cout << " 10 + 8 = " << a << endl;

    // Subtraction
    int b = a - 2;
    cout << a << " - 2 = " << b << endl;

    // Multiplication
    int c = b * 5;
    cout << b << " * 5 = " << c << endl;

    // Division
    double d = (double) c / (double) a;
    cout << c << " / " << a << " = " << d << endl;
    int e = c / a;
    cout << c << " / " << a << " = " << e << endl;

    // Modulus or remainder
    int f = c % a;
    cout << c << " mod " << a << " = " << f << endl;

    // Increment
    cout << a++ << " incremented by one is " << a << endl; // post increment
    cout << ++a << " incremented by one is not " << a << endl; // pre decrement

    // Decrement
    cout << a-- << " decremented by one is " << a << endl; // post decrement
    cout << --a << " decremented by one is not " << a << endl; // pre decrement

    return 0;
}