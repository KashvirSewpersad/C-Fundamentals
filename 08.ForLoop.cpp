#include <iostream>
using namespace std;

int main()
{
    int start, end;

    cout << " enter a start value ";
    cin >> start;
    cout << " enter a end value";
    cin >> end;

    if (start < end)
    {
        for (int i = start; i <= end; i++)
        {
            cout << i << endl;
        }
    }
    else
    {
        for (int i = start; i >= end; i--)
        {
            cout << i << endl;
        }
    }

    return 0;
}
