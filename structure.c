#include <stdio.h>
struct info
{int roll;
 char name[100];
 float cgpa;


};

int main()
{
struct info data[2];
for(int i=0;i<2;i++ )
{
    printf("Student %d",i+1);
    printf("Roll no \n");
    scanf("%d",&data[i].roll);
    printf("Enter name \n");
    scanf("%s",data[i].name);
    printf("Enter CGPA");
    scanf("%f",&data[i].cgpa);
}
for(int i=0;i<2;i++)
{
    printf("Roll= %d",data[i].roll);
    printf("Name= %s\n",data[i].name);
    printf("CGPA  %f",data[i].cgpa);
}
}