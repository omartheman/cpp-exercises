// Lab 11.4
// Programmer: Omar Shishani
// Editor(s) used: VSCode
// Compiler(s) used: Apple clang version 14.0.0
//

#include <fstream> 
#include <iostream>
#include <string>

using namespace std; 

int main()
{
  // identifying output statements
  cout << "Programmer: Omar Shishani" << endl;
  cout << "Description: This program converts pounds" << endl;
  cout << " to kilograms." << endl; 
  cout << " The input is from the console keyboard," << endl;
  cout << " and output is to the console screen." << endl << endl;


  //open 8scores.txt for input 

  ifstream fin; 
  fin.open("8Scores.txt"); 
  if (!fin.good()) throw "I/O error"; 

  //read and save the scored
  int score[8];
  int i; //loop counter 
  for (i = 0; i < 8; i++){
    fin >> score[i];
    fin.ignore(1000, 10); 
  } // for 
  fin.close(); 

  //calculate and output the average 
  int scoreTotal = 0; 
  for (i = 0; i < 8; i++) {
    scoreTotal += score[i]; 
  } // for 
  double average = scoreTotal / 8.0;
  cout << "The average of 8 numbers is " << average << endl; 

  // count # of scores > average 
  int nGreater = 0; 
  for (i = 0; i < 8; i++){
    if (score[i] > average) nGreater++; 
  } // for 

  cout << nGreater << " scores are greater than the average." << endl; 

} //main() 
