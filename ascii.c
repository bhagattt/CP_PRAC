#include <stdio.h>
#include <string.h>
void main()
{
    char ch;
    for(ch=65; ch<=122; ch++)
    {
    	if((ch>90) && (ch<97))
        	continue;
    	printf("%4d %c |", ch, ch );
    }
    return;
}
