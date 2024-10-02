#include <stdio.h>
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int x=12;
    int count =0;
    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){        //j=i+1 because one element use once only in a pair
            if(arr[i]+arr[j]==12) count++;   // eg : 6,6 not allowed !!
        }
    }
    printf("%d",count);

    
    return 0;
}