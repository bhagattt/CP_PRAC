#include <stdio.h>
int power(int base,int exponent)
{
    if(exponent==0)
    {
         return 1;
    }
   
    else 
    return base*power(base,exponent-1);
}


int main()
{
    int base,exponent,result;
    printf("Enter number \n");
    scanf("%d%d",&base,&exponent);
   
    printf("power is %d",power(base,exponent));
}