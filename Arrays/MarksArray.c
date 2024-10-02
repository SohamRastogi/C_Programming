#include <stdio.h>
int main()
{
    int arr[5] = {34,35,36,37,38};
    for (int i=0;i<4;i++){
        if(arr[i]<35) printf("%d",arr[i]);
    }
    return 0;
}