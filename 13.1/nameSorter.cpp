// Lab 13.1
// Programmer: Omar Shishani
// Editor(s) used: VSCode
// Compiler(s) used: Apple clang version 14.0.0
//

#include <iostream>
#include <string>
#include <fstream> 

using namespace std; 

int main()
{
  // identifying output statements
  cout << "Programmer: Omar Shishani" << endl;
  cout << "Description: This program converts pounds" << endl;
  cout << " to kilograms." << endl; 
  cout << " The input is from the console keyboard," << endl;
  cout << " and output is to the console screen." << endl << endl;

  //Read file names 
  ifstream fin;   

  //Have user input file name 
  cout << "Please enter file name for a file containing names to sort [default: myFriends.txt]: "; 
  string fileName; 
  getline(cin, fileName); 

  if (fileName == ""){
    fileName = "myFriends.txt";
  };

  //Open file 
  fin.open(fileName.c_str());
  if (!fin.good()) throw "I/O error"; 

  const int MAX_NAMES = 5; 
  int nNames = 0;
  string name[MAX_NAMES]; 

  while (fin.good()){
    string aName; // Value to add 
    //Set aName's value
    fin >> aName; 

    if (nNames < MAX_NAMES) {
      name[nNames++] = aName; 
    }
    else break;
  }

  for (int i = 0; i < MAX_NAMES; i++){

    cout << "Printing names 1..." << endl; 
    cout << "Name: " << name[i] << endl;

    for (int j = i + 1; j < MAX_NAMES; j++){

      string iTemp = name[i];
      transform(iTemp.begin(), iTemp.end(), iTemp.begin(), ::tolower);
      
      string jTemp = name[j];
      transform(jTemp.begin(), jTemp.end(), jTemp.begin(), ::tolower);

      if (iTemp > jTemp) {
        //swap code 
        string temp = name[i];
        name[i] = name[j];
        name[j] = temp; 
      }
    }
  }

  cout << "Printing names 2..." << endl; 
  
  for (int i = 1; i < nNames; i++){
    cout << "Name: " << name[i] << endl;
  }

  sort(name, name + nNames);

  cout << "Printing names..." << endl; 
  
  for (int i = 1; i < nNames; i++){
    cout << "Name: " << name[i] << endl;
  }

} //main() 
