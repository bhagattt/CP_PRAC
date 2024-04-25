#include <stdio.h>
#include <string.h>
struct info
{ char name[100];
   int marks;


};
int main()

{  
struct info temp;
    struct info data[3];
for(int i=0;i<3;i++)
{   printf("Enter name \n");
    scanf("%s",data[i].name);
    printf("Enter marks \n");
    scanf("%d",&data[i].marks);
}for(int j=0;j<3;j++)
{


   for(int i=0;i<3;i++)
   
   {
    if(data[i].marks<data[i+1].marks)
    {    temp.marks=data[i].marks;
        data[i].marks=data[i+1].marks;
       data[i+1].marks=temp.marks;
       
      strcpy(temp.name,data[i].name);
        strcpy(data[i].name,data[i+1].name);
      strcpy(data[i+1].name,temp.name);
       
    
       
    }
   }
    


   }

   for(int i=0;i<3;i++)
   {
    printf("%s\n",data[i].name);
    printf("%d",data[i].marks);
   }
   

}