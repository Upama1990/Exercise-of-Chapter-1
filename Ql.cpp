#include<iostream>
using namespace std;
int main()
{
    int n1,n2,costprice_oneitem;
    cout<<endl<<"The total selling price of 15 items:";
    cin>>n1;
    cout<<endl<<"The total profit of 15 items:";
    cin>>n2;
    costprice_oneitem=(n1-n2)/15;
    cout<<endl<<"COST PRICE OF ONE ITEM="<<costprice_oneitem;

    return 0;
}