#include <stdio.h>
int main()
{
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    char str[n];
    for(int i=0;i<n+1;i++){
        scanf("%c",&str[i]);
    }
    
        printf("%s",str);
    
    return 0;
}
