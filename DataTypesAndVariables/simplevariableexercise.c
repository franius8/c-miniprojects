#include <stdio.h>
#include <stdbool.h>

int main( void ) {
  bool isItSunny = false;
  printf("Is it sunny today? %s\n", isItSunny ? "Yes." : "No." );
  int number = 42;
  printf("What is the greatest number? %u, of course.\n", number);
  char animal[3] = "cat";
  printf("What animal should I buy? The best option would be a %s.\n", animal);
  float temperature = 14.4;
  printf("The current temperature is %g.\n", temperature);
  char letterB = 'B';
  printf("The second letter of the alphabet is %c.\n", letterB);
  return 0;
};