// Lab 6.5
// Programmer: Omar Shishani
// Editor(s) used: VSCode
// Compiler(s) used: Apple clang version 14.0.0
//

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std; 

int main()
{
  srand(time(0));

  cout << "rand 10: " << rand() % 10  << endl; 
  cout << "rand 2: " << rand() % 2 << endl; 

  int randomTwo = rand() % 2; //Random number between one and two 

  cout << "randomTwo: " << randomTwo << endl; 

  if ((rand() % 2) == 0){
    cout << "Heads." << endl; 
  } else {
    cout << "Tails." << endl; 
  }
  
  // identifying output statements
  cout << endl; // Extra line 
  cout << "Programmer: Omar Shishani" << endl;
  cout << "Description: This program converts pounds" << endl;
  cout << " to kilograms." << endl; 
  cout << " The input is from the console keyboard," << endl;
  cout << " and output is to the console screen." << endl;
}