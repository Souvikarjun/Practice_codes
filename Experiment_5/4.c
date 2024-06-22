#include<stdio.h>

int main(){
    int n, i, j, k, l, temp=0;
    printf("Give the size of array: ");
    scanf("%d", &n);
    int a[n], b[n], sort[2][n];

    for(i=0; i<=1; i++){
        if(i==0){
            printf("first array: \n");
        }
        else if(i==1){
            printf("second array: \n");
        }
        for(j=0; j<n; j++)
        {
            if(i==0)
            {
                printf("element %d: ", j);
                scanf("%d", &a[j]);
                sort[i][j]=a[j];
            }
            else if(i==1)
            {
                printf("element %d: ", j);
                scanf("%d", &b[j]);
                sort[i][j]=b[j];
            }
        }
    
    }
/*    for(i=0; i<=1; i++)
    {
        for(j=0; j<n; j++)
        {
            for ( l=0; l<=1; l++)
            { 
                for(k=1; k<n; k++)
                { 
                    if(sort[i][j]<sort[l][k] && sort[i][j]>temp)
                    {
                    temp=sort[i][j];
                    sort[l][k]=sort[i][j];
                    sort[l][k]=temp;
                    }
                }
            }
        }

    }*/
        for(i=0; i<=1; i++){
            for(j=0; j<n; j++)
            {
                printf("%d ", sort[i][j]);
            }
    }
    return 0;
}