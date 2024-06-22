#include<stdio.h>

int main(){
    int num=0, sum;

    for(sum=0; num<=10; num++){
        sum=sum+num;
    }
    printf("%d", sum);
    return 0;
}