/*Start of the program*/

#include<stdio.h>
#include<conio.h>
#include <limits.h>
#include <float.h>

void main(){
    printf("Minimum value of int: %d\n", INT_MIN);              /*Getting the Signed minimum value of INTEGER*/
    printf("Maximum value of int: %d\n", INT_MAX);              /*etting the Signed maximum value of INTEGER*/
    printf("Minimum value of unsigned int: %u\n", 0);           /*etting the UnSigned minimum value of INTEGER*/
    printf("Maximum value of unsigned int: %u\n", UINT_MAX);    /*etting the UnSigned maximum value of INTEGER*/

    printf("Minimum value of char: %d\n", CHAR_MIN);            /*Doing the same as Integer for CHARACTERS*/
    printf("Minimum value of char: %d\n", CHAR_MAX);
    printf("Minimum value of unsigned char: %u\n", 0);
    printf("Maximum value of unsigned char: %u\n", UCHAR_MAX);

    printf("Minimum value of float: %d\n", FLT_MIN);            /*Doing the same as Integer for FLOAT*/
    printf("Maximum value of float: %d\n", FLT_MAX);

    printf("Minimum value of double: %d\n", DBL_MIN);           /*Doing the same as Integer for Double*/
    printf("Minimum value of double: %d\n", DBL_MAX);           /*There are no unassined value for Float and Double as it varries from system to system*/

getch();        /*Output main function*/
}