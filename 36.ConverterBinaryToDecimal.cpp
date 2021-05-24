#include <iostream>
#include <cmath>
using namespace std;

int binarytodecimal(int a,int b,int c,int d);//function prototype - we telling compiler that we making a functions below with this name

int main()
{
    int units;
    int tens;
    int hundreds;
    int thousands;
    int output;
    int input;
    int copyInput;//copy of original variable

    cout<<"please enter 4 digit non 0 binary number : ";
    cin>>input;
    if(input==0)
    {
        cout<<"incorrect input";
        return -1;//if the user enters an impermissible number theprogram will end and return -1 as the code
    }


    copyInput=input;//creating  copy of original input

//spliting the binary number
    units=copyInput%10;
    tens=copyInput/10%10;
    hundreds=copyInput/100%10;
    thousands=copyInput/1000%10;

//print it in the terminal for varifying the spliting process
    cout<<"units "<<units<<endl;
    cout<<"tens "<<tens<<endl;
    cout<<"hundreds "<<hundreds<<endl;
    cout<<"thousands "<<thousands<<endl;

// performing the conversion
    output=binarytodecimal(thousands,hundreds,tens,units);//call code inside the function

//print result
    cout<<"The binary number "<<input<<" is equal to "<<output;
    return 0;//if the program runs correctly it will return a 0 as the code
}

int binarytodecimal(int a,int b,int c,int d) //function implementation
{
    int decimal = 0 ; //intializing variable
    decimal = (a*pow(2,3))+(b*pow(2,2))+(c*pow(2,1))+(d*pow(2,0));
    cout<<"decimal"<< decimal << endl;
    return decimal;
}


