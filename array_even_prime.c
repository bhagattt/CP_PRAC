#include <stdio.h>
#include <math.h>
int prime(int n)
{
    int root,divisor=2;
    root=sqrt(n);
    while((n%divisor !=0)&& (divisor<=root))
    divisor++;
    if(divisor>root)
   return n;
   else
   return 0;
   
}
int even(int n)
{
    if(n%2==0)
    return n;
    else
    return 0;
    

}
int main()
{
int a[10],m,result;
printf("Enter the size of an array \n");
scanf("%d",&m);
printf("Enter the elements of array \n");

for(int i=0;i<m;i++)
{
    scanf("%d",&a[i]);
}
for(int i=0;i<m;i++)
{ 
  result=even(a[i]);
  if(result>1){
 printf("\n %d ",result);
    printf("\n");
}
  }
printf("prime no \n");
  for(int i=0;i<m;i++)
{ 
  result=prime(a[i]);
  if(result>0){
 printf("\n %d ",result);
    printf("\n");
}
  }
   
}