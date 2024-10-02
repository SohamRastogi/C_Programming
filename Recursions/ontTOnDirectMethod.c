#include <stdio.h>
void decrease(int n);
int main()
{
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    decrease(n);
    return 0;
}
void decrease(int n){
    if(n==0) return ;
    // printf("%d\n",n); // shift this line below decrease(n-1) statement !!
    decrease(n-1);
    printf("%d\n",n);   // slight modification ....
    return ;
}