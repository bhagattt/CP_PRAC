#include<stdio.h>
#include <math.h>
int main()
{
    int number,ognumber,remainder,result,sum=0,square;

    printf("Enter the number \n");
    scanf("%d",&number);
    ognumber=number;
   square=ognumber*ognumber;
    while(ognumber>0)
    {   result=ognumber;
        result=result%10;
       sum=sum+result;
        ognumber=ognumber/10;
    }

    if(sum==number)
    printf("NEON");
    else
    printf("Nigga");

}