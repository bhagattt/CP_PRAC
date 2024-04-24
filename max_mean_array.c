#include <stdio.h>
int main()
{
    int N[10],m,i,max,min,max_index,min_index,temp;
    printf("Enter the no of elements in an array \n");
    scanf("%d",&m);
printf("Enter the   elements of array \n");
for(i=0;i<m;i++)
{
    scanf("%d",&N[i]);
}
max=N[0];
min=N[0];
max_index=0;
min_index=0;

for(i=0;i<m;i++)
{
    if(N[i]>max)
    {
        max=N[i];
        max_index=i;

    }
    if(N[i]<min)
    {
        min=N[i];
        min_index=i;
    }
}
temp=N[min_index];
N[min_index]=N[max_index];
N[max_index]=temp;
printf("After swapping ");
for(i=0;i<m;i++)
{
    printf("%d ",N[i]);
}

}