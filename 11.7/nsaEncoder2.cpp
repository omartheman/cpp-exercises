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
  cout << " a file entry, and encodes it using a special sequence." << endl; 
  cout << " The input is from a file," << endl;
  cout << " and output is to the console screen." << endl << endl;

  //Read from input file
  ifstream fin;   
  string fileName = "./secret.txt";
  fin.open(fileName.c_str());
  if (!fin.good()) throw "I/O error";

  string userEntry; 
  getline(fin, userEntry); 

  const int SIZE = 5; 
  int offset[SIZE] = {-5, 8, 12, 6, 1};

  int counter = 0; 

  while (true) {
    //cycle through array 
    int index = counter % SIZE; 

    // char originalChar = userEntry[counter]; // for debugging 
    // cout << "Letter: " << originalChar << " (ASCII: " << int(originalChar) << ")" << endl;  // For debugging 

    // cout << "Offset: " << offset[index] << endl; // For debugging 
    
    userEntry[counter] += offset[index]; //Change letter

    counter++; //Count how many loop cycles 

    if (counter > userEntry.length()) break; 
  }

  cout << "New secret string: " << userEntry << endl; 

} //main() 
