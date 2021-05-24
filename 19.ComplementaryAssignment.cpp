#include <iostream>
using namespace std;

// Compound assignment example.
int main()
{
    // Long way
    int i, j;
    i = 5;
    j = 7;
    i = i + j; // The compiler will run the code to the right of the equal sign first , and then store the result in the variable of the lest side of the equal sign.
    cout << 5 << " + " << j << " = " << i << endl;

    // Shortcut method.
    int k, l;
    k = 5;
    l = 7;

    k += l; // += is equivalent to the left hand variable added to itself.
    cout << 5 << " + " << l << " = " << k << endl;

    return 0;
}
