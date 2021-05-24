#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int years;
    int salary;

    cout<<" Please enter years at company : ";
    cin>>years;

    cout <<"Please enter your current salary : ";
    cin>>salary;

    if (years>=5)
    {
    cout<<"your  salary is increased by "<<salary*0.05<<endl;
    }
    else
    {
    cout<< salary*1;
    }
    return 0;
}
