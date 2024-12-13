
#include <iostream>
#include <string>
#include <iomanip>

using namespace std; 

void doSomething(int i){
  i++; 
  cout << "i: " << i; 
}

int main()
{

  int i;                       

  i = 0;

  while (true)
  {

    if (i == 10)
    break;

    doSomething(i);

    i = i + 1;

  }
  
}
