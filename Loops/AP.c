#include <stdio.h>
int main()
{   int n;
    printf("enter a number : ");
    scanf("%d",&n);
    // 4,7,10,13,16,19,22 .....
    int a =4;
    for(int i=1;i<=n;i++){
        a = a + 3;
        printf("%d ",a);
    }


    return 0;

}