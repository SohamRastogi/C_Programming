#include <stdio.h>
int main()
{
    // char str[5]={'h','e','l','l','o'}; valid initialisation !!
    char str[]="hello";
    for(int i=0;i<5;i++){
        printf("%c",str[i]);
    }
    return 0;
}