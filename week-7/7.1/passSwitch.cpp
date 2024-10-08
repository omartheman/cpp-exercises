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

  //Read a grade from the keyboard (see 5.1)
  char grade; 
  cout << "What is your grade? [A, B, C, D, or F]: ";
  cin >> grade; 
  cin.ignore(1000, 10); 

  switch (grade) {
    case 'A': 
    case 'B': 
    case 'C': 
      cout << "You pass" << endl; 
      break; 
    case 'D': 
    case 'F': 
      cout << "You do not pass" << endl; 
      break; 
    default: 
      cout << "Invalid input" << endl; 
      break; 
  }

  // // identifying output statements
  // cout << endl; // Extra line 
  // cout << "Programmer: Omar Shishani" << endl;
  // cout << "Description: This program converts pounds" << endl;
  // cout << " to kilograms." << endl; 
  // cout << " The input is from the console keyboard," << endl;
  // cout << " and output is to the console screen." << endl;
}