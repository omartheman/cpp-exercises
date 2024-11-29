// Lab 13.2
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
  // identifying output statements
  cout << endl; // Extra line 
  cout << "Programmer: Omar Shishani" << endl;
  cout << "Description: This program generates a random number between" << endl;
  cout << " 1 and 100. The program asks the user to guess what the number is." << endl; 
  cout << " The program allows the user to retry if they guess wrong, and" << endl; 
  cout << " the program tells the user if they guess too low or too high." << endl; 
  cout << " The input is from the console keyboard," << endl;
  cout << " and output is to the console screen." << endl;

  srand(time(0));

  int randomNumber = 1 + (rand() % 100);

  const int MAX_GUESSES = 100; 
  int nGuesses = 0; 
  int guess[MAX_GUESSES];


  cout << "Guess a number between 1 and 100: ";

  int userGuess; 

  while (true) {
    cin >> userGuess; 

    bool guessExists = false; 
    // Check if guess is already in list
    for (int i = 0; i < nGuesses; i++){
      if (userGuess == guess[i]) guessExists = true;
    }

    if (!guessExists) { //If guess has not already been used
      if (nGuesses < MAX_GUESSES) guess[nGuesses++] = userGuess; //Add guess to array list
    }

    if (randomNumber == userGuess){
      cout << "That's correct! It's " << userGuess << endl; 
      break;
    }

    if (userGuess < randomNumber){
      cout << "Too low. Guess again: ";
    }

    if (userGuess > randomNumber){
      cout << "Too high. Guess again: ";
    }
  }
}