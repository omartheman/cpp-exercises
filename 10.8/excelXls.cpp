// Lab 10.8
// Programmer: Omar Shishani
// Editor(s) used: VSCode
// Compiler(s) used: Apple clang version 14.0.0
//

#include <iostream>
#include <string>
#include <cmath>
#include <fstream>

using namespace std; 

int main()
{
  // identifying output statements
  cout << "Programmer: Omar Shishani" << endl;
  cout << "Description: This program calculates the" << endl;
  cout << " amount of change owed to a customer after a transaction." << endl;
  cout << " The program also calculates the denominations of" << endl;
  cout << " bills required to provide the correct amount of change." << endl;
  cout << " The program only outputs the required denominations." << endl;
  cout << " The user can input zero or a negative number to exit." << endl;
  cout << " The input is from the user," << endl;
  cout << " and output is to the console screen." << endl << endl;

  int cashPayment;
  int amountTendered;

  ofstream fout; // requires fstream
  fout.open("data.xls");
  if (!fout.good()) throw "I/O error";


  fout << "denomination" << '\t' << "count" << endl; // header row

  while (true){
    cout << "Please enter the required cash payment amount [enter 0 to exit]: ";
    cin >> cashPayment;

    if (cashPayment == 0) {
      break;
    }

    if (cashPayment < 0){
      break;
    }

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

    if (hundredThousands > 0)
      cout << " this many hundred thousand dollar bills: " << hundredThousands << endl;
      fout << "100000" << '\t' << hundredThousands << endl; // data row
    if (tenThousands > 0)
      cout << " this many ten thousand dollar bills: " << tenThousands << endl;
      fout << "10000" << '\t' << tenThousands << endl; // data row
    if (fiveThousands > 0)
      cout << " this many five thousand dollar bills: " << fiveThousands << endl;
      fout << "5000" << '\t' << fiveThousands << endl; // data row
    if (oneThousands > 0)
      cout << " this many one thousand dollar bills: " << oneThousands << endl;
      fout << "1000" << '\t' << oneThousands << endl; // data row
    if (fiveHundreds > 0)
      cout << " this many five hundred dollar bills: " << fiveHundreds << endl;
      fout << "500" << '\t' << fiveHundreds << endl; // data row
    if (oneHundreds > 0)
      cout << " this many one hundred dollar bills: " << oneHundreds << endl;
      fout << "100" << '\t' << oneHundreds << endl; // data row
    if (fifties > 0)
      cout << " this many fifty dollar bills: " << fifties << endl;
      fout << "50" << '\t' << fifties << endl; // data row
    if (twenties > 0)
      cout << " this many twenty dollar bills: " << twenties << endl;
      fout << "20" << '\t' << twenties << endl; // data row
    if (tens > 0)
      cout << " this many ten dollar bills: " << tens << endl;
      fout << "10" << '\t' << tens << endl; // data row
    if (fives > 0)
      cout << " this many five dollar bills: " << fives << endl;
      fout << "5" << '\t' << fives << endl; // data row
    if (twos > 0)
      cout << " this many two dollar bills: " << twos << endl;
      fout << "2" << '\t' << twos << endl; // data row
    if (ones > 0)
      cout << " this many one dollar bills: " << ones << endl;
      fout << "1" << '\t' << ones << endl; // data row
    ;
    cout << endl; //Last break before next loop 
  }

  fout.close();

}