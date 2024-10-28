#include<stdio.h>
int main()
{
    FILE* ptr;
    ptr = fopen("College.txt","r");
    fclose(ptr);   // always a good practice to close a file after opening it !!
    return  0;
}