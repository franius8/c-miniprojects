#include <stdio.h>

void printHello() {
    printf( "Hello" );
    return;
}

void printComma() {
    printf( ", " );
    return;
}

void printWorld() {
    printf( "World!" );
    return;
}

void printNewLine() {
    printf( "\n" );
    return;
}

int main() {
    printHello();
    printComma();
    printWorld();
    printNewLine();
    return 0;
}