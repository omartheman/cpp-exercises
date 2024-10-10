// Lab 7.4
// Programmer: Omar Shishani
// Editor(s) used: VSCode
// Compiler(s) used: Apple clang version 14.0.0
//

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std; 

int main()
{
  srand(time(0));

  while (true){
    cout << "Enter number of coin tosses to perform [Enter 0 to exit]: "; 
    
    int numberTosses; 
    cin >> numberTosses; 

    if (numberTosses == 0){break;}
    
    for (int i = 0; i < numberTosses; i++){
      if ((rand() % 2) == 0){
        cout << "Heads." << endl; 
      } else {
        cout << "Tails." << endl; 
      }
    }
  }
  
  // identifying output statements
  cout << endl; // Extra line 
  cout << "Programmer: Omar Shishani" << endl;
  cout << "Description: This program outputs either 'heads'" << endl;
  cout << " or 'tails' randomly." << endl; 
  cout << " The user chooses how many coin flips are done." << endl; 
  cout << " The game repeats until the user enters '0'." << endl; 
  cout << " The input is from the console," << endl;
  cout << " and output is to the console screen." << endl;
}