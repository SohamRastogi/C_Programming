/* a
   bb
   ccc
   dddd */

#include<stdio.h>
int main()
{
   int n;
   printf("enter a number : ");
   scanf("%d",&n);
   int a = 97;
   for(int i=1;i<=n;i++){
       for(int j=1;j<=i;j++){
           char ch = (char)a;
           printf("%c ",ch);
    }
    a++;
    printf("\n");
   }
   return 0;
}