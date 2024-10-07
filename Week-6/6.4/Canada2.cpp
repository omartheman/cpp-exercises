// Lab 5.4
// Programmer: Omar Shishani
// Editor(s) used: VSCode
// Compiler(s) used: Apple clang version 14.0.0
//

#include <iostream>
#include <iomanip> 

using namespace std; 

int main()
{
  double temperatureCelsius; 
  cout << "Please enter a temperature in degrees Celsius, with any number of decimal places: ";
  cin >> temperatureCelsius;

  double temperatureFahrenheit =  9.0/5 * temperatureCelsius + 32; 

  cout << endl; 
  cout << temperatureCelsius;
  cout.setf(ios::fixed);
  cout << setprecision(1); 
  cout << " degrees Celsius equals ";  
  cout << temperatureFahrenheit; 
  cout << " degrees Fahrenheit."; 
  cout << endl; 

  // identifying output statements
  cout << endl; 
  cout << "Programmer: Omar Shishani" << endl;
  cout << "Description: This program calculates the" << endl;
  cout << " temperature in degrees Fahrenheit based on a degrees Celsius temperature." << endl;
  cout << " The input is from the user," << endl;
  cout << " and output is to the console screen." << endl;
}