#include<stdio.h>
#include<conio.h>

int main(){
    int num, i, j;
    
    printf("Give a Number: ");
    scanf("%d", &num);

    for(i=num-1; i>1; i--){
        if(num%i==0){
            j=1;
        }
    }   
    if (j==1)
    {
        printf("IT'S NOT A PRIME"); 
    }
    else{
        printf("IT'S A PRIME");
    }
    
    getch();
}