/*Start of The program*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
int Height(float x, float y);
int BMI(float i, float j);

int main(){            /*Name , DOB, Place of origin, height, weight*/
    int month1, month2, date1, date2, year1, year2;
    char Name1[20]; char Name2[20]; char Place1[40]; char Place2[40];
    float height1, ft1, inch1, height2, ft2, inch2, weight1, weight2, BMI1, BMI2; 

    printf("PERSON 1\n");           /*Details of Person 1*/
    printf("NAME: ");
    scanf("%s", Name1);
    printf("Date of birth:\n");
    printf("Date: ");
    scanf("%d", &date1);
    printf("Month: ");
    scanf("%d", &month1);
    printf("Year: ");
    scanf("%d", &year1);
    printf("Place Of Origin: ");
    scanf("%s", Place1);
    printf("Hight: \n"); 
    printf("Feet: ");
    scanf("%f", &ft1);
    printf("Inch: ");
    scanf("%f", &inch1);
    printf("Weight: ");
    scanf("%f", &weight1);

    printf("\n");

    printf("PERSON 2\n");            /*Details of Person 2*/
    printf("NAME: ");
    scanf("%s", Name2);
    printf("Date of birth:\n");
    printf("Date: ");
    scanf("%d", &date2);
    printf("Month: ");
    scanf("%d", &month2);
    printf("Year: ");
    scanf("%d", &year2);
    printf("Place Of Origin: ");
    scanf("%s", Place2);
    printf("Hight: \n");
    printf("Feet: ");
    scanf("%f", &ft2);
    printf("Inch: ");
    scanf("%f", &inch2);
    printf("Weight: \n");
    scanf("%f", &weight2);

/*height1 = Height(ft1, inch1);*/
    float m1, m2, m3, m4, f_m= 0.3048, in_m = 0.0254, sq1, sq2;
               
    m1 = ft1*f_m;           /*Converting height feet to Meter*/
    m2 = inch1*in_m;
    height1 = m1+m2;

    m3 = ft2*f_m;
    m4 = inch2*in_m;
    height2 = m3+m4;

    sq1 = height1*height1;     /*Calculating BMI*/
    BMI1 = weight1/sq1;


    sq2 = height2*height2;
    BMI2 = weight2/sq2;

/*    BMI1 = BMI(weight1, height1);
    BMI2 = BMI(weight2, height2); */

    printf("The BMI of %s is = %.2f\n", Name1, BMI1);       /*Output BMI*/
    printf("The BMI of %s is = %.2f", Name2, BMI2);

return 0;
}
/*
int Height(float x, float y){
    float m, m3, m4;
    m3 = x*f_m;
    m4 = y*in_m;
    m = m3+m4;
    return m;
}*/

/*int BMI(float i, float j){
    float b, sq;
    sq = j*j;
    b = (i/sq);
    return b;
}*/


/*End of the program*/