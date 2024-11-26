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

int main()
{
  // identifying output statements
  cout << "Programmer: Omar Shishani" << endl;
  cout << "Description: This program calculates the monthly" << endl;
  cout << "payment on a loan. The inputs come from the programmer and a file," << endl;
  cout << "and output is to the console screen." << endl << endl;;

  //Read from input file
  ifstream fin;   
  string fileName = "./mortgage.txt";
  fin.open(fileName.c_str());
  if (!fin.good()) throw "I/O error";

  int p;
  double r; //monthly decmial interest rate 
  double annualInterestRate; 
  int n; //Number of monthly payments
  int yearsForPayback;

  fin >> p; //Mortgage amount

  double annualInterestRatePercentage; 
  fin >> annualInterestRatePercentage; 

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

  cout << "Amount borrowed (file input) = $" << p << endl; 
  cout << "Annual interest rate (file input) = "; 
  
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
}