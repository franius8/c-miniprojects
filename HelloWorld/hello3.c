#include <stdio.h>

void printComma ( void ) {
    printf( ", ");
}

void printWord ( char* word ) {
    printf( "%s" , word);
}

void printNewLine() {
    printf( "\n" );
    return;
}

int main ( void ) {
    printWord ( "Hello" );
    printComma();
    printWord( "World!" );
    printNewLine();
}