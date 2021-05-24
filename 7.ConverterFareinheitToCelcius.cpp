#include <iostream>
using namespace std;

int main()
{
    double degree_c;
    double degree_f;

    cout << "Enter temp in degree_f ";
    cin >> degree_f;
    degree_c = (degree_f - 32) * 5 /9;
    cout << degree_f << " temp in degrees " << degree_c << " degree_c" <<  endl;

    if (degree_c >= 35)
    {
        cout << "It is a bit toasty!" << endl;
    } else {
        if (degree_c <= 0)
        {
            cout << "It's freezing!" << endl;
        } else {
            if (degree_c < 20)
            {
                cout << "It is a bit chilly!" << endl;
            } else {
                cout << "Nice and comfortable temperature!" << endl;
            }
        }
    }

    return 0;
}