#include<iostream>
using namespace std;
int main ()
{
    int n1,a,b,c,d,e,sum;
cout<<endl<<"Enter a five digit number:";
cin>>n1;

e=n1%10;
d=(n1/10)%10;
c=(n1/100)%10;
b=(n1/1000)%10;
a=(n1/10000);
sum=a+b+c+d+e;
cout<<endl<<"The sum of the digits="<<sum;

return 0;
}
