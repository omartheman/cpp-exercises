// Lab: Final
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

  // cout << endl << "targetString: " << targetString << endl; //for debugging

  for (int j = 0; j < targetString.length(); j++){
    if (targetString[j] == '@'){ //Search for "@"

      for (int s = j; s >= 0; s--){ //Loop backwards from "@" to look for first invalid email address character 

        bool kCharIsValid = isValidEmailChar(targetString[s]);

        if (!kCharIsValid || s == 0){ //If char is invalid, or end of line is reached

          string emailOnly; 

          int startIndex; 

          if (s == 0) { //If the beginning of the line was reached, use the first character (at the current index of 0) as the start character.
            startIndex = s; 
          }
          else { // If an invalid character was found, use the last character as the start character. 
            startIndex = s + 1; 
          }
          
          for (int e = startIndex; e < targetString.length(); e++){ //Loop through target string to find the next invalid character (end character--"e" for "end"), storing characters in email variable along the way. Use "s+1" because the character at index "s" is invalid.

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

void outputEmailsToFile(string email[], int nEmails, string outputFileName){

  //Send emails to output file 
  ofstream fout; 
  fout.open(outputFileName);
  if (!fout.good()) throw "I/O error."; 

  for (int i = 0; i < nEmails; i++) {
    fout << email[i] << ";";

    if (i != nEmails - 1){ //Add space if the item is not last  
      fout << " "; 
    };
  }; 

  fout.close(); 
}

void outputCompletionMessage(string email[], int nEmails, string outputFileName, string fileName){
  //Read emails from array 

  if (nEmails > 0){ // If there are emails found in the input file 
    cout << "---Results---" << endl; 
    cout << nEmails << " emails were found, and printed to the output file \"" << outputFileName << "\"." << endl << endl; //Output message to user 

    cout << "---Emails found--- " << endl; 
    for (int i = 0; i < nEmails; i++) cout << email[i] << endl; 
    cout << endl; //Extra line after last output line 

    //Include a message in the console output explaining to the user to open the output file and copy/paste its contents into the "to", "cc", or "bcc" field of any email message. But explain that it is best to use the "bcc" field so that everyone's email address does not appear in the message, to protect their privacy.

    cout << "---Instructions---" << endl; 
    cout << "To use the output email file, open the output file and copy/paste the contents into the \"to\", \"cc\", or \"bcc\" field of any email message. (It is best to use the \"bcc\" field so that the email addresses will not appear in the message, thus protecting the privacy of all recipients.)" << endl << endl;
  }
  else { //If no emails are found in the input file 
    cout << "Sorry, no emails were found in the input file \"" << fileName << "\"" << endl << endl; //Output message to user 
  }
}

int main()
{
  cout << endl; //Extra line after first input line in console
  // identifying output statements
  cout << "---Program Details---" << endl;
  cout << "Programmer: Omar Shishani" << endl;
  cout << "Description: This program reads an input file and" << endl;
  cout << " checks which lines contain '@'. The lines with '@'" << endl; 
  cout << " are printed to the console." << endl; 
  cout << " The input is from a file," << endl;
  cout << " and output is to the console screen." << endl << endl;

  // Get input file name 
  string fileName; 
  string defaultFileName = "fileContainingEmails.txt"; 

  cout << "---User Input---" << endl; 
  cout << "Enter input file name [default: " << defaultFileName << "]: "; 
  getline(cin, fileName); 

  if (fileName.length() == 0){
    fileName = defaultFileName; 
  }

  // Get output file name 
  string defaultOutputFileName = "copyPasteMyEmails.txt"; 

  if (fileName != defaultFileName){ //If user entered an input file name, set this as default output file name
    defaultOutputFileName = fileName;
  }

  string outputFileName; 

  cout << "Enter output file name [default: " << defaultOutputFileName << "]:"; 
  getline(cin, outputFileName); 

  if (outputFileName.length() == 0){
    outputFileName = defaultOutputFileName; 
  }

  cout << endl; 
  cout << "---Input/Output File Names---" << endl;
  cout << "Input file name: " << fileName << endl; 
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

  if (nEmails != 0){ //If there are 0 emails, don't output to file
    outputEmailsToFile(email, nEmails, outputFileName); 
  }

  //Output messages to user
  outputCompletionMessage(email, nEmails, outputFileName, fileName);

} //main() 
