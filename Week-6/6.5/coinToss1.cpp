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

  if ((rand() % 2) == 0){
    cout << "Heads." << endl; 
  } else {
    cout << "Tails." << endl; 
  }
  
  // identifying output statements
  cout << endl; // Extra line 
  cout << "Programmer: Omar Shishani" << endl;
  cout << "Description: This program outputs either 'heads'" << endl;
  cout << " or 'tails' randomly." << endl; 
  cout << " There is no input," << endl;
  cout << " and output is to the console screen." << endl;
}