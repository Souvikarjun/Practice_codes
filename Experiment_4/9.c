#include<stdio.h>
#include<conio.h>

void main(){
    int i, j, row, space, num, a;

    printf("how many rows you want to print : ");
    scanf("%d", &row);


    for(i=1; i<= row; i++){
    
        for (space = 0; space < row-i; space++)
        {
            printf(" ");
        }
        for (j = 1; j <= i+(3/2) -1; j++)
        {
            printf("%d", j);
        }
        for (num = 1; num <i+(3/2) -1; num++)
        {
            j--;

            printf("%d", j-1);
        }

        printf("\n");
    }

getch();

}