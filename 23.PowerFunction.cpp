#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float hyp;
    float vert, hor;

    cout << "Vertical side: ";
    cin >> vert;

    cout << "Horizontal side: ";
    cin >> hor;

    hyp = sqrt(pow(vert,2) + pow(hor,2)); // Pythagorean Theorem.
    cout << "The hypotenuse is: " << hyp << endl;
    return 0;
}
