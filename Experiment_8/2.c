#include<stdio.h>
#include<string.h>

struct Height
{
    char Name[50];
    int feet, inch;
};


int main(){

    struct Height height1 , height2, Add;
    
    height1.feet = 5;
    height1.inch = 12;

    height2.feet = 6;
    height2.inch = 5;

    Add.feet = height1.feet + height2.feet;
    Add.inch = height1.inch + height2.inch;

    while (Add.inch >=12)
    {
        Add.feet++;
        Add.inch = Add.inch - 12;
    }
    


    printf("%d\'%d\"", Add.feet, Add.inch);

    return 0;
}