/*Start of the program*/

#include<stdio.h>
#include<conio.h>
#include <limits.h>     /*Calling some libraries*/
#include <float.h>

void main(){
    int intType;
    float floatType;
    double doubleType;
    char charType;

    printf("size of int: %zu bytes\n", sizeof(intType));            /*Getting the size of different kind of variables*/
    printf("size of float: %zu bytes\n", sizeof(floatType));
    printf("size of double: %zu bytes\n", sizeof(doubleType));
    printf("size of char: %zu bytes\n", sizeof(charType));

    
getch();        /*output Main function*/
}

