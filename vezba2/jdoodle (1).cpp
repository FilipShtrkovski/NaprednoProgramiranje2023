//Filip SHtrkovski INKI874
#include <iostream>
#include <stdlib.h>
#include <time.h>

 using namespace std;

 
void shuffle (int[][13]);

void deal (const int[][13], const char *[], const char *[]);

int main () {
  
const char *suite[4] = { "Hearts", "Diamonds", "Clubs", "Spades" };
const char *face[13] = { "Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King" };
  
int deck[4][13] = { 0 };
 
srand (time (0));
 
shuffle (deck);
  
deal (deck, face, suite);
  
 
return 0;

}

void
shuffle (int deck[][13]) 
{
  
    int row, column, card;
  
 
    for (card = 1; card <= 52; card++){
      
        do
	    {
	  
        row = rand () % 4;
	  
        column = rand () % 13;
	
        }
        while (deck[row][column] != 0);
      
            deck[row][column] = card;
    
    }

}


 
void
deal (const int deck[][13], const char *face[], const char *suit[]) 
{
  
int card, row, column;
  
const char *space;
  
for (card = 1; card <= 52; card++){
      
    for (row = 0; row <= 3; row++){
	  
        for (column = 0; column <= 12; column++){
	      
            if (deck[row][column] == card){
		  
            cout << card << ". " << face[column] << " of " << suit [row] << '\n';
		
            }
        }
    }
}

}
//ova zadaca mesha eden shpil na karti i potoa go pecati
//imam 2 funkci od koj ednata sluzi za meshanje na shpilot
//a drugata sluzi za pecatenje na shpilot