#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float function(float x)
{
    return sin(x) - 2 * x + 1;
}

int main()
{

    float a, b, c, fa, fb, fc;
    printf("Enter the initial guess a : ");
    scanf("%f", &a); // a=0
    printf("Enter the initial guess b: ");
    scanf("%f", &b); // b=1
    fa = function(a);
    fb = function(b);
    int iteration = 0;
    do
    {
        c = (a + b) / 2;
        fc = function(c);
        printf("Iteration: %d\n", ++iteration);
        printf("a=%f\n,b=%f\n,c=%f\n,fc=%f\nF", a, b, c, fc);
        if (fa * fc < 0)
            a = c; // c=-0.125
        else
            b = c;
        printf("****************************\n");
    } while ((b - a) >= 0.000005);
}