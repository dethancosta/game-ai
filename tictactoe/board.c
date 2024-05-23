#include <stdio.h>
#include <stdlib.h>

typedef char board[9];

board *newBoard() {
	board *b = (board*) malloc(9 * sizeof(char));
	for (int i = 0; i < 9; i++) {
		*b[i] = ' ';
	}
	return b;
}

char *printBoard(board *board) {
	char *output = (char*) malloc(58 * sizeof(char));
	sprintf(
		output,
		" %c | %c | %c\n-----------\n %c | %c | %c\n-----------\n %c | %c | %c\n", 
		*board[0],
		*board[1],
		*board[2],
		*board[3],
		*board[4],
		*board[5],
		*board[6],
		*board[7],
		*board[8]
	);
	return output;
}
