// Lab 10.4
// Programmer: Omar Shishani
// Editor(s) used: VSCode
// Compiler(s) used: Apple clang version 14.0.0
//

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <fstream>

using namespace std; 

int main()
{
  // identifying output statements
  cout << endl; 
  cout << "Programmer: Omar Shishani" << endl;
  cout << "Description: This program calculates the" << endl;
  cout << " distance a lighthouse can be seen based on its height." << endl;
  cout << " The input is from a file," << endl;
  cout << " and output is to the console screen." << endl;

  double lighthouseHeight; 

  //Read from input file
  ifstream fin;   
  string fileName = "./lighthouse.txt";
  fin.open(fileName.c_str());
  if (!fin.good()) throw "I/O error";  

  fin >> lighthouseHeight;

  double sightDistance; 

  //distance in miles = square root of: 0.8 times the height in feet

  sightDistance = sqrt((0.8 * lighthouseHeight)); 

  cout << endl; 
  cout << "A " << lighthouseHeight << " foot tall lighthouse can be seen from "; 

  cout.setf(ios::fixed);
  cout << setprecision(0); 
  cout << sightDistance << " miles away." << endl; 
}