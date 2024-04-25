#include <stdio.h>
float calmean(int m[10],int n)
{ int i,sum=0;
 
 for(i=0;i<n;i++)
 {
    sum=sum+m[i];
 }
 float mean=(float)sum/n;
 return mean;

}

int count(int m[10],int n,float mean)
{ int counter=0;
   for(int i=0;i<n;i++)
   {
      if(m[i]<mean)
      {
         counter++;
      }
   }
   return counter;
}
int main()
{int m[10],i,n;
 printf("Enter the no of elements in an array \n");
 scanf("%d",&n);
 printf("Enter the elements of an array \n");
 for(i=0;i<n;i++)
 {
scanf("%d",&m[i]);
 }
 printf("Mean of this array is %f", calmean( m,n));
 printf("Count is %d",count(m,n, calmean( m,n)));
}