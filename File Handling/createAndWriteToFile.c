#include<stdio.h>
int main()
{
    FILE* ptr = fopen("College.txt","w");
    char str[100]="Soham Rastogi";
    fputs(str,ptr);
    return 0 ;
}