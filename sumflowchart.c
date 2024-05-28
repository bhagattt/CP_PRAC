#include <stdio.h>
int main()
{
    int a,d,result=0;
    printf("Enter a number \n");
    scanf("%d",&a);
    while(a>0)
    {
        d=a%10;
        result=result+d;
        a=a/10;
    }

    printf("%d",result);
}