// Lab 9.4
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
  cout << "Programmer: Omar Shishani" << endl;
  cout << "Description: This program starts a loop that doesn't" << endl;
  cout << " end, to demonstrate round-off error in c++." << endl; 
  cout << " There is no input," << endl;
  cout << " and output is to the console screen." << endl << endl;

  double x; 
  for (x = 0; x != 4.05; x+= 0.05)
    cout << x << endl; 


} //main() 
