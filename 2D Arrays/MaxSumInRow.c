#include <stdio.h>
int main()
{
    int arr[2][2]={1,2,3,4};
    int summax=0;
    for(int i=0;i<2;i++){
        int sum =0;
        for(int j=0;j<2;j++){
            sum = sum + arr[i][j];
        }
        if(summax<sum) summax = sum;
    }
    printf("%d",summax);
    return 0;
}