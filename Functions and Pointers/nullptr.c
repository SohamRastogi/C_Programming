#include<stdio.h>
int main()
{
    int* ptr = NULL;
    *ptr = 5;     // error
    printf("%d",*(ptr));   // error
    return 0 ;
}