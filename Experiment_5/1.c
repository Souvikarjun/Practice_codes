#include<stdio.h>

int main(){
    int a[20], i;

    for(i=0; i<20; i++){
            printf("ENTER ELEMENT - %d: ", i);
            scanf("%d", &a[i]);
    }
    printf("Element in array are: ");
    for (i = 0; i < 20; i++)
    {
        printf("%d ", a[i]);
    }
    
    return 0;
}