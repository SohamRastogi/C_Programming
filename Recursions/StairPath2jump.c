#include<stdio.h>
int stair(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    
    int ways = stair(n-1)+ stair(n-2);
    return ways;    
}
int main()
{
    int n;
    printf("enter a natural number : ");
    scanf("%d",&n);
    int totalways = stair(n);
    printf("%d",totalways);
    return 0;
}