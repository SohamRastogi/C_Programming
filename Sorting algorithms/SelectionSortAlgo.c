#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[5]={7,1,2,60,56};
    int n=5;
    printf("original array : \n");
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    for(int i=0;i<n-1;i++){
        int min =INT_MAX;      // compulosry , if min = arr[0] wrong ans !
        int minidx=-1;
        for(int j=i;j<n;j++){
            if(min>arr[j]){
                min = arr[j];
                minidx = j;
            }   
        }
        int temp;                   
        temp = arr[i];
        arr[i]=arr[minidx];
        arr[minidx]=temp;
        /*    int temp;
              temp=arr[minidx];
              arr[minidx]=arr[i];
              arr[i]=temp;  
              // same thing !!!!     */
    }
    printf("\n");
    printf("sorted array : \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
