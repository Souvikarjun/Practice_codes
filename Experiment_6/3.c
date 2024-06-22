#include<stdio.h>
#include<string.h>

int main(){
    char str1[100], str2[100], str;
    printf("string1: ");
    gets(str1);
    printf("string2: ");
    gets(str2);
    int i, j=0;
//    strcat(str1, str2);
//    int len = strlen(str1);

    for (i = 0; str1[i] != '\0'; i++)
    {
        str1[j]=str1[i];
        j++;
    }

    if(str1[i]=str2[0]){
        for (i = 0; str2[i] != '\0'; i++)
        {
            str1[j] = str2[i+1];
            j++;
        }
        
    }
    

    printf("%s", str1);
    return 0;
}