#include <stdio.h>
int main()
{
    int num,reverse=0,d,ognum;
    printf("Enter the num \n");
    scanf("%d",&num);
  ognum=num;
    while(num>0)
    {  
        d=num%10;
        reverse=reverse * 10 +d;
        num=num/10;
    }
   
   if(reverse==ognum)
   printf("No is palindrome");
   else
   printf("No is not ");
}