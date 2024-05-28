#include <stdio.h>
palindrome(char str[])
{
    int len=0;
    while(str[len]!='\0')
    {
        len++;
    }

    for(int i=0;i<len/2;i++)
    {
        if(str[i]=!str[len-i-1])
        {
        return 0;
        }
    else{
        return 1;
    }
    }
 
  


    
}
int main()
{
    char str[100];

    printf("Enter the string \n");
    scanf("%s",str);

    if(palindrome(str))
    {
        printf("Y");
    }
    else{
        printf("N");
    }
}