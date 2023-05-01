#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// #define f x *x *x - 2 * x - 5
float f(float x)
{
    return x * x  + 4 * x  - 18;
}

int main()
{
    float x1, x2, x3, E;
    printf("Enter the initial guess x1 : ");
    scanf("%f", &x1); // x1=2
    printf("Enter the initial guess x2: ");
    scanf("%f", &x2); // x2=3
    printf("Enter the precision: ");
    scanf("%f", &E);
    int iteration = 0;

    do
    {
        x3 = ((f(x2) * x1) - (f(x1) * x2)) / (f(x2) - f(x1));
        x1 = x2;
        x2 = x3;

        printf("Iteration: %d\n", ++iteration);
        printf("x1=%f\nx2=%f\nx3=%f\n", x1, x2, x3);

    } while ((fabs(x3 - x1) > E));

    printf("The root of the given equation is:%f ", x3);
}