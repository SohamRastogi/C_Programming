#include <stdio.h>
int factorial(int x){
    int alpha = 1;
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
    printf("enter a number : ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n-i;j++){
            printf(" ");
        }
        for(int k=0;k<=i;k++){
            int comb = combination(i,k);
            printf("%d ",comb);
        }
        printf("\n");
    }
    return 0;
}