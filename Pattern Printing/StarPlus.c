#include <stdio.h>
int main()                                               /*   _ _ * _ _
                                                              _ _ * _ _ 
                                                              * * * * *
                                                              _ _ * _ _
                                                              _ _ * _ _   */
{ 
    int n;
    printf("enter the number of sides of the square (odd number): ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i== (n / 2) +1 || j== (n / 2) + 1){
                printf("*");
            }
            else printf(" ");
        }
        printf("\n");

    }
    return 0;

}