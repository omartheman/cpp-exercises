#include <iostream>
#include <string>
#include <cmath>

using namespace std; 

int main()
{
  int cashPayment = 45000;
  int amountTendered = 100000;
  int changeDue = amountTendered - cashPayment;

  cout << "Cash payment amount: " << cashPayment << endl;
  cout << "Tendered amount: " << amountTendered << endl;
  cout << "Change due: " << changeDue << endl;
  
  int hundredThousands = changeDue / 100000;
  changeDue = changeDue % 100000;
  int tenThousands = changeDue / 10000;
  changeDue = changeDue % 10000;

  int twos;
  int ones; 

  twos = 2; 
  ones = 1; 

  cout << " this many two dollar bills: " << twos << endl;
  cout << " this many one dollar bills: " << ones << endl;
}