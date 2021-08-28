# include <iostream>
# include <conio.h>
# include <stdlib.h>
# include <time.h>

using namespace std;

void shuffle(int [][13]);
void deal(const int[][13], const char *[], const char *[]);

int main(){
	
	const char *suite[4] = {"Hearts", "Diamonds", "Spades", "Clubs"};
	const char *face[13] = {"Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven",
							"Eight", "Nine", "Ten", "Jack", "Queen", "King"};
	
	int deck[4][13] = {0};
	
	srand(time(0));
	shuffle(deck);
	deal(deck, suite, face);
	
//	for(int i=0; i<4; i++){
//		for (int j=0; j<13; j++){
//			cout << deck[i][j] << "\t";
//		}
//		cout << endl;
//	}
	
	getche();
	return 0;
}

void shuffle(int wDeck[][13]){
	int row, column, card;
	
	for(card=1; card<=52; card++){
		do{
			row = rand() % 4;
			column = rand() % 13;
		}while(wDeck[row][column] != 0);
		
		wDeck[row][column] = card;
	}
}

void deal(const int wDeck[][13], const char *wSuite[], const char *wFace[]){
	int card, row, column;
	const char *space;
	
	for(card=1; card<=52; card++){
		for(row=0; row<=3; row++){
			for(column=0; column<=12; column++){
				if (wDeck[row][column] == card){
					cout << card << ". " << wFace[column] << " of " << wSuite[row] << "\n";
				}
			}
		}
	}	
}


















