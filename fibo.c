#include <stdio.h>
int main()
{
    int arr[100],n;

    printf("Enter the number \n");
    scanf("%d",&n);
    arr[0]=1;
    arr[1]=1;
    for(int i=2;i<n;i++)
    {   
       arr[i]=arr[i-1] +arr[i-2];
    }
   for(int i=0;i<n;i++)
{
     printf("RESULT= %d \n",arr[i]);
}
   
}