#include <stdio.h>
int main()
{
    int n;
    printf("enter number of units of perpendicular of right triangle : ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}