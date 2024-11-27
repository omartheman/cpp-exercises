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
  cout << "Programmer: Omar Shishani" << endl;
  cout << "Description: This program converts pounds" << endl;
  cout << " to kilograms." << endl; 
  cout << " The input is from the console keyboard," << endl;
  cout << " and output is to the console screen." << endl << endl;

  string fileName; 
  string defaultFileName = "fileContainingEmails.txt"; 

  cout << "Enter input file name [default: " << defaultFileName << "]: "; 
  cin >> fileName; 
  cout << endl; 

  string defaultOutputFileName = "copyPasteMyEmails.txt"; 
  string outputFileName; 

  cout << "Enter output file name [default:" << defaultOutputFileName << "]:"; 
  cin >> outputFileName; 
  cout << endl; 

  cout << endl << "Input file name: " << fileName << endl; 
  cout << "Output file name: " << fileName << endl; 
  
} //main() 
