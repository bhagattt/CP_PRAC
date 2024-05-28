#include <stdio.h>
 int gcd(int a,int b)
 {
    if(b==0)
    {
        return a;
    }
    else{
        return(b,a%b);
    }
 }

 int main()
 {
    int a,b,result;
    printf("Enter two numbers \n");
    scanf("%d%d",&a,&b);
    result=gcd(a,b);
    printf("%d",result);
 }