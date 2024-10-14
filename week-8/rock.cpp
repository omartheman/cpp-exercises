// Lab 8 - Midterm Project
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
  cout << "Description: This program is a simple version of the" << endl;
  cout << " card game 'war'. The program assigns a card to the" << endl; 
  cout << " computer and the human, then chooses a winner" << endl;
  cout << " based on which card has a higher value." << endl;
  cout << " If the game is a tie, the game will repeat." << endl;
  cout << " There is no input," << endl;
  cout << " and the output is to the console screen." << endl;

  srand(time(0));
  int computerChoice = rand() % 3;


}