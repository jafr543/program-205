#include <iostream>
#include <string>

using namespace std;

short EnterNumber(string massage)
{
short Number;
cout << massage;
cin >> Number;
return Number;
}

bool IsLeapyear(short Year)
{
    return(Year%400==0) || (Year%4==0 && Year%100!=0);
}

short daysinMonth(short month,short year)
{
    if(month<1 || month>12)
    return 0;

    short arr31[12]={31,28,31,30,31,30,31,31,30,31,30,31};

    return (month==2)? (IsLeapyear(year)? 29 : 28) : (month=arr31[month-1]);
}

short theResetofTheYear(short Day,short Month,short Year)
{

for(short i=1;i<=Month-1;i++)

{
    Day+=daysinMonth(i,Year);
}
    return Day;
}

int main()
{

short Day=EnterNumber("\nEnter Number of Day to check: ");

short Month=EnterNumber("\nEnter Number of Month to check: ");

short Year=EnterNumber("\nEnter Number of Year to check: ");

cout <<"\nNumber of Days From the Beginning of The Year: " << theResetofTheYear(Day,Month,Year);

system("pause>0");
}
