#include <stdio.h>
int main()
{
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2 != 0){
            for(int j=1;j<=i;j++){
                printf("*");
            }
            for(int k=1;k<=i;k++){
                printf("$");
            }

        }
        else {
            for(int l=1;l<=i;l++){
                printf("$");
            }
            for(int m=1;m<=i;m++){
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}