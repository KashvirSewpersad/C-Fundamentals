#include <iostream>
using namespace std;

int main()
{
    int value = 0;
    int max = 0;

    for(int i=0;i<5;i++)
    {
        cout<<"Please enter a number : ";
        cin>>value;

        if (max<value)
        {
            max=value;
        }

    }
    cout<<"The max value is : "<<max ;
    return 0;
}
