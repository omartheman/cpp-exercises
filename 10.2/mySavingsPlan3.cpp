// Lab 5.5
// Programmer: Omar Shishani
// Editor(s) used: VSCode
// Compiler(s) used: Apple clang version 14.0.0
//

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream> 

using namespace std; 

#include <cmath> 

int main()
{
  // identifying output statements
  cout << "Programmer: Omar Shishani" << endl;
  cout << "Description: This program calculates the amount" << endl;
  cout << " of money that will be saved after a number of years" << endl;
  cout << " from a given monthly deposit and interest rate." << endl;
  cout << " The inputs are from a file," << endl;
  cout << " and output is to the console screen." << endl << endl;

  ifstream fin;   
  string fileName = "./savings.txt";
  fin.open(fileName.c_str());
  if (!fin.good()) throw "I/O error";  

  //input values 
  int ageIRetire = 50; 
  int currentAge = 30; 
  
  int yearsUntilIRetire;
  fin >> yearsUntilIRetire; cout << endl;  
  cout << "Years until retirement from file: " << yearsUntilIRetire << endl; 

  // output (calculated) values
  double annualInterestRatePercentage;

  fin >> annualInterestRatePercentage;
  cout << "Annual interest rate from file: " << annualInterestRatePercentage << "%" << endl; 

  int D;
  fin >> D;  //Amount deposited per month
  cout << "Amount deposited per month from file: $" << D << endl; 

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
}