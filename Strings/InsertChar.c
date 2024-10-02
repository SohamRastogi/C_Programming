 /* college => colllege i.e. index 2 insertion 'l' !! */
#include <stdio.h>
#include <string.h>
int main()
{
    char str[]="college";
    printf("%s\n",str);
    for(int i=6;i>=2;i--){
        str[i+1]=str[i];
    }
    str[2]='l';
    printf("%s",str);
    return 0;
}