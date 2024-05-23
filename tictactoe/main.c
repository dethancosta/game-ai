#include "board.h"
#include <stdio.h>
#include <string.h>

int main() {
	board *b = newBoard();
	printf("%lu\n", strlen(printBoard(*b)));
	printf("%s", printBoard(*b));
}
