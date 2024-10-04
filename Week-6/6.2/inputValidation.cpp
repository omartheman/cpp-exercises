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

  while (true) {
    cout << "Please enter the password: "; 
    string password; 
    cin >> password;
    cin.ignore(1000, 10); 
    if (password == "password-1"){
      break; 
    }
  }

  // input values 
  int years;

  cout << "Please enter the number of years until you withdraw your investment: ";
  cin >> years; 
  cout << endl; 

  int D; //Amount deposited per month 

  cout << "Please enter the amount in dollars that you will deposit per month: "; 
  cin >> D; 
  cout << endl; 

  cout << "Please enter the annual interest rate, with any amount of decimals: ";

  double interestPercentage;
  cin >> interestPercentage;

  cout << endl; 

  double interestDecimal = interestPercentage / 100; 

  // output (calculated) values
  double p = interestDecimal / 12; // 7.5% annual interest rate 
  double T = years * 12; 
  double S = D * ((pow(1 + p, T) - 1) / p);

  // echoing input values, unformatted 
  cout << "In " << years << " years, $"; 
  cout << D << " deposited per month will grow to $"; 

  // formatting output (see 4.2) 
  cout.setf(ios::fixed|ios::showpoint);
  cout << setprecision(2); 
  cout << S << "." << endl; 

  // identifying output statements
  cout << endl; // Extra line 
  cout << "Programmer: Omar Shishani" << endl;
  cout << "Description: This program asks for a password," << endl;
  cout << " then determines the" << endl; 
  cout << " amount of money that an input monthly investment" << endl; 
  cout << " grows to after an input number of years and" << endl; 
  cout << " interest rate." << endl; 
  cout << " The input is from the console keyboard," << endl;
  cout << " and output is to the console screen." << endl;
}