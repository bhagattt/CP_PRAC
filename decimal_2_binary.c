#include <stdio.h>
int main()
{
    int arr[7],n,q;
    for(int i=0;i<7;i++)
    {
          arr[i]=0;
    }
    printf("Enter the no \n");
    scanf("%d",&n);
    while(n>0)
{  for(int i=n;i>=0;i--)
{
      arr[i]=n%2;
      n=n/2;

}
  

    
}
   
    
}