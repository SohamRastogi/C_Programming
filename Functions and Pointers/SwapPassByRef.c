#include <stdio.h>
void swap(int* x,int* y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    return ;

}
int main()
{
    int a;
    int b;
    printf("number 1 : ");
    scanf("%d",&a);
    printf("number 2 : ");
    scanf("%d",&b);
    swap(&a,&b);
    printf("%d",a);
    printf("\n%d",b);

    return 0;
}