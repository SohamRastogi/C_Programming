#include <stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int smax = arr[0];
    int max =arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]>max) max = arr[i];
    }

    for(int j=0;j<5;j++){
        if(arr[j] != max && arr[j]>smax) smax = arr[j];

    }
    printf("%d",smax);

    
    return 0;
}