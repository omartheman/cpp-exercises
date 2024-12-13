
#include <iostream>
#include <string>
#include <iomanip>

using namespace std; 

void doSomething(int i){

  cout << "i: " << i; 
}

int main()
{

  for (int i = 0; i != 10; i++){
    doSomething(i);
  }
  
}
