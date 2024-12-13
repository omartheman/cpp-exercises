// Lab 15.3
// Programmer: Omar Shishani
// Editor(s) used: VSCode
// Compiler(s) used: Apple clang version 14.0.0
//

#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <deque> 

using namespace std; 

struct LastFiveSongs {
  string songName; 
  int songIndex; 
};

int main()
{
  // identifying output statements
  cout << "Programmer: Omar Shishani" << endl;
  cout << "Description: This program reads a list of songs from a file." << endl;
  cout << " The song list is printed to the console. The program asks the " << endl;
  cout << " user if they want to play a song. The program selects a" << endl;
  cout << " random song from the list. If the song has already been" << endl;
  cout << " played within the last 5 songs chosen, the song is skipped." << endl;
  cout << " The input is from a file and the console keyboard," << endl;
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

      while (true) {

        bool songIsInLastFive = false; 

        //Choose a random song index
        int randSong = rand() % nSongs; 

        //Check if song has been played in last five songs 

        for (int i = 0; i < lastFiveSongs.size(); i++){
          if (randSong == lastFiveSongs[i].songIndex){
            songIsInLastFive = true; 
          }
        }

        if (songIsInLastFive){
          // cout << "This song has already been played. Skipping..." << endl; //Debugging 
          //Run function again to generate random song 
          //Can use recursion here 
        }
        else {
          //Add song to last five songs list 
          LastFiveSongs aLastSong;
          aLastSong.songIndex = randSong; //Set song index 
          lastFiveSongs.push_back(aLastSong);

          //If the song list is greater than 5, take a song off the front 
          if (lastFiveSongs.size() > 5){
            lastFiveSongs.pop_front(); 
          }
          
          cout << song[randSong] << endl; 

          break; 
        }
      }

    }
    else if (playSong == "N" || playSong == "n"){
      break; 
    }
  }

} //main() 
