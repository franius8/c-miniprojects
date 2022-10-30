#include <iostream>

void printComma ( void ) {
    std::cout << ", ";
}

void printWord ( std::string word ) {
    std::cout << word;
}

void printNewLine() {
    std::cout << "\n";
}

void printGreeting( std::string greeting, std::string name) {
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

