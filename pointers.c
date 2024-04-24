#include <stdio.h>

int main()
{
    int i;
    char str[50];
    printf("ENTER THE STRING\n");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++);
    printf("Length of string is \n %d", i);

    return 0;
}