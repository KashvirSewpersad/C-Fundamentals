#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float radius;
    float length;
    float volume;

    cout<<"Please enter radius in mm : ";
    cin>>radius;

    cout<<"Please enter a length in mm : ";
    cin>>length;

    volume =  M_PI*pow(radius,2)*length;

    cout<<"Volume of circle  is "<<volume;

    return 0;
}
