/* int* x,y ----> int*x , int y */
// solution below : 
#include <stdio.h>
int main()
{
    typedef int* pointer;
    int x = 4;
    int y = 5;
    pointer* a,b;
    a = &x;
    b = &y;
    printf("%p\n%p",a,b);
    return 0;
}