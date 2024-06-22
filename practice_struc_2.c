#include<stdio.h>
#include<string.h>

struct Height
{
    char Name[50];
    int feet, inch;
};


int main(){

    struct Height height1 , height2;
    
    strcpy(height1.Name, "Name 1");
    height1.feet = 5;
    height1.inch = 12;


    printf("%d\'%d\"", height1.feet, height1.inch);

    strcpy(height2.Name, "Name 2");
    height2.feet = 6;
    height2.inch = 5;


    printf("%d\'%d\"", height2.feet, height2.inch);

    return 0;
}