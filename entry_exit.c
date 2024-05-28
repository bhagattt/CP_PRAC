#include <stdio.h>
int main()
{
    int n,result=0;

    printf("Enter the number \n");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        result=result+i;


    }
    printf("%d",result);
}
