#include<stdio.h>

int main(){
    int i, j, n, delete;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n];
    
    for(i=0; i<n; i++){
        printf("Element %d: ", i);
        scanf("%d", &a[i]);
    }
    
    printf("possition you want to delete: ");
    scanf("%d", &delete);

    printf("The new list: ");

    for (i = 0; i < n; i++)
    {
        if(i+1!=delete){
            printf("%d ", a[i]);
        }
    }

return 0;
}