#include <stdio.h>
int main()
{
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    if(n%3==0 || n%5==0){
        if(n%15==0) printf("divisible by 15");
        else printf("indivisible by 15");
    }
    else printf("indivisible by 3 and 5 and 15");
    
    return 0;
}