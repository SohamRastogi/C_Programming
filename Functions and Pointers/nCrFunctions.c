#include <stdio.h>
int factorial(int x){
    int alpha =1;
    for(int i=1;i<=x;i++){
        alpha = alpha*i;
    }
    return alpha;
}
int combination(int n,int r){
    int cc = factorial(n)/(factorial(r)*factorial(n-r));
    return cc;
}
int main()
{
    int n;
    int r;
    printf("enter n : ");
    scanf("%d",&n);
    printf("enter r : ");
    scanf("%d",&r);
    int comb = combination(n,r);
    printf("%d",comb);
    return 0;
}