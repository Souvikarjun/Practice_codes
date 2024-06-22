#include<stdio.h>

int main(){

    int num1;

    printf("enter number: ");
    scanf("%d", &num1);

    if (num1 % 2 == 0){
        printf("Number is even");
    }
    else {
        printf("number is odd");
    }

return 0;
}