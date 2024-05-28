#include <stdio.h>
#include<math.h>
int main()
{
    int n,ognumber,d;
    double result=0;

    printf("Enter the number \n");
    scanf("%d",&n);
    ognumber=n;


    if(n<100 || n>999)
    {
        printf("Invalid input");
        return 0;
    }

    while(ognumber>0)
    {  d=ognumber%10;
        result=result +pow(d,3);
        ognumber=ognumber/10;
    }

    if(result==n)
    printf("Arm");
    else 
    printf("Nigga");
}