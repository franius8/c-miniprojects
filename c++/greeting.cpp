#include <iostream>
using namespace std;

void printComma ( void ) {
    cout << ", ";
}

void printWord ( string word ) {
    cout << word;
}

void printNewLine() {
    cout << "\n";
}

void printGreeting( string greeting, string name) {
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

