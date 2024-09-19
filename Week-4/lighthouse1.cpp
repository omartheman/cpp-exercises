// Lab 4.2
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

  int lighthouseHeight; 
  lighthouseHeight = 220; 

  int sightDistance; 

  //distance in miles = square root of: 0.8 times the height in feet

  sightDistance = sqrt((double)(0.8 * lighthouseHeight)); 
  cout.setf(ios::fixed|ios::showpoint);
  cout << setprecision(3); 
  cout << (double)sightDistance << endl; ;

  cout << "A " << lighthouseHeight << " foot tall lighthouse can be seen from " << sightDistance << " feet away." << endl; 

  // identifying output statements
  cout << endl; 
  cout << "Programmer: Omar Shishani" << endl;
  cout << "Description: This program converts pounds" << endl;
  cout << " to kilograms. The input is from the console keyboard," << endl;
  cout << " and output is to the console screen." << endl;
}