#include<stdio.h>
#include<conio.h>

void main(){

    int year;
    char Date[20];

    printf("Enter any Dates (date and month)");
    scanf("%[^\n]%*c", Date);
    printf("enter year: ");
    scanf("%d", &year);

    if(year%4==0) {;
        if (year%100==0 && year%400 != 0){
        printf("Not a leap year");
        }
        else{
            printf("It's a leap year");
        }}
    else{
        printf("Not a leap year");
    }
getch();
}