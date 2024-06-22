#include<stdio.h>
#include<string.h>

struct Student
{
    char Name[20];
    int Roll, Age, Marks;
};


int main(){

    struct Student student[3];

    strcpy(student[0].Name , "Hello");
    student[0].Roll= 1;
    student[0].Age = 18;
    student[0].Marks = 86;++

    strcpy(student[1].Name , "Hi");
    student[1].Roll= 2;
    student[1].Age = 19;
    student[1].Marks = 92;

    strcpy(student[2].Name , "Hey");
    student[2].Roll= 3;
    student[2].Age = 17;
    student[2].Marks = 80;

    printf("%-20s %-20s %-20s %-20s \n", "Roll", "Name", "Age", "Marks");

    for (int i = 0; i < 3; i++)
    {
        printf("%-20d %-20s %-20d %-20d \n", student[i].Roll, student[i].Name, student[i].Age, student[i].Marks);
    }
    


    return 0;
}