// Lab 8.4
// Programmer: Omar Shishani
// Editor(s) used: VSCode
// Compiler(s) used: Apple clang version 14.0.0
//

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std; 

bool passwordChecker(){

  string correctPassword = "pwsafe";

  for (int i = 0; i < 3; i++){
    //Prompt user to enter password 
    cout << "Please enter password: ";

    string passwordAttempt; 
    cin >> passwordAttempt; 

    if (passwordAttempt == correctPassword){
      cout << "Password correct!" << endl;
      return true;
    }
    else {
      cout << "Invalid password" << endl; 
    }
  }

  cout << "Max attempts reached for password input." << endl; 
  return false; 
}

int main()
{
  cout << endl; // Extra blank line
  // identifying output statements
  cout << "Programmer: Omar Shishani" << endl;
  cout << "Description: This program calculates the monthly" << endl;
  cout << " payment on a loan." << endl; 
  cout << " The program requires the user to " << endl; 
  cout << " enter a password, and gives the user 3 tries to" << endl; 
  cout << " enter the correct password." << endl; 
  cout << " The inputs come from the user and the programmer," << endl;
  cout << " and output is to the console screen." << endl << endl; 

  if (passwordChecker() == false) { //If password is incorrect, exit mortgage function
    return 0; //Exit function
  }

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