#include <stdbool.h>
#include "board.h"

bool gameOver(board);

bool xWins(board);

bool oWins(board);

bool isDraw(board);

// Attempt to make specified move. If valid, return loc, otherwise -1
int makeMove(bool xPlayer, int loc, board b);
