#include <stdio.h>
int fact(int a)
{
    if(a==0)
    return 1;
    else 
    return a*fact(a-1);
}

int main()
{
    int a,result;
    printf("Enter the number \n");
    scanf("%d",&a);
    result=fact(a);

printf("%d is the factorial of %d",result,a);
}
