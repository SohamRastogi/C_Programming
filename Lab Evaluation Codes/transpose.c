// propable leetcode question that can be asked !!
// transpose of square matrix !!
#include<stdio.h>
int main()
{
    int arr[2][2]={1,2,3,4};
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<i;j++){
            int temp;
            temp = arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");

    }
    return 0;
}
