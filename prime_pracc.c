#include <stdio.h>
#include <math.h>
int main()
{
   int n,root,divisor=2;
   printf("Enter the number \n");
   scanf("%d",&n);
   root=sqrt(n);

   while((n%2!=0) && (divisor<=root))
   {
      divisor++;
   }
if(divisor>root)
{
   printf("prime");


}
else
{
   printf("N");
}
}