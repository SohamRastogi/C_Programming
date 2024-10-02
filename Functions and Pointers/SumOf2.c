#include <stdio.h>
int add(int a,int b){
    int sum = a+b;
    return sum;
}
int main()
{
    int a;
    int b;
    printf("Enter number 1 : ");
    scanf("%d",&a);
    printf("enter number 2 : ");
    scanf("%d",&b);
    int sum = add(a,b);
    printf("sum of the two entered numbers is : %d",sum);
    return 0;
}