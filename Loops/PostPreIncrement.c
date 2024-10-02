#include <stdio.h>
int main()
{
    int x = 4;
    int y,z;
    y = --x;      //first minus then use. so x = 3 & y = 3....
    z = x--;      //first use then minus. so z = 3 & x = 2....
    printf("%d %d %d ",x,y,z);


    return 0;
}
// THIS IS CORRECT CODE !!!!!!!!!!!