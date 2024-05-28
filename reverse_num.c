#include<stdio.h>

 int main()
 {
    int a,ognumber,result,d,reverse=0;
    printf("Enter a number \n");
    scanf("%d",&a);
    a=ognumber;
       while(a>0)
    {
        d=a%10;
        reverse=reverse*10+d;
        a=a/10;
        
    }
 
  if(reverse==ognumber)
{
    printf("Number is palin");

}
else{
    printf("Nigga");

}
 }