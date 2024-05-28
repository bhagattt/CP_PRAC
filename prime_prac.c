#include <stdio.h>
#include <math.h>
int prime(int n)
{
    int root,divisor=2;
    root=sqrt(n);
    while((n%divisor!=0) && (divisor<=root))
    {
        divisor++;
    }
    if(divisor>root)
    {
        return 1;
    }
    else 
    return 0;

}

int main()
{
int a;
printf("Enter a number \n");
scanf("%d",&a);
if(prime(a))
{
    printf("No is prime");
}
else
{
printf("N");
}
}

