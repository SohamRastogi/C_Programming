#include <stdio.h>
#include <string.h>
int main()
{
    char str[40];
    puts("enter a string");
    scanf("%[^\n]s",str);
    puts(str);
    return 0;
}
