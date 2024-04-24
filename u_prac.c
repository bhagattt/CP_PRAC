#include <stdio.h>

char a = 'A';

void read(int N[10][10], int m)
{
    printf("Enter the size of matrix %c", a);
    a++;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &N[i][j]);
        }
    }
}

void display(int N[10][10], int m)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%2d", N[i][j]);
        }
        printf("\n");
    }
}

void addition(int M[10][10], int N[10][10], int sum[10][10], int m)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sum[i][j] = N[i][j] + M[i][j];
        }
    }
}

void multiplication(int M[10][10], int N[10][10], int mul[10][10], int m)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int sum = 0;
            for (int k = 0; k < m; k++)
            {
                sum += N[i][k] * M[k][j];
            }
            mul[i][j] = sum;
        }
    }
}

void transpose(int N[10][10], int trans[10][10], int m)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            trans[j][i] = N[i][j];
        }
    }
}

int main()
{
    int m;
    int A[10][10], B[10][10], C[10][10], D[10][10], sum[10][10], transposed[10][10], multi[10][10], square[10][10], result[10][10];

    printf("Enter the size of A,B,C,D:");
    scanf("%d", &m);
    if (m > 10 || m < 1)
    {
        printf("Error: matrix size must be between 1 and 10.\n");
        return 1;
    }
    read(A, m);
    read(B, m);
    read(C, m);
    read(D, m);
    addition(A, B, sum, m);
    multiplication(C, D, multi, m);
    transpose(multi, transposed, m);
    multiplication(transposed, multi, square, m);
    multiplication(transposed, square, result, m);
    display(result, m);

    return 0;
}