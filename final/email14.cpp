// Lab: 14 - Term Project Preparation
// Programmer: Omar Shishani
// Editor(s) used: VSCode
// Compiler(s) used: Apple clang version 14.0.0
//

#include <iostream>
#include <string>
#include <fstream> 
#include <algorithm> 

using namespace std; 

const int MAX_EMAILS = 1000; 
int nEmails = 0; 
string email[MAX_EMAILS]; 

bool lineContainsAt(string targetString){

  bool lineHasAt = false; 

  for (int i = 0; i < targetString.length(); i++){ //Loop through all characters in string
    if (targetString[i] == '@') { // Identify lines with "@" characters
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

  bool charIsValid = true; 

  if ( //Check ASCII for invalid email characters 

    // Check for digits 0-9
    emailChar != 48 && emailChar != 49 && emailChar != 50 && emailChar != 51 && emailChar != 52 && 
    emailChar != 53 && emailChar != 54 && emailChar != 55 && emailChar != 56 && emailChar != 57 &&

    // Check for lowercase letters a-z
    emailChar != 97 && emailChar != 98 && emailChar != 99 && emailChar != 100 && emailChar != 101 && 
    emailChar != 102 && emailChar != 103 && emailChar != 104 && emailChar != 105 && emailChar != 106 && 
    emailChar != 107 && emailChar != 108 && emailChar != 109 && emailChar != 110 && emailChar != 111 && 
    emailChar != 112 && emailChar != 113 && emailChar != 114 && emailChar != 115 && emailChar != 116 && 
    emailChar != 117 && emailChar != 118 && emailChar != 119 && emailChar != 120 && emailChar != 121 && 
    emailChar != 122 &&

    // Check for uppercase letters A-Z
    emailChar != 65 && emailChar != 66 && emailChar != 67 && emailChar != 68 && emailChar != 69 && 
    emailChar != 70 && emailChar != 71 && emailChar != 72 && emailChar != 73 && emailChar != 74 && 
    emailChar != 75 && emailChar != 76 && emailChar != 77 && emailChar != 78 && emailChar != 79 && 
    emailChar != 80 && emailChar != 81 && emailChar != 82 && emailChar != 83 && emailChar != 84 && 
    emailChar != 85 && emailChar != 86 && emailChar != 87 && emailChar != 88 && emailChar != 89 && 
    emailChar != 90 
    
    && emailChar != 33 //!
    && emailChar != 35 //#
    && emailChar != 36 //$
    && emailChar != 37 //%
    && emailChar != 38 // &
    && emailChar != 39 //'
    && emailChar != 42 //*
    && emailChar != 43 //+
    && emailChar != 47 // / 
    && emailChar != 61 // =
    && emailChar != 63 // ? 
    && emailChar != 94 // ^
    && emailChar != 95 // _ 
    && emailChar != 96 // `
    && emailChar != 123 // {
    && emailChar != 124 // | 
    && emailChar != 125 // } 
    && emailChar != 126 // ~ 

    && emailChar != '@'
    && emailChar != '.'
  ) {
    charIsValid = false; 
  }

  return charIsValid; 

}

void checkForValidEmail(string targetString) {

  for (int j = 0; j < targetString.length(); j++){
    if (targetString[j] == '@'){ //Search for "@"

      for (int s = j; s >= 0; s--){ //Loop backwards from "@" to look for first invalid email address character 

        bool kCharIsValid = isValidEmailChar(targetString[s]);

        if (!kCharIsValid || s == 0){ //If char is invalid, or end of line is reached

          string emailOnly; 
          
          for (int e = s + 1; e < targetString.length(); e++){ //Loop through target string to find the next invalid character (end character--"e" for "end"), storing characters in email variable along the way 
            
            bool lCharIsValid = isValidEmailChar(targetString[e]);

            if (!lCharIsValid || e == targetString.length()){ //Exit loop if another space is reached 
              break; 
            }
            emailOnly += targetString[e]; //Add characters to build email string

          }

          bool emailHasDot = checkEmailForDot(emailOnly); //Check if emailOnly has a dot after the "@" 


          //Loop through email array and check if current email exists already 
          bool emailAlreadyExists = false; 

          // Check if email is already in list
          for (int i = 0; i < nEmails; i++){

            //Convert emails to lowercase to compare case-insensitively 
            string enteredEmailTemp = emailOnly;
            transform(enteredEmailTemp.begin(), enteredEmailTemp.end(), enteredEmailTemp.begin(), ::tolower);
            
            string listEmailTemp = email[i];
            transform(listEmailTemp.begin(), listEmailTemp.end(), listEmailTemp.begin(), ::tolower);

            if (enteredEmailTemp == listEmailTemp) emailAlreadyExists = true;
          }

          //*** STORE EMAIL *** 
          if (emailHasDot && !emailAlreadyExists){ //Add email to array if has dot, and email doesn't already exist 
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

  if (fileName != defaultFileName){ //If user entered an input file name, set this as default output file name
    defaultOutputFileName = fileName;
  }

  string outputFileName; 

  //Prompt user to enter output file 
  cout << "Enter output file name [default: " << defaultOutputFileName << "]:"; 
  getline(cin, outputFileName); 
  cout << endl; 

  //
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
