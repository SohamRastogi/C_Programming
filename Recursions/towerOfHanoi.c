#include <stdio.h>
void tower (int n,char source, char helper,char destination);
int main()
{
    int n;
    printf("enter number of disks : ");
    scanf("%d",&n);
    tower(n,'A','B','C');
    return 0 ;
}
void tower (int n,char source,char helper,char destination){
    if(n==0) return ;
    tower (n-1,source,destination,helper);
    printf("%c -> %c\n",source,destination);
    tower (n-1,helper,source,destination);
    return ;
}