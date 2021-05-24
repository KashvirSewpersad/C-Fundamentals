#include <iostream>
using namespace std;

int main()
{
    // NOT Truth table - Toggle Input
    cout << "NOT Logical operator" << endl;
    bool a = false;
    cout << a << " NOT -> " << !a << endl;
    a = !a;
    cout << a << " NOT -> " << !a << endl << endl;

    // OR Truth table - Add Inputs
    bool b = false, c = false;
    cout << "OR Logical operator" << endl;
    cout << b << " OR " << c << " -> " << (b || c) << endl;
    c = !c;
    cout << b << " OR " << c << " -> " << (b || c) << endl;
    b = !b;
    c = !c;
    cout << b << " OR " << c << " -> " << (b || c) << endl;
    c = !c;
    cout << b << " OR " << c << " -> " << (b || c) << endl << endl;

    // AND Truth table - Multiply Inputs
    b = false;
    c = false;
    cout << "AND Logical operator" << endl;
    cout << b << " AND " << c << " -> " << (b && c) << endl;
    c = !c;
    cout << b << " AND " << c << " -> " << (b && c) << endl;
    b = !b;
    c = !c;
    cout << b << " AND " << c << " -> " << (b && c) << endl;
    c = !c;
    cout << b << " AND " << c << " -> " << (b && c) << endl << endl;

    // XOR Truth table - Add inputs that are different.
    b = false;
    c = false;
    cout << "XOR Logical operator" << endl;
    cout << b << " AND " << c << " -> " << ((b || c) && !(b && c)) << endl;
    c = !c;
    cout << b << " AND " << c << " -> " << ((b || c) && !(b && c)) << endl;
    b = !b;
    c = !c;
    cout << b << " AND " << c << " -> " << ((b || c) && !(b && c)) << endl;
    c = !c;
    cout << b << " AND " << c << " -> " << ((b || c) && !(b && c)) << endl << endl;

    return 0;
}
