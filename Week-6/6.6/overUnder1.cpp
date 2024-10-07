// Lab 6.6
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

  int randomNumber = 1 + (rand() % 10);

  cout << "Guess a number between 1 and 10: ";

  int userGuess; 
  cin >> userGuess; 


  if (randomNumber == userGuess){
    cout << "That's correct! It's " << userGuess; 
  }

  if (randomNumber < userGuess){

  }

  // identifying output statements
  cout << endl; // Extra line 
  cout << "Programmer: Omar Shishani" << endl;
  cout << "Description: This program converts pounds" << endl;
  cout << " to kilograms." << endl; 
  cout << " The input is from the console keyboard," << endl;
  cout << " and output is to the console screen." << endl;
}