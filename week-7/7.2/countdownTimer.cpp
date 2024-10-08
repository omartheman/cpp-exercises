// Lab 7.2
// Programmer: Omar Shishani
// Editor(s) used: VSCode
// Compiler(s) used: Apple clang version 14.0.0
//

#include <iostream>
#include <string>

#ifdef _WIN32
#include <windows.h>
#else 
#include <unistd.h>
#endif

using namespace std; 

int main()
{

  int counter = 10; 
  for (int sec = 0; sec < 11; sec++){

    if (counter < 10){
      cout << " ";
    }
    
    cout << counter; 
    counter --; 
    cout.flush(); 

    #ifdef _WIN32
    Sleep(1000); 
    #else 
    sleep(1); 
    #endif 

    if (counter > -1){
      cout << '\r'; //CR
    }
  }

  cout << " Bingo bongo!" << endl;

  // identifying output statements
  cout << endl; // Extra line 
  cout << "Programmer: Omar Shishani" << endl;
  cout << "Description: This program counts down from 10 and then" << endl;
  cout << " prints a success message. Each count is one second." << endl; 
  cout << " There is no input," << endl;
  cout << " and output is to the console screen." << endl;
}