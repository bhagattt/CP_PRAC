#include <stdio.h>
int main()
{
    int plat;
    printf("Enter the plat no \n");
    scanf("%d",&plat);

    switch(plat)
    {
        case 1:
        printf("CHG FAST 6:30 ");
        break;
        case 2:
        printf("BO FAST 6:21");
        break;
        case 3:
        printf("CHG FAST 6:17");
        break;
        default:
        printf("MINDICATOR DEKH LE \n");
        break;
    }
}