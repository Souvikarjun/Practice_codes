#include<stdio.h>

int main(){
    char a[10]={'A','B','C','D','E','F','G','H','I','J'};
    int i, j, space;

    for(i=1;i<=10;i++){
        for ( space = 1; space <= 10-i; space++)
        {
            printf(" ");
        }
        
        for ( j = 1; j < i; j++)
        {
            if(j%2==0){
                char c = (64 + j);
                printf("%c ",c);
            }
            else{
                printf("%d ",j);
            }
            
        }
        printf("\n");
        
    }





return 0;
}