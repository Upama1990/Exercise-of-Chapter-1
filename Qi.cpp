#include<iostream>
using namespace std;
int main ()
{
    int n1,a,d,sum;
cout<<endl<<"Enter a four digit number:";
cin>>n1;

d=n1%10;
a=(n1/1000);
sum=a+d;
cout<<endl<<"The sum of the digits="<<sum;

return 0;
}