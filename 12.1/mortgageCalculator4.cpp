// Lab 12.1
// Programmer: Omar Shishani
// Editor(s) used: VSCode
// Compiler(s) used: Apple clang version 14.0.0
//

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <fstream>

using namespace std; 

struct Mortgage {
  int p;
  double r; //monthly decmial interest rate 
  double annualInterestRate; 
  int n; //Number of monthly payments
  int yearsForPayback;
}; //Mortgage


int main()
{
  // identifying output statements
  cout << "Programmer: Omar Shishani" << endl;
  cout << "Description: This program calculates the monthly" << endl;
  cout << "payment on a loan. The inputs come from the programmer and user," << endl;
  cout << "and output is to the console screen." << endl << endl;;

  Mortgage mort;

  cout << "Enter the mortgage amount: "; 
  cin >> mort.p; //Mortgage amount
  cout << endl; 

  cout << "Enter the interest rate percentage: "; 
  double annualInterestRatePercentage; 
  cin >> annualInterestRatePercentage; 
  cout << endl; 

  mort.annualInterestRate = annualInterestRatePercentage / 100;
  mort.yearsForPayback = 30;

  mort.n = mort.yearsForPayback * 12; //Months for payback
  mort.r =  mort.annualInterestRate / 12; //Monthly decimal interest rate

  double interestRateFactor;
  interestRateFactor = pow((1 + mort.r), mort.n);

  double monthlyPayment; 
  monthlyPayment = mort.p * interestRateFactor * mort.r / (interestRateFactor - 1);

  double annualInterestRateDisplay; 
  annualInterestRateDisplay = mort.annualInterestRate * 100; 

  cout << "Amount borrowed (file input) = $" << mort.p << endl; 
  cout << "Annual interest rate (file input) = "; 
  
  cout.setf(ios::fixed|ios::showpoint);
  cout << setprecision(3); 
  cout << annualInterestRateDisplay << "%" << endl;

  cout << "Payback period (programmer input) = ";
  cout << setprecision(0); 
  cout << mort.yearsForPayback << " Years" << endl; 

  cout << "Monthly payment (calculated output) = $";
  //Format output 
  cout.setf(ios::fixed|ios::showpoint);
  cout << setprecision(2); 
  cout << monthlyPayment << endl;
}