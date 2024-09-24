// Lab 5.1
// Programmer: Omar Shishani
// Editor(s) used: VSCode
// Compiler(s) used: Apple clang version 14.0.0
//

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std; 

int main()
{
  int p;
  double r; //monthly decmial interest rate 
  double annualInterestRate; 
  int n; //Number of monthly payments
  int yearsForPayback;

  cout << "Please enter mortgage amount in dollars: ";
  cin >> p; //Mortgage amount

  double annualInterestRatePercentage; 
  cout << endl; 
  cout << "Please enter the interest rate, with or without decimals." << endl; 
  cout << "You can use a rate with as many decimal places as you like:" << endl;
  cin >> annualInterestRatePercentage; 

  cout << endl; //Extra line 
  cout << "Rate parsed from input: " << annualInterestRatePercentage; 
  cout << endl;

  annualInterestRate = annualInterestRatePercentage / 100;
  yearsForPayback = 30;

  n = yearsForPayback * 12; //Months for payback
  r =  annualInterestRate / 12; //Monthly decimal interest rate

  double interestRateFactor;
  interestRateFactor = pow((1 + r), n);

  double monthlyPayment; 
  monthlyPayment = p * interestRateFactor * r / (interestRateFactor - 1);

  double annualInterestRateDisplay; 
  annualInterestRateDisplay = annualInterestRate * 100; 

  cout << "Amount borrowed (user input) = $" << p << endl; 
  cout << "Annual interest rate (user input) = "; 
  
  
  cout.setf(ios::fixed|ios::showpoint);
  cout << setprecision(3); 
  cout << annualInterestRateDisplay << "%" << endl;

  cout << "Payback period (programmer input) = ";
  cout << setprecision(0); 
  cout << yearsForPayback << " Years" << endl; 

  cout << "Monthly payment (calculated output) = $";
  //Format output 
  cout.setf(ios::fixed|ios::showpoint);
  cout << setprecision(2); 
  cout << monthlyPayment << endl;

  cout << endl; // Extra blank line
  // identifying output statements
  cout << "Programmer: Omar Shishani" << endl;
  cout << "Description: This program calculates the monthly" << endl;
  cout << "payment on a loan. The input comes from the programmer," << endl;
  cout << "and output is to the console screen." << endl;
}