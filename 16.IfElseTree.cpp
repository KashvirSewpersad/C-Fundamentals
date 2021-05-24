#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int b = 10;
    
    if (a > b) 
    {
        cout << a << " is greater than " << b << endl;
    } else {
        cout << b << " is greater than " << a << endl;
    }

    if (a <= b)
    {
        cout << a << " is smaller than " << b << endl;
    } else {
        cout << b << " is smaller than " << a << endl;
    }

    if (a != b)
    {
        cout << a << " is not equal to " << b << endl;
    } else {
         cout << a << " is equal to " << b << endl;
    }

    return 0;
}