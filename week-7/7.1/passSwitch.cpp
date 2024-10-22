// Lab 7.1
// Programmer: Omar Shishani
// Editor(s) used: VSCode
// Compiler(s) used: Apple clang version 14.0.0
//

#include <iostream>
#include <string>

using namespace std; 

int main()
{ 
  // identifying output statements
  cout << endl; // Extra line 
  cout << "Programmer: Omar Shishani" << endl;
  cout << "Description: This program tells a user whether their" << endl;
  cout << " grade is passing or not. The program takes only valid letter" << endl; 
  cout << " grades as inputs, and doesn't accept other characters." << endl; 
  cout << " The input is from the console keyboard," << endl;
  cout << " and output is to the console screen." << endl << endl;

  //Read a grade from the keyboard (see 5.1)
  char grade; 
  cout << "What is your grade? [A, B, C, D, or F]: ";
  cin >> grade; 
  cin.ignore(1000, 10); 

  switch (grade) {
    case 'A': 
    case 'a': 
    case 'B': 
    case 'b': 
    case 'C': 
    case 'c': 
      cout << "You pass" << endl; 
      break; 
    case 'D': 
    case 'd': 
    case 'F': 
    case 'f': 
      cout << "You do not pass" << endl; 
      break; 
    default: 
      cout << "Invalid input" << endl; 
      break; 
  }
}