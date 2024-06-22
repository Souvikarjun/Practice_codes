#include<stdio.h>

void fibo(int n, int a, int b){
    if(n>0){
        printf(" %d  ", a);
        fibo(n-1, b, a+b);
    }
}

int main(){

    int n;
    printf("The number upto fibonacci will print: ");
    scanf("%d", &n);

    printf("the Fibonacci series is :");
    fibo(n, 0, 1);


    return 0;
}