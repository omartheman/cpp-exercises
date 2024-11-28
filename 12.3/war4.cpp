// Lab 12.3
// Programmer: Omar Shishani
// Editor(s) used: VSCode
// Compiler(s) used: Apple clang version 14.0.0
//

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <cctype>

using namespace std; 

struct PlayingCard {
  int value; 
  int suit; 
};

int main()
{
  // identifying output statements
  cout << "Programmer: Omar Shishani" << endl;
  cout << "Description: This program is a simple version of the" << endl;
  cout << " card game 'war'. The program assigns a card to the" << endl; 
  cout << " computer and the human, then chooses a winner" << endl;
  cout << " based on which card has a higher value." << endl;
  cout << " The user can choose whether the game will repeat." << endl;
  cout << " The program keeps track of the user's score vs the computer's." << endl;
  cout << " The input is from the console," << endl;
  cout << " and the output is to the console screen." << endl;
  cout << endl; // Extra line 

  srand(time(0));

  int humanScore = 0; 
  int computerScore = 0; 

  while (true){
    int computerCard = 2 + (rand() % 13);

    cout << "The computer's card is the "; 

    if (computerCard == 11) {
      cout << "Jack";
    }
    if (computerCard == 12) {
      cout << "Queen";
    }
    if (computerCard == 13) {
      cout << "King";
    }
    if ((computerCard > 0) && (computerCard < 11)) {
      cout << computerCard; 
    }

    int computerCardSuit = (rand() % 4);

    cout << " of ";
    if (computerCardSuit == 0){
      cout << "spades.";
    }
    if (computerCardSuit == 1){
      cout << "diamonds.";
    }
    if (computerCardSuit == 2){
      cout << "hearts.";
    }
    if (computerCardSuit == 3){
      cout << "clubs.";
    }

    cout << endl << endl; 

    PlayingCard humanCard {
      2 + (rand() % 12), //number
      rand() % 4, //suit 
    };

    int humanCard = 2 + (rand() % 12);

    cout << "The human's card is the "; 

    if (humanCard.value == 11) {
      cout << "Jack";
    }
    if (humanCard.value == 12) {
      cout << "Queen";
    }
    if (humanCard.value == 13) {
      cout << "King";
    }
    if ((humanCard.value > 0) && (humanCard.value < 11)) {
      cout << humanCard.value; 
    }

    int humanCardSuit = (rand() % 4);

    cout << " of ";
    if (humanCardSuit == 0){
      cout << "spades.";
    }
    if (humanCardSuit == 1){
      cout << "diamonds.";
    }
    if (humanCardSuit == 2){
      cout << "hearts.";
    }
    if (humanCardSuit == 3){
      cout << "clubs.";
    }

    cout << endl << endl; 

    if (humanCard > computerCard) {
      cout << "Human wins!" << endl; 
      humanScore++;
    }

    if (computerCard > humanCard) {
      cout << "Computer wins!" << endl; 
      computerScore++; 
    }

    if (computerCard == humanCard) {
      cout << "It's a tie!" << endl << endl; 
    }

    cout << "Human score: " << humanScore << endl; 
    cout << "Computer score: " << computerScore << endl;

    char replay; 

    while (true) {
      cout << "Would you like to replay? [Y/N]: ";
      cin >> replay;

      if (replay == 'N'){ break; };
      if (replay == 'n'){ break; }
      if (replay == 'Y'){ break; }
      if (replay == 'y'){ break; }
    }

    if (replay == 'N' || replay == 'n') {break;} //Exit loop if not a tie
  }
}