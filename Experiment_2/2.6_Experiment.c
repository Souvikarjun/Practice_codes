#include<stdio.h>
#include<conio.h>

void main(){
    float FD, SD, TD, D, ms, s, s2;

    FD = 10*1000;

    ms = 10*1000/3600;
    s = 10 * 60;
    SD = ms*s;

    s2 = 30*60;
    TD = 5*s2 + 0.5*5*s2*s2;

    D = (FD-SD+TD)/1000;

    printf("the total distance is %f Km", D);

getch();
}