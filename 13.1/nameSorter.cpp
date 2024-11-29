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
  cout << "Description: This program sorts a list of names in" << endl;
  cout << " alphabetical order." << endl; 
  cout << " The input is from the user and a file," << endl;
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

  //Sort names alphabetically 
  for (int i = 0; i < MAX_NAMES; i++){

    for (int j = i + 1; j < MAX_NAMES; j++){

      //Convert names to lowercase to compare case-insensitively 
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

  cout << "Printing alphabetized names..." << endl; 
  
  for (int i = 0; i < nNames; i++){
    cout << name[i] << endl;
  }

} //main() 
 