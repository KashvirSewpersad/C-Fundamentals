#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  float miles;
  float costG;
  float averageMPG;
  float parking;
  float toll;
  float total;

  cout<<"Please enter your miles coverd : ";
  cin>>miles;

  cout<<"Please enter the fuel price : ";
  cin>>costG;

  cout<<"Please enter the average fuel consuption : ";
  cin>>averageMPG;

  cout<<"Please enter any parking fees : ";
  cin>>parking;

  cout<<"Please enter any toll fees : ";
  cin>>toll;
   
    total=miles*averageMPG*costG+parking+toll;

    cout<<"the daily total is : "<<total<< endl;

    return 0;
}