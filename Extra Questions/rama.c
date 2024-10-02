/* Find n no.s of ramanujan no.s , ramanujan number is that number that can be represented as a sum of cubes of two different no.s*/
#include <stdio.h>
int main()
{
    int n,c2=1,c=0;
    printf("enter a number : ");
    scanf("%d",&n);
    for(int z=1;c2<=n;z++)
    {
        for(int i=1;i<=z;i++)
        {
            for(int j=1;j<=z;j++)
            {
                if( i*i*i + j*j*j == z)
                {
                    c++;
                }
            }
        }
        if(c==4)
        {
            printf("%d\n",z);
            c2++;
        }
        c=0;
    }
    return 0;
}