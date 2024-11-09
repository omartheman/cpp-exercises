#include <iostream>
#include <string> 

using namespace std; 

int main() 
{
  // identifying output statements
  cout << "Programmer: Omar Shishani" << endl;
  cout << "Description: This program uses an array to print the" << endl;
  cout << " high temperatures for 5 different days." << endl; 
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

  cout << "Source: https://weather.com/" << endl; 

  int max = temps[0];
  int min = temps[0];

  for (int i = 1; i < SIZE; i++) {
    if (max < temps[i]) max = temps[i];
    if (min > temps[i]) min = temps[i]; 
  }

  cout << "The high for the week is " << max << " degrees." << endl;
  cout << "The low for the week is " << min << " degrees." << endl; 

}
