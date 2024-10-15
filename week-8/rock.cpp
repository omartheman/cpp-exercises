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
  cout << "Description: This program is a rock-paper-scissors game." << endl;
  cout << " The human will choose either rock, paper, or scissors, " << endl; 
  cout << " and the computer will choose as well. " << endl; 
  cout << " The program will output the result, telling" << endl; 
  cout << " who won, or if the game was a tie." << endl; 
  cout << " The game will exit when the human enters 'Q'" << endl; 
  cout << " The input is from the console," << endl;
  cout << " and the output is to the console screen." << endl;

  // initialize the computer's random number generator
  srand(time(0)); 
  rand();

  // declare variables
  char humanChoice; 
  char computerChoice; 
  int result; 

  // start loop
  while (true){
    // determine computer's choice (code block #1)
    int computerChoiceValue = rand() % 3;

    if (computerChoiceValue == 0){
      computerChoice = 'R'; 
    } 
    else if (computerChoiceValue == 1){
      computerChoice = 'P'; 
    }
    else if (computerChoiceValue == 2){
      computerChoice = 'S'; 
    }


    // prompt for, and read, the human's choice (code block #2)
    humanChoice = 'Q'; 
    cout << "Choose your move (R, S, P, or Q): "; 
    cin >> humanChoice; 
    if (
      humanChoice != 'R'
      && humanChoice != 'r'
      && humanChoice != 'S'
      && humanChoice != 's'
      && humanChoice != 'P'
      && humanChoice != 'p'
      && humanChoice != 'Q'
      && humanChoice != 'q'
    ){
      continue; //Skip wrong answers
    }
    //Print human and computer choices 


    // if human wants to quit, break out of loop (code block #3)
    if (humanChoice == 'Q' || humanChoice == 'q'){break;} //Exit game

    // determine the winner (code block #4)
    cout << "Human choice is: " << humanChoice << endl;
    cout << "Computer choice is: " << computerChoice << endl; 

    // print results (code block #5)

  }

  // end loop

  // end program

}