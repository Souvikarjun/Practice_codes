/*Start of the function*/

#include<stdio.h>
#include<conio.h>

int main(){


    int i, j, sum1, dif1;
    float a, b, sum2, dif2;



   scanf("%d %d %f %f", &i, &j, &a, &b);  /*Getting inputs from the User*/



/*    printf("first integer number\n");
    scanf("%d", &i);
    printf("second integer number\n");
    scanf("%d", &j);
    printf("first float number\n");
    scanf("%f", &a);
    printf("second float number\n");
    scanf("%f", &b);
*/
    sum1=i+j;           /*Processing Mathemetics*/
    dif1=i-j;
    sum2=a+b;
    dif2=a-b;           /*Printing outputs from here*/
    printf("the sum of 2 integer= %d \n", sum1);
    printf("the dif of 2 integer= %d \n", dif1);
    printf("the sum of 2 integer= %.2f \n", sum2);
    printf("the sum of 2 integer= %.2f \n", dif2);

return 0;           /*output Main function*/
}