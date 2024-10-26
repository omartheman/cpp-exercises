// Lab 8.1
// Programmer: Omar Shishani
// Editor(s) used: VSCode
// Compiler(s) used: Apple clang version 14.0.0
//

#include <iostream>
#include <string>

using namespace std; 

double calcAverage(int a, int b, int c)
{
  double result = 0.0;
  result = (a + b + c) / 3.0;
  return result; 
} // calcAverage 

int main()
{
  // identifying output statements
  cout << endl; // Extra line 
  cout << "Programmer: Omar Shishani" << endl;
  cout << "Description: This program calculates the average" << endl;
  cout << " of three input values." << endl; 
  cout << " The input is from the console keyboard," << endl;
  cout << " and output is to the console screen." << endl << endl;

  int x; 
  int y; 
  int z; 

  cout << "Enter the first value: "; 
  cin >> x; cout << endl; 

  cout << "Enter the second value: "; 
  cin >> y; cout << endl; 

  cout << "Enter the third value: "; 
  cin >> z; cout << endl; 

  double avgCalc = calcAverage(x, y, z); 
  cout << avgCalc << endl; 
} // main
