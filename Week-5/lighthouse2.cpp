// Lab 5.2
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
  double lighthouseHeight; 

  cout << "Please enter the height of the lighthouse (in feet), with any number of decimals: ";
  cin >> lighthouseHeight; 

  double sightDistance; 

  //distance in miles = square root of: 0.8 times the height in feet

  sightDistance = sqrt((0.8 * lighthouseHeight)); 

  cout << endl; 
  cout << "A " << lighthouseHeight << " foot tall lighthouse can be seen from "; 

  cout.setf(ios::fixed);
  cout << setprecision(0); 
  cout << sightDistance << " miles away." << endl; 

  // identifying output statements
  cout << endl; 
  cout << "Programmer: Omar Shishani" << endl;
  cout << "Description: This program calculates the" << endl;
  cout << " distance a lighthouse can be seen based on its height." << endl;
  cout << " The input is from the user," << endl;
  cout << " and output is to the console screen." << endl;
}