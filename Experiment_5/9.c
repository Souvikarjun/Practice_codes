#include<stdio.h>

int main(){
    int n, i, j;
    printf("what's the value of matrix: ");
    scanf("%d", &n);

    int a[n][n], b[n][n], div[n][n];
    printf("for 1st metrix: \n");
    for (i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("Element [%d],[%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("for 2nd metrix: \n");
    for (i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("Element [%d],[%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    printf("The 1st metrix: \n");
    for (i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("The 2nd metrix: \n");
    for (i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("%d ", b[i][j]);
            
        }
        printf("\n");
    }
        for (i=0; i<n; i++){
            for(j=0; j<n; j++){
                div[i][j]=a[i][j]-b[i][j];
            }
    }
    printf("The subtraction of 2 metrix: \n");
    for (i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("%d ", div[i][j]);
        }
    printf("\n");
    }
    return 0;

}