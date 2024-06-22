#include<stdio.h>

int main(){
    int n, i, j;
    printf("what's the value of matrix: ");
    scanf("%d", &n);

    int a[n][n];
    printf("Input the metrix: \n");
    for (i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("Element [%d],[%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("The metrix: \n");
    for (i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("The transpose metrix: \n");
    for (i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
    return 0;
}