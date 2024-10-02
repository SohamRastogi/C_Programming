#include <stdio.h>
int fibo(int n){
    if(n==1) return 1;
    if(n==2) return 1;
    int ans1 = fibo(n-1);
    int ans2 = fibo(n-2);
    return ans1 + ans2;
}
int main()
{
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    fibo(n);
    printf("%d",fibo(n));
    return 0;
}