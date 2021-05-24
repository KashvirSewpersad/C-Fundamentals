#include <iostream>
#include <cmath>
using namespace std;

// this program shall work as a BMI calculator//

int main()
{
    float weight; //weight in kgs
    float height; //hight in meters
    float BMI;

    cout<<"Please enter your weight in KG's : ";
    cin>>weight;

    cout<<"Please enter your height in M : ";
    cin>>height;

    BMI=weight/height*height;

    if (BMI<18.5)
    {
    cout<<"you're underweight , get a bag of chips ";
    }
    else if (BMI>=18.5 && BMI<24.9 )
    {
    cout<<"You're in the green , keep up the good work ";
    }
    else if (BMI>=25 && BMI<29.9 )
    {
    cout<<"You're overweight fatty , stop messing around ";
    }
    else if (BMI>=30)
    {
    cout<<"You're obese ,lay off the chips ";
    }
    return 0;
}
