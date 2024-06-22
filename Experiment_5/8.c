#include<stdio.h>

int main(){
    int i, j, k, n, temp;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    k=n+1;
    int a[n], b[k];
    
    for(i=0; i<n; i++){
        printf("Element %d: ", i);
        scanf("%d", &a[i]);
    }
        for ( i = 0; i < n-1; i++)
    {
        for (j = 0; j < n-i-1; j++)

            {
                if(a[j]>a[j+1])
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }
    for (i = 0; i < n; i++)
    {
        b[i]=a[i];
    }
    printf("insert a number: ");
    scanf("%d", &b[n]);

    

    for ( i = 0; i < n; i++)
    {
        for (j = 0; j < n-i; j++)

            {
                if(b[j]>b[j+1])
                {
                    temp=a[j];
                    b[j]=b[j+1];
                    b[j+1]=temp;
                }
            }
        }

    printf("the first list: \n");    
        
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\nthe new list: \n");

    for (i = 0; i < k; i++)
    {
        printf("%d ", b[i]);
    }


    return 0;
}