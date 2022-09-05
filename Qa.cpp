#include<iostream>
using namespace std;

int main()
{
    float basic_salary, daily_allowance, house_rent, gross_salary;
    cout<<endl<<"Enter basic salary";
    cin>>basic_salary;
    daily_allowance = 0.4 * basic_salary;
    house_rent = 0.2 * basic_salary;

    gross_salary = basic_salary + daily_allowance + house_rent;
    cout<<endl<<"GROSS SALARY ="<<gross_salary;

    return 0;
}