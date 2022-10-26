#include <stdio.h>

void printBoard ( void );
void printRow ( int i );
void printDivider ( void );
int collectNextMove ( void );

int main ( void ) {
  printBoard();
  int field = collectNextMove();
  return 0;
};

void printBoard ( void ) {
  printDivider();
  for (int i = 0; i < 3; i++) {
    printRow(i);
    printDivider();
  };
};

void printRow ( int i ) {
  int one = 1 + (i * 3);
  int two = 2 + (i * 3);
  int three = 3 + (i * 3);
  printf("| %d | %d | %d |\n", one, two, three);
};

void printDivider ( void ) {
  printf("-------------\n");
}

int collectNextMove ( void ) {
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  return num;
}