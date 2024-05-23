#include <stdbool.h>

#include "board.h"
#include "game.h"


bool xWins(board b) {
	char t = 'X';
	if (
		b[0] == t && b[4] == t && b[8] == t ||
		b[0] == t && b[1] == t && b[2] == t ||
		b[3] == t && b[4] == t && b[5] == t ||
		b[6] == t && b[7] == t && b[8] == t ||
		b[0] == t && b[3] == t && b[6] == t ||
		b[1] == t && b[4] == t && b[7] == t ||
		b[2] == t && b[5] == t && b[8] == t ||
		b[2] == t && b[4] == t && b[6] == t
		
	) {
		return true;
	}

	return false;
}

bool oWins(board b) {
	char t = 'O';
	if (
		b[0] == t && b[4] == t && b[8] == t ||
		b[0] == t && b[1] == t && b[2] == t ||
		b[3] == t && b[4] == t && b[5] == t ||
		b[6] == t && b[7] == t && b[8] == t ||
		b[0] == t && b[3] == t && b[6] == t ||
		b[1] == t && b[4] == t && b[7] == t ||
		b[2] == t && b[5] == t && b[8] == t ||
		b[2] == t && b[4] == t && b[6] == t
		
	) {
		return true;
	}

	return false;
}

bool isDraw(board b) {
	for (int i = 0; i < 9; i++) {
		if (b[i] == ' ') {
			return false;
		}
	}

	return !xWins(b) || !oWins(b);
}

bool gameOver(board b) {
	if (isDraw(b) || xWins(b) || oWins(b)) {
		return 1;
	}
	return 0;
}

int makeMove(bool xPlayer, int loc, board b) {
	if (!(b[loc] == ' ')) return -1;
	
	if (xPlayer) {
		b[loc] = 'X';
	} else {
		b[loc] = 'O';
	}

	return loc;
}
