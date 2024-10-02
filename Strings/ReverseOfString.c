#include <stdio.h>
#include <string.h>
int main()
{
    char str[40];
    puts("enter a string : ");
    scanf("%[^\n]s",str);
    puts(str);
    int i=0;
    int count=0;
    while(str[i] != '\0'){
          count++;
          i++;
    }
    for(int i=0,j=count-1;i<j;i++,j--){
        char temp;
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    puts(str);

    return 0;
}
