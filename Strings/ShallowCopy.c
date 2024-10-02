#include <stdio.h>
#include <string.h>
int main()
{
    char str[]= "Physics Wallah";
    char* ptr = str;
    str[0]='m';
    printf("%s",str);

    return 0;
}