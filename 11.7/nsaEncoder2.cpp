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

  const int SIZE = 5; 
  int offset[SIZE] = {-5, 8, 12, 6, 1};

  int counter = 0; 

  while (true) {
    //cycle through array 
    int index = counter % SIZE; 
    cout << offset[index] << endl; 

    //continue cycling? 
    char keepGoing; 
    cout << "Keep going? Y/N: "; 
    cin >> keepGoing; 
    cin.ignore(1000, 10); 
    if (keepGoing == 'n' || keepGoing == 'N') break; 
    
    userEntry[counter]++; 

    counter++; //Count how many loop cycles 

    if (counter - 1 > userEntry.length()) break; 
  }

  cout << "New secret string: " << userEntry << endl; 

} //main() 
