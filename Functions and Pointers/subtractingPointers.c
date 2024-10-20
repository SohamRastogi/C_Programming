#include<stdio.h>
int main()
{
    int a[10];
    int* c;
    int* b;
    int j;
    c = &a[4];
    b = &a[10];
    j=b-c;
    printf("%d",j);
    return 0 ;
}