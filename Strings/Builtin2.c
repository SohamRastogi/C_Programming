#include <stdio.h>
#include <string.h>
int main()
{
    char s1[]="Soham rastogi";
    char s2[100];
    strcpy(s2,s1);
    printf("%s",s2);
    return 0;
}