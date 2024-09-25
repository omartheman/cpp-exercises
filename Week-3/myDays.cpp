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

  int daysInLeapYear = 364; 

  int daysInNormalYear = 365; 

  int yearsSinceBirthday = 2024 - 1994; 
  cout << "yearsSinceBirthday: " << yearsSinceBirthday << endl;

  int numberDaysInFirstYear;
  int numberDaysInSeptember = 30; 
  int daysOfFirstSeptemberIWasAlive;
  int daysInFirstSepBeforeMyBirthday;

  daysInFirstSepBeforeMyBirthday = 3; 
  daysOfFirstSeptemberIWasAlive = numberDaysInSeptember - daysInFirstSepBeforeMyBirthday; 

  cout << "daysOfFirstSeptemberIWasAlive: " << daysOfFirstSeptemberIWasAlive << endl;

  int numberDaysInOctober = 31;  
  int numberDaysInNovember = 30;  
  int numberDaysInDecember = 31; 

  //Number of days I was alive in the first year of life 
  int daysInFirstYearIWasAlive = daysOfFirstSeptemberIWasAlive + numberDaysInOctober + numberDaysInNovember + numberDaysInDecember;
  cout << "daysInFirstYearIWasAlive: " << daysInFirstYearIWasAlive << endl;

  //Add to "days" the result of this multiplication: 365 times the number of years in which you've lived.
  days = days + 365 * 30; 

  //Add to "days" the number of those years that were leap years.
  days = days + leapYearsSinceBirthday; 

  //Subtract from "days" the number of days in your birth year before you were born.
  days = days - (365 - daysInFirstYearIWasAlive); 
  cout << "days in first year before i was alive " << endl << days << endl << endl;

  int daysLeftInSep = 30 - 29; 

  int daysAfterDueDate = (daysLeftInSep + 31 + 30 + 31); //Days left in sep, oct, nov, dec

  //Subtract from "days" the number of days remaining in the current year after the due date.
  days = days - daysAfterDueDate; 

  cout << "days in first year before i was alive " << endl << days << endl << endl;

  cout << "DOB: " << myDOB << endl; 
  cout << "Due: " << dueDate << endl; 
  //Output the value of "days" with an appropriate label.
  cout << "Days: " << days << endl; 

  int daysInMiddleYears = 365 * (2023 - 1995) + leapYearsSinceBirthday;
  cout << "daysInMiddleYears since i was alive (1995 - 2023), including leap years: " << endl << daysInMiddleYears << endl << endl;

  int daysIn2024; //Days in the year 2024 I have been alive 

}