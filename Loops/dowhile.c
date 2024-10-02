#include <stdio.h>
int main()
{
    int i=10;                   // used to print atleast once.
                                // if condition correct then output of do while = that of while....
    do {
        printf("%d ",i);
        i++;
    } while ( i<0);

    return 0;
}