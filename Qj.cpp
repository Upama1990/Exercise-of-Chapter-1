#include <iostream>
using namespace std;
int main()
{
    int men,literacy,lit_men,totalilit_men,women,lit_women,totalilit_women;
    men=0.52*80000;
    literacy=0.48*80000;
    lit_men=0.35*80000;
    totalilit_men=(0.52*80000)-(0.35*80000);
    women=(80000)-(0.52*80000);
    lit_women=(0.48*80000)-(0.35*80000);
    totalilit_women=women-lit_women;

    cout<<endl<<"TOTAL ILLITERATE MEN="<<totalilit_men;
    cout<<endl<<"TOTAL ILLITERATE WOMEN="<<totalilit_women;    

    return 0;
}