#include <stdio.h>
void increase(int n,int x);
int main()
{
    int x;
    printf("enter a number : ");
    scanf("%d",&x);
    increase(1,x);
    return 0;
}
void increase(int n,int x){
    if(n>x) return ;
    printf("%d\n",n);
    increase(n+1,x);
    return ;
}