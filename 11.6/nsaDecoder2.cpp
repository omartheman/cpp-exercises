// Lab 11.6
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
  cout << " and decodes it using a special sequence, showing the result to the user." << endl; 
  cout << " The input is from a file," << endl;
  cout << " and output is to the console screen." << endl << endl;

  //Read from input file
  ifstream fin;   
  string fileName = "./secret.txt";
  fin.open(fileName.c_str());
  if (!fin.good()) throw "I/O error";

  // decode string s by subtracting 1 from the ASCII code of each char
  string s; // = "Ifmmp-!Xpsme"; // a scrambled string

  getline(fin, s);

  const int SIZE = 5; 
  int offset[SIZE] = {-5, 8, 12, 6, 1};

  int counter = 0; 

  while (true) {
    //cycle through array 
    int index = counter % SIZE; 

    // char originalChar = s[counter]; // For debugging 
    // cout << "Letter: " << originalChar << " (ASCII: " << int(originalChar) << ")" << endl; // For debugging 

    // cout << "Offset: " << offset[index] << endl; // For debugging 

    s[counter] -= offset[index]; //Change letter 

    // cout << "New char: " << s[counter] << " (ASCII: " << int(s[counter]) << ")" << endl << endl; // For debugging 

    counter++; //Count how many loop cycles 

    if (counter > s.length()) break; 
  }

  cout << "Decoded string: " << s << endl; 

} //main() 
