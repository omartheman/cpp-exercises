// Lab 6.8
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

  int humanCard = 2 + (rand() % 13);

  cout << "The human's card is the "; 

  if (humanCard == 11) {
    cout << "Jack";
  }
  if (humanCard == 12) {
    cout << "Queen";
  }
  if (humanCard == 13) {
    cout << "King";
  }
  if ((humanCard > 0) && (humanCard < 11)) {
    cout << humanCard; 
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
  
  // identifying output statements
  // cout << endl; // Extra line 
  // cout << "Programmer: Omar Shishani" << endl;
  // cout << "Description: This program converts pounds" << endl;
  // cout << " to kilograms." << endl; 
  // cout << " The input is from the console keyboard," << endl;
  // cout << " and output is to the console screen." << endl;
}