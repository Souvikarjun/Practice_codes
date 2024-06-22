#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    int i, j;
    char a[100];
    printf("input string: \n");
    gets(a);

    printf("The given sentence is : %s \n", a);

    for(i=0; a[i] != '\0'; i++){
        if(islower(a[i])){
           a[i] = toupper(a[i]);
           continue;
        }
        if(isupper(a[i])){
            a[i] = tolower(a[i]);
            continue;
        }
    }

    printf("After Case changed the string  is : %s", a);
    
    return 0;
}