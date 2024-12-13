
#include <iostream>
#include <string>
#include <iomanip>

using namespace std; 

int main()
{
  
  double x = 1.12324332;

  cout.setf(ios::fixed|ios::showpoint); 

  cout << setprecision(2); 

  cout << "x: " << x; 
  
}
