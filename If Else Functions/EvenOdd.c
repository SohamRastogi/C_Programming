#include <stdio.h>
int main()
{
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    if( n%2 == 0) printf("entered number is even");
    else printf("entered number is odd");
    
    return 0;
}