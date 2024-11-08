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

  int temps[] = {
    91, 
    83,
    72, 
    73, 
    78
  };

  cout << "Walnut Creek, CA forecast high temperatures:" << endl; 
  cout << "Saturday, Sep 14, " << temps[0] << " degrees." << endl; 
  cout << "Sunday, Sep 15, " << temps[1] << " degrees." << endl; 
  cout << "Monday, Sep 16, " << temps[2] << " degrees." << endl; 
  cout << "Tuesday, Sep 17, " << temps[3] << " degrees." << endl; 
  cout << "Wednesday, Sep 18, " << temps[4] << " degrees." << endl;
  cout << "Source: https://weather.com/" << endl; 
}
