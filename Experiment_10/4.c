#include<stdio.h>

int factorial(int n){
    int temp=1;
    for (int i = 0; i < n; i++)
    {
        temp=temp*(n-i);
    }
    return temp;
    
}

int main(){
    int n, sum=0;
    printf("The last number: ");
    scanf("%d", &n);

    int array[n];

    for (int i = 1; i <= n; i++)
    {
        array[i]=factorial(i);
        sum = sum+array[i]/i;
    }

    printf("The sum of the series: %d", sum);


    return 0;
}