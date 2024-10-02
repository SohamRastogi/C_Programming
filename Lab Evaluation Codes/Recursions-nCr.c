/* print ncr using recursions */

#include<stdio.h>
int factorial(int n){
    if(n==0) return 1;
    return factorial(n-1)*n;
}
int combination(int n,int r){
    int ans = factorial(n)/(factorial(r)*factorial(n-r));
    return ans;
}
int main()
{
    int n,r;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    printf("Enter the value of r : ");
    scanf("%d",&r);
    int com = combination(n,r);
    printf("%d",com);
    return 0;
}