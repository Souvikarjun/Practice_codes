#include<stdio.h>

int main(){
    int n, i, j, k, l, num=0;

    printf("Input the size of matrix: ");
    scanf("%d", &n);

    int matrix[n][n];
    
    printf("Enter value of matrix\n");
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("Element [%d]{%d}: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
        
    }

    for ( i = 0; i <= n; i++)
    {
        for ( j = 0; j <= n; j++)
        {
            if(j==i){
                if(matrix[i][j]==1){
                    for ( k = 0; k < n; k++)
                    {
                        for ( l = 0; l < n; l++)
                        {
                            if (k!=l)
                            {
                                if (matrix[k][l]==0)
                                {
                                    ++num;
                                }
                                
                            }
                            
                        }
                    }
                }
            }
        }    
    }
    num=num/(n*(n-1));

    if (num==n)
    {
        printf("The matrix is an IDENTITY matrix");
    }
    else{
        printf("The matrix is not an IDENTITY matrix");
    }


return 0;

}