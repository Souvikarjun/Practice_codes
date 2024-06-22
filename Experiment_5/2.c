#include<stdio.h>

int main(){
    int i, n, sum=0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n];
    
    for(i=0; i<n; i++){
        printf("Element %d: ", i);
        scanf("%d", &a[i]);
        sum += a[i];
    }
    printf("the sum of the %d numbers are: %d",n , sum);

    return 0;
}