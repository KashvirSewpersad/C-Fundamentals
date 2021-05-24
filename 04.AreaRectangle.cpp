#include <iostream>
using namespace std;

int main()
{
    double length,width;

    cout<< "enter width";
    cin>> width;
    cout<< "enter length";
    cin >> length;

    cout<< "entered width: " << width << "\n"; // \n is a new line operator.
    cout<< "entered length: "<< length << endl<<endl;
    cout<< "calculated surface area : " << width*length<<endl; // This outputs the area of an rectangle or square.

    return 0;
}
