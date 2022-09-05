#include<iostream>
using namespace std;
int main ()
{
    int n1,n2,n3,length,breadth,radius,area_rec,perimeter_rec;
    float area_cir,circumference;
    cout<<endl<<"Enter the value of length:";
    cin>>n1;

    cout<<endl<<"Enter the value of breadth:";
    cin>>n2;

    cout<<endl<<"Enter the value of radius:";
    cin>>n3;

    area_rec=n1*n2;
    perimeter_rec=2*(n1+n2);
    area_cir=3.14*n3*n3;
    circumference=2*3.14*n3;
    cout<<endl<<"The area of rectangle="<<area_rec;
    cout<<endl<<"The perimeter of rectangle="<<perimeter_rec;
    cout<<endl<<"The area of circle="<<area_cir;
    cout<<endl<<"The circumference of circle="<<circumference;

    return 0;


    }