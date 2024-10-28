#include<stdio.h>
int main()
{
    FILE* ptr = fopen("textFile.txt","r");
    char str[100];
    while(fgets(str,100,ptr)!=NULL){   // with while full text read
        printf("%s",str);
    }
    /* while(fget(str,10,ptr)!=NULL){
        printf("%s,str);                => only 10 characters printf
        }                 */
    return 0 ;
}