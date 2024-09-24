// Lab 4.2
// Programmer: Omar Shishani
// Editor(s) used: VSCode
// Compiler(s) used: Apple clang version 14.0.0
//

#include <iostream>
#include <iomanip> 

using namespace std;
int main()
{
int age1 = 19;
int age2 = 21;
int age3 = 30;

double averageAge = (age1 + age2 + age3) / 3.0;

cout.setf(ios::fixed|ios::showpoint); 
cout << setprecision(2); 
cout << "The average of the three input ages is " << averageAge << endl; 

  // identifying output statements
  cout << endl; 
  cout << "Programmer: Omar Shishani" << endl;
  cout << "Description: This program calculates the" << endl;
  cout << " average age based on three input ages." << endl;
  cout << " The inputs are from the programmer," << endl;
  cout << " and output is to the console screen." << endl;

}