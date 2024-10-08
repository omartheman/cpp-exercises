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

  if (grade == 'A' || grade == 'B' || grade == 'C')
    cout << "You pass" << endl; 
  else 
    cout << "You do not pass" << endl; 
  ;

  // identifying output statements
  cout << endl; // Extra line 
  cout << "Programmer: Omar Shishani" << endl;
  cout << "Description: This program converts pounds" << endl;
  cout << " to kilograms." << endl; 
  cout << " The input is from the console keyboard," << endl;
  cout << " and output is to the console screen." << endl;
}