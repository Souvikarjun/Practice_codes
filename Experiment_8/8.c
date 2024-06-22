#include<stdio.h>
#include<math.h>

struct Point
{
    float x, y;
};

int Distance(struct Point P){
    float distance = sqrt(P.x*P.x + P.y*P.y);
    return distance;
}

int main(){
    struct Point point;

    printf("Value of X co-ordinate: ");
    scanf("%f", &point.x);

    printf("Value of Y co-ordinate: ");
    scanf("%f", &point.y);

    float distance = Distance(point);
    printf("The distance from the Origin = %.2f", distance);

    return 0;
}