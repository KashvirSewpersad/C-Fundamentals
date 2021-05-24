#include <iostream>
using namespace std;

bool isEven(int a) // Function Decleration. Good notation says that boolean functions must start with "is" prefex.
{
    if(a%2==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
 {
    int input;
    bool result;

    while (true)
    {
        cout<<"Please enter an interger ";
        cin>>input;

        result=isEven(input); // Function Call

        if (result==true)
        {
         cout<<"it is even";
        }
        else
        {
         cout<<"it is odd";
        }
    }
    return 0;
 }
