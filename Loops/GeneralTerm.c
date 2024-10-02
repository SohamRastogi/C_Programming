/*0,3,8,15,....
Print till the nth term
*/
#include <stdio.h>
int main()
{
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    int a =1;
    for(int i=1;i<=n;i++){
         printf("%d ",a*a-1);
         a++;
    }
    return 0;
}