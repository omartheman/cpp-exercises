// Lab 11.7
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
  cout << "Description: This program takes a string from" << endl;
  cout << " a user entry, and encodes it." << endl; 
  cout << " The input is from a file," << endl;
  cout << " and output is to the console screen." << endl << endl;

  //Read from input file
  ifstream fin;   
  string fileName = "./secret.txt";
  fin.open(fileName.c_str());
  if (!fin.good()) throw "I/O error";

  string userEntry; 
  getline(fin, userEntry); 

  for (int i = 0; i < userEntry.length(); i++){
    userEntry[i]++; 
    // cout << endl << "New letter: " << userEntry[i] << endl; //For testing
  }

  cout << "New secret string: " << userEntry << endl; 


} //main() 
