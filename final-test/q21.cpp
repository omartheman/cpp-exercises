
#include <iostream>
#include <string>
#include <iomanip>

using namespace std; 

int main()
{

  int score[] = {81, 98, 71, 60, 61, 90, 91, 71, 77, 83, 100, 91};


  for (int i = 0; i < 12; i++) {

    for (int j = i + 1; j < 12; j++) {
      if (score[i] > score[j]){
        int tempScore = score[i]; 
        score[i] = score[j]; 
        score[j] = tempScore; 
      }
    }
  }


}
