#include<stdio.h>

int main(){
    int  column1, row1, i, j, k, l, column2, row2;

    printf("Size of 1st matrix: ");
    scanf("%d %d", &column1, &row1);

    int a[column1][row1];
    
    printf("Size of 2nd matrix: ");
    scanf("%d %d", &column2, &row2);

    int b[column2][row2];

    int product[column1][row2];

    for ( i = 0; i < column1; i++)
    {
        for ( j = 0; j < row1; j++)
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for ( i = 0; i < column2; i++)
    {
        for ( j = 0; j < row2; j++)
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    if (row1 == column2)
    {
        for (i = 0; i < column1; i++)
        {
            for (k = 0; k < row2; k++)
            {
                for (j = 0; j < row1; j++)
                {
                    product[i][k]=0;
                    product[i][k] += a[i][j]*b[j][k];
                    
                }
                
            }
            
        }
        for(i=0; i<column1; i++){
            for ( j = 0; j < row2; j++)
            {
                printf("%d ", product[i][j]);
            }

            printf("\n");
        }
        
    }

    return 0;
    
}