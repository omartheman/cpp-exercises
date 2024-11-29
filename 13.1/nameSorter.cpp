// Lab 13.1
// Programmer: Omar Shishani
// Editor(s) used: VSCode
// Compiler(s) used: Apple clang version 14.0.0
//

#include <iostream>
#include <string>
#include <fstream> 

using namespace std; 

int main()
{
  // identifying output statements
  cout << "Programmer: Omar Shishani" << endl;
  cout << "Description: This program converts pounds" << endl;
  cout << " to kilograms." << endl; 
  cout << " The input is from the console keyboard," << endl;
  cout << " and output is to the console screen." << endl << endl;

  //Read file names 
  ifstream fin;   

  //Have user input file name 
  cout << "Please enter file name for a file containing names to sort: "; 
  string fileName; 
  cin >> fileName; 

  //Open file 
  fin.open(fileName.c_str());
  if (!fin.good()) throw "I/O error"; 

  const int MAX_NAMES = 5; 
  int nNames = 0;
  string name[MAX_NAMES]; 

  string aName; // Value to add 
  //Set aName's value
  fin >> aName; 
  if (nNames < MAX_NAMES) {
    name[nNames++] = aName; 
  };

  cout << "Printing names..." << endl; 
  
  for (int i = 1; i < nNames; i++){
    cout << "Name: " << name[i];
  }

} //main() 
