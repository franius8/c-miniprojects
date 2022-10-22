#include <stdio.h>

int main( void ) {
    printf( "Hello World, without a new line" );
    printf( "Hello World, with a new line\n" );
    printf( "A \"quoted text\" inside a string.\n\n");
    printf( "Tabbed\tColumn\tHeadings\n" );
    printf( "The\tquick\tbrown\n" );
    printf( "fox\tjumps\tover\n" );
    printf( "the\tlazy\tdog.\n\n" );
    printf( "A line of text that\nspans three lines\nand completes the line\n\n" );
    return 0;
}