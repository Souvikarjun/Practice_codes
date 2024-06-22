#include<stdio.h>
#include<string.h>

int main(){
    int i, count=0;
    char a[100];
    printf("input string: \n");
    gets(a);

    for ( i = 0; a[i] != '\0'; i++)
    {
        if (a[i]==' ' && a[i+1]=='t'||'T' && a[i+2]=='h' && a[i+3]=='e' && a[i+4]==' ')
        {
            count++;
        }
        
    }
    printf("The frequency of the word 'the' is : %d", count);

    return 0;
}