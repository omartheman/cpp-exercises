// Lab 15.1
// Programmer: Omar Shishani
// Editor(s) used: VSCode
// Compiler(s) used: Apple clang version 14.0.0
//

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <deque> 

using namespace std; 

//Create structure for guesses 
struct Guess {
  int guessNumber; 
}; // Guess 

int main()
{
  // identifying output statements
  cout << endl; // Extra line 
  cout << "Programmer: Omar Shishani" << endl;
  cout << "Description: This program generates a random number between" << endl;
  cout << " 1 and 100. The program asks the user to guess what the number is." << endl; 
  cout << " The program allows the user to retry if they guess wrong, and" << endl; 
  cout << " the program tells the user if they guess too low or too high." << endl; 
  cout << " The program tells the user to retry if they have already used" << endl; 
  cout << " a guess." << endl; 
  cout << " The input is from the console keyboard," << endl;
  cout << " and output is to the console screen." << endl;

  srand(time(0));

  int randomNumber = 1 + (rand() % 100);


  //Create collection 

  //Declare empty list of Guess objects 
  deque<Guess> guess; 

  cout << "Guess a number between 1 and 100: ";

  int userGuess; 

  while (true) {
    cin >> userGuess; //Get user input for guess

    bool guessExists = false; 
    
    //Check if guess is in list 

    for (int p = 0; p < guess.size(); p++){
      if (guess[p].guessNumber == userGuess) { //Guess is already in linked list
        guessExists = true;
        break;
      }
    }
    
    if (!guessExists){ //If guess doesn't exist already, add to list
      Guess aGuess; //A temporary guess 
      aGuess.guessNumber = userGuess; //Set aGuess property
      guess.push_back(aGuess); //Add guess to list
    }
    
    if (guessExists) {
      cout << "You've already guessed " << userGuess << ". Guess again: ";
    }
    else if (randomNumber == userGuess){
      cout << "That's correct! It's " << userGuess << endl; 
      break;
    }
    else if (userGuess < randomNumber){
      cout << "Too low. Guess again: ";
    }
    else if (userGuess > randomNumber){
      cout << "Too high. Guess again: ";
    }
  }
}