#include<stdio.h>

int main(){
    int num1, num2, j;

    printf("Give 1st Number: ");
    scanf("%d", &num1);
    printf("Give 2nd Number: ");
    scanf("%d", &num2);


    for(j=num2; j>=0; j--){
        if(num1%j==0 && num2%j==0){
            printf("GCD of the 2 number is = %d", j);
            break;
        }
    }
    return 0;
}