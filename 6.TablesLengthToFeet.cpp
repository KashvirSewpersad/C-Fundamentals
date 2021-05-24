       #include <iostream>
using namespace std;

int main()
{
    double foot_ft;
    double meters_m;

    int counter = 0;

    for (foot_ft = 1; foot_ft <= 100; foot_ft++)
    {
        counter++;
        meters_m = foot_ft / 3.28;

        cout << foot_ft << " feet in meters is " << meters_m << " meters" << endl;

        if (counter == 10)
        {
            cout << endl;
            counter = 0;
        }
    }
 
    return 0;
}
