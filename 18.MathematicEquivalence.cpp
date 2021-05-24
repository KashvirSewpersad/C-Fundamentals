#include <iostream>
using namespace std;

int main()
{
    int a; // Declare variable for first user input
    int b; // Declare variable for second user input

    cout << "Enter the first number to compare: ";
    cin >> a;
    cout << "Enter the second number to compare: ";
    cin >> b;

    if (a <= b)
    {
        cout << a << " is smaller than or equal to " << b << endl;
    }
    else
    {
        cout << b << " is smaller than " << a << endl;
    }

    if (a >= b)
    {
        cout << a << " is greater than or equal to " << b << endl;
    }
    else
    {
        cout << b << " is greater than " << a << endl;
    }

    if (a != b)
    {
        cout << a << " is not equal to " << b << endl;
    } else {
        cout << a << " is equal to " << b << endl;
    }


    return 0;
}