// Lab 4.3
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
  int yearsUntilIRetire = ageIRetire - currentAge;
  int D = 1500; //Amount deposited per month

  // output (calculated) values
  double annualInterestRatePercentage = 10.00;
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
  cout << " of money that will be saved after a number of years";
  cout << " from a given monthly deposit and interest rate.";
  cout << " The inputs are from the programmer," << endl;
  cout << " and output is to the console screen." << endl;
}