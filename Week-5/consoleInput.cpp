// Lab 5.6
// Programmer: Omar Shishani
// Editor(s) used: VSCode
// Compiler(s) used: Apple clang version 14.0.0
//

#include <iostream>
#include <string>

using namespace std; 

int main()
{

  int age; 
  cout << "Please enter your age: ";
  cin >> age; 

  cout << "Please enter your name: ";
  string name;
  cin >> name; 

  double temp;
  cout << "Please enter the current outside temperature: ";
  cin >> temp; 

  cout << name << " is " << age << " years old. It's " << temp << " degrees Fahrenheit in Pleasant Hill.";  

  // identifying output statements
  cout << endl; // Extra line 
  cout << "Programmer: Omar Shishani" << endl;
  cout << "Description: This program converts pounds" << endl;
  cout << " to kilograms. The input is from the console keyboard," << endl;
  cout << " and output is to the console screen." << endl;
}