#include <stdio.h>
int main()
{
    // 3, 12, 48.....
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    int a =3;
    for(int i=1;i<=n;i++){
        a = a*4;
        printf("%d ",a);
    }
    


    return 0;

}