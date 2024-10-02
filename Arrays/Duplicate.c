#include <stdio.h>
int main()
{
    int arr[5]= {1,2,3,4,4};
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if (arr[i]==arr[j] ) {
                printf("element is repeated which is %d and present at indices %d and %d",arr[i],i,j);
                break;
            }
        }
    }   
    return 0;
}