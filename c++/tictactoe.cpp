#include <iostream>
using namespace std;

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
      cout << "Have a nice day!" << endl;
      break;
    }
  }
  return 0;
};

void printWelcomeMessage ( void ) {
  printDivider();
  cout << " Welcome to" << endl;
  cout << " TiC-TaC-Toe" << endl;
  printDivider();
}

void playGame ( void ) {
  char board[10] = {'-', '-', '-', '-', '-', '-', '-', '-', '-', '-'};
  int choice = 0;
  int round = 0;
  char currentPlayerMarker = 'x';
  while (1) {
    printBoard(board);
    cout << "Turn of the " << currentPlayerMarker << " player." << endl;
    while (1) {
      choice = collectNextMove();
      if (board[choice] == '-') {
        break;
      }
      cout << "Invalid choice. Try again." << endl;
    }
    board[choice] = currentPlayerMarker;
    round++;
    if (isGameWon( board, currentPlayerMarker ) == 1) {
      cout << "The " << currentPlayerMarker << " player won!" << endl;
      break;
    }
    if (round == 9) {
      cout << "Tie!" << endl;
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
   cout << "-------------" << endl;
}

int collectNextMove ( void ) {
  int num;
  cout << "Select the field where you want to place your marker: ";
  cin >> num;
  return num;
}

int collectPlayAgain ( void ) {
  int num;
  while (1) {
  cout << "Play again? (1 - yes, 0 - no): ";
  cin >> num;
  if (num == 0 || num == 1) {
    return num;
  }
  cout << "Invalid choice" << endl; 
  }
}

int determinePrintCharacter( char board[10], int i, int column) {
  char resultChar;
  char field = board[column + (i * 3)];
  resultChar = (field == '-') ? column + (i * 3) + 48 : field;
  return resultChar;
}