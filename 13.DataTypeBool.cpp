#include <iostream>
using namespace std;

int main()
{
    bool b;

    b = true;
    cout << "B is " << b << endl;

    b = false;
    cout << "B is " << b << endl;

    if (b) 
    {
        cout << "This is executed." << endl;
    }

    if (!b)
    {
        cout << "This is not executed." << endl;
    }

    cout << "Is 9 > 10? " << (9 > 10) << endl;

    return 0;
}