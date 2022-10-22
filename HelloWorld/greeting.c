#include <stdio.h>

void printComma ( void ) {
    printf( ", ");
}

void printWord ( char* word ) {
    printf( "%s" , word);
}

void printNewLine() {
    printf( "\n" );
}

void printGreeting( char* greeting, char* name) {
    printWord( greeting );
    printComma();
    printWord( name );
    printNewLine();
}

int main( void )  {
   printGreeting( "Hello" , "world" );
   printGreeting( "Good day" , "Your Royal Highness" );
   printGreeting( "Howdy" , "John Q. and Jane P. Doe" );
   printGreeting( "Hey" , "Moe, Larry, and Curly" );
   return 0;
}

