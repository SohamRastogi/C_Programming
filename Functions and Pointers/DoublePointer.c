#include <stdio.h>
int main()
{
    int a = 5;
    int* x = &a;
    int** y = &x;
    printf("%d",**y);
    return 0;
}