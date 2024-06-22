#include<stdio.h>
#include<string.h>

int main(){
    char hello[6];
    char Str[5];
    char Remove;
    int i, j=0, len;
    printf("Say Hello: ");
    gets(hello);
    printf("character to reamove: ");
    scanf("%c", &Remove);

    len=strlen(hello);

    for (i = 0; i<=len ; i++)
    {
        if(hello[i] != Remove){
            hello[j]=hello[i];
            j++;
        }
    }
    printf("%s", hello);
    

    return 0;
}