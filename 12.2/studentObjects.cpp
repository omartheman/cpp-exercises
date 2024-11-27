// Lab 12.2
// Programmer: Omar Shishani
// Editor(s) used: VSCode
// Compiler(s) used: Apple clang version 14.0.0
//

#include <iostream>
#include <string>

using namespace std; 

// Create an object specification with these eight data fields: name, address, city, state, zip, gender, student id, and gpa

struct Student {
  string name; 
  string address; 
  string city; 
  int zip;
  string gender; 
  int studentId; 
  double gpa; 
}; // Student 

void outputStud(Student& s){
  
}

int main()
{
  // identifying output statements
  cout << "Programmer: Omar Shishani" << endl;
  cout << "Description: This program converts pounds" << endl;
  cout << " to kilograms." << endl; 
  cout << " The input is from the console keyboard," << endl;
  cout << " and output is to the console screen." << endl << endl;

  Student student1 = {
    "Omar"
  }; 
  Student student2; 
  Student student3;   


  cout << student1.name << endl;

} //main() 
