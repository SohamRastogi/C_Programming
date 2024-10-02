#include <stdio.h>
#include <string.h>
int main()
{
    char str[]="soham rastogi";
    char arr[]="soham rastogi";
    arr[0]='m';
    printf("%s",str);
    return 0;
}
/* in order to create a deep copy use count variable to count the characters in the arr1[]. then initialize 
   arr2[count] and using for loops enter the contents of arr[1] in arr[2]. so we get a deep copy of arr1[] !!*/