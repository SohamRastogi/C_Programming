#include <stdio.h>
int power(int a,int b){
    if(b==0) return 1;
    int ans1 = power(a,b-1);
    int finalans = ans1*a;
    return finalans;
}
int main()
{
    int a,b;
    printf("enter the base : ");
    scanf("%d",&a);
    printf("enter the exponent : ");
    scanf("%d",&b);
    power(a,b);
    printf("%d",power(a,b));
    return 0;
}