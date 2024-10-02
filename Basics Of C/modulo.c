#include <stdio.h>
int main()
{
    int a,b;
    printf("enter first number : ");
    scanf("%d",&a);
    printf("enter second number : ");
    scanf("%d",&b);
    int c = a%b;
    printf("the remainder is %d",c);
    
    return 0;
}