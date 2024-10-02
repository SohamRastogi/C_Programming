#include <stdio.h>
int main()
{
    float p,r,t;
    printf("enter principle amount : ");
    scanf("%f",&p);
    printf("enter rate of interest : ");
    scanf("%f",&r);
    printf("enter time : ");
    scanf("%f",&t);
    float interest = p*r*t/100;
    printf("the interest (simple) is : %f",interest);
    return 0;

}