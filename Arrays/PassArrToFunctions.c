         // PASSING ARRAYS TO FUNCTIONS (pass by reference)

#include <stdio.h>
void fun (int arr[]){
    arr[4]=100;
    return;
}
int main()
{
    int arr[5]={1,2,3,4,5};
    fun(arr);
    printf("%d",arr[4]);
    
    return 0;
}