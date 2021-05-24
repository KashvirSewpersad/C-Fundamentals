#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double Principal;//   original principal
    double IntRate;//     interest rate i.e 0.075
    double PayPerYear;//  number of payments per year
    double NumYears;//    number of years
    double Payment;//    the regular payments
    double number, denom;//temporary work variables
    double b, e;//        base and exponent for call to pow()



    cout << " Enter principal :  ";
    cin >> Principal;

    cout << "Enter intrest rate (i.e 0.075)  :  ";
    cin >> IntRate;

    cout << "Enter number of payments per year :  ";
    cin >> PayPerYear;

    cout << "Enter number of years :  ";
    cin >> NumYears;

    number = IntRate * Principal / PayPerYear;

    e =-(PayPerYear * NumYears);
    b =(IntRate / PayPerYear) +1;

    denom = 1 - pow(b,e);

    Payment = number / denom;

    cout<< "Payment is " << Payment ;

    return 0;
}
