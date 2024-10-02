#include <stdio.h>
int main()
{
    int n;
    printf("enter number of units in perpendicular of the right triangle : ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        int a =1;
        for(int j=1;j<=i;j++){
        char ch = (char)a+64;
        if(i%2 == 0) printf("%c ",ch);
        else printf("%d ",j);
        a++;
        }
        printf("\n");
    }
    return 0;
}
    