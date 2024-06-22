#include<stdio.h>

int main(){
    int i, j, count;

    for ( i = 1; i <= 25; i++)
    {

        printf("%02d ", i);
        if (i%5==0)
        {
            printf("\n");
        }
        
    }
    return 0;
}