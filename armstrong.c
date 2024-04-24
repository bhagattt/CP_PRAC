#include<stdio.h>
#include <math.h>
int main()
{
    int number,ognumber,remainder,result=0;

    printf("Enter the number \n");
    scanf("%d",&number);
    ognumber=number;
    if(number<100 || number>999)
    {
        printf("Invalid output \n");
        return 0;
    }
    while(ognumber>0)
    {
        remainder=ognumber%10;
        result=result+pow(remainder,3);
        ognumber=ognumber/10;
    }

    if(result==number)
    printf("ARM");
    else
    printf("Nigga");

}