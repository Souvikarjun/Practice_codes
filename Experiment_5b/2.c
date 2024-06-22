#include<stdio.h>

int main(){
    int n, m, i, j, sum=0;

    printf("first value of the array: ");
    scanf("%d", &m);
    printf("second value of the array: ");
    scanf("%d", &n);

    int a[m][n];

    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("Element [%d][%d]", i, j);
            scanf("%d", &a[i][j]);
            sum += a[i][j];
        }
    }

    printf("the sum of the elements are: %d", sum);

return 0;
}