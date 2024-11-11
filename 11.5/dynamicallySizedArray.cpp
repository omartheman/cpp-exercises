// Lab 11.5
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

  ifstream fin; 
  fin.open("scores.txt");
  if (!fin.good()) throw "I/O" error; 

  //Create array of user-specified size 
  int size; 
  fin >> size; 
  fin.ignore (1000, 10); 
  int* score = new int[size];

  //Read and save scored 
  int i; 
  for (i = 0; i < size; i++){
    fin >> score[i]; // remaining lines in txt file 
    fin.ignore(1000,10); 
  }
  fin.close(); 

  //output scores to console 
  for (i = 0; i < size; i++)
    cout << score[i] << ' '; 
  cout << endl; 

} //main() 
