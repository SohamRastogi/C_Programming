#include <stdio.h>
int main()
{
    int a;
    int b;
    printf("Enter a number : ");
    scanf("%d",&a);
    printf("enter another number : ");
    scanf("%d",&b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("%d",a);
    printf("\n");
    printf("%d",b);
    return 0;
}