#include "board.h"
#include "game.h"
#include <stdio.h>
#include <string.h>

int main() {
	board *b = newBoard();
	game g = {
		b, 
		true
	};
	int loc = -1;
	printf("%lu\n", strlen(printBoard(*b)));
	printf("%s", printBoard(*b));

	while (!gameOver(g)) {

		// TODO : error handling (if player chooses occupied square)

		if (g.xTurn) {
			printf("move (X): ");
			scanf("%d", &loc);
			makeMove(loc, &g);
		} else {
			printf("move (O): ");
			scanf("%d", &loc);
			makeMove(loc, &g);
		}
		printf("%lu\n", strlen(printBoard(*b)));
		printf("%s", printBoard(*b));
	}

	if (xWins(b)) {
		printf("X wins\n");
	} else if (oWins(b)) {
		printf("O wins\n");
	} else {
		printf("Game is a draw\n");
	}
}
