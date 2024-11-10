// Lab 11.3
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
  cout << "Description: This program asks the user to input the" << endl;
  cout << " high temperatures for 5 different days. The program" << endl; 
  cout << " then tells the user which was the high and low of" << endl; 
  cout << " the input temperatures, and how many times these occurred." << endl; 
  cout << " The input is from the programmer," << endl;
  cout << " and output is to the console screen." << endl << endl;

  const int SIZE = 5; 

  int temps[5];

  cout << "Enter the high for Walnut Creek on Fri, Nov 8th: ";
  cin >> temps[0]; cout << endl; 
  cout << "Enter the high for Walnut Creek on Sat, Nov 9th: ";
  cin >> temps[1]; cout << endl; 
  cout << "Enter the high for Walnut Creek on Sun, Nov 10th: ";
  cin >> temps[2]; cout << endl; 
  cout << "Enter the high for Walnut Creek on Mon, Nov 11th: ";
  cin >> temps[3]; cout << endl; 
  cout << "Enter the high for Walnut Creek on Tue, Nov 12th: ";
  cin >> temps[4];  cout << endl; 

  cout << "Walnut Creek, CA forecast high temperatures:" << endl; 
  cout << "Fri, Nov 8th: " << temps[0] << " degrees." << endl; 
  cout << "Sat, Nov 9th: " << temps[1] << " degrees." << endl; 
  cout << "Sun, Nov 10th: " << temps[2] << " degrees." << endl; 
  cout << "Mon, Nov 11th: " << temps[3] << " degrees." << endl; 
  cout << "Tue, Nov 12th: " << temps[4] << " degrees." << endl; 

  //Search for how many times the input repeats 

  int maxCount = 1;
  int minCount = 1; 

  int max = temps[0];
  int min = temps[0];

  int maxIndex = 0; 
  int minIndex = 0; 

  for (int i = 1; i < SIZE; i++) {
    if (max < temps[i]) {
      max = temps[i];
      maxIndex = i; 
    };

    if (min > temps[i]) {
      min = temps[i];
      minIndex = i; 
    }; 
  }

  //Set counts array 
  int counts[5]; 

  for (int i = 0; i < SIZE; i++) {

    //Loop though array again. Check if any values match temps[i], as long as the index of the array being checked is not [i]
    int count = 1; 
    for (int j = 0; j < SIZE; j++) {

      if (i != j && temps[i] == temps[j]){
        //increase count for duplicate
        count++; 
      }
    }

    // cout << "The value " << temps[i] << " occurs " << count << " times." << endl;

    counts[i] = count; 
  }


  cout << "The high for the week is " << max << " degrees." << "This temperature occurs " << counts[maxIndex] << " times" << endl;
  cout << "The low for the week is " << min << " degrees." << "This temperature occurs " << counts[minIndex] << " times" << endl;

}