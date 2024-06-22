#include<stdio.h>

int main(){
    int i, j, start, len;
    char a[100];
    printf("input string: \n");
    gets(a);

    printf("starting point of substring: ");
    scanf("%d", &start);
    printf("Input the length of substring: ");
    scanf("%d", &len);

    for ( i = start-1; i < start+len-1; i++)
    {
        printf("%c", a[i]);
    }
    

    return 0;
}