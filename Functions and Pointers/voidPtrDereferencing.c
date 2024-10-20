#include<stdio.h>
int main()
{
    void* ptr;
    int i;
    ptr = &i;
    // *ptr = 5;   => this gives error as return type of ptr is void and not int;

    // so we use typecasting 
    *((int*)ptr) = 5;
    printf("%d",*((int*)ptr)); // OR  printf("%d",i); => this also gives 5 
    return 0 ;
}