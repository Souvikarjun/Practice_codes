#include<stdio.h>
#include<conio.h>

void main(){
    int num, i, result;

    printf("Input interger: ");
    scanf("%d", &num);

    for(i=1; i<=10; i++){
        result=i*num;

        printf("%d X %d = %d\n", num, i, result);
    }

getch();
}