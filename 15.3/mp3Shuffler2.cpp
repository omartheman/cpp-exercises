// Lab 15.3
// Programmer: Omar Shishani
// Editor(s) used: VSCode
// Compiler(s) used: Apple clang version 14.0.0
//

#include <iostream>
#include <string>
#include <fstream>
#include <ctime>

using namespace std; 

struct LastFiveSongs {
  string songName; 
  int songIndex; 
};

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

  srand(time(0)); //Prime the random function 

  //Create empty song list
  deque<LastFiveSongs> lastFiveSongs; 

  while (true){
    cout << "Play a song? [y/n]:"; 
    string playSong; 
    cin >> playSong; 

    if (playSong == "Y" || playSong == "y"){
      //Choose a random song 


      bool songIsInLastFive = true; 

      int randSong = rand() % nSongs; 

      while (songIsInLastFive) {

        //Check if song has been played in last five songs 

        for (int i = 0; i < lastFiveSongs.size(); i++){
          if (randSong == lastFiveSongs[i].songIndex){
            songIsInLastFive = true; 
          }
        }

      }

      //Create a function that checks if the next up song was in the last five. If it was, skip this song. If not, play this song. 


      if (songIsInLastFive){
        cout << "This song has already been played. Skipping..." << endl; 
        //Run function again to generate random song 
        //Can use recursion here 
      }
      else {
        //Add song to last five songs list 
        LastFiveSongs aLastSong;
        aLastSong.songIndex = randSong; //Set song index 
        lastFiveSongs.push_back(aLastSong);
        
        cout << song[randSong] << endl; 
      }

    }
    else if (playSong == "N" || playSong == "n"){
      break; 
    }
  }

} //main() 


void playRandomSong(){
  
}