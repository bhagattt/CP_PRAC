#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the numbers \n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    printf("%d is largest",a);
    else if(b>a && b>c)
    printf("%d is largest",b);
    else
    printf("%d is largest",c);

}