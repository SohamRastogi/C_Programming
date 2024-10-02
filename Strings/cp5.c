#include <stdio.h>
#include <string.h>
int main()
{
    char str[]="hello";
    // str = "byee";         // invalid as in such type of declarations individual entries can be changed not the whole string !!
    str[0]='m';
    printf("%s",str);

    return 0;
}