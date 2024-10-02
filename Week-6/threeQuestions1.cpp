// Lab 6.1
// Programmer: Omar Shishani
// Editor(s) used: VSCode
// Compiler(s) used: Apple clang version 14.0.0
//

#include <iostream>
#include <string>

using namespace std; 

int main()
{
  int answer1; 
  cout << "4 + 9 = ";
  cin >> answer1; 

  if (answer1 == 13)
    cout << "Your answer is correct!" << endl;
  else 
    cout << "Your answer is incorrect." << endl;

  // identifying output statements
  cout << endl; // Extra line 
  cout << "Programmer: Omar Shishani" << endl;
  cout << "Description: This program asks the user to" << endl;
  cout << " solve three addition/subtraction problems." << endl; 
  cout << " The input is from the console keyboard," << endl;
  cout << " and output is to the console screen." << endl;
}