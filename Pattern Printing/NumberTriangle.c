#include <stdio.h>
int main()
{
    int n;
    printf("number of units in perpendicuklar of right triangle : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}