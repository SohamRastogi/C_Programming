#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "soham rastogi";
    char* ptr = str;
    ptr = "sanvi rastogi";
    printf("%s",str);
    return 0;
}