#include <stdio.h>
int main()
{
    int a,b;
    printf("ENter the value of a \n");
    scanf("%d",&a);
    printf("ENter the value of b \n");
    scanf("%d",&b);
// a=3 and b=1
a=a+b;
b=a-b;
a=a-b;

printf("%d%d",a,b);
}