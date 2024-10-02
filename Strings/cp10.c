// DEEP COPY EXAMPLE :
#include <stdio.h>
#include <string.h>
int main()
{
    char* s1 = "soham";
    char* s2;
    s2 = s1;
    s2 = "rastogi";
    printf("%s",s1);
    printf("\n");
    printf("%s",s2);
    return 0;
}