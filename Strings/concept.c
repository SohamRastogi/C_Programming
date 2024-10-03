// BUS ERROR IN CODE 
#include <stdio.h>
int main()
{
    char str[]="cat";
    char* p ;
    p = "cat";
    printf("%c",++p[0]);
    p = str;
    printf("%c",--p[0]);
    return 0;

}