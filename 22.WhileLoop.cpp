#include <iostream>
using namespace std;

int main()
{
    int testvariables;
    int x = 0; // X = Counter.
    while(x <= 5)
    {
        x++;
        cout<<"enter a variable"<<endl;
        cin>>testvariables;

        if (testvariables>=80)
        {
            cout<<"your grade is an A"<<endl;
        }
        else if (testvariables>= 60 && testvariables<80)
        {
            cout<<"your grade is a B"<<endl;
        }
        else if (testvariables>=50 && testvariables<60)
        {
            cout<<" your grade is a C"<<endl;
        }
        else if (testvariables>=45 && testvariables<50)
        {
            cout<<" your grade is a D"<<endl;
        }
        else if (testvariables>=25 && testvariables<45)
        {
            cout<<"your grade is a E"<<endl;
        }
        else if (testvariables>=25 && testvariables <0)
        {
            cout<<"your grade is a F"<<endl;
        }
    }
    return 0;
 }
