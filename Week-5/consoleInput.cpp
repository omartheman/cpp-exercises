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
  cin.ignore(1000, 10); 

  string name;
  cout << "Please enter your name: ";
  getline(cin, name); 

  double temp;
  cout << "Please enter the current outside temperature: ";
  cin >> temp; 
  cin.ignore(1000, 10); 

  string city; 
  cout << "Please enter the name of the city you live in: ";
  getline(cin, city); 

  cout << endl; 
  cout << name << " is " << age << " years old." << endl;
  cout << "It's " << temp << " degrees Fahrenheit in " << city << "." << endl; 

  // identifying output statements
  cout << endl; // Extra line 
  cout << "Programmer: Omar Shishani" << endl;
  cout << "Description: This program takes 4 inputs--" << endl;
  cout << "age, name, temperature, and city--" << endl;
  cout << " and writes them to the console in a sentence." << endl; 
  cout << " The inputs are from the user," << endl;
  cout << " and output is to the console screen." << endl;
}