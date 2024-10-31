// Lab 9.1
// Programmer: Omar Shishani
// Editor(s) used: VSCode
// Compiler(s) used: Apple clang version 14.0.0
//

#include <iostream>
#include <string>

using namespace std; 

int askQuestion(string question, string correctAnswer){

  cout << question << ": ";

  string userAnswer; 
  getline(cin, userAnswer); cout << endl; 

  if (userAnswer == correctAnswer){
    cout << "Correct!" << endl; 
  }
  else {
    cout << "Incorrect." << endl; 
  }
}

int main()
{
  // identifying output statements
  cout << endl; // Extra line 
  cout << "Programmer: Omar Shishani" << endl;
  cout << "Description: This program asks the user three different questions," << endl;
  cout << " and checks the user's answers." << endl; 
  cout << " The input is from the console keyboard," << endl;
  cout << " and output is to the console screen." << endl;

  askQuestion("What is the last name of the current US President?", "Biden");
  askQuestion("How many states are in the United States?", "50");
  askQuestion("What is the capital city of California?", "Sacramento");
}
