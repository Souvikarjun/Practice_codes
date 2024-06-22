#include<stdio.h>
#include<conio.h>

void main(){

    int n, i, first, second, result, temp;

    n=10;
    result=0;
    first=1;
    second=0;
    for(i=0; i<=n+1; ++i){
        printf("%d ", result);
        result=first+second;
        temp=second;
        second=result;
        first=temp;
    }
    getch();
}