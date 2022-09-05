#include<iostream>
using namespace std;

int main()
{
    float n1,farenheit,centigrade;
    cout<<endl<<"Enter temperature in farenheit:" ;
    cin>>n1;

    centigrade = (n1-32)*5/9;
    cout<<endl<<"CENTIGRADE="<<centigrade;

    return 0;

}
