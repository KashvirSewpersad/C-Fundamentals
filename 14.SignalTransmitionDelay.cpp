#include <iostream>
using namespace std;

/* This program will calculate the time delay that it will take a 
    radio signal from earth to reach Mars */

int main()
{
    double speed_l = 1080000000;   // Speed of light in km/h
    double distance_m = 241580000; // Current distance to Mars

    double delay = distance_m / speed_l * 3600;
    double delay_min = distance_m / speed_l * 60;

    cout << "delay to mars" << delay << " in seconds " << endl;
    cout << " delay to mars" << delay_min << " in min " << endl;

    cout << " This should\b\b\b\b\b\bwill be printed." << endl;

    return 0;
}