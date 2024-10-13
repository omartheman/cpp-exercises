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
  // identifying output statements
  cout << endl; // Extra line 
  cout << "Programmer: Omar Shishani" << endl;
  cout << "Description: This program asks the user to" << endl;
  cout << " solve three addition/subtraction problems." << endl; 
  cout << " The input is from the console keyboard," << endl;
  cout << " and output is to the console screen." << endl;

  int answer1; 
  cout << "4 + 9 = ";
  cin >> answer1; 

  if (answer1 == 13)
    cout << "Your answer is correct!" << endl;
  else 
    cout << "Your answer is incorrect." << endl;
  ;

  int answer2; 
  cout << "1 - 10 = ";
  cin >> answer2; 

  if (answer2 == -9)
    cout << "Your answer is correct!" << endl;
  else 
    cout << "Your answer is incorrect." << endl;
  ;

  int answer3; 
  cout << "100 + 200 = ";
  cin >> answer3; 

  if (answer3 == 300)
    cout << "Your answer is correct!" << endl;
  else 
    cout << "Your answer is incorrect." << endl;
  ;
}