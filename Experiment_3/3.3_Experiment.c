#include<stdio.h>
#include<conio.h>

void main(){
    int num1;

    printf("Enter any number: ");
    scanf("%d", &num1);

    if (num1>0){
        printf("Number is positive");
    }
    else if (num1<0) {
        printf("Number is negative");
    }
    else{ 
        printf("Number is equale to ZERO");
    }
getch();
}