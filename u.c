#include<stdio.h>
char a='A';
void read(int N[10][10], int m)
{
printf("Enter the elements of Matrix %c: ",a);
++a;
for (int i=0 ; i<m ; i++)
{
for (int j=0 ; j<m ; j++)
{
scanf("%d", &N[i][j]);
}
}
}
void display(int N[10][10], int m)
{
for (int i=0 ; i<m ; i++)
{
for (int j=0 ; j<m ; j++)
{
printf("%2d ", N[i][j]);
}
printf("\n");
}
}
void addition(int N[10][10], int M[10][10], int sum[10][10], int m)
{
for (int i=0 ; i<m ; i++)
{
for (int j=0 ; j<m ; j++)
{
sum[i][j] = N[i][j] + M[i][j];
}
}
}
void multiplication(int N[10][10], int M[10][10], int mult[10][10], int m)
{
for (int i = 0; i < m; i++) {
for (int j = 0; j < m; j++) {
int sum = 0;
for (int k = 0; k < m; k++) {
sum = sum + N[i][k] * M[k][j];
}
mult[i][j] = sum;
}
}
}
void transposed(int N[10][10], int transpose[10][10], int m)
{
for (int i = 0; i < m; i++) {
for (int j = 0; j < m; j++) {
transpose[j][i] = N[i][j];
}
}
}
int main()
{
int A[10][10], B[10][10], C[10][10], D[10][10], sum[10][10], mult[10][10],
transpose[10][10],square[10][10],result[10][10],m;
printf("Enter the size of the Matrix A, B, C, D: ");
scanf("%d", &m);
read(A,m);
read(B,m);
read(C,m);
read(D,m);
addition(A,B,sum,m);
multiplication(C,D,mult,m);
transposed(sum,transpose,m);
multiplication(mult,mult,square,m);
multiplication(transpose,square,result,m);
display(result,m);
}