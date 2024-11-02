// Lab 9.2
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
  cout << "Description: This program takes a string from" << endl;
  cout << " a user entry, and encodes it." << endl; 
  cout << " The input is from the console keyboard," << endl;
  cout << " and output is to the console screen." << endl << endl;

  cout << "Please enter a line of text: "; 

  string userEntry; 
  getline(cin, userEntry); 

  for (int i = 0; i < userEntry.length(); i++){
    userEntry[i]++; 
    // cout << endl << "New letter: " << userEntry[i] << endl; //For testing
  }

  cout << "New secret string: " << userEntry << endl; 


} //main() 
