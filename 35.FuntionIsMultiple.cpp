#include <iostream>
#include <cmath>
using namespace std;

bool isMultiple(int a,int b) // Function decleration.
{
    if (a%b==0)
    {
        return true; // If the modulus operation returns no remainder, a is a multiple of b.
    }
    else
    {
        return false;
    }
}

int main ()
{
    int a,b;
    bool result;

    while(true)
    {
        cout<<" please enter a and b : ";
        cin>>a>>b;

        result = isMultiple(a,b); // Function Call.

        if (result==1)
        {
          cout<<"a is a multiple of b \n";
        }
        else
        {
          cout<<"a is not a multiple of b \n";
        }
    }
    return 0;
}
