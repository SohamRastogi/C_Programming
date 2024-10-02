#include <stdio.h>
int factorial(int n);
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    factorial(n);
    printf("%d",factorial(n));
    return 0;
}
int factorial(int n){
    if(n==0) return 1; 
    int n1fact = factorial(n-1);
    int finalans = n1fact*n;
    return finalans;
}