#include <stdio.h>
int main()
{
    char str[]="hello";
    printf("%p\n",&str[0]);
    printf("%p\n",&str[1]);
    printf("%p\n",&str[2]);
    printf("%p\n",&str[3]);
    printf("%p\n",&str[4]);
   return 0;
}