// boundary sum !!

#include<stdio.h>
int main()
{
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,1,2,3};
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    int sumrow1 = 0;
    
    for(int j=0;j<4;j++){
       sumrow1 = sumrow1+arr[0][j];
    }
    
    int sumrow2 = 0;
    for(int b=0;b<4;b++){
        sumrow2 = sumrow2 + arr[2][b];
    }
    int sumcolumn1 =0;
    sumcolumn1 = 5;
    int sumcolumn2 = 8;
    printf("boundary sum = %d",sumrow1+sumrow2+sumcolumn1+sumcolumn2);
    

    return 0;
}