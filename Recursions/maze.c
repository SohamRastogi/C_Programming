// only allowed to move downwards or rightwards 
#include<stdio.h>
int maze (int cr,int cc,int er,int ec);
int main()
{
    int n,m;
    printf("enter number of rows : ");
    scanf("%d",&n);
    printf("enter number of columns : ");
    scanf("%d",&m);
    int ways = maze (1,1,n,m);
    printf("%d",ways);
    return 0 ;
}
int maze (int cr,int cc,int er,int ec){
    int rightways = 0;
    int downways = 0;
    if(cr==er && cc==ec) return 1;
    if(cr==er){
        rightways = rightways + maze(cr,cc+1,er,ec);
    }
    if(cc == ec){
        downways = downways + maze(cr+1,cc,er,ec);
    }
    if(cr<er && cc<ec){
       rightways = rightways + maze(cr,cc+1,er,ec);
       downways = downways + maze(cr+1,cc,er,ec);
    }
    return rightways+downways;
}
