#include <stdio.h>
int main()
{
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    int x=1;
    int y=1;
    int sum =1;
    for(int i=1;i<=n-2;i++){
        sum = x+y;
        x = y;
        y = sum;
    }
    printf("the number is : %d",sum);

    return 0;
}