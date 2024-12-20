// Lab 11.4
// Programmer: Omar Shishani
// Editor(s) used: VSCode
// Compiler(s) used: Apple clang version 14.0.0
//

#include <iostream>
#include <string>

using namespace std; 

int main()
{
  // identifying output statements
  cout << "Programmer: Omar Shishani" << endl;
  cout << "Description: This program takes 4 scores from the user" << endl;
  cout << " and calculates the average. The program tells the " << endl; 
  cout << " user how many of the scores were above the average." << endl; 
  cout << " The input is from the console keyboard," << endl;
  cout << " and output is to the console screen." << endl << endl;

  //open 8scores.txt for input 

  //read and save the scored
  int score[4];

  cout << "Please enter four scores for an average calculation: ";
  cin >> score[0]; 
  cin >> score[1]; 
  cin >> score[2]; 
  cin >> score[3]; 

  //calculate and output the average 
  int scoreTotal = 0; 
  for (int i = 0; i < 4; i++) {
    scoreTotal += score[i]; 
  } // for 
  double average = scoreTotal / 4.0;
  cout << "The average of 4 scores is " << average << endl; 

  // count # of scores > average 
  int nGreater = 0; 
  for (int i = 0; i < 8; i++){
    if (score[i] > average) nGreater++; 
  } // for 

  cout << nGreater << " scores are greater than the average." << endl; 

} //main() 
