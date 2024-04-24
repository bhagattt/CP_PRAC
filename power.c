#include<stdio.h>
int power(int base ,int exponent);

int main()
{   int base,exponent,result;
    printf("Give 2 numbers \n");
    scanf("%d%d",&base,&exponent);
    result=power(base, exponent);
    printf("GCD=%d",result);
}

int power(int base,int exponent)
{
    if(exponent==0){
        return 1;
    }
    else{
        return base *power(base,exponent-1);
            }
}
