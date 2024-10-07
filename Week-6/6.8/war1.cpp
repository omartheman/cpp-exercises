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

  cout << "The computer's card value is: "; 

  if (computerCard == 11) {
    cout << "Jack" << endl;
  }
  if (computerCard == 12) {
    cout << "Queen" << endl;
  }
  if (computerCard == 13) {
    cout << "King" << endl;
  }
  if ((computerCard > 0) && (computerCard < 11)) {
    cout << computerCard << endl; 
  }


  int computerCardSuit = (rand() % 4);

  cout << "Computer card suit: ";
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
  
  // identifying output statements
  // cout << endl; // Extra line 
  // cout << "Programmer: Omar Shishani" << endl;
  // cout << "Description: This program converts pounds" << endl;
  // cout << " to kilograms." << endl; 
  // cout << " The input is from the console keyboard," << endl;
  // cout << " and output is to the console screen." << endl;
}