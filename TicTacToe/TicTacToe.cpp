#include "TicTacToe.h"
#include <iostream>
using namespace std;

TicTacToe::TicTacToe()
{
	board = "---------";
	player[0] = 'X';
	player[1] = 'O';
	score[0] = 0;
	score[1] = 0;
	draw = 0;
}

void TicTacToe::restart()
{
	board = "---------";
}

bool TicTacToe::move(int choice, char player)
{
	bool play;
	if (board[choice - 1] != '-')
	{
		play = false;
	}
	else
	{
		board[choice - 1] = player;
		play = true;
	}
	return play;
}

void TicTacToe::print()
{
	cout << "		     Tic Tac Toe " << endl;
	cout << "		       |X| |O| " << endl << endl << endl;
	cout << "		     1     2     3   " << endl;
	cout << "		  *******************" << endl;
	cout << "		  *     *     *     *" << endl;
	cout << "		A *  " << board[0] << "  *  " << board[1] << "  *  " << board[2] << "  *" << "			SCORE:" << endl;
	cout << "		  *     *     *     *" << "			------" << endl;
	cout << "		  *******************" << "			X: " << score[0] << endl;
	cout << "		  *     *     *     *" << "			O: " << score[1] << endl;
	cout << "		B *  " << board[3] << "  *  " << board[4] << "  *  " << board[5] << "  *" << "			DRAW: " << draw << endl;
	cout << "		  *     *     *     *" << endl;
	cout << "		  *******************" << endl;
	cout << "		  *     *     *     *" << endl;
	cout << "		C *  " << board[6] << "  *  " << board[7] << "  *  " << board[8] << "  *" << endl;
	cout << "		  *     *     *     *" << endl;
	cout << "		  *******************" << endl << endl;
}

char TicTacToe::isWon()
{
	char status = 'C';
	//winning combinations
	if (board[0] == board[1] && board[0] == board[2] && board[0] != '-')		// comb 1
	{
		if (board[0] == player[0])
		{
			score[0] += 1;
			status = player[0];
		}
		else if (board[0] == player[1])
		{
			score[1] += 1;
			status = player[1];
		}
	}
	else if (board[3] == board[4] && board[3] == board[5] && board[3] != '-')		// comb 2
	{
		if (board[3] == player[0])
		{
			score[0] += 1;
			status = player[0];
		}
		else if (board[3] == player[1])
		{
			score[1] += 1;
			status = player[1];
		}
	}
	else if (board[6] == board[7] && board[6] == board[8] && board[6] != '-')		// comb 3
	{
		if (board[6] == player[0])
		{
			score[0] += 1;
			status = player[0];
		}
		else if (board[6] == player[1])
		{
			score[1] += 1;
			status = player[1];
		}
	}
	else if (board[0] == board[3] && board[0] == board[6] && board[0] != '-')		// comb 4
	{
		if (board[0] == player[0])
		{
			score[0] += 1;
			status = player[0];
		}
		else if (board[0] == player[1])
		{
			score[1] += 1;
			status = player[1];
		}
	}
	else if (board[1] == board[4] && board[1] == board[7] && board[1] != '-')		// comb 5
	{
		if (board[1] == player[0])
		{
			score[0] += 1;
			status = player[0];
		}
		else if (board[1] == player[1])
		{
			score[1] += 1;
			status = player[1];
		}
	}
	else if (board[2] == board[5] && board[2] == board[8] && board[2] != '-')		// comb 6
	{
		if (board[2] == player[0])
		{
			score[0] += 1;
			status = player[0];
		}
		else if (board[2] == player[1])
		{
			score[1] += 1;
			status = player[1];
		}
	}
	else if (board[0] == board[4] && board[0] == board[8] && board[0] != '-')		// comb 7
	{
		if (board[0] == player[0])
		{
			score[0] += 1;
			status = player[0];
		}
		else if (board[0] == player[1])
		{
			score[1] += 1;
			status = player[1];
		}
	}
	else if (board[2] == board[4] && board[2] == board[6] && board[2] != '-')		// comb 8
	{
		if (board[2] == player[0])
		{
			score[0] += 1;
			status = player[0];
		}
		else if (board[2] == player[1])
		{
			score[1] += 1;
			status = player[1];
		}
	}
	//end of winning combinations
	else
	{
		// check for draw or progress
		int prog = 1;
		for (int x = 0; x <= 8; x++)
		{
			if (board[x] == '-') prog = 0;
		}
		if (prog == 0) status = 'P';
		else if (prog == 1)
		{
			status = 'D';
			draw += 1;
		}
	}
	return status;
}