#include <stdio.h>

void printBoard ( void );
void printRow ( void );
void printDivider ( void );

int main ( void ) {
  printBoard();
  return 0;
};

void printBoard ( void ) {
  printDivider();
  for (int i = 0; i < 3; i++) {
    printRow();
    printDivider();
  };
};

void printRow ( void ) {
  char x = 'x';
  printf("| %c | %c | %c |\n", x, x, x);
};

void printDivider ( void ) {
  printf("-------------\n");
}