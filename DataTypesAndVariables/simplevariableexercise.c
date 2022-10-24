#include <stdio.h>
#include <stdbool.h>

int main() {
  bool isItSunny = false;
  printf("Is it sunny today? %s\n", isItSunny ? "Yes." : "No." );
  int number = 42;
  printf("What is the greatest number? %u, of course.\n", number);
  char animal[3] = "cat";
  printf("What animal should I buy? The best option would be a %s.\n", animal);
};