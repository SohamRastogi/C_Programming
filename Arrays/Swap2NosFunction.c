#include <stdio.h>
void swap (int arr[]){
    int temp;
    temp = arr[0];
    arr[0]=arr[1];
    arr[1]=temp;
    return;
}
int main()
{
    int arr[2]={2,9};
    swap (arr);
    printf("%d %d",arr[0],arr[1]);

    
    return 0;
}