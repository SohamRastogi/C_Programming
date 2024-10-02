#include <stdio.h>
int main()
{
    int n;
    printf("enter number of units in perpendicular of rigth triangle : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=n+1-i;j>0;j--){
            printf("* ");
        }
        printf("\n");

    }
    return 0;
}