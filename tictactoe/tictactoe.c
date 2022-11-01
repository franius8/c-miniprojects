#include <stdio.h>

void printWelcomeMessage ( void );
void playGame ( void );
int isGameWon ( char board[10], char marker );
void printBoard ( char gameBoard[10] );
void printRow ( int i, char board[10] );
void printDivider ( void );
int collectNextMove ( void );
int collectPlayAgain ( void );
int determinePrintCharacter( char board[10], int i, int column);


int main ( void ) {
  printWelcomeMessage();
  while (1) {
    playGame();
    if (collectPlayAgain() == 0) {
      printf("Have a nice day!\n");
      break;
    }
  }
  return 0;
};

void printWelcomeMessage ( void ) {
  printDivider();
  printf(" Welcome to  \n");
  printf(" TiC-TaC-Toe  \n");
  printDivider();
}

void playGame ( void ) {
  char board[10] = {'0', '-', '-', '-', '-', '-', '-', '-', '-', '-'};
  int choice = 0;
  int round = 0;
  char currentPlayerMarker = 'x';
  while (1) {
    printBoard(board);
    printf("Turn of the %c player.\n", currentPlayerMarker);
    while (1) {
      choice = collectNextMove();
      if (board[choice] == '-') {
        break;
      }
      printf("Invalid choice. Try again.\n");
    }
    board[choice] = currentPlayerMarker;
    round++;
    if (isGameWon( board, currentPlayerMarker ) == 1) {
      printf("The %c player won!\n", currentPlayerMarker);
      break;
    }
    if (round == 9) {
      printf("Tie!\n");
      break;
    }
    currentPlayerMarker = (currentPlayerMarker == 'x') ? 'o' : 'x';
  }  
}

int isGameWon ( char board[10], char marker ) {
  int winningCombinations[8][3] = {
      {1, 2, 3}, 
      {4, 5, 6}, 
      {7, 8, 9}, 
      {1, 4, 7}, 
      {2, 5, 8}, 
      {3, 6, 9}, 
      {1, 5, 9}, 
      {3, 5, 7}
    };
  for (int i = 0; i < 8; i++) {
    int numberOfMarkers = 0;
    for(int j = 0; j < 3; j++) {
      if (board[winningCombinations[i][j]] == marker) {
        numberOfMarkers++;
      }
    }
    if (numberOfMarkers == 3) {
      return 1;
    }
  }
  return 0;
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

int collectPlayAgain ( void ) {
  int num;
  while (1) {
  printf("Play again? (1 - yes, 0 - no): ");
  scanf("%d", &num);
  if (num == 0 || num == 1) {
    return num;
  }
  printf("Invalid choice\n"); 
  }
}

int determinePrintCharacter( char board[10], int i, int column) {
  char resultChar;
  char field = board[column + (i * 3)];
  resultChar = (field == '-') ? column + (i * 3) + 48 : field;
  return resultChar;
}
