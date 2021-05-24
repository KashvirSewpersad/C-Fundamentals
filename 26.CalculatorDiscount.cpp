#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double purchase;

    cout<<"Please enter purchase amount: ";
    cin>>purchase;

    if (purchase >= 1000)
    {
    cout<<"amount due is " <<purchase * 0.9;
    }
    else
    {
    cout<< purchase*1;
    }
    return 0;
}
