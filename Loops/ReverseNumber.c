#include <stdio.h>
int main()
{
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    int ld =0;
    int sum =0;

    while (n != 0){
        ld = n%10;
        sum = sum + ld;
        sum = sum*10;
        n = n/10;

    }
    printf("reverse of the entered number is : %d",sum/10);

    return 0;
}