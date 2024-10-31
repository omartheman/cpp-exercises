// Lab 9.1
// Programmer: Omar Shishani
// Editor(s) used: VSCode
// Compiler(s) used: Apple clang version 14.0.0
//

#include <iostream>
#include <string>

using namespace std; 

bool askQuestion(string question, string correctAnswer){

  cout << question << ": ";

  string userAnswer; 
  getline(cin, userAnswer); cout << endl; 

  if (userAnswer == correctAnswer){
    cout << "Correct!" << endl; 
    return true; 
  }
  else {
    cout << "Incorrect." << endl; 
    return false; 
  }
}

int main()
{
  // identifying output statements
  cout << endl; // Extra line 
  cout << "Programmer: Omar Shishani" << endl;
  cout << "Description: This program asks the user three different questions," << endl;
  cout << " and checks the user's answers. The program tells" << endl; 
  cout << " the user how many questions they got correct at " << endl; 
  cout << " the end." << endl; 
  cout << " The input is from the console keyboard," << endl;
  cout << " and output is to the console screen." << endl;

  int correct = 0; 

  if (askQuestion("What is the last name of the current US President?", "Biden")){correct++;};
  if (askQuestion("How many states are in the United States?", "50")){correct++;};
  if(askQuestion("What is the capital city of California?", "Sacramento")){correct++;};
  
  cout << endl << "Correct answers: " << correct << " out of 3." << endl;
}
