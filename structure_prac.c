#include <stdio.h>
struct info{
    char name[100];
   int pincode;


};
int main()
{
    struct info data[2];
    for(int i=0;i<2;i++)
    {
        printf("Enter name of locality\n ");
        scanf("%s",data[i].name);
        printf("Enter pincode \n");
        scanf("%d",&data[i].pincode);

    }
for(int i=0;i<2;i++)
{
    printf("Locality %s",data[i].name);
    printf("Pincode is %d",data[i].pincode);
}
}