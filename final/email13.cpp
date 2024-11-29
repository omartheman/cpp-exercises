// Lab: 13 - Term Project Preparation
// Programmer: Omar Shishani
// Editor(s) used: VSCode
// Compiler(s) used: Apple clang version 14.0.0
//

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

void checkForValidEmail(string targetString) {


  //Check if email address is valid 

  for (int j = 0; j < targetString.length(); j++){
    if (targetString[j] == '@'){
      //Loop backwards to look for invalid email address characters 
      //Go minus one character each time starting at j 

      for (int k = j; k > 0; k--){
        //Check for a space. Then check the word. 
        if (targetString[k] == ' '){

          //Now that space has been found, check the email address for validity until the next space 

          //Start by just returning the word that contains the @ between the two spaces. 

          string emailOnly; 

          //Loop through target string to find the next space, storing characters along the way 
          for (int l = k + 1; l < targetString.length(); l++){
            
            if (targetString[l] == ' '){ //Exit loop if another space is reached 
              break; 
            }
            emailOnly += targetString[l]; //Add characters to build email string

            // cout << emailOnly << endl; 
          }

          cout << emailOnly << endl; 

          //Check if emailOnly has a dot after the "@" 

          bool emailHasDot = checkEmailForDot(emailOnly);

          if (emailHasDot){ //Add email to array if has dot 
            if (nEmails < MAX_EMAILS) email[nEmails++] = emailOnly; 
          }

          break; // Break after space is found at beginning of email 
        }

      }

      break; //Break after line with '@' is found and evaluated 
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
