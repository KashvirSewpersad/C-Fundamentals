#include <iostream>
using namespace std;

int main()
{
    double gallons, miles, average;  //double used because input may have decimals.

    cout<<" enter gallons used " ;
    cin>> gallons;

    cout<< "enter miles covered " ;
    cin>> miles;

    average=miles/gallons;
    cout<<"miles" << "/" << "gallons= " << average << endl;

    return 0;
}
