// Lab 13.3
// Programmer: Omar Shishani
// Editor(s) used: VSCode
// Compiler(s) used: Apple clang version 14.0.0
//

#include <iostream>
#include <string>
#include <fstream>
#include <ctime>

using namespace std; 

int main()
{
  // identifying output statements
  cout << "Programmer: Omar Shishani" << endl;
  cout << "Description: This program converts pounds" << endl;
  cout << " to kilograms." << endl; 
  cout << " The input is from the console keyboard," << endl;
  cout << " and output is to the console screen." << endl << endl;

  const int MAX_SONGS = 200; 
  int nSongs = 0; 
  string song[MAX_SONGS]; 

  //Use file 
  string fileName = "songs.txt"; 
  ifstream fin;   
  fin.open(fileName.c_str());
  if (!fin.good()) throw "I/O error"; 

  while (fin.good()){
    string aSong; 
    getline(fin, aSong);
    if (nSongs < MAX_SONGS) song[nSongs++] = aSong; //Add song to array 
  }

  for (int i = 0; i < nSongs; i++){
    cout << i + 1 << ": " << song[i] << endl; 
  }

  srand(time(0));

  while (true){
    cout << "Play a song? [y/n]:"; 
    string playSong; 
    cin >> playSong; 

    if (playSong == "Y" || playSong == "y"){
      //Choose a random song 
      int randSong = rand() % nSongs; 
      cout << song[randSong] << endl; 
    }
    else if (playSong == "N" || playSong == "n"){
      break; 
    }
  }

} //main() 
