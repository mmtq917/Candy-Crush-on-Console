
#include <iostream>

using namespace std;

int game(){
    int n;
  cout << "\n\nPlease enter:\n\t0. Exit\n\t1. Continue\t";cin >> n ;
  return n; // n is selection
}

int selectLevel(){
    int level;
    cout << "\n\nHelp us in cooking candies:\n\t1. Easy\n\t2. Intermediate\n\t3. Hard\t";
    cin >> level;
  return level; // returns an integer which is the level
}

void printGrid(int matrix){
  char grid[matrix+2][2*matrix+1];              // The grid Creator

    for (int i = 0 ; i <= 2*matrix+1 ; i++){    //Print first and last row exclusively
        grid[0][i] = '|';
        grid[matrix+1][i] = '|';
        i++;

        if (i > 2*matrix) continue;

        grid[0][i] = '~';
        grid[matrix+1][i] = '~';
    }

    for (int j = 1 ; j<= matrix ; j++){
        for (int i = 0 ; i <= 2*matrix+1 ; i++){
            grid[j][i] = '|';

            i++;

            if (i > 2*matrix){
                continue;
            }

            grid[j][i] = ' ';

        }
    }

    for(int i=0; i<=6 ; i++){               // The GridPrinter
        for (int j=0 ; j<= 10 ; j++){
            cout << grid[i][j];
        }
        cout << endl;
    }
}

int fillCandies(int level){
  char totalCandies[15] = {'c','O','i','N','d','p','z','H','x','T','@','#','$','&','*'}; // These are all the candies we will use. Special characters are special candies and vice versa

  char candies[level*3];                    // Can dies used in the current level
  cout << "\n\n\n";
  for(int i=0; i<= level*3 ; i++){          // Selecting candies to use in the current level.
    candies[i] = totalCandies[i];
  }
  for(int i=14,j=level*3+1; i>= level*1 ; --i){
    candies[j] = candies[i] ;
    j++;
  }
  return 0;
}

int candyCrush(int level){                  // The fucking game, Takes input the level. level range from (1-3)
  printGrid(level * 5) ;                    // print the grid for the condies

  fillCandies(level);
}

void salamDua(){


    cout << "\n\n\n\t\t\tCANDY CRUSH";
    cout << "\n\n\n\t\t     Welcome to the game";

}

int main(){
  salamDua();                              // Every fucking traditional thing, like Hello, welcome to this f**. Give a f**, and get lost etc.
  switch(game()){
    case 1:                                // If user selects to continue
      candyCrush(selectLevel());           // Ask for selecting Level, and then put it as argument for starting the game.
      break;
    case 2:
        cout << "\nExiting..." ;                               // If user selects to give a f**k
      return 0;                                // Exit the whole fucking Game
      break;
    default:                               // If the mother fucker user enters something shit!
      cout << "\nInvalid Output";
      main();
      break;                             // ask again

  }

  return 0;
}
