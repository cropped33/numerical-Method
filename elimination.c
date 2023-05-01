#include <stdio.h>
#include <stdlib.h>
float arr[50][50], X[50];
float ratio;

void input_matrix(int n)
{
    printf("Enter The matrix of size %dx%d\n", n, n + 1);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n + 1; j++)
        {
            scanf("%f", &arr[i][j]);
        }
    }
}

void display_matrix(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n + 1; j++)
        {
            printf("%f ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void elimination(int n)
{
    printf("Upper Triangular Matrix:\n");
    for (int i = 1; i <= n - 1; i++)
    {
        if (arr[i][i] == 0)
        {
            printf("Mathematical Error!!!");
            exit(0);
        }
        
        for (int j = i + 1; j <= n; j++)
        {
            ratio = arr[j][i] / arr[i][i];
            for (int k = 1; k <= n + 1; k++)
            {
                arr[j][k] = arr[j][k] - ratio * arr[i][k];
            }
        }
    }
}

void back_sub(int n)
{
    X[n] = arr[n][n + 1] / arr[n][n];
    for (int i = n - 1; i >= 0; i--)
    {
        X[i] = arr[i][n + 1];
        for (int j = i + 1; j <= n; j++)
        {
            X[i] = X[i] - arr[i][j] * X[j];
        }
        X[i] = X[i] / arr[i][i];
    }
}

void display_solution(int n)
{

    printf("The Solution of given linear equation is:\n");
    for (int i = 1; i <= n; i++)
    {
        printf("%f\n", X[i]);
    }
}

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    input_matrix(n);
    display_matrix(n);

    elimination(n);
    display_matrix(n);

    back_sub(n);
    display_solution(n);
}