#include <iostream>
#include <string>
#include <cmath>

using namespace std; 

int main()
{
  string myDOB;
  myDOB = "Sep 4, 1994";

  string dueDate;
  dueDate = "Sep 29, 2024";

  int days = 0;

  int leapYearsSinceBirthday;
  leapYearsSinceBirthday = 7; //1994 was not a leap year. 2024 is a leap year, but the last day of the year is excluded from the end of the year, so this one is not counted.  

  int numberDaysInFirstYear;
  int numberDaysInSeptember = 30; 
  int daysOfFirstSeptemberIWasAlive;
  int daysInFirstSepBeforeMyBirthday;

  daysInFirstSepBeforeMyBirthday = 3; 
  daysOfFirstSeptemberIWasAlive = numberDaysInSeptember - daysInFirstSepBeforeMyBirthday; //27 days 

  // cout << "daysOfFirstSeptemberIWasAlive: " << daysOfFirstSeptemberIWasAlive << endl;

  int numberDaysInOctober = 31;  
  int numberDaysInNovember = 30;  
  int numberDaysInDecember = 31; 

  //Number of days I was alive in the first year of life 
  int daysInFirstYearIWasAlive = daysOfFirstSeptemberIWasAlive + numberDaysInOctober + numberDaysInNovember + numberDaysInDecember;
  
  // cout << "daysInFirstYearIWasAlive: " << daysInFirstYearIWasAlive << endl;

  //Add number of days in the years 1995 - 2024
  days = days + 365 * 29; 

  //Add to "days" the number of leap years in the 30 years you've been alive.
  days = days + leapYearsSinceBirthday; 

  //Add the number of days I was alive in 1994
  days = days + daysInFirstYearIWasAlive;

  int daysLeftInSep = 30 - 29; 

  int daysAfterDueDate = (daysLeftInSep + 31 + 30 + 32); //Days left in sep, oct, nov, dec (leap)

  //Add the number of days in 2024 up to Sep 28
  int daysIn2024; 
  daysIn2024 = 366 - daysAfterDueDate; 
  days = days + daysIn2024; 

  cout << "DOB: " << myDOB << endl; 
  cout << "Due: " << dueDate << endl; 
  //Output the value of "days" with an appropriate label.
  cout << "Days: " << days << endl; 

}