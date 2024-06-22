#include<stdio.h>
#include<string.h>


int main(){
    char C1[2];
    char C2[2];
    

    printf("Give 2 Characters: ");
    scanf("%s %s", C1, C2);

    if (strcmp(C1, C2) == 0) 
    {
        printf("Both are the same Character.");
    }
    else { 
        printf("They are 2 Different Characters");
    }

    return 0;
}