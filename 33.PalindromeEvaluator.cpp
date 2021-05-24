#include <iostream>
#include <cmath>
using namespace std;

// this program is to determin if a number is a palindrone //
int main ()
{
    int tenThousand;
    int thousand;
    int hundreds;
    int tens;
    int units;

    int input;

  while (true)
  {
        cout<<"Please enter a 5 digit number : "<<endl;
        cin>>input;

        units =input%10;
        input=input/10;

        tens=input%10;
        input=input/10;

        hundreds=input%10;
        input=input/10;

        thousand=input%10;
        input=input/10;

        tenThousand=input%10;
        input=input/10;

        if (tenThousand==units  &&thousand==tens)
        {
        cout<<"the 5 digit number is a palindrome";
        }
        else
        {
        cout<<"the 5 digit number is not a palindrome";
        }

   }
    return 0;
}
