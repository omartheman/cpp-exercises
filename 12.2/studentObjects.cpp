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

void collectStudentInfo(Student& s){
  cout << "Please input name: "; 
  getline(cin, s.name); 

  cout << "Please input address: "; 
  getline(cin, s.address); 

  cout << "Please input city: "; 
  getline(cin, s.city); 

  cout << "Please input ZIP code: "; 
  cin >> s.zip; //Input integer
  cin.ignore(1000, 10); 

  cout << "Please input gender: "; 
  getline(cin, s.gender); 

  cout << "Please input student ID: "; 
  cin >> s.studentId; //int
  cin.ignore(1000, 10); 

  cout << "Please input GPA: "; 
  cin >> s.gpa; //double 
  cin.ignore(1000, 10); 
  cout << endl;
}

void outputStudentInfo(Student& s){
  cout << "Name: " << s.name << endl; 
  cout << "Address: " << s.address << endl;
  cout << "City: " << s.city << endl; 
  cout << "ZIP code: " << s.zip << endl; 
  cout << "Gender: " << s.gender << endl; 
  cout << "Student ID: " << s.studentId << endl; 
  cout << "GPA: " << s.gpa << endl; 
  cout << endl; 
}

int main()
{
  // identifying output statements
  cout << "Programmer: Omar Shishani" << endl;
  cout << "Description: This program collects student data in" << endl;
  cout << " objects, and then outputs the data." << endl; 
  cout << " The input is from the console keyboard," << endl;
  cout << " and output is to the console screen." << endl << endl;

  Student student1; 
  Student student2; 
  Student student3;   

  collectStudentInfo(student1); 
  collectStudentInfo(student2); 
  collectStudentInfo(student3); 

  outputStudentInfo(student1); 
  outputStudentInfo(student2); 
  outputStudentInfo(student3); 

} //main() 
