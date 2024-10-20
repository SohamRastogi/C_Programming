#include<stdio.h>
int dec(int n);
int main()
{
    int n;
    printf("Enter a binary number : ");
    scanf("%d",&n);
    printf("the equivalent decimal number is : %d",dec(n));
    return 0 ;
}
int dec(int n){
    if(!(n/10)){
        return n;
    }
    return(n%10 + dec(n/10)*2 );
}