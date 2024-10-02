#include <stdio.h>
int main()
{
    int n = 987;
    printf("notes in hundred %d",n/100);
    printf("\n");
    printf("notes in 50 %d",(n%100)/50);
    printf("\n");
    printf("notes in 10 %d",((n%100)%50)/10);
    printf("\n");
    printf("amount remaining %d",(((n%100)%50)%10));
    return 0;

} 