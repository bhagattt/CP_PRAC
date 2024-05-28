#include <stdio.h>

int sym(int A[10][10],int m)
{   int i,j;

for(int i=0;i<m;i++)
{
    for(int j=0;j<m;j++)

{


    if(A[i][j]==A[j][i])
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}
}
}
int main()
{
int a[10][10],m,i,j;
printf("Enter the order of matrix \n");
scanf("%d",&m);
printf("Elements");
for(int i=0;i<m;i++)
{
    for(int j=0;j<m;j++)
    {
        scanf("%d",&a[i][j]);
    }
}

if(sym(a,m))
{
    printf("Y");
}
else 
{
    printf("N");
}
}