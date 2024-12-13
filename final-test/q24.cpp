
#include <iostream>
#include <string>
#include <iomanip>

using namespace std; 

int main()
{

  int sum = 0; 

  int count; 
  
  for (count = 1; count <= 99; count++){
    if (count % 2 != 0){
      sum += count; 
    }
  }

  cout << "Sum: " << sum << endl;
}
