#include<stdio.h>
#include<stdlib.h>
int main()
{
    int* ptr = (int*) malloc(10*4);
    free(ptr);
    ptr = NULL;
    return 0;
}