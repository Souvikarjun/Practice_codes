#include<stdio.h>
#include<string.h>

int main(){
    int i, j, n;
    printf("The length of the array: ");
    scanf("%d", &n);
    char a[10][100], temp[10][100];
     for(i=0; i<n; i++){
        printf("Element %d: ", i+1);
        scanf("%s", a[i]);
    }

    for(i=0; i<n-1; i++){
        for(j=0; j<n-i-1; j++)
        if(strcmp(a[j], a[j+1])>0){
            strcpy(temp[0], a[j]);
            strcpy(a[j], a[i]);
            strcpy(a[i], temp[0]);
        }
    }

    printf("sorted elements : \n");
    for(i=0; i<n; i++){
        printf("%s \n", a[i]);
    }



    return 0;
}