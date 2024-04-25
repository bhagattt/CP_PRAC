#include <stdio.h>
int main()
{
    int num,reverse=0,d;
    printf("Enter the num \n");
    scanf("%d",&num);

    while(num>0)
    {
        d=num%10;
        reverse=reverse * 10 +d;
        num=num/10;
    }
    printf("Rv %d",reverse);
}