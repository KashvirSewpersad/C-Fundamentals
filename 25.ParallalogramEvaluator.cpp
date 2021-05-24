#include <iostream>
#include <cmath>
using namespace std;

int main()
{
// Program to check if a parallelogram is a square or rectangle.
    float length;// enter the length
    float breath;// enter the breath

    cout << "length side: ";
    cin >> length;

    cout << "breath  side: ";
    cin >> breath;

    if(length==breath)
    {
        cout<<"it is a square "<<endl;
    }
    else if (length != breath)
    {
       cout<< "it is a rectangle"<<endl;
    }
    return 0;
}
