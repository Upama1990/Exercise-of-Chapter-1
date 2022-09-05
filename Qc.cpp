#include<iostream>
using namespace std;

int main()
{
    int n1,n2,n3,n4,n5,aggregate;
    float percentage;

    cout<<endl<<"Enter a no:";
    cin>>n1;

    cout<<endl<<"Enter second no:";
    cin>>n2;

    cout<<endl<<"Enter third no:";
    cin>>n3;

    cout<<endl<<"Enter fourth no:";
    cin>>n4;

    cout<<endl<<"Enter fifth no:";
    cin>>n5;

    aggregate=n1+n2+n3+n4+n5;
    percentage=aggregate/100;
    cout<<endl<<"AGGREGATE ="<<aggregate;
    cout<<endl<<"PERCENTAGE ="<<percentage;

    return 0;
}