#include <stdio.h>
int main()
{
    int a;
    int b;
    printf("enter a number : ");
    scanf("%d",&a);
    printf("enter another number : ");
    scanf("%d",&b);
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("%d",a);
    printf("\n");
    printf("%d",b);
    return 0;
}