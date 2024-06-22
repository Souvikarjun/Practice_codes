#include<stdio.h>

struct Complex
{
    float Real, Imaginary;
};

struct Complex Add(struct Complex num1, struct Complex num2)
{
    struct Complex result;

    result.Real = num1.Real + num2.Real;
    result.Imaginary = num1.Imaginary + num2.Imaginary;

    return result;
};


int main(){

    struct Complex first, second, Result;

    printf("Real part of the first Number: ");
    scanf("%f", &first.Real);

    printf("Imaginary part of the first Number: ");
    scanf("%f", &first.Imaginary);

    printf("Real part of the second Number: ");
    scanf("%f", &second.Real);

    printf("Imaginary part of the second Number: ");
    scanf("%f", &second.Imaginary);

    Result = Add(first, second);

    printf("the Addition of 2 complex numbers is: %.2f + %.2fi", Result.Real, Result.Imaginary);


    return 0;
}