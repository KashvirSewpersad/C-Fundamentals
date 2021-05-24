#include <iostream>
#include <cmath>
using namespace std ;

int main()
{
    int num1;
    int num2;
    int num3;

    cout<<"Please enter 3 numbers: " <<endl;
    cin>>num1>>num2>>num3;

    if (num1>num2 && num1>num3)
    {
    cout<<"the largest is "<<num1<<endl;
    }
    if (num2>num1 && num2>num3)
    {
    cout<<"the largest is "<<num2<<endl;
    }
    if (num3>num1 && num3>num1)
    {
    cout<<"the largest is "<<num3<<endl;
    }
    if (num1<num2 && num1<num3)
    {
    cout<<"the smallest is "<<num1<<endl;
    }
    if (num2<num1 && num2<num3)
    {
    cout<<"the smallest is "<<num2<<endl;
    }
    if (num3<num1 && num3<num1)
    {
    cout<<"the smallest is "<<num3<<endl;
    }
    return 0;
}
