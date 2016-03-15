#ifndef TicTacToe_H
#define TicTacToe_H

#include <iostream>
using namespace std;
class TicTacToe
{
	string board;		// grid 
	char player[2];		// stores player identifiers
	int score[2];		// store score for wach player
	int draw;			// stores the draw score
public:
	TicTacToe();		// constructor
	void restart(void);		// resets the grid (board)
	bool move(int, char);	// validates player moves
	void print(void);		// prints the grid onto the screen
	char isWon(void);		// checks the progress of the game (won, draw or in progress)
};
#endif