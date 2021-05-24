#include <iostream>
using namespace std;

int main()
{
    char a = 'a'; // A char variable can store a number or a letter. This means that every char value has a numeric value.
                  // The numeric value is specified on the Ascii table.

    cout << a << endl; // This line will print out the letter 'a'.
    cout << char(a + 1) << endl; // This line will take the Ascii equivalent of a and add 1 to the value.

    //The first cout will return a string and the second cout will return an integer.
    return 0;
}
