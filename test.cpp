
// Lab 9.3
// Programmer: Omar Shishani
// Editor(s) used: VSCode
// Compiler(s) used: Apple clang version 14.0.0
//

#include <iostream>
#include <string>
#include <iomanip>

using namespace std; 

int main()
{
  // identifying output statements
  
  double x = 1.12324332;

  cout.setf(ios::fixed|ios::showpoint); 

  cout << setprecision(2); 

  cout << "x: " << x; 
  
} //main() 
