#include<iostream>
using namespace std;
int main()
{
    int n1,a,b,c,d,e,reverse_number,edcba;
    cout<<endl<<"Enter a five digit number:";
    cin>>n1;
    e=n1%10;
    d=(n1/10)%10;
    c=(n1/100)%10;
    b=(n1/1000)%10;
    a=(n1/10000);
    reverse_number=(e*10000)+(d*1000)+(c*100)+(b*10)+(a);
    cout<<endl<<"The reverse number is ="<<reverse_number;

    return 0;

}
