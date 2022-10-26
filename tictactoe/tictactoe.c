#include <stdio.h>

void printWelcomeMessage ( void );
void playGame ( void );
void printBoard ( char gameBoard[10] );
void printRow ( int i, char board[10] );
void printDivider ( void );
int collectNextMove ( void );
int determinePrintCharacter( char board[10], int i, int column);


int main ( void ) {
  printWelcomeMessage();
  playGame();
  int field = collectNextMove();
  return 0;
};

void printWelcomeMessage ( void ) {
  printDivider();
  printf(" Welcome to  \n");
  printf(" TiC-TaC-Toe  \n");
  printDivider();
}

void playGame ( void ) {
  char board[10] = {'-', '-', '-', '-', '-', '-', '-', '-', '-', '-'};
  printBoard(board);
}

void printBoard ( char gameBoard[10] ) {
  printDivider();
  for (int i = 0; i < 3; i++) {
    printRow(i, gameBoard);
    printDivider();
  };
};

void printRow ( int i, char board[10] ) {
  int one = determinePrintCharacter(board, i, 1);
  int two = determinePrintCharacter(board, i, 2);
  int three = determinePrintCharacter(board, i, 3);
  char four = 1 + (i * 3) + 48;
  printf("| %c | %c | %c |\n", one, two, three);
};

void printDivider ( void ) {
  printf("-------------\n");
}

int collectNextMove ( void ) {
  int num;
  printf("Select the field where you want to place your marker: ");
  scanf("%d", &num);
  return num;
}

int determinePrintCharacter( char board[10], int i, int column) {
  char resultChar;
  char field = board[column + (i * 3)];
  if (field == '-') {
    resultChar = 1 + (i * 3) + 48;
  } 
  else {
    resultChar = field;
  }
  return field;
}