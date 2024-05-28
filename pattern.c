#include <stdio.h>
int main()
{
    int i;
    for(i=0;i<3;i++)
    {
        for(int j=0;j<i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}