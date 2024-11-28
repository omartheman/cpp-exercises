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

void printCardValue(int cardValue){
  if (cardValue == 1) {
    cout << "Ace";
  } else if (cardValue == 11) {
    cout << "Jack";
  } else if (cardValue == 12) {
    cout << "Queen";
  } else if (cardValue == 13) {
    cout << "King";
  } else {
    cout << cardValue; 
  }
}

void printCardSuit(int cardSuit){
  if (cardSuit == 0){
    cout << "spades.";
  }
  if (cardSuit == 1){
    cout << "diamonds.";
  }
  if (cardSuit == 2){
    cout << "hearts.";
  }
  if (cardSuit == 3){
    cout << "clubs.";
  }
}

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

    PlayingCard computerCard = {
      1 + (rand() % 13), //value
      rand() % 4, //suit 
    };

    cout << "The computer's card is the "; 

    printCardValue(computerCard.value); 

    int computerCardSuit = (rand() % 4);

    cout << " of ";
    
    printCardSuit(computerCardSuit); 

    cout << endl << endl; 

    PlayingCard humanCard = {
      1 + (rand() % 13), //value
      rand() % 4, //suit 
    };

    cout << "The human's card is the "; 

    printCardValue(humanCard.value); 

    int humanCardSuit = (rand() % 4);

    cout << " of ";
    
    printCardSuit(humanCardSuit); 

    cout << endl << endl; 

    if (humanCard.value > computerCard.value) {
      cout << "Human wins!" << endl; 
      humanScore++;
    }

    if (computerCard.value > humanCard.value) {
      cout << "Computer wins!" << endl; 
      computerScore++; 
    }

    if (computerCard.value == humanCard.value) {
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

    cout << "============" << endl; //Add divider for next game
  }
}