#include <stdio.h>
int main()
{
    int r=5;
    int c=5;
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            arr[i][j]=10;
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}