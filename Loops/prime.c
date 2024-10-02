#include <stdio.h>
int main()
{
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    int flag = 0;
    for(int i=2;i<n;i++){
        if (n%i == 0) { flag = 1 ; break ;}
        
    }
    if ( n ==1 ) printf("entered number is neither prime nor composite ");
    else if ( flag ==1 ) printf("composite number");
    else printf("prime number ");
    


    return 0;

}