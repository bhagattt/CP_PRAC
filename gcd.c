#include<stdio.h>
int gcd(int a ,int b);

int main()
{   int a,b,result;
    printf("Give 2 numbers \n");
    scanf("%d%d",&a,&b);
    result=gcd(a, b);
    printf("GCD=%d",result);
}

int gcd(int a,int b)
{
    if(b==0){
        return a;
    }
    else{
        return gcd(b,a%b);
            }
}
