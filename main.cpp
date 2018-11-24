#include <iostream>

using namespace std;

int game(){
  // Ask for continue or exit
  // 1 for continue, 2 for exit
  return n; // n is selection
}

int selectLevel(){
  return level; // returns an integer which is the level 
}

int printGrid(int matrix){
  char grid[matrix+2][2*matrix+1] = { // The fucking GRID
                        {'|','~','|','~','|','~','|','~','|','~','|'},
                        {'|',' ','|',' ','|',' ','|',' ','|',' ','|'},
                        {'|',' ','|',' ','|',' ','|',' ','|',' ','|'},
                        {'|',' ','|',' ','|',' ','|',' ','|',' ','|'},
                        {'|',' ','|',' ','|',' ','|',' ','|',' ','|'},
                        {'|',' ','|',' ','|',' ','|',' ','|',' ','|'},
                        {'|','~','|','~','|','~','|','~','|','~','|'},
                        
                        };
    /*for(int i=0; i<=6 ; i++){               // The GridPrinter
        for (int j=0 ; j<= 10 ; j++){
            cout << grid[i][j];
        }
        cout << endl;
    }*/
  char candies[] = {'c','O','i','N','d','p','z','x','T','@','#','$','&','*'}; // These are all the candies we will use. Special characters are special candies and vice versa
  
  
  
  return fuckUpStatus;                      // fuckUpStatus tells if everything goes right or not! 
}

int candyCrush(int level){                  // The fucking game, Takes input the level. level range from (1-3)
  printGrid(level * 5) ;                    // print the grid for the condies  
  Sleep(2000);
}

int main(){
  salamDua();
  switch(game()){
    case 1:                                // If user selects to continue
      candyCrush(selectLevel());           // Ask for selecting Level, and then put it as argument for starting the game.
      break;
    case 2:                                // If user selects to give a f**k
      exit;                                // Exit the whole fucking Game
      break;
    default:                               // If the mother fucker user enters something shit!
      cout << "\nInvalid Output";          // Give him a fuck and 
      game();                              // ask again
      
  }
  
  return 0;
}
