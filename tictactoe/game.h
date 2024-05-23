#include <stdbool.h>
#include "board.h"

typedef struct {
	board *b;
	bool xTurn;
} game;

bool gameOver(game);

bool xWins(board*);

bool oWins(board*);

bool isDraw(board*);

// Attempt to make specified move. If valid, return loc, otherwise -1
int makeMove(int loc, game *g);
