#include <stdio.h>
int main()
{
    int n;
    printf("enter a number : ");
    scanf("%d",&n);

    for(int i=2;i<n;i++){
        if(n%i==0) {
            printf("composite number ");
            break;
    }
        
    }
    return 0;
}
// here we cant tell about prime. but we can tell about composite.
// in order to print composite number only once in case of multiple factors, use break..
    

