#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int* ptr = (int*) malloc(n*4);
    int* p = ptr;
    for(int i=1;i<=n;i++){
        scanf("%d",&(*ptr));
        ptr++;
    }
    for(int i=1;i<=n;i++){
        printf("%d ",*p);
        p++;
    }
    return 0;
}