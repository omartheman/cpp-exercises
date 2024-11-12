// Lab 10.3
// Programmer: Omar Shishani
// Editor(s) used: VSCode
// Compiler(s) used: Apple clang version 14.0.0
//

#include <iostream>
#include <iomanip> 
#include <fstream>

using namespace std; 

int main()
{
  // identifying output statements
  cout << "Programmer: Omar Shishani" << endl;
  cout << "Description: This program calculates the" << endl;
  cout << " temperature in degrees Fahrenheit based on a degrees Celsius temperature." << endl;
  cout << " The input is from a file," << endl;
  cout << " and output is to the console screen." << endl << endl;

  //Read from input file
  ifstream fin;   
  string fileName = "./temps.txt";
  fin.open(fileName.c_str());
  if (!fin.good()) throw "I/O error";  
  
  while (true) {

    double temperatureCelsius; 
    cout << "Please enter a temperature in degrees Celsius, with any number of decimal places: ";
    fin >> temperatureCelsius;

    fin.ignore(1000, 10); //Skip to next line in file input

    if (temperatureCelsius == -999) {
      cout << endl << "Sentinel value -999 detected. Exiting program." << endl; 
      break; 
    }

    double temperatureFahrenheit =  9.0/5 * temperatureCelsius + 32; 

    cout << endl; 
    cout << temperatureCelsius;
    cout << " degrees Celsius equals ";  
    
    cout.setf(ios::fixed);
    cout << setprecision(1); 

    cout << temperatureFahrenheit; 
    cout << " degrees Fahrenheit."; 
    cout << endl; 

    if (!fin.good()) break; //Close program if end-of-file reached
  }

  fin.close(); //Close the file being read from. 

}