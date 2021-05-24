#include <iostream>
using namespace std;

int main()
{
    int a; // normal variable declaration
    int b, c, d; // declaring them in sequence
    int f = 9, h = 15, r = 31, i; // Declaring and initializing

    double pi = 22/7;

    double volume = pi * pi * r * h; // Dynamic initialization

    cout << "Radius: " << r << endl;
    cout << "Height: " << h << endl;
    cout << "Volume: " << volume << endl;

    return 0;
}