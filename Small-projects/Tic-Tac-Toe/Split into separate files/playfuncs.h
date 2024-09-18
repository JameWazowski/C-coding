#ifndef PLAYFUNCS_H
#define PLAYFUNCS_H

extern char board[3][3];
extern const char PLAYER;
extern const char COMPUTER;

void resetBoard();
void printBoard();
int checkFreeSpaces();
void playerMove();
void computerMove();
char checkWinner();
void printWinner(char);

#endif