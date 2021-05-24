#include <iostream>
using namespace std;

// The ascii table is a way for computers to assign a numerical value to all the keys on a keyboard & some special abbreviations.

int main()
{
    for(char ch = 'A'; ch <= 'Z'; ch++) // This line is equivalent to for(int ch=65; ch<=90;ch++)
    //The for loop will run from 65 to 90 ussing ascii values.
    {
        cout << ch << endl; //Because the variable is a char , it will print out the ascii equivalent.
    }
    return 0;
}
