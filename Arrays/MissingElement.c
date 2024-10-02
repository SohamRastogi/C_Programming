#include <stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int x =4;
    for(int i=0;i<5;i++){
        if(arr[i]==x) printf("number is present in the array");
        break;
    }

    
    return 0;
}