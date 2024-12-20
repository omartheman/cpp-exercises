// Lab 11.5
// Programmer: Omar Shishani
// Editor(s) used: VSCode
// Compiler(s) used: Apple clang version 14.0.0
//

#include <algorithm> 
#include <fstream> 
#include <iostream>
#include <string>
#include <iomanip>


using namespace std; 

int main()
{
  // identifying output statements
  cout << "Programmer: Omar Shishani" << endl;
  cout << "Description: This program takes an input of scores" << endl;
  cout << " and stores them in an array. The scores are printed," << endl; 
  cout << " ordered from low to high. The max and min scores are" << endl; 
  cout << " printed. The average is calculated and printed. Finally," << endl; 
  cout << " the user is notified if any scores were 'A' (90 or above)." << endl; 
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

  cout << "Values low to high: "; 

  for (i = 0; i < size; i++)
    cout << score[i] << ' '; 
  cout << endl; 

  int max = score[0];
  int min = score[0];

  for (int i = 1; i < size; i++) {
    if (max < score[i]) max = score[i];
    if (min > score[i]) min = score[i]; 
  }

  cout << "Max score is " << max << endl; 
  cout << "Min score is " << min << endl; 

  //Calculate and output average 
  int scoreTotal = 0; 
  for (int i = 0; i < size; i++) {
    scoreTotal += score[i]; 
  } // for 

  double average = scoreTotal / size * 1.0;
  cout << "The average of " << size << " scores is "; 

  //Output to one decimal 
  cout.setf(ios::fixed|ios::showpoint); 
  cout << setprecision(1) << average << endl;

  //Tell if there was an A grade
  int numberA = 0; 

  for (int i = 1; i < size; i++) {
    if (score[i] >= 90) {
      numberA++; 
    }
  }

  if (numberA == 0){
    cout << "No grades were 'A'." << endl;; 
  }
  else {
    cout << "At least one grade was 'A'." << endl; 
  }

} //main() 
