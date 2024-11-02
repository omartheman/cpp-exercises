// Lab 9.3
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
  cout << "Description: This program takes an encoded string" << endl;
  cout << " and decodes it, showing the result to the user." << endl; 
  cout << " The input is from the console keyboard," << endl;
  cout << " and output is to the console screen." << endl << endl;

  // decode string s by subtracting 1 from the ASCII code of each char
  string s; // = "Ifmmp-!Xpsme"; // a scrambled string

  cout << "Please enter encoded string: ";
  cin >> s; 
  cout << endl; 

  for (int i = 0; i < s.length(); i++) // for each char in the string...
  s[i]--; // reduce its ASCII code by 1

  cout << "Decoded string: " << s << endl; 

} //main() 
