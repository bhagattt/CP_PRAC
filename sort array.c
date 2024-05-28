#include <stdio.h>

int main()
{
    int a[3], temp;
    printf("Enter array elements: \n");
    for(int i = 0; i < 3; i++)
    {
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < 2; i++)
    {
        if(a[i] > a[i+1])
        {
            temp = a[i];
            a[i] = a[i+1];
            a[i+1] = temp;
        }
    }

    printf("Sorted array: ");
    for(int i = 0; i < 3; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}