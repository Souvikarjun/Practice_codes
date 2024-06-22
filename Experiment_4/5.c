#include<stdio.h>
#include<math.h>

int main(){

    int main_Number, number, reminder, n=0, result=0;

    printf("Give a Number: ");
    scanf("%d", &number);

    main_Number=number;

    while (main_Number != 0)
    {
        main_Number /= 10;
        ++n;
    }
        main_Number=number;
    while (main_Number!=0)
    {
        reminder = main_Number%10;
        result += pow(reminder, n);
        main_Number/=10;
    }

    if(result == number){
        printf("the number is an Amtrong number");
    }
    else{
        printf("The number is not an Amstrong number");
    }
    return 0;
}