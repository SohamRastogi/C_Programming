#include <stdio.h>
int main()
{
    int n;
    printf("enter the value of n : ");
    scanf("%d",&n);
    int r;
    printf("enter the value of r : ");  
    scanf("%d",&r);
    int nfactorial = 1;
    int rfactorial = 1;
    int nrfactorial = 1;
    for(int i=1;i<=n;i++){
        nfactorial = nfactorial*i;
    }
    for(int i=1;i<=r;i++){
        rfactorial = rfactorial*i;
    }
    for(int i=1;i<=n-r;i++){
        nrfactorial = nrfactorial*i;
       
    }
    int combination = nfactorial/(rfactorial*nrfactorial);
    printf("%d",combination);
    return 0;

    
}