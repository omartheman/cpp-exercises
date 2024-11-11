// Lab 11.5
// Programmer: Omar Shishani
// Editor(s) used: VSCode
// Compiler(s) used: Apple clang version 14.0.0
//

#include <algorithm> 
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

  //Create array of user-specified size 
  cout << "Please enter total number of scores: "; 
  int size; 
  cin >> size;  
  int* score = new int[size];

  //Read and save scored 
  int i; 
  for (i = 0; i < size; i++){
    cout << "Please enter score: ";
    cin >> score[i]; // remaining lines in txt file 
  }

  sort(score, score + size); 

  //output scores to console 
  for (i = 0; i < size; i++)
    cout << score[i] << ' '; 
  cout << endl; 

} //main() 
