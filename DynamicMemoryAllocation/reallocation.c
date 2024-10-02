#include<stdio.h>
#include<stdlib.h>
int main()
{
    int* ptr = (int*) malloc(5*4); // already 5 integers extra space created !!
    ptr = realloc(ptr,10*4);      // 10-5 == 5. So extra space created for 5 integers more !!
    return 0;
}
