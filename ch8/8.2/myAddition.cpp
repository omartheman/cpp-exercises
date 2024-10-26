// Lab 4.1
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
  cout << "Description: This program converts pounds" << endl;
  cout << " to kilograms." << endl; 
  cout << " The input is from the console keyboard," << endl;
  cout << " and output is to the console screen." << endl << endl;

  // initialize the computer's random number generator
  srand(time(0)); 
  rand();

  int firstNumber = rand() % 10;
  int secondNumber = rand() % 10; 

  additionProblem(firstNumber, secondNumber);
  additionProblem(4,8);
  additionProblem(3,7);
  additionProblem(4,10);
  additionProblem(11,2);
} //main
