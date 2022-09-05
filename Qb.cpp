#include<iostream>
using namespace std;

int main()
{
    int n1,meter,feet,inches,centimeters;
    cout<<endl<<"Enter a distance in km:" ;
    cin>>n1;

meter=n1*1000;
feet=n1*3280.84;
inches=n1*39370.1;
centimeters=n1*100000;

cout<<endl<<"METER ="<<meter;
cout<<endl<<"FEET ="<<feet;
cout<<endl<<"INCHES ="<<inches;
cout<<endl<<"CENTIMETERS ="<<centimeters;

return 0;
}