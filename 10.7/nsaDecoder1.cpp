// Lab 10.7
// Programmer: Omar Shishani
// Editor(s) used: VSCode
// Compiler(s) used: Apple clang version 14.0.0
//

#include <iostream>
#include <string>
#include <fstream>

using namespace std; 

int main()
{
  // identifying output statements
  cout << endl; // Extra line 
  cout << "Programmer: Omar Shishani" << endl;
  cout << "Description: This program takes an encoded string" << endl;
  cout << " and decodes it, showing the result to the user." << endl; 
  cout << " The input is from a file," << endl;
  cout << " and output is to the console screen." << endl << endl;

  //Read from input file
  ifstream fin;   
  string fileName = "./secret.txt";
  fin.open(fileName.c_str());
  if (!fin.good()) throw "I/O error";

  // decode string s by subtracting 1 from the ASCII code of each char
  string s; // = "Ifmmp-!Xpsme"; // a scrambled string

  fin >> s; 

  for (int i = 0; i < s.length(); i++) // for each char in the string...
  s[i]--; // reduce its ASCII code by 1

  cout << "Decoded string: " << s << endl; 

} //main() 