#include <stdbool.h>

#include "board.h"
#include "game.h"


bool xWins(board *b) {
	char t = 'X';
	if (
		*(b[0]) == t && *(b[4]) == t && *(b[8]) == t ||
		*(b[0]) == t && *(b[1]) == t && *(b[2]) == t ||
		*(b[3]) == t && *(b[4]) == t && *(b[5]) == t ||
		*(b[6]) == t && *(b[7]) == t && *(b[8]) == t ||
		*(b[0]) == t && *(b[3]) == t && *(b[6]) == t ||
		*(b[1]) == t && *(b[4]) == t && *(b[7]) == t ||
		*(b[2]) == t && *(b[5]) == t && *(b[8]) == t ||
		*(b[2]) == t && *(b[4]) == t && *(b[6]) == t
		
	) {
		return true;
	}

	return false;
}

bool oWins(board *b) {
	char t = 'O';
	if (
		*(b[0]) == t && *(b[4]) == t && *(b[8]) == t ||
		*(b[0]) == t && *(b[1]) == t && *(b[2]) == t ||
		*(b[3]) == t && *(b[4]) == t && *(b[5]) == t ||
		*(b[6]) == t && *(b[7]) == t && *(b[8]) == t ||
		*(b[0]) == t && *(b[3]) == t && *(b[6]) == t ||
		*(b[1]) == t && *(b[4]) == t && *(b[7]) == t ||
		*(b[2]) == t && *(b[5]) == t && *(b[8]) == t ||
		*(b[2]) == t && *(b[4]) == t && *(b[6]) == t
		
	) {
		return true;
	}

	return false;
}

bool isDraw(board *b) {
	for (int i = 0; i < 9; i++) {
		if (*(b[i]) != 'X' && *(b[i]) != 'O') {
			return false;
		}
	}

	return !xWins(b) && !oWins(b);
}

bool gameOver(game g) {
	if (isDraw(g.b) || 
		xWins(g.b) || 
		oWins(g.b)) {
		return true;
	}
	return false;
}

int makeMove(int loc, game *g) {
	if (!(*(g->b)[loc] == ' ')) return -1;
	
	if (g->xTurn) {
		*(g->b)[loc] = 'X';
	} else {
		*(g->b)[loc] = 'O';
	}

	g->xTurn = !g->xTurn;

	return loc;
}

