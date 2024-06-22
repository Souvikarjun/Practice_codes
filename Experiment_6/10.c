#include<stdio.h>

int main(){
    int i, j=0;
    char a[100], b[100];
    printf("input string 1: \n");
    gets(a);
    printf("input string 2: \n");
    gets(b);

    for (i = 0; a[i]!='\0'; i++)
    {
        a[j] = a[i];
        j++;
    }
    a[j]=' ';
    j++;
    for (i = 0; b[i]!='\0'; i++)
    {
        a[j] = b[i];
        j++;
    }
    a[j]='\0';

    printf("After concatenation the string is : \n %s", a);
    return 0;
}