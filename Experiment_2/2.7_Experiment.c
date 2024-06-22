#include<stdio.h>
#include<conio.h>


void main() {
    char inputChar = 'J';
    
    // Display the Unicode (ASCII) code point of the character
    printf("Character: %c\n", inputChar);
    printf("Unicode (ASCII) code point: %d\n", inputChar);
    
    // Display the next character
    char nextChar = inputChar + 1;
    printf("Next character: %c\n", nextChar);
    
    // Display the previous character
    char prevChar = inputChar - 1;
    printf("Previous character: %c\n", prevChar);
    
getch();
}