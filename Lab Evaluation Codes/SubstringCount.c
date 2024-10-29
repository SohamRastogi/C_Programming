// DO DRY RUN ONCE AND DEBUG THE ERROR (IF ANY)

#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    scanf("%s",str);
    char substr[20];
    scanf("%s",substr);
    char* ptr;
    char* subptr;
    ptr = str;
    subptr = substr;
    int count = 0;
    char* original = substr;
    while(*ptr != '\0'){
        int flag = 1;
        while(*ptr != *subptr){
            ptr++;
        }
        for(int i=1;i<strlen(substr);i++){
            if(*ptr != *subptr){
                flag = 0;
                break;
            }
        }
        if(flag == 1) count++;
    }
    printf("the number of substrings is the string entered by the user are : %d",count);
    return 0 ;
}