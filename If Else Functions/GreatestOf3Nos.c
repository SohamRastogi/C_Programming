#include <stdio.h>
int main()
{
   int a,b,c;
   printf("enter first number : ");
   scanf("%d",&a);
   printf("enter second distinct number : ");
   scanf("%d",&b);
   printf("enter third distinct number : ");
   scanf("%d",&c);

   if(a>b && a>c) printf("greatest number is : %d",a);
   if(b>a && b>c) printf("greatest number is : %d",b);
   else printf("greatest number is : %d",c);
   


    return 0;
}