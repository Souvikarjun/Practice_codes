#include<stdio.h>

void prime(int num){
    int j=0;
    for(int i=2; i<num; i++){
        if(num%i==0){
            j++;
            break;
        }
    }
    if(j==0){
        printf("it's a prime number");
    }
    else{
        printf("it is not a prime number");
    }
}   

int main(){

    int num1;

    printf("Input any numbers: ");
    scanf("%d", &num1);

    prime(num1);

    return 0;
}