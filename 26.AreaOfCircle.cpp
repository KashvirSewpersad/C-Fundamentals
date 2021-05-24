#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float radii;
    float area;

    cout<<" enter radius : ";
    cin>>radii;

    area = M_PI*pow(radii,2); // M_PI is defined in the cmath library

    cout<<"Area of circle is " <<area;
    return 0;
}
