#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    
    char Name[100];
    int i, j=0;
    char space;

    printf("Name: ");
    gets(Name);
    strupr(Name);
    printf("The name is: %s \n", Name);
    
    strlwr(Name);
    printf("The name is %s \n", Name);
    
    int size = strlen(Name);

    for (i = 0; i <= size; i++)
    {
        if(Name[i] != ' '){
            Name[j]=Name[i];
            j++;
        }
    }

    printf("The Name is: %s", Name);
    

    return 0;
}