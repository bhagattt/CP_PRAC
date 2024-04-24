#include <stdio.h>
int calcsum(int n)
{
    int sum=0,i;
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
        
    }
    return sum;
}
int main()
{
    int n,sum;
    printf("Enter the value of n \n");
    scanf("%d",&n);
    sum=calcsum( n);
    printf("%d",sum);
}
