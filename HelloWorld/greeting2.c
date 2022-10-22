#include <stdio.h>
void printGreeting( char* greeting , char* who )  {
  printf( "%s, %s!\n" , greeting , who );
}
int main( void )  {
  printGreeting( "Hello" , "world" );
  printGreeting( "Greetings" , "Your Royal Highness" );
  printGreeting( "Howdy" , "John Q. and Jane R. Doe" );
  printGreeting( "Hey" , "Moe, Larry, and Curly" );
  return 0;
}