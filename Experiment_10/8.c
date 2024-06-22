#include<stdio.h>
#include<string.h>

int anagram(char *str1, char *str2){
    int string1[256] = {0}, string2[256] = {0};
    int ctr;

    if(strlen(str1) != strlen(str2)){
        return 0;
    }
    for(ctr=0; str1[ctr]!='\0'; ctr++){
        string1[str1[ctr]]++;
    }
    for(ctr=0; str2[ctr]!='\0'; ctr++){
        string2[str2[ctr]]++;
    }
    for (ctr = 0; ctr < 256; ctr++)
    {
        if(string1[ctr] != string2[ctr]){
            return 0;
        }
    }
    return 1;
}

int main(){

    char S1[100], S2[100];

    printf("Intput 1st string: ");
    fgets(S1, sizeof S1, stdin);
    printf("Input 2nd string: ");
    fgets(S2, sizeof S2, stdin);

    if(anagram(S1, S2) == 1){
        S1[strlen(S1)-1] = '\0';
        S2[strlen(S2)-1] = '\0';
        printf("%s and %s are Anagram.", S1, S2);
    }
    else{
        S1[strlen(S1)-1] = '\0';
        S2[strlen(S2)-1] = '\0';
        printf("%s and %s are not Anagram.", S1, S2);
    }


    return 0;
}