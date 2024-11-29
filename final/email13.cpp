// Lab: 12 - Term Project Preparation
// Programmer: Omar Shishani
// Editor(s) used: VSCode
// Compiler(s) used: Apple clang version 14.0.0
//

#include <iostream>
#include <string>
#include <fstream> 

using namespace std; 

bool findEmailLine(string targetString) {

  bool lineIsEmail = false; 

  for (int i = 0; i < targetString.length(); i++){
    if (targetString[i] == '@') {

      //Check if email address is valid 

      cout << "Checking back." << endl; 
      for (int j = 0; j < targetString.length(); j++){
        if (targetString[j] == '@'){
          //Loop backwards to look for invalid email address characters 
          //Go minus one character each time starting at j 

          cout << "Checking back 2." << endl;
          cout << "j: " << j << endl;   
          for (int k = j; k > 0; k--){
            cout << "Checking back 3." << endl;
            cout << "Letter: " << targetString[k] << endl;
            //Check for a space. Then check the word. 
            if (targetString[k] == ' '){
              cout << "Space found." << endl; 

              //Now that space has been found, check the email address for validity until the next space 

              //Start by just returning the word that contains the @ between the two spaces. 

              string emailOnly; 

              //Loop through target string to find the next space, storing characters along the way 
              for (int l = k + 1; l < targetString.length(); l++){
                
                if (targetString[l] == ' '){ //Exit loop if another space is reached 
                  break; 
                }
                emailOnly += targetString[l];
                cout << "Email: " << emailOnly << endl; 
              }

            }

          }

          break; //Break after line with '@' is found and evaluated 
        }
      }

      lineIsEmail = true;
      cout << targetString << endl; 
      break;
    }; 
  };
   
  return lineIsEmail; 
}

int main()
{
  // identifying output statements
  cout << "Programmer: Omar Shishani" << endl;
  cout << "Description: This program reads an input file and" << endl;
  cout << " checks which lines contain '@'. The lines with '@'" << endl; 
  cout << " are printed to the console." << endl; 
  cout << " The input is from a file," << endl;
  cout << " and output is to the console screen." << endl << endl;

  // Get input file name 
  string fileName; 
  string defaultFileName = "fileContainingEmails.txt"; 

  cout << "Enter input file name [default: " << defaultFileName << "]: "; 
  getline(cin, fileName); 
  cout << endl; 

  if (fileName.length() == 0){
    fileName = defaultFileName; 
  }

  // Get output file name 
  string defaultOutputFileName = "copyPasteMyEmails.txt"; 
  string outputFileName; 

  cout << "Enter output file name [default:" << defaultOutputFileName << "]:"; 
  getline(cin, outputFileName); 
  cout << endl; 

  cout << "Length: "; 
  cout << outputFileName.length(); 

  if (outputFileName.length() == 0){
    outputFileName = defaultOutputFileName; 
  }

  cout << endl << "Input file name: " << fileName << endl; 
  cout << "Output file name: " << outputFileName << endl; 
  cout << endl; 

  //Read file names 
  ifstream fin;   
  fin.open(fileName.c_str());
  if (!fin.good()) throw "I/O error"; 

  cout << "Lines with '@': " << endl; 

  string fileLine; 
  //Loop through all lines in file
  while (fin.good()){ //check if end of file is reached 
    getline(fin, fileLine); 
    findEmailLine(fileLine);
  }

  fin.close(); 

} //main() 
