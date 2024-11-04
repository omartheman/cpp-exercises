// Lab 5.5
// Programmer: Omar Shishani
// Editor(s) used: VSCode
// Compiler(s) used: Apple clang version 14.0.0
//

#include <iostream>
#include <iomanip>
#include <string>

using namespace std; 

#include <cmath> 

int main()
{

  //input values 
  int ageIRetire = 50; 
  int currentAge = 30; 
  
  int yearsUntilIRetire;
  cout << "Please enter the number of years until retirement: ";
  cin >> yearsUntilIRetire; 

  // output (calculated) values
  double annualInterestRatePercentage;

  cout << "Please enter the annual interest rate percentage, with any number of decimal places: "; 
  cin >> annualInterestRatePercentage;

  int D;
  cout << "Please enter the dollar amount that will be deposited each month: "; 
  cin >> D;  //Amount deposited per month

  double annualInterestRate = annualInterestRatePercentage / 100; //annual interest rate 
  double p = annualInterestRate / 12; 
  double T = yearsUntilIRetire * 12; 
  double S = D * ((pow(1 + p, T) - 1) / p);

  // echoing input values, unformatted 
  cout << "In " << yearsUntilIRetire << " years, ";
  cout.setf(ios::fixed|ios::showpoint);
  cout << setprecision(2); 
  cout << "and at " << annualInterestRatePercentage << "% interest, "; 
  cout << "$" << D << " deposited per month will grow to $"; 

  // formatting output (see 4.2) 
  cout << S << "." << endl; 

  // identifying output statements
  cout << endl; // Extra line
  cout << "Programmer: Omar Shishani" << endl;
  cout << "Description: This program calculates the amount" << endl;
  cout << " of money that will be saved after a number of years" << endl;
  cout << " from a given monthly deposit and interest rate." << endl;
  cout << " The inputs are from the user," << endl;
  cout << " and output is to the console screen." << endl;
}