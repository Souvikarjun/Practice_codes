#include<stdio.h>
#include<string.h>

int main(){
    int i, j, k, l, len1, len2, count;
    char a[100], substring[100];
    printf("input string: \n");
    gets(a);
    printf("input substring: \n");
    gets(substring);

    len2=strlen(substring);
    len1=strlen(a);

    for ( j = 0; j<len1 ; j++)
    {   
        i=j;
        count=0;
        if(a[j] == substring[0]){
            for (l = 0; l < len2; l++)
            {   
                if(a[i] == substring[l]){
                    count++;
                    i++;
                }
            }
            
        }
        if(count==len2){
            break;
        }
    }

    if (count==len2)
    {
        printf("The substring exists in the string");
    }
    else
    {
        printf("The substring does not exist in the string");
    }
        
    return 0;
}