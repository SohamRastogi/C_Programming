// RETURN TYPE METHOD ....
#include <stdio.h>
int sum (int n){
    if(n==0) return 0;
    int sum1 = sum(n-1);
    int sum = sum1+n;
    return sum;
}
int main()
{
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    sum(n);
    printf("%d",sum(n));
    return 0;
}