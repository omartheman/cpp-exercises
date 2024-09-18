// Lab 4.1
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
  double monthlyPayment; 
  int n; //Number of monthly payments

  p = 5000; //Mortgage amount
  annualInterestRate = 0.07;
  n = 36;
  r =  annualInterestRate / 12; //Monthly decimal interest rate

  double interestRateFactor;
  interestRateFactor = pow((1 + r), n);

  monthlyPayment = p * interestRateFactor * r / (interestRateFactor - 1);

  cout << "Monthly payment (calculated output) = $" << monthlyPayment << endl; 
  //Format output 
  cout.setf(ios::fixed|ios::showpoint);
  cout << setprecision(2); 
  // identifying output statements
  cout << "Programmer: Omar Shishani" << endl;
  cout << "Description: This program converts pounds" << endl;
  cout << " to kilograms. The input is from the console keyboard," << endl;
  cout << " and output is to the console screen." << endl;
}