#include<stdio.h>

int main(){
    int i, j, k, n, max, min;
    printf("The length of the array: ");
    scanf("%d", &n);
    int a[n];
     for(i=0; i<n; i++){
        printf("Element %d: ", i);
        scanf("%d", &a[i]);
    }

    for ( i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
           for ( k = 0; k < n; k++)
            {
                if(a[i]>a[j] && a[k]<a[j])
                {
                    max=a[i];
                }
            }
        }
        
        
    }

    for ( i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            for ( k = 0; k < n; k++)
            {
                if(a[i]<a[j] && a[k]>a[j])
                {
                    min=a[i];
                }
            }
            
        }
        
        
    }
    printf("Maximum number: %d\n", max);
    printf("Minimum number: %d", min);

return 0;
}