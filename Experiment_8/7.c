#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Student
{
    char Name[50];
    int Marks;
};

int main(){

    struct Student student[5];

    int i;

    for (i=0; i < 5; i++)
    {
        printf("Name: ");
        scanf("%s", student[i].Name);
        printf("Marks: ");
        scanf("%d", &student[i].Marks);
    }

    printf("%-20s%-20s%s\n", "Serial", "Name", "Marks");

    for ( i = 0; i < 5; i++)
    {
        printf("%-20d%-20s%d\n", i+1, student[i].Name, student[i].Marks);
    }
    
    return 0;
}