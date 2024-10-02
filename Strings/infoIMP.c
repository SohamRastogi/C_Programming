#include <stdio.h>
#include <string.h>
int main()
{
    char* ptr = "hello";
    *ptr = 'm';        // read only memory when initializing like this !!
    printf("%s",ptr);
    return 0;
}