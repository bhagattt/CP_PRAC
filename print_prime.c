#include <stdio.h>
#include <math.h>

int prime(int n)
{  int root,divisor;
divisor=2;
  root=sqrt(n);
  while((n% divisor!=0) && (divisor<=root))
  {
    divisor++;
  }
 if(divisor>root)
 {
    return 1;
 }
 else{
    return 0;
 }


}

int main()
{
    int n,i,result;
for(i=100;i<=500;i++)
{
   
  if(prime(i))
  {
    printf("%d \n",i);
  }

}


}