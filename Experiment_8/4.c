#include<stdio.h>
#include<conio.h>
#include<string.h>

struct Person
{
    char name[30], adress[100];
    int age, Id_no;
};

void main(){
    struct Person person;

    strcpy(person.name, "Joseph");
    strcpy(person.adress, "21, South street, Millan, Itely");
    person.age = 30;
    person.Id_no= 1234567;


    printf("Name: %s.\nID: %d.\nAge: %d.\nAdress: %s.", person.name, person.Id_no, person.age, person.adress);
    
    getch();
}