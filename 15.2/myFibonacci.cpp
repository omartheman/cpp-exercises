// Lab 15.2
// Programmer: Omar Shishani
// Editor(s) used: VSCode
// Compiler(s) used: Apple clang version 14.0.0
//

#include <iostream>
#include <string>

using namespace std; 

void fibonacciAddition(int userIndex, int currentIncrement = 0, int previousSum = 0, int twoSumsAgo = 0){

  if (userIndex > 0) {

    //Increment by 1 for each number 
    // 

    //Add previous sum to current increment 

    int newSum = previousSum + currentIncrement;     

    //For each index, add fibonacci

    //index starts at 6 
    //fibonacci sequence: 
    //1
    //2
    //3
    //5
    //8
    //13 

    //have a starting value of 1. Each time the function runs, add the starting value to the previous result value 

    cout << "currentIncrement: " << currentIncrement << endl; 
    cout << "previousSum: " << previousSum << endl; 

    //F(0) = 0
    //F(1) = 1
    //F(n)=F(n−1)+F(n−2) for 𝑛>1

    int fibonacciSum = 0; 
    int newTwoSumsAgo; 

    if (currentIncrement == 0){
      fibonacciSum = 1; 
    }
    else if (currentIncrement == 1){
      fibonacciSum = 1;
    }
    else {
      newTwoSumsAgo = previousSum; 
      fibonacciSum = previousSum + twoSumsAgo; 
    }

    cout << "Fibonacci value: ----" << fibonacciSum << endl << endl; 

    if (previousSum == 0){
      currentIncrement = 1; 
    }
    else {
      currentIncrement++;
    }

    fibonacciAddition(--userIndex, currentIncrement, fibonacciSum, newTwoSumsAgo); //Decrement user index
  }
}

int main()
{
  // identifying output statements
  cout << "Programmer: Omar Shishani" << endl;
  cout << "Description: This program converts pounds" << endl;
  cout << " to kilograms." << endl; 
  cout << " The input is from the console keyboard," << endl;
  cout << " and output is to the console screen." << endl << endl;

  cout << "Enter an index [0 or greater]: "; 
  int userIndex; 
  cin >> userIndex; 

  fibonacciAddition(userIndex);

} //main() 
