// Lab 9.5
// Programmer: Omar Shishani
// Editor(s) used: VSCode
// Compiler(s) used: Apple clang version 14.0.0
//

#include <iostream>
#include <string>

using namespace std; 

int main()
{
  // identifying output statements
  cout << "Programmer: Omar Shishani" << endl;
  cout << "Description: This program calculates how long it will take" << endl;
  cout << " for a child to earn a thousand, million," << endl; 
  cout << " and billion dollars if they are given" << endl; 
  cout << " a starting 5-cent allowance, which is doubled each week." << endl; 
  cout << " There is no input," << endl;
  cout << " and output is to the console screen." << endl << endl;

  //Calculate the number of weeks it takes to be a billionaire. 
  // A billion is 1,000,000,000.00 
  // You start at 0.05 at the end of the first week, and double every week 
 

  //total + 0.05
  //total + 0.10
  //total + 0.20
  //total + 0.40

  //increment = 0.5 
  //increment * 2 = 0.10 
  //increment * 2 = 0.20 
 
  double total; 
  double increment = 0.05;

  int weeksToThousand = 0; 
  int weeksToMillion = 0; 
  int weeksToBillion = 0; 

  for (int i = 1; total <= 1000000000; i++) {

    // cout << "Number of weeks passed: " << i << endl; 
    // cout << "Current increment: " << increment << endl; 
    total += increment; 
    // cout << "Total: " << total << endl;

    increment *= 2; //Double increment: Multiply itself by 2. Starting at 0.05 * 2 = 0.10 

    //i needs to double each week
    //First week i get 5 cents
    //Second week I get 10 cents 
    //Third week I get 20 cents 
    //Fourth week I get 40 cents 

    if (total >= 1000 && weeksToThousand == 0){
      weeksToThousand = i; 
    }

    if (total >= 1000000 && weeksToMillion == 0){
      weeksToMillion = i; 
    }

    if (total >= 1000000000 && weeksToBillion == 0){
      weeksToBillion = i; 
    }
  }

  cout << "It will take " << weeksToThousand << " weeks to become a thousandaire" << endl; 
  cout << "It will take " << weeksToMillion << " weeks to become a millionaire" << endl; 
  cout << "It will take " << weeksToBillion << " weeks to become a billionaire" << endl; 

} //main() 
