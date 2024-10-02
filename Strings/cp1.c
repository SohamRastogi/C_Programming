#include <stdio.h>
int main()
{
    char str[] = "College Wallah";
    // char* ptr = str;                    //ptr points to str !!!!
    char* ptr = &str[0];
    printf("%p\n",ptr);
    printf("%p",str);
                               
    return 0;
}
