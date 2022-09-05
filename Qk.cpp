#include<iostream>
using namespace std;
int main()
{
    int n1,cnotes_10,cnotes_50,cnotes_100;
    cout<<endl<<"Enter the total amount to be withdrawn:";
    cin>>n1;
    cnotes_10=n1/10;
    cnotes_50=n1/50;
    cnotes_100=n1/100;
    cout<<endl<<"TOTAL NUMBER OF CURRENCY NOTES OF 10="<<cnotes_10;
    cout<<endl<<"TOTAL NUMBER OF CURRENCY NOTES OF 50="<<cnotes_50;
    cout<<endl<<"TOTAL NUMBER OF CURRENCY NOTES OF 100="<<cnotes_100;

    return 0;
    }