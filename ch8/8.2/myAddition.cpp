// Lab 8.2
// Programmer: Omar Shishani
// Editor(s) used: VSCode
// Compiler(s) used: Apple clang version 14.0.0
//

#include <iostream>

using namespace std; 

void additionProblem(int topNumber, int bottomNumber)
{
  int userAnswer; 
  cout << "\n\n\n     " << topNumber << " + " << bottomNumber << " = ";
  cin >> userAnswer; 
  cin.ignore(1000, 10);

  int theAnswer = topNumber + bottomNumber;
  if (theAnswer == userAnswer)
    cout << "     Correct!" << endl; 
  else 
    cout << "     Very good, but a better answer is " << theAnswer << endl;
} //additionProblem 

int main()
{
  // identifying output statements
  cout << endl; // Extra line 
  cout << "Programmer: Omar Shishani" << endl;
  cout << "Description: This program randomly generates two" << endl;
  cout << " numbers, and asks the user to add them." << endl; 
  cout << " The computer tells the user if the answer is" << endl; 
  cout << " correct or not." << endl; 
  cout << " The input is from the console keyboard," << endl;
  cout << " and output is to the console screen." << endl << endl;

  // initialize the computer's random number generator
  srand(time(0)); 
  rand();

  for (int i = 0; i < 5; i++){
    int firstNumber = rand() % 10;
    int secondNumber = rand() % 10; 

    additionProblem(firstNumber, secondNumber);
  }
} //main
