#include <stdio.h>

void  printFullGreeting(    char* aGreeting , char* aName );
void  printGreeting(   char* greeting );
void  printName( char* name );
void  printComma( void );
void  printNewLine( void );

int main( void )  {
  printFullGreeting( "Hi" , "Bub" );
  return 0;
}
void printFullGreeting( char* aGreeting , char* aName )  {
  printGreeting( aGreeting );
  printComma();
  printName( aName );
  printNewLine();
}
void printGreeting( char* greeting )  {
  printf( "%s" , greeting );
}

void printName( char* name )  {
  printf( "%s" , name );
}

void printComma( void )  {
  printf( ", " );
}

void printNewLine( void )  {
  printf( "\n" );
}