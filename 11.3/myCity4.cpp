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

  int highTempSep14; 
  int highTempSep15;
  int highTempSep16;
  int highTempSep17;
  int highTempSep18;

  const int SIZE = 5; 

  int temps[5];

  cout << "Enter the high for Walnut Creek on Fri, Nov 8th: " << endl;
  cin >> temps[0];

  cout << "Walnut Creek, CA forecast high temperatures:" << endl; 
  cout << "Fri, Nov 8th: " << temps[0] << " degrees." << endl; 
  // cout << "Sunday, Sep 15, " << temps[1] << " degrees." << endl; 
  // cout << "Monday, Sep 16, " << temps[2] << " degrees." << endl; 
  // cout << "Tuesday, Sep 17, " << temps[3] << " degrees." << endl; 
  // cout << "Wednesday, Sep 18, " << temps[4] << " degrees." << endl;

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
