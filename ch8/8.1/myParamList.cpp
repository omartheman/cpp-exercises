// Lab 4.1
// Programmer: Omar Shishani
// Editor(s) used: VSCode
// Compiler(s) used: Apple clang version 14.0.0
//

#include <iostream>
#include <string>

using namespace std; 

double calcAverage(int a, int b)
{
  double result = 0.0;
  result = (a + b) / 2.0;
  return result; 
} // calcAverage 

int main()
{
  // identifying output statements
  cout << endl; // Extra line 
  cout << "Programmer: Omar Shishani" << endl;
  cout << "Description: This program converts pounds" << endl;
  cout << " to kilograms." << endl; 
  cout << " The input is from the console keyboard," << endl;
  cout << " and output is to the console screen." << endl;

  int x = 100; 
  int y = 200; 
  double z = calcAverage(x, y); 
  cout << z << endl; 
} // main