#include<stdio.h>
#include<conio.h>
#include<string.h>

struct Person
{
    char name[30], adress[100];
    int age;
};

void main(){
    struct Person person;

    printf("Name: ");
    gets(person.name);
    printf("Adress: ");
    gets(person.adress);
    printf("Age: ");
    scanf("%d", &person.age);


    printf("Name: %s.\nAge: %d.\nAdress: %s.", person.name, person.age, person.adress);
    
    getch();
}