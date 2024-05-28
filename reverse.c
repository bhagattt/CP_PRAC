#include <stdio.h>
int main()
{
    int a,reverse=0,d;
    printf("Enter the number \n");
    scanf("%d",&a);
     while(a>0)
     {
        d=a%10;
        reverse=reverse*10+d;
        a=a/10;

     }

     printf("%d",reverse);
}