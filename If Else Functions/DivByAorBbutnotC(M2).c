#include <stdio.h>
int main()
{
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    if( (n%3==0 || n%5==0) && n%15 !=0) {          //braces as precedence of && > ||..

        printf("number divisible by 5 or 3 but not 15");
    }  
    else printf("number not matching required condition"); /*could be divisible by 5 and
                                                             3 and 15 or not divisible 
                                                             5 and 3 and thus 15..*/
    return 0;
}     