#include<stdio.h>
#include<conio.h>
#include<string.h>

struct Rectangle
{
    int height, width, area;
};

void main(){
    struct Rectangle rectangle;

    rectangle.height = 10;
    rectangle.width = 20;
    rectangle.area = rectangle.height*rectangle.width;

    printf("Area: %d", rectangle.area);
    
    getch();
}