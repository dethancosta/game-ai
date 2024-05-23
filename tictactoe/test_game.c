#include <stdio.h>

#include "board.h"
#include "game.h"

int main(void) {
	board *b = newBoard();
	game g = {
		b,
		false
	};

	*(g.b[0]) = 'X';
	*(g.b[1]) = 'X';
	*(g.b[2]) = 'X';

	if (!xWins(b)) {
		printf("Test 0 Failed -- Expected xWins, got !xWins\n");
		return 1;
	} 

	if (!gameOver(g)) {
		printf("Test 1 Failed -- Expected gameOver == true, got gameOver == false\n");
		return 1;
	}


	*(g.b[0]) = 'O';
	*(g.b[1]) = 'O';
	*(g.b[2]) = 'O';

	if (!oWins(b)) {
		printf("Test 2 Failed -- Expected oWins, got !oWins\n");
		return 1;
	} 

	if (!gameOver(g)) {
		printf("Test 3 Failed -- Expected gameOver == true, got gameOver == false\n");
		return 1;
	}

	printf("All tests passed.\n");
}
