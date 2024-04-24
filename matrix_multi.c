#include <stdio.h>
void mult(int a[10][10],int b[10][10],int n,int result[10][10])
{
    int k,i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {   int sum=0;
            for(k=0;k<n;k++)
            {
                sum=sum+a[i][k]*b[k][j];
            }
            result[i][j]=sum;
        }
    }

}
void read(int a[10][10],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

      

}
void display(int a[10][10],int n)
{
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }


}
 int diagonal (int a[10][10],int n)
{ int sum=0;
    for(int i=0;i<n;i++)
    {
     
        sum=sum+a[i][i];

    }
    return sum;
}

int main()
{
    int  a[10][10], b[10][10], n,result[10][10],sum;
    printf("Enter the order of matrix \n");
    scanf("%d",&n);
 printf("Enter the elements of matrix A \n");
 read(a,n);
 // printf("Enter the elements of matrix B \n");
  // read(b,n);
 // mult(a,b,n,result);
 // display(result,n);
sum=diagonal(a,n);
printf("SUM=%d",sum);

}