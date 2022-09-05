#include <iostream>
using namespace std;
int main()
{
    int n,a,b,c,d,e,new_number;
    cout<<endl<<"Enter a five-digit number ";
    cin>>n;
    e=(n%10)+1;
    d=((n/10)%10)+1;
    c=((n/100)%10)+1;
    b=((n/1000)%10)+1;
    a=(n/10000)+1;
    
    if (e==10)
       cout<<endl<<"PRINT 0 ";
    else
       cout<<endl<<"PRINT THE VALUE =" <<e ;   
    if (d==10)
       cout<<endl<<"PRINT 0 ";
    else
       cout<<endl<<"PRINT THE VALUE =" <<d ;       
    if (c==10)
       cout<<endl<<"PRINT 0 ";
    else
       cout<<endl<<"PRINT THE VALUE =" <<c ;   
    if (b==10)
       cout<<endl<<"PRINT 0 ";
    else
       cout<<endl<<"PRINT THE VALUE =" <<b ;  
    if (a==10)
       cout<<endl<<"PRINT 0 ";
    else
       cout<<endl<<"PRINT THE VALUE =" <<a ;  

    new_number= (a*10000)+(b*1000)+(c*100)+(d*10)+e;
    cout<<endl<< "NEW NUMBER IS =" <<new_number;   

   
 return 0;

}