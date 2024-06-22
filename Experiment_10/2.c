#include<stdio.h>

float Sqr(float num){
    float sqr= num*num;
    return sqr;
}

int main(){

    float num1, sqr;

    printf("Input any numbers: ");
    scanf("%f", &num1);

    sqr= Sqr(num1);

    printf("Square of %.2f is: %.2f", num1, sqr);


    return 0;
}