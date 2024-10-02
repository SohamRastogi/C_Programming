// check code !!
#include<stdio.h>
int main()
{
    int a ;
    printf("Enter a number : ");
    scanf("%d",&a);
    char ch;
    // printf("enter a valid operator : ");
    scanf("%c",&ch);
    int b ;
    printf("Enter a number : ");
    scanf("%d",&b);
    // char ch;
    // printf("enter a valid operator : ");
    // scanf("%c",&ch);
    switch(ch){
        case '+':
        printf("%d",a+b);
        break;
        case '-':
        printf("%d",a-b);
        break;
        case '*':
        printf("%d",a*b);
        break;
        case '/':
        printf("%d",a/b);
        break;
        default : 
        printf("invalid operator");
    }
    return 0;
}