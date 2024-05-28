#include <stdio.h>


struct info{
char name[100];
int roll;
int cgpa;
char div[100];
};


int main()
{
    struct info data[3];
    for(int i=0;i<3;i++)
    {
  printf("Student %d:\n",i+1);
  printf("Enter name A");
  scanf("%c",data[i].name);
  printf("Enter roll no \n");
  scanf("%d",&data[i].roll);
  printf("Enter cgpa \n");
  scanf("%d",&data[i].cgpa);
  printf("Enter div \n");
scanf("%c",data[i].div);

  
    }
for(int i=0;i<3;i++)  
{
    printf("Name-%c \n",data[i].name);
    printf("Roll no=%d \n",data[i].roll);
    printf("CGPA- %d \n",data[i].cgpa);

}
}
