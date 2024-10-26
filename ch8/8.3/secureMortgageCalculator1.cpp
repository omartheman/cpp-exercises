// Lab 8.3
// Programmer: Omar Shishani
// Editor(s) used: VSCode
// Compiler(s) used: Apple clang version 14.0.0
//

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std; 

int passwordChecker(){

  string correctPassword = "pwsafe";

  while (true){
    //Prompt user to enter password 
    cout << "Please enter password: ";

    string passwordAttempt; 
    cin >> passwordAttempt; 

    if (passwordAttempt == correctPassword){
      cout << "Password correct!" << endl; 
      break;
    }
    else {
      cout << "Invalid password" << endl; 
    }
  }
}

int main()
{
  cout << endl; // Extra blank line
  // identifying output statements
  cout << "Programmer: Omar Shishani" << endl;
  cout << "Description: This program calculates the monthly" << endl;
  cout << " payment on a loan." << endl; 
  cout << " The program requires the user to " << endl; 
  cout << " enter a password." << endl; 
  cout << " The inputs come from the user and the programmer," << endl;
  cout << " and output is to the console screen." << endl << endl; 

  passwordChecker();

  int p;
  double r; //monthly decmial interest rate 
  double annualInterestRate; 
  int n; //Number of monthly payments
  int yearsForPayback;

  cout << "Please enter mortgage amount in dollars: ";
  cin >> p; //Mortgage amount

  double annualInterestRatePercentage; 
  cout << endl; 
  cout << "Please enter the interest rate as a percentage number." << endl; 
  cout << "You can use as many decimal places as you like:" << endl;
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
}