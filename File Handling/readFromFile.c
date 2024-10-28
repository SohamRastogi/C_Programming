#include<stdio.h>
int main()
{
    FILE* ptr = fopen("textFile.txt","r");
    char str[100];
    if(fgets(str,100,ptr)!=NULL){  // with if only 1 line read 
        printf("%s",str);
    }
    return  0;
}