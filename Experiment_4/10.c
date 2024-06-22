#include<stdio.h>

int main(){
    int num1, num2, j, HCF, LCM;
    printf("Give 1st Number: ");
    scanf("%d", &num1);
    printf("Give 2nd Number: ");
    scanf("%d", &num2);

    for(HCF=num2; HCF>=0; HCF--){
        if(num1%HCF==0 && num2%HCF==0){
            break;
        }
    }
    
    LCM= num1*num2/HCF;
    printf("LCM of the 2 number is = %d", LCM);

    return 0;
}   