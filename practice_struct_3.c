#include<stdio.h>

struct Rectangle
{
    int width, length, area;
};

int fArea(int width, int length){
    int area = width*length;
    return area;
}


int main(){

    struct Rectangle Rec;
    
    Rec.width=20;
    Rec.length=40;
    Rec.area=fArea(Rec.width, Rec.length);

    printf("The area is: %d", Rec.area);

    return 0;
}
