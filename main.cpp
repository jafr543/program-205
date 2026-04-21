#include <iostream>
#include <string>

using namespace std;

short EnterNumber()
{
short Number;
cout << "\n\nPleas Enter your Number: ";
cin >> Number;
return Number;
}


bool IsLeapyear(short Year)
{
    if(Year%400==0 ||(Year%4==0 && Year%100!=0))
    {

        return true;
    }

    else
        {
        return false;
        }
}

int main()
{
    short Year=EnterNumber();

if(IsLeapyear(Year))
{
  cout << "\nYes: Year [" << Year << "] is a Leap Year";
}
else
{
    cout << "\nNo:Year [" << Year << "] is NOT a Leap Year";
}
}
