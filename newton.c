#include<stdio.h>
#include <stdlib.h>
#include<math.h>

float f(float x){
    return x*x-4*x+4;
}
float g(float x) {
    
    return 2*x-4;
}

int main()
{
    float x0,x1,E,N;
    printf("Initial Guess: ");
    scanf("%f",&x0);
    printf("Tolerable Error: ");
    scanf("%f",&E);
    printf("Max Number of Iteration: ");
    scanf("%f",&N);
    int count=0 ;
    do{
        if(count>N)
            {printf("NON Convergent.");
            exit(0);}
        float f1= f(x0);
        float g1=g(x0);
        printf("X1: %f\n",x1);
        x1= x0-(f1/g1);
        count++;
        x0=x1;
    }while(fabs(f(x1))>E);
    printf("Root: %f\n",x1);
}