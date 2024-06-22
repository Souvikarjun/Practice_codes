#include<stdio.h>
#include<string.h>

int main(){

    char Name[10];
    int length, i=0;

    printf("Name: ");
    gets(Name);
    printf("The name is: %s \n", Name);
    length = strlen(Name);
    printf("The length is: %d\n", length);
    
    for(i=0; Name[i] != '\0'; i++){}
    

    printf("%d", i);
    
    
    return 0;
}