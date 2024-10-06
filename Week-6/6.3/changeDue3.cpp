// Lab 6.3
// Programmer: Omar Shishani
// Editor(s) used: VSCode
// Compiler(s) used: Apple clang version 14.0.0
//

#include <iostream>
#include <string>
#include <cmath>

using namespace std; 

int main()
{
  int cashPayment;
  int amountTendered;

  cout << "Please enter the required cash payment amount: ";
  cin >> cashPayment;

  cout << endl; 
  cout << "Please enter the amount tendered: ";
  cin >> amountTendered;

  int changeDue = amountTendered - cashPayment;

  cout << "Cash payment amount: " << cashPayment << endl;
  cout << "Tendered amount: " << amountTendered << endl;
  cout << "Change due: " << changeDue << endl;
  
  int hundredThousands = changeDue / 100000;
  changeDue = changeDue % 100000;
  int tenThousands = changeDue / 10000;
  changeDue = changeDue % 10000;
  int fiveThousands = changeDue / 5000; 
  changeDue = changeDue % 5000;
  int oneThousands = changeDue / 1000; 
  changeDue = changeDue % 1000; //Remainder after paying out all 5000 bills
  int fiveHundreds = changeDue / 500; 
  changeDue = changeDue % 500; 
  int oneHundreds = changeDue / 100; 
  changeDue = changeDue % 100; 
  int fifties = changeDue / 50; 
  changeDue = changeDue % 50; 
  int twenties = changeDue / 20; 
  changeDue = changeDue % 20; 
  int tens = changeDue / 10; 
  changeDue = changeDue % 10;
  // cout << " changeDue after tens: " << changeDue << endl; 
  int fives = changeDue / 5; 
  changeDue = changeDue % 5;  
  // cout << " changeDue after fives: " << changeDue << endl;
  int twos = changeDue / 2; 
  changeDue = changeDue % 2;  
  // cout << " changeDue after twos: " << changeDue << endl;
  int ones = changeDue / 1; 
  changeDue = changeDue % 1; 

  cout << " this many hundred thousand dollar bills: " << hundredThousands << endl;
  cout << " this many ten thousand dollar bills: " << tenThousands << endl;
  cout << " this many five thousand dollar bills: " << fiveThousands << endl;
  cout << " this many one thousand dollar bills: " << oneThousands << endl;
  cout << " this many five hundred dollar bills: " << fiveHundreds << endl;
  cout << " this many one hundred dollar bills: " << oneHundreds << endl;

  cout << " this many fifty dollar bills: " << fifties << endl;
  cout << " this many twenty dollar bills: " << twenties << endl;
  cout << " this many ten dollar bills: " << tens << endl;
  cout << " this many five dollar bills: " << fives << endl;
  cout << " this many two dollar bills: " << twos << endl;
  cout << " this many one dollar bills: " << ones << endl;

  // identifying output statements
  cout << endl; //Extra line
  cout << "Programmer: Omar Shishani" << endl;
  cout << "Description: This program calculates the" << endl;
  cout << " amount of change owed to a customer after a transaction." << endl;
  cout << " The program also calculates the denominations of" << endl;
  cout << " bills required to provide the correct amount of change." << endl;
  cout << " The input is from the user," << endl;
  cout << " and output is to the console screen." << endl;
}