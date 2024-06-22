#include<stdio.h>
int checkperfect(int n){
    int sum=0;

    for (int i = 1; i < n ; i++)
    {
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n)
        return 1;

    else
        return 0;
    
}

void Prefect_Num(int start, int end){
    while(start<=end){
        if(checkperfect(start)){
            printf("%d\n", start);
        }
        start++;
    }
}

int main(){
    int startlim, endlim;

    printf("Inpur Lowest limit: ");
    scanf("%d", &startlim);
    printf("Input Highest limit: ");
    scanf("%d", &endlim);

    printf("The perfect numbers between %d and %d are: \n", startlim, endlim);
    Prefect_Num(startlim, endlim);


    return 0;
}