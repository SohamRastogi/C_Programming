#include<stdio.h>
void fun(int , int , int* , int* );
int main()
{
    int add;
    int sub;
    fun(20,10,&add,&sub);
    printf("%d",add);
    printf(" %d",sub);
    return 0 ;
}
void fun(int x, int y, int* add_, int* sub_){
       *add_ = x+y;
       *sub_ = x-y;
       return ;
}