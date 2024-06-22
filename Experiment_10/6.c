#include<stdio.h>

int armstrong(int n){
    int ld, sum=0, num=n;
    
    while(num!=0){
        ld=num%10;
        sum += ld*ld*ld;
        num=num/10;
    }
    return (n==sum);
}

int perfect(int n){
    int sum=0, num=n;

    for (int i = 1; i < num; i++)
    {
        if(num%i==0){
            sum+=i;
        }
    }
    return (n==sum);
}

int main(){
    int n;

    printf("Input any numbers: ");
    scanf("%d", &n);

    if(armstrong(n)){
        printf("The %d is an Armstrong number\n", n);
    }
    else{
        printf("The %d is not an Armstrong number\n", n);
    }


    if(perfect(n)){
        printf("The %d is a Perfect number\n", n);
    }
    else{
        printf("The %d is not a Perfect number\n", n);
    }


    return 0;
}