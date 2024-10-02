// Lab 6.2
// Programmer: Omar Shishani
// Editor(s) used: VSCode
// Compiler(s) used: Apple clang version 14.0.0
//
#include <iomanip>
#include <iostream>
#include <string>
#include <cmath> 
using namespace std; 

int main()
{
  // input values 
  int years = 10;
  int D = 100; 

  // output (calculated) values
  double p = 0.075 / 12; // 7.5% annual interest rate 
  double T = years * 12; 
  double S = D * ((pow(1 + p, T) - 1) / p);

  // echoing input values, unformatted 
  cout << "In " << years << " years, $"; 
  cout << D << " deposited per month will grow to $"; 

  // formatting output (see 4.2) 
  cout.setf(ious::fixed|ios::showpoint);
  cout << setprecision(2); 
  cout << S << "." << endl; 

  // identifying output statements
  cout << endl; // Extra line 
  cout << "Programmer: Omar Shishani" << endl;
  cout << "Description: This program converts pounds" << endl;
  cout << " to kilograms." << endl; 
  cout << " The input is from the console keyboard," << endl;
  cout << " and output is to the console screen." << endl;
}