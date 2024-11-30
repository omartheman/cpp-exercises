// Lab: 13 - Term Project Preparation
// Programmer: Omar Shishani
// Editor(s) used: VSCode
// Compiler(s) used: Apple clang version 14.0.0
//

//TO DO: 
// - Check line for multiple emails. Currently only gets the first email in the line. 

#include <iostream>
#include <string>
#include <fstream> 

using namespace std; 

const int MAX_EMAILS = 1000; 
int nEmails = 0; 
string email[MAX_EMAILS]; 

bool lineContainsAt(string targetString){

  bool lineHasAt = false; 

  for (int i = 0; i < targetString.length(); i++){
    if (targetString[i] == '@') {
      lineHasAt = true;
    }; 
  };
   
  return lineHasAt; 
}

bool checkEmailForDot(string email){

  bool emailHasDot = false; 

  //Check each character until "@" is reached, then check for dot 
  for (int i = 0; i < email.length(); i++){
    if (email[i] == '@'){ //Check all characters after "@" for dot 
      for (int j = i; j < email.length(); j++){
        if (email[j] == '.') {
          emailHasDot = true; 
        }
      }
    }
  }

  return emailHasDot; 
}

bool isValidEmailChar(char emailChar){

  bool charIsValid = false; 

  if ( //Check ASCII for valid email characters 
    emailChar >= 48 && emailChar <= 57 //digits 0-9
    ||
    emailChar >= 97 && emailChar <= 122  // a-z
    || 
    emailChar >= 65 && emailChar <= 90 // A-Z
    || emailChar == 33 //!
    || emailChar == 35 //#
    || emailChar == 36 //$
    || emailChar == 37 //%
    || emailChar == 38 // &
    || emailChar == 39 //'
    || emailChar == 42 //*
    || emailChar == 43 //+
    || emailChar == 47 // / 
    || emailChar == 61 // =
    || emailChar == 63 // ? 
    || emailChar == 94 // ^
    || emailChar == 95 // _ 
    || emailChar == 96 // `
    || emailChar == 123 // {
    || emailChar == 124 // | 
    || emailChar == 125 // } 
    || emailChar == 126 // ~ 
  ) {
    charIsValid = true; 

    cout << "Char is valid." << endl; 
  }
  else {
    cout << "Char is not valid." << endl; 
  }

  return charIsValid; 

}

void checkForValidEmail(string targetString) {


  //For each "@" symbol, search backwards to a space, and forwards to a space 



  //Check if email address is valid 

  for (int j = 0; j < targetString.length(); j++){
    if (targetString[j] == '@'){

      //Loop backwards to look for invalid email address characters 

      for (int k = j; k >= 0; k--){

        //Check for a space. Then check the word. 

        bool kCharIsValid = isValidEmailChar(targetString[k]);

        if (!kCharIsValid || k == 0){ //Check for space, or if end of line has been reached 

          //Now that space has been found, check the email address for validity until the next space 

          string emailOnly; 

          cout << "emailOnly: " << endl; 

          //Loop through target string to find the next space, storing characters along the way 
          for (int l = k + 1; l < targetString.length(); l++){
            
            bool lCharIsValid = isValidEmailChar(targetString[l]);
            // targetString[l] == ' ' || targetString[l] == ','

            if (!lCharIsValid || l == targetString.length()){ //Exit loop if another space is reached 
              break; 
            }
            emailOnly += targetString[l]; //Add characters to build email string

            // cout << emailOnly << endl; 
          }

          //Check if emailOnly has a dot after the "@" 

          bool emailHasDot = checkEmailForDot(emailOnly);

          if (emailHasDot){ //Add email to array if has dot 
            if (nEmails < MAX_EMAILS) email[nEmails++] = emailOnly; 
          }

          break; // Break after space is found at beginning of email 
        }

      }

    }
  }

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

  string fileLine; 
  //Loop through all lines in file
  while (fin.good()){ //check if end of file is reached 
    getline(fin, fileLine); 

    if (lineContainsAt(fileLine)){ //If line has an "@" symbol, look for a valid email address
      checkForValidEmail(fileLine);
    }

  }

  fin.close(); 

  //Read emails from array 
  cout << "Reading emails from list: " << endl; 
  for (int i = 0; i < nEmails; i++) cout << email[i] << endl; 

} //main() 
