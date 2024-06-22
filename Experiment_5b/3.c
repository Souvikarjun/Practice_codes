#include<stdio.h>

int main(){
    int n, i, j, k, l, sum=0;

    printf("square value of the array: ");
    scanf("%d", &n);

    int a[n][n];

    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            if(i==j){
                sum += a[i][j];
            }
        }
    }


    printf("the sum of the first diagonal is: %d", sum);

return 0;
}