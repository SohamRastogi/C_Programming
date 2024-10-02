#include <stdio.h>
int minimum(int a,int b){
    int min;
    if(a<b) min=a;
    else min=b;
    return min;
}
int main()
{
    int a;
    int b;
    printf("enter a number : ");
    scanf("%d",&a);
    printf("Enter a number : ");
    scanf("%d",&b);
    int min = minimum(a,b);
    printf("minimum of the two numbers is : %d",min);
    return 0;
}